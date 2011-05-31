#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"
#include "translate.h"

extern progEnv *pEnv;

int returnCounter = 0;
/* The counter that will mark the temporary variables. */
int tempCounter = 0;

/* Now the counters for the instructions. */
int ifCounter = 0;
int forCounter = 0;
int doCounter = 0;
int whileCounter = 0;
int switchCounter = 0;

/* The file where we will be writing our compiler output. */
FILE* dest;

void translateProgramFile(is_ProgramFile* pF)
{
	/* We are assuming that the class name has no more than 255 characters.
	 * We will be adding to the final the extension '.c' 
	 */
	char fileName[258];
	int len;
	sprintf(fileName, "%s", pF->classHeader->id);
	len = strlen(fileName);
	fileName [len] = '.';
	fileName [len + 1] = 'c';
	fileName [len + 2] = '\0';
	dest = fopen(fileName, "w");
	
	/* Now, we have to call some functions to start writing the final code. */
	translateHeader();
	translateGlobalVariables();
	/* We start by translating the method main and then only the other methods.
	 * We have to make a special step for the main method because we are not
	 * assuring that the user places the method at the top of all others.
	 */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
	{
		/* We have found the main method, we can stop afterwards. */
		if (aux->fieldDeclaration->disc_d == d_methodDeclaration && !strcmp("main", aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration->methodDeclarator->id))
		{
			translateMain(aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration);
			break;
		}
	}
	
	/* And finally, all the other methods. */
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
	{
		/* We have found the main method, we can stop afterwards. */
		if (aux->fieldDeclaration->disc_d == d_methodDeclaration && strcmp("main", aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration->methodDeclarator->id))
		{
			translateMethodDeclaration(aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration);
			break;
		}
	}
	
	/* Concludes with the footer. */
	translateFooter();
	
	
	/* Closes the output file. */
	fclose(dest);
	
	return;
		
}

void translateHeader()
{
	/* This header writes in the output file all C headers that our
	 * program will need, as well as the start of the main.
	 */
	 
	fprintf(dest, "#include \"frame.h\"\n");
	fprintf(dest, "#include <stdlib.h>\n");
	fprintf(dest, "#include <stdio.h>\n\n");
	fprintf(dest, "#include <string.h>\n\n");
	fprintf(dest, "int main()\n{\n");
	fprintf(dest, "int _ra;\n");
	fprintf(dest, "frame* fp = NULL;\n");
	fprintf(dest, "frame* sp = NULL;\n");
	
	return;
}

void translateFooter()
{
	/* Finishes the output file. */
	translateRedirector();
	fprintf(dest, "\n}\n\n");
	
	return;
}

/* Function to redirect the code's flux according to the returning addresses (necessary for C). */
void translateRedirector()
{
	int i;
	fprintf(dest, "\n/*Redirector*/\n");
	fprintf(dest, "goto exit;\n");
	fprintf(dest, "redirector:\n");
	
	/* For each returning address, its associated label. */
	for(i = 0; i < returnCounter; i++)
		fprintf(dest, "if( _ra == %d ) goto return%d;\n", i, i);

	fprintf(dest, "exit:\n;\n");
}

/* Translates all the global variables. */
void translateGlobalVariables()
{
		
	tableElement* gTable = pEnv->globalTable->locals;

	/* Prints, one by one, all the global variables. */
	for(; gTable; gTable = gTable->next)
		if (!gTable->isMethod)
			translateGlobalVariablesDeclarator(gTable, true);

}

void translateMain(is_MethodDeclaration* mainDecl)
{
	/* We don't have to check if whether the point is NULL or not, because
	 * at this point, from the semantics analysis, we are certain that 
	 * there's a main method with the correct parameters.
	 */
	
	environmentList* eL = searchEnvironment("main"); 
	
	fprintf(dest, "\n/*Main Block */\n");
	fprintf(dest, "sp = (frame*)malloc(sizeof(frame));\n");

	/* Now, goes for the rest of the main... */
	fprintf(dest, "/*Main's body.*/\n");
	translateBlock(mainDecl->block, eL);
	 
	return;
}


void translateMethodDeclaration(is_MethodDeclaration* mD)
{
	/* First, look for the environment of the method. */
	environmentList* eL = searchEnvironment(mD->methodDeclarator->id);
	
	/* Prologue. */
	fprintf(dest, "\n/*METHOD: %s */\n", mD->methodDeclarator->id); 
	fprintf(dest, "/*Prologue*/\n");
	/* We have to make sure that the method isn't executed unless we call it. */
	fprintf(dest, "goto %sskip;\n", mD->methodDeclarator->id);
	/* Method's label. */
	fprintf(dest, "%s:\n",mD->methodDeclarator->id);
	/* Saves the address of the previous frame (sp) on the frame pointer (fp). */
	fprintf(dest, "fp = sp;\n");
	/* Creates the new frame, now identified by the stack pointer (sp). */
	fprintf(dest, "sp = (frame*)malloc(sizeof(frame));\n");
	/* Saves the address to the previous frame, on the frame itself. */
	fprintf(dest, "sp->parent = fp;\n");
	/* Saves the returning address (conventioned to be register _ra) in the frame. */
	fprintf(dest, "sp->return_address = _ra;\n");
	
	/* Method's body. */
	fprintf(dest, "\n/*Method's body.*/\n");
	translateBlock(mD->block, eL);	

	/* Epilogue. */
	fprintf(dest, "\n/*Epilogue*/\n");
	/* Restores the returning value, to be used at the flux redirection. */
	fprintf(dest, "_ra = sp->return_address;\n");
	/* Pop operation from the frame stack. */
	fprintf(dest, "sp = sp->parent;\n");
	/* FP register update. */
	fprintf(dest, "fp = sp->parent;\n");
	/* Goes back to the point where we were before calling this method. */
	fprintf(dest, "goto redirector;\n");
	/* Marks the end of the method. */
	fprintf(dest, "%sskip:\n", mD->methodDeclarator->id);
	
	return; 
	
}

void translateGlobalVariablesDeclarator(tableElement* element, bool isGlobal)
{
	/* This is used to distinguish local from global variables. */
	char varScope[2];
	int offset = element->offset;
	
	if (isGlobal)
		varScope[0] = 'g';
	else
		varScope[0] = 'l';
	varScope[1] = '\0';
		
	/* Declaration of variables according to their type. */
	switch(element->type)
	{
		case s_BOOLEAN:	fprintf(dest, "int %s%d;\n", varScope, offset); break;
		case s_CHAR:	fprintf(dest, "char %s%d;\n", varScope, offset); break;
		case s_SHORT:	fprintf(dest, "short %s%d;\n", varScope, offset); break;
		case s_INT:		fprintf(dest, "int %s%d;\n", varScope, offset); break;
		case s_LONG:	fprintf(dest, "long %s%d;\n", varScope, offset); break;
		case s_FLOAT:	fprintf(dest, "float %s%d;\n", varScope, offset); break;
		case s_DOUBLE:	fprintf(dest, "double %s%d;\n", varScope, offset); break;
		case s_VOID:	fprintf(dest, "void %s%d;\n", varScope, offset); break;
		
		//TODO: There are still Strings and string arrays!
		default:break;
	}

	return;
}

void translateBlock(is_Block* block, environmentList *environment)
{
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		translateLocalVariableDeclarationsOrStatements(aux->lvdos, environment);

}

void translateLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos, environmentList *environment)
{
	switch(lvdos->disc_d)
	{
		case (d_LocalVariableDeclarationStatement):
			translateLocalVariableDeclarationStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds, environment);
			break;
		case (d_Statement):
			translateStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_statement, environment);
			break;
	}
}

void translateLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, environmentList *environment)
{	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = lvds->variablesDeclarator_list; aux != NULL; aux = aux->next)
		translateVariablesDeclarator( aux->variablesDeclarator, lvds->typeSpecifier, environment);

	return;
}

void translateVariablesDeclarator(is_VariablesDeclarator* vD, is_TypeSpecifier *tS, environmentList *environment)
{
	int offset;
	char typeInString[15];
	/* Looks for the tableElement corresponding to this variable. */
	tableElement* t = searchSymbolLocal(vD->id, environment);
	
	offset = t->offset;
	
	/* First, print the type of the variable. */
	switch(tS->typeName->type)
	{
		case(is_BOOLEAN): fprintf(dest, "sp->locals[%d] = (int*) malloc(sizeof(int));\n", offset); strcpy(typeInString, "(int*)"); break;
		case(is_CHAR): fprintf(dest, "sp->locals[%d] = (char*) malloc(sizeof(char));\n", offset); strcpy(typeInString, "(char*)"); break;
		case(is_BYTE): fprintf(dest, "sp->locals[%d] = (byte*) malloc(sizeof(byte));\n", offset); strcpy(typeInString, "(byte*)"); break;
		case(is_SHORT): fprintf(dest, "sp->locals[%d] = (short*) malloc(sizeof(short));\n", offset); strcpy(typeInString, "(short*)"); break;
		case(is_INT): fprintf(dest, "sp->locals[%d] = (int*) malloc(sizeof(int));\n", offset); strcpy(typeInString, "(int*)"); break;
		case(is_LONG): fprintf(dest, "sp->locals[%d] = (long*) malloc(sizeof(long));\n", offset); strcpy(typeInString, "(long*)"); break;
		case(is_FLOAT): fprintf(dest, "sp->locals[%d] = (float*) malloc(sizeof(float));\n", offset); strcpy(typeInString, "(float*)"); break;
		case(is_DOUBLE): fprintf(dest, "sp->locals[%d] = (double*) malloc(sizeof(double));\n", offset); strcpy(typeInString, "(double*)"); break;
		//TODO: Confirm this.
		case(is_VOID): break;
		//TODO: We are limiting strings to 255 characters.
		case(is_STRING): fprintf(dest, "sp->locals[%d] = (char*) malloc(sizeof(char)*256);\n", offset); strcpy(typeInString, "(char*)"); break;
		//TODO: Confirm this.
		case(is_STRING_ARRAY): break;
	}
	
	/* If it is initialized, we have to take action. */
	if (vD->expression != NULL)
	{
		fprintf(dest, "%s sp->locals[%d] = ", typeInString, offset);
		translateExpression(vD->expression, environment);
		fprintf(dest, ";\n");
	}
		
}

void translateStatement(is_Statement* s, environmentList *environment)
{
	/* Translates a given statement. */
	switch(s->disc_d)
	{
		case (d_LabeledStatement):
			translateLabeledStatement(s->data_Statement.labeledStatement, environment);
			break;
		case (d_StatementExpression):
			translateExpression(s->data_Statement.expression, environment);
			break;
		case (d_SelectionStatement):
			translateSelectionStatement(s->data_Statement.selectionStatement, environment);
			break;
		case (d_IterationStatement):
			translateIterationStatement(s->data_Statement.iterationStatement, environment);
			break;
		case (d_JumpStatement):
			translateJumpStatement(s->data_Statement.jumpStatement, environment);
			break;
		case (d_StatementBlock):
			translateBlock(s->data_Statement.block, environment);
			break;
	}

	return;
}

int translateExpression(is_Expression* exp, environmentList *environment)
{	
	int tOne;
	
	/* Translate a given expression. */
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			return translateConditionalExpression(exp->data_Expression.cExpression, environment);
		case (d_AssignmentExp):
			return translateAssignmentExpression(exp->data_Expression.aExpression, environment);
		/* It's an expression surrounded by brackets, so we ought to add them. */
		case (d_Exp):
			fprintf(dest, "(");
			tOne = translateExpression(exp->data_Expression.expression, environment);
			fprintf(dest, ") ");
			return tOne;
	}
	
	/* Should never get here. */
	return -1;
	
}

int translateConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment)
{
	/* Variables to save the numbers of the temporary variables coming
	 * from each branch.
	 */
	int tOne, tTwo;
	 
	switch(cExp->type)
	{
		case (is_UNARY):
			translateRelationalExpression(cExp->rExpression, environment);
			break;
		case (is_UNARY_NOT):
			fprintf(dest, "! (");
			translateRelationalExpression(cExp->rExpression, environment);
			fprintf(dest, ")");
			break;
		case (is_TRINARY):
			//TODO: We have to translate this into an if!
			/*showRelationalExpression(cExp->rExpression, false, false);
			printf(" ? ");
			showExpression(cExp->firstExp, false, false);
			printf(" : ");
			showExpression(cExp->secondExp, nextLine, isTabs);*/
			break;
		case (is_OP_AND):
			tOne = translateRelationalExpression(cExp->rExpression, environment);
			tTwo = translateConditionalExpression(cExp->next, environment);
			fprintf(dest, "int temp%d = temp%d && temp%d;\n", tempCounter++, tOne, tTwo);
			break;
		case (is_OP_OR):
			tOne = translateRelationalExpression(cExp->rExpression, environment);
			tTwo = translateConditionalExpression(cExp->next, environment);
			fprintf(dest, "int temp%d = temp%d || temp%d;\n", tempCounter++, tOne, tTwo);
			break;
	}
	
	return tempCounter - 1;
}

int translateAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment)
{
	int offset, tOne;
	/* We are sure that we will find there an element. */
	tableElement *search = searchSymbolLocal(aExp->id, environment);
	
	offset = search->offset;
	
	/* First, we have to store the outcome of the the expression
	 * in a temporary variable. 
	 */	
	tOne = translateExpression(aExp->expression, environment);
	
	/* Then, print the type of the variable and save in the locals. */
	switch(search->type)
	{
		case (s_BOOLEAN): fprintf(dest, "(*(int*) sp->locals[%d] )", offset); break;
		case (s_CHAR): fprintf(dest, "(*(char*) sp->locals[%d] )", offset); break;
		case (s_BYTE): fprintf(dest, "(*(byte*) sp->locals[%d] )", offset); break;
		case (s_SHORT): fprintf(dest, "(*(short*) sp->locals[%d] )", offset); break;
		case (s_INT): fprintf(dest, "(*(int*) sp->locals[%d] )", offset); break;
		case (s_LONG): fprintf(dest, "(*(long*) sp->locals[%d] )", offset); break;
		case (s_FLOAT): fprintf(dest, "(*(float*) sp->locals[%d] )", offset); break;
		case (s_DOUBLE): fprintf(dest, "(*(double*) sp->locals[%d] )", offset); break;
		//TODO: Confirm this.
		case (s_VOID): break;
		//TODO: We are limiting strings to 255 characters.
		case (s_STRING): fprintf(dest, "strcpy((char*) sp->locals[%d], ", offset); break;
		//TODO: Confirm this.
		case (s_STRING_ARRAY): break;
		/* We shouldn't get here. */
		case (s_METHOD): break;
	}
	
	/* Now, we have to translate the assignment expression. */
	/* If it's not a string, we simply have to print the expression. */
	if (search->type != s_STRING && search->type != s_STRING_ARRAY)
	{
		char tempChar = '%';
		switch(aExp->assOp)
		{
			case (is_ASSIGN):
				fprintf(dest, " = ");
				break;
			case (is_ASS_MUL):
				fprintf(dest, " *= ");
				break;
			case (is_ASS_DIV):
				fprintf(dest, " /= ");
				break;
			case (is_ASS_ADD):
				fprintf(dest, " += ");
				break;
			case (is_ASS_SUB):
				fprintf(dest, " -= ");
				break;
			case (is_ASS_XOR):
				fprintf(dest, " ^= ");
				break;
			case (is_ASS_MOD):
				fprintf(dest, " %c= ", tempChar);
				break;
			case (is_ASS_SHL):
				fprintf(dest, " <<= ");
				break;
			case (is_ASS_SHR):
				fprintf(dest, " >>= ");
				break;
		}
		fprintf(dest, "temp%d", tOne);
	}
	
	/* If it's a string, we are using strcpy, so we need to properly close
	 * the parenthesis.
	 */
	else if (search->type != s_STRING)
	{
		fprintf(dest, "temp%d", tOne);
		translateExpression(aExp->expression, environment);
		fprintf(dest, ")\n");
	}
	
	fprintf(dest, ";\n");
	
	/* This value shouldn't be used anywhere. */
	return -1;
	
}

void translateLabeledStatement(is_LabeledStatement* lS, environmentList *environment)
{
	
	
}

void translateSelectionStatement(is_SelectionStatement* sS, environmentList *environment)
{
	environmentList *newEnv = createNewEnvironment(environment);
	
	switch(sS->disc_d)
	{
		case (is_IF):
			checkExpression(sS->exp, newEnv);
			checkStatement(sS->stat, newEnv);
			break;
		case (is_IFELSE):
			checkExpression(sS->exp, newEnv);
			checkStatement(sS->stat, newEnv);
			checkStatement(sS->statSecond, newEnv);
			break;
		case (is_SWITCH):
			checkExpression(sS->exp, newEnv);
			//TODO Block here
			checkBlock(sS->block, newEnv);
			break;
	}
	
}

void translateIterationStatement(is_IterationStatement* iS, environmentList *environment)
{
	
	
	
}

void translateForInit(is_ForInit* fI, environmentList *environment)
{
	

	
}

void translateJumpStatement(is_JumpStatement* jS, environmentList *environment)
{
	
	
}

int translateRelationalExpression(is_RelationalExpression* rExp, environmentList *environment)
{
	/* Variables to save the numbers of the temporary variables coming
	 * from each branch.
	 */
	int tOne, tTwo;
	/* First, find the outcome of the first arithmetic expression. */
	tOne = translateArithmeticExpression(rExp->aExpression, environment);
		
	/* We have another expression, meaning that we also have an operator
	 * in between.
	 */	
	if (rExp->next != NULL)
	{
		tTwo = translateRelationalExpression(rExp->next, environment);
		fprintf(dest, "int temp%d = temp%d", tempCounter++, tOne);
		
		/* Prints the correct operator. */
		switch(rExp->op)
		{
			case (is_OP_GREATER):
				fprintf(dest, " > ");
				break;
			case (is_OP_LESS):
				fprintf(dest, " < ");
				break;
			case (is_OP_LESS_EQUAL):
				fprintf(dest, " <= ");
				break;
			case (is_OP_GREATER_EQUAL):
				fprintf(dest, " >= ");
				break;
			case (is_OP_EQUAL):
				fprintf(dest, " == ");
				break;
			case (is_OP_DIFFERENT):
				fprintf(dest, " != ");
				break;
			case (is_OP_SAND):
				fprintf(dest, " & ");
				break;
			case (is_OP_SXOR):
				fprintf(dest, " ^ ");
				break;
			case (is_OP_SOR):
				fprintf(dest, " | ");
				break;
			case (is_RE_NONE):
				break;
		}
		
		fprintf(dest, "temp%d;\n", tTwo);
	}
	
	return tempCounter - 1;
}

int translateArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment)
{
	/* We have to use otherwise we will have troubles in the printf. */
	char tempChar = '%';
	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		/* Print the type of the temporary variable. */
		translateTypeSpecifier(aExp->primType, false);
		fprintf(dest, "temp%d = ", tempCounter++);
		translateCastExpression(aExp->cExpression, environment);
		fprintf(dest, ";\n");
		return tempCounter - 1;
	} 
	 
	/* Saves the values of the temporary expressions. */
	int tOne, tTwo; 
	 
	/* If there are more arithmetic expressions on the chain, we have to
	 * print them.
	 */
	if (aExp->firstAE != NULL)
		tOne = translateArithmeticExpression(aExp->firstAE, environment);
	
	/* Same as above. */
	if (aExp->secondAE != NULL)
		tTwo = translateArithmeticExpression(aExp->secondAE, environment);
		
	/* Now, create another temporary variable to save the joint of the
	 * two arithmetic expressions.
	 */
	translateTypeSpecifier(aExp->primType, false);
	fprintf(dest, "temp%d = temp%d", tempCounter++, tOne);
	
	/* Prints the correct operator. */
	switch(aExp->op)
	{
		case (is_PLUS):
			fprintf(dest, " + ");
			break;
		case (is_MINUS):
			fprintf(dest, " - ");
			break;
		case (is_SLASH):
			fprintf(dest, " / ");
			break;
		case (is_TIMES):
			fprintf(dest, " * ");
			break;
		case (is_MODULO):
			fprintf(dest, " %c ", tempChar);
			break;
		case (is_OP_SHL):
			fprintf(dest, " << ");
			break;
		case (is_OP_SHR):
			fprintf(dest, " >> ");
			break;
		case (is_PARENTHESIS):
			fprintf(dest, ";\n");
			break;
		case (is_AE_NONE):
			fprintf(dest, ";\n");
			break;
			
	}
	
	/* Make sure we are not printing garbage. */
	if (aExp->secondAE != NULL)
		fprintf(dest, "temp%d;\n", tTwo);
	
	return tempCounter - 1;
}

void translateCastExpression(is_CastExpression* cExp, environmentList *environment)
{
	/* Prints the cast type if applicable. */
	if (cExp->castType != NULL)
	{
		printf(" ( ");
		translateTypeSpecifier(cExp->castType->typeName->type, true);
		printf(") ");
	}
	
	switch(cExp->disc_d)
	{
		case (d_UnaryExpression):
			translateUnaryExpression(cExp->data_CastExpression.unaryExpression, environment);
			break;
		case (d_AssignmentExpression):
			translateAssignmentExpression(cExp->data_CastExpression.assignmentExpression, environment);
			break;
		case (d_ConditionalExpression):
			translateConditionalExpression(cExp->data_CastExpression.conditionalExpression, environment);
			break;
	}
}

void translateUnaryExpression(is_UnaryExpression* uE, environmentList *environment)
{	
	switch(uE->op)
	{
		case (is_OP_INC_AFTER):
			translateBasicElement(uE->element, environment);
			fprintf(dest, "++");
			break;
		case (is_OP_DCR_AFTER):
			translateBasicElement(uE->element, environment);
			fprintf(dest, "--");
			break;
		case (is_OP_INC_BEFORE):
			fprintf(dest, "++");
			translateBasicElement(uE->element, environment);
			break;
		case (is_OP_DCR_BEFORE):
			fprintf(dest, "--");
			translateBasicElement(uE->element, environment);
			break;
		case (is_OP_DIFFERENT_UNARY):
			fprintf(dest, "!");
			translateBasicElement(uE->element, environment);
			break;
		case (is_NONE):
			translateBasicElement(uE->element, environment);
			break;
	}
	
	return;
}


void translateBasicElement(is_BasicElement* bE, environmentList *environment)
{
	tableElement *search;
	int offset;
			
	switch(bE->disc_d)
	{
		case (is_ID):
			/* If it is an ID, we have to look for the offset.
			 * We know for sure that we will find the element.
			 */
			search = searchSymbolLocal(bE->data_BasicElement.name, environment);
			
			offset = search->offset;
			
			switch (search->type)
			{
				/* Now, we have to print the right type. */
				case (s_BOOLEAN): fprintf(dest, "(*(int*) "); break;
				case (s_CHAR): fprintf(dest, "(*(char*) "); break;
				case (s_BYTE): fprintf(dest, "(*(byte*) "); break;
				case (s_SHORT): fprintf(dest, "(*(short*) "); break;
				case (s_INT): fprintf(dest, "(*(int*) "); break;
				case (s_LONG): fprintf(dest, "(*(long*) "); break;
				case (s_FLOAT): fprintf(dest, "(*(float*) "); break;
				case (s_DOUBLE): fprintf(dest, "(*(double*) "); break;
				//TODO: Confirm this.
				case (s_VOID): break;
				//TODO: Confirm this.
				case (s_STRING): fprintf(dest, "(*(char*) "); break;
				//TODO: Confirm this.
				case (s_STRING_ARRAY): break;
				/* We shouldn't get here. */
				case (s_METHOD): break;
			}

			/* Print the variable name, meaning its offset in locals of the sp. */
			fprintf(dest, " sp->locals[%d])", offset);
			
			break;
			
		case (is_LITERAL):
			fprintf(dest, "\"%s\"", bE->data_BasicElement.name);
			break;
		case (is_TRUE):
			fprintf(dest, "1");
			break;
		case (is_FALSE):
			fprintf(dest, "0");
			break;
		case (is_INTEGER):
			fprintf(dest, "%d", bE->data_BasicElement.i);
			break;
		case (is_FLOATPOINT):
			fprintf(dest, "%lf", bE->data_BasicElement.d);
			break;
		case (is_METHOD_CALL):
			translateMethodCall(bE->data_BasicElement.methodCall, environment);
			break;
		case (is_PRINTLN):
			translateSystemOutPrintln(bE->data_BasicElement.print, environment);
			break;
	}
	
	return;
}

void translateMethodCall(is_MethodCall* mC, environmentList *environment)
{
	/* Saves the retuning address. */
	fprintf(dest, "_ra = %d;\n",returnCounter);
	/* Jumps to the called method. */
	fprintf(dest, "goto %s;\n", mC->id);
	
	//TODO: Save and update the parameters vector. 
	
	/* Returning label, so we can keep on with the flux of execution after
	 * the method returns.
	 */
	fprintf(dest, "return%d:\n", returnCounter);
	returnCounter++;	
}

void translateSystemOutPrintln(is_SystemOutPrintln* p, environmentList *environment)
{
	/* Initiates the print. */
	fprintf(dest, "printf(%s", p->literal);
	/* Now, prints all the arguments. */
	//TODO: this xD
	/* Ends the print. */
	fprintf(dest, ");");
}

void translateTypeSpecifier(is_PrimitiveType type, bool isPointer)
{
	if (isPointer)
	{
		/* Show the type of the variable. */
		switch(type)
		{
			case (is_BOOLEAN): fprintf(dest, "int *"); break;
			case (is_CHAR): fprintf(dest, "char *"); break;
			case (is_BYTE): fprintf(dest, "byte *"); break;
			case (is_SHORT): fprintf(dest, "short *"); break;
			case (is_INT): fprintf(dest, "int *"); break;
			case (is_LONG): fprintf(dest, "long *"); break;
			case (is_FLOAT): fprintf(dest, "float *"); break;
			case (is_DOUBLE): fprintf(dest, "double *"); break;
			case (is_VOID): fprintf(dest, "void *"); break;
			case (is_STRING): fprintf(dest, "char **"); break;
			case (is_STRING_ARRAY): fprintf(dest, "char ***"); break;
		}
	}
	else
	{
		/* Show the type of the variable. */
		switch(type)
		{
			case (is_BOOLEAN): fprintf(dest, "int "); break;
			case (is_CHAR): fprintf(dest, "char "); break;
			case (is_BYTE): fprintf(dest, "byte "); break;
			case (is_SHORT): fprintf(dest, "short "); break;
			case (is_INT): fprintf(dest, "int "); break;
			case (is_LONG): fprintf(dest, "long "); break;
			case (is_FLOAT): fprintf(dest, "float "); break;
			case (is_DOUBLE): fprintf(dest, "double "); break;
			case (is_VOID): fprintf(dest, "void "); break;
			case (is_STRING): fprintf(dest, "char *"); break;
			case (is_STRING_ARRAY): fprintf(dest, "char **"); break;
		}

	}
	
	return;
}
