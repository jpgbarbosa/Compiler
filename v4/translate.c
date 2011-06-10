#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"
#include "translate.h"

/* WARNING: We assume that strings won't be larger than 1024 characters */

/* For when we are using a identifier, we need to know the
 * type of the identifier.
 */
char globalType[30];

extern progEnv *pEnv;
/* This variable is used to track the current active method. Its value
 * will be used when we execute a return, to jump directly to the method
 * epilogue.
 */
char currentMethod[256];
/* The same, but for cycles. currentCycle is very useful when we want
 * to link a jump statement (like return or a break) to a certain cycle.
 */
int currentCycle;

int returnCounter = 0;
/* The counter that will mark the temporary variables. */
int tempCounter = 0;

/* Now the counters for the instructions. */
int ifCounter = 0;
int cycleCounter = 0;
/* For the switch. */
int tSwitch = 0;
int switchCounter = 0;
int nextLabel = 0;

/* The file where we will be writing our compiler output. */
FILE* dest;

void translateProgramFile(is_ProgramFile* pF)
{
	/* We are assuming that the class name has no more than 255 characters.
	 * We will be adding to the final the extension '.c' 
	 */
	char fileName[258];
	sprintf(fileName, "%s.c", pF->classHeader->id);
	dest = fopen(fileName, "w");
	
	/* Now, we have to call some functions to start writing the final code. */
	translateHeader();
	/* We start by translating the method main and then only the other methods.
	 * We have to make a special step for the main method because we are not
	 * assuring that the user places the method at the top of all others.
	 */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
		/* We have found the main method, we can stop afterwards. */
		if (aux->fieldDeclaration->disc_d == d_methodDeclaration && !strcmp("main", aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration->methodDeclarator->id))
		{
			translateMain(aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration);
			break;
		}
	
	/* And finally, all the other methods. */
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
		/* Now translates all the other methods. */
		if (aux->fieldDeclaration->disc_d == d_methodDeclaration && strcmp("main", aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration->methodDeclarator->id))
			translateMethodDeclaration(aux->fieldDeclaration->data_FieldDeclaration.u_methodDeclaration);
	
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
	fprintf(dest, "int main(int argc, char *argv[])\n{\n");
	fprintf(dest, "int _ra;\n");
	fprintf(dest, "frame* fp = NULL;\n");
	fprintf(dest, "frame* sp = NULL;\n");
	
	/* We start at the main method. */
	strcpy(currentMethod, "main");
	
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

	/* In case we have a return at the main method, it will go directly
	 * here.
	 */
	fprintf(dest, "EPILOGUE_main: ;\n");
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

	/* The global variables. */
	translateGlobalVariables();
	
	/* Now, goes for the rest of the main... */
	fprintf(dest, "/*Main's body.*/\n");
	translateBlock(mainDecl->block, eL);
	 
	return;
}


void translateMethodDeclaration(is_MethodDeclaration* mD)
{
	/* First, look for the environment of the method. */
	environmentList* eL = searchEnvironment(mD->methodDeclarator->id);
	
	/* Saves the name of the method where we are at the moment. */
	strcpy(currentMethod, mD->methodDeclarator->id);
	
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
	
	/* Now, we have to save into the locals vector the parameters passed by
	 * the calling method.
	 */
	translateParametersIntoLocals(mD);
	
	/* Method's body. */
	fprintf(dest, "\n/*Method's body.*/\n");
	translateBlock(mD->block, eL);	

	/* Epilogue. */
	fprintf(dest, "\n/*Epilogue*/\n");
	/* Creates a label to where the code will flow when a return is executed. Then,
	 * we recover the old information concerning the current method, because that
	 * variables holds the name of the method that has called this one in the first
	 * place.
	 */
	fprintf(dest, "EPILOGUE_%s: ;\n", currentMethod);
	
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

void translateParametersIntoLocals(is_MethodDeclaration* mD)
{
	int parCounter = 0;
	is_Parameters_list* aux;
	char typeInString[15];
	
	for(aux = mD->methodDeclarator->parametersList; aux != NULL; aux = aux->next)
	{
		/* First, print the type of the variable. */
		switch(aux->parameter->typeSpecifier->typeName->type)
		{
			case(is_BOOLEAN): 	strcpy(typeInString, "int "); break;
			case(is_CHAR): 		strcpy(typeInString, "char "); break;
			case(is_BYTE): 		strcpy(typeInString, "int "); break;
			case(is_SHORT): 	strcpy(typeInString, "int "); break;
			case(is_INT): 		strcpy(typeInString, "int "); break;
			case(is_LONG): 		strcpy(typeInString, "long "); break;
			case(is_FLOAT): 	strcpy(typeInString, "float "); break;
			case(is_DOUBLE): 	strcpy(typeInString, "double "); break;
			/* Goes for is_VOID, is_STRING and is_STRING_ARRAY. */
			default: break;
		}
		
		if (aux->parameter->typeSpecifier->typeName->type != is_STRING)
			fprintf(dest, "sp->locals[%d] = (%s*) malloc(sizeof(%s));\n"
					"(*((%s*) sp->locals[%d])) = (*((%s*) sp->parent->outgoing[%d]));\n", parCounter, typeInString, typeInString, typeInString, parCounter, typeInString, parCounter);
		else
			fprintf(dest, "sp->locals[%d] = (char*) malloc(sizeof(char)*1024);\n"
					"strcpy(((char *) sp->locals[%d]),((char *) sp->parent->outgoing[%d]));\n", parCounter, parCounter, parCounter);
		
		/* Increments the current parameter. */	
		parCounter++;
	}
}

void translateGlobalVariablesDeclarator(tableElement* element, bool isGlobal)
{
	int offset = element->offset, tOne;
	char typeInString[25];
		
	/* Declaration of variables according to their type. */
	switch(element->type)
	{
		case(s_BOOLEAN): 	strcpy(typeInString, "int "); break;
		case(s_CHAR): 		strcpy(typeInString, "char "); break;
		case(s_BYTE): 		strcpy(typeInString, "int "); break;
		case(s_SHORT): 		strcpy(typeInString, "short "); break;
		case(s_INT): 		strcpy(typeInString, "int "); break;
		case(s_LONG): 		strcpy(typeInString, "long "); break;
		case(s_FLOAT): 		strcpy(typeInString, "float "); break;
		case(s_DOUBLE): 	strcpy(typeInString, "double "); break;
		/* Goes for s_VOID, s_STRING and s_STRING_ARRAY. */
		default:break;
	}
	
	/* Different action between a string and all the other types. */
	if (element->type != s_STRING)
		fprintf(dest, "sp->locals[%d] = (%s*) malloc(sizeof(%s));\n", offset, typeInString, typeInString);
	else
		/* We are limiting strings to 1024 characters. */
		fprintf(dest, "sp->locals[%d] = (char*) malloc(sizeof(char)*1024);\n", offset);
		
	
	/* If it is initialized, we have to take action. */
	if (element->exp != NULL)
	{
		tOne = translateExpression(element->exp, pEnv->globalTable, false);
		/* We have to deal differently with strings and all the other types. */
		if (element->type != s_STRING)
			fprintf(dest, "(*((%s*) sp->locals[%d])) = temp%d;\n", typeInString, offset, tOne);
		else
			fprintf(dest, "strcpy(((char*) sp->locals[%d]), temp%d);\n", offset, tOne);
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
	int offset, tOne;
	char typeInString[15];
	/* Looks for the tableElement corresponding to this variable. */
	tableElement* t = searchSymbolLocal(vD->id, environment);

	/* Find the offset of this symbol. */
	offset = t->offset;
	
	/* First, print the type of the variable. */
	switch(tS->typeName->type)
	{
		case(is_BOOLEAN): 	strcpy(typeInString, "int "); break;
		case(is_CHAR): 		strcpy(typeInString, "char "); break;
		case(is_BYTE): 		strcpy(typeInString, "int "); break;
		case(is_SHORT): 	strcpy(typeInString, "short "); break;
		case(is_INT): 		strcpy(typeInString, "int "); break;
		case(is_LONG): 		strcpy(typeInString, "long "); break;
		case(is_FLOAT): 	strcpy(typeInString, "float "); break;
		case(is_DOUBLE): 	strcpy(typeInString, "double "); break;
		/* Goes for s_VOID, s_STRING and s_STRING_ARRAY. */
		default:break;
	}
	
	if (tS->typeName->type != is_STRING)
		fprintf(dest, "sp->locals[%d] = (%s*) malloc(sizeof(%s));\n", offset, typeInString, typeInString);
	else
		/* We are limiting strings to 1024 characters. */
		fprintf(dest, "sp->locals[%d] = (char*) malloc(sizeof(char)*1024);\n", offset);
	
	/* If it is initialized, we have to take action. */
	if (vD->expression != NULL)
	{
		tOne = translateExpression(vD->expression, environment, false);
		
		/* We have to deal differently with strings and all the other types. */
		if (tS->typeName->type != is_STRING)
			fprintf(dest, "(*((%s*) sp->locals[%d])) = temp%d;\n", typeInString, offset, tOne);
		else
			fprintf(dest, "strcpy(((char *) sp->locals[%d]), temp%d);\n", offset, tOne);
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
			translateExpression(s->data_Statement.expression, environment, false);
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

int translateExpression(is_Expression* exp, environmentList *environment, bool isArgument)
{	
	int tOne;
	
	/* Translate a given expression. */
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			return translateConditionalExpression(exp->data_Expression.cExpression, environment, isArgument);
		case (d_AssignmentExp):
			return translateAssignmentExpression(exp->data_Expression.aExpression, environment, isArgument);
		/* It's an expression surrounded by brackets, so we ought to add them. */
		case (d_Exp):
			fprintf(dest, "(");
			tOne = translateExpression(exp->data_Expression.expression, environment, isArgument);
			fprintf(dest, ") ");
			return tOne;
	}
	
	/* Should never get here. */
	return -1;
	
}

int translateConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment, bool isArgument)
{
	/* Variables to save the numbers of the temporary variables coming
	 * from each branch.
	 */
	int tOne, tTwo, tThree, tFour, tempIf;
	char mType[15];
	 
	switch(cExp->type)
	{
		case (is_UNARY):
			tFour = translateRelationalExpression(cExp->rExpression, environment, isArgument);
			break;
		case (is_UNARY_NOT):
			fprintf(dest, "! (");
			translateRelationalExpression(cExp->rExpression, environment, isArgument);
			fprintf(dest, ")");
			break;
		case (is_TRINARY):
			tOne = translateRelationalExpression(cExp->rExpression, environment, isArgument);
			
			/* Saves the current if counter. */
			tempIf = ifCounter++;
			/* The variable that will hold the outcome. */
			tFour = tempCounter++;
			
			/* Gets the returning type of this trinary operator. */
			switch(cExp->primType)
			{
				/* Now, we have to print the right type. */
				case (is_BOOLEAN): 	strcpy(mType, "int "); break;
				case (is_CHAR): 	strcpy(mType, "char "); break;
				case (is_BYTE): 	strcpy(mType, "int "); break;
				case (is_SHORT): 	strcpy(mType, "short "); break;
				case (is_INT): 		strcpy(mType, "int "); break;
				case (is_LONG): 	strcpy(mType, "long "); break;
				case (is_FLOAT): 	strcpy(mType, "float "); break;
				case (is_DOUBLE): 	strcpy(mType, "double "); break;
				/* Goes for is_VOID, is_STRING and is_STRING_ARRAY. */
				default: break;
			}
			
			if (cExp->primType != is_STRING)
				fprintf(dest, "%s temp%d;\n", mType, tFour);
			else
				fprintf(dest, "char temp%d[1024];\n", tFour);
			
			fprintf(dest, "if (!temp%d) goto ELSE%d;\n", tOne, tempIf);
			
			/* Save the number of the if counter. */
			tTwo = translateExpression(cExp->firstExp, environment, isArgument);
			
			/* Different actions upon string or any other type. */
			if (cExp->primType != is_STRING)
				fprintf(dest, "temp%d = temp%d;\n", tFour, tTwo);
			else
				fprintf(dest, "strcpy(temp%d, temp%d);\n", tFour, tTwo);
			
			fprintf(dest, "goto ENDIF%d;\n", tempIf);
			fprintf(dest, "ELSE%d: ;\n", tempIf);
			tThree = translateExpression(cExp->secondExp, environment, isArgument);
						/* Different actions upon string or any other type. */
			if (cExp->primType != is_STRING)
				fprintf(dest, "temp%d = temp%d;\n", tFour, tThree);
			else
				fprintf(dest, "strcpy(temp%d, temp%d);\n", tFour, tThree);
			
			fprintf(dest, "ENDIF%d: ;\n", tempIf);	
			
			/* Returns the appropriate temporary variable. */
			return tFour;
			
		case (is_OP_AND):
			tOne = translateRelationalExpression(cExp->rExpression, environment, isArgument);
			tTwo = translateConditionalExpression(cExp->next, environment, isArgument);
			/* We know for sure that the outcome will be a boolean, which
			 * is translated in C into an integer.
			 */
			fprintf(dest, "int temp%d = temp%d && temp%d;\n", tempCounter++, tOne, tTwo);
			break;
		case (is_OP_OR):
			tOne = translateRelationalExpression(cExp->rExpression, environment, isArgument);
			tTwo = translateConditionalExpression(cExp->next, environment, isArgument);
			/* We know for sure that the outcome will be a boolean, which
			 * is translated in C into an integer.
			 */
			fprintf(dest, "int temp%d = temp%d || temp%d;\n", tempCounter++, tOne, tTwo);
			break;
	}
	
	return tempCounter - 1;
}

int translateAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment, bool isArgument)
{
	int offset, tOne;
	/* We are sure that we will find there an element. */
	tableElement *search = searchSymbolLocal(aExp->id, environment);
	
	/* Looks for the offset of this symbol. */
	offset = search->offset;
	
	/* First, we have to store the outcome of the the expression
	 * in a temporary variable. 
	 */	
	tOne = translateExpression(aExp->expression, environment, isArgument);
	
	/* Then, print the type of the variable and save in the locals. */
	switch(search->type)
	{
		case (s_BOOLEAN): 	fprintf(dest, "(*(int*) sp->locals[%d] )", offset); break;
		case (s_CHAR): 		fprintf(dest, "(*(char*) sp->locals[%d] )", offset); break;
		case (s_BYTE): 		fprintf(dest, "(*(int*) sp->locals[%d] )", offset); break;
		case (s_SHORT): 	fprintf(dest, "(*(short*) sp->locals[%d] )", offset); break;
		case (s_INT): 		fprintf(dest, "(*(int*) sp->locals[%d] )", offset); break;
		case (s_LONG): 		fprintf(dest, "(*(long*) sp->locals[%d] )", offset); break;
		case (s_FLOAT): 	fprintf(dest, "(*(float*) sp->locals[%d] )", offset); break;
		case (s_DOUBLE): 	fprintf(dest, "(*(double*) sp->locals[%d] )", offset); break;
		/* Goes for s_VOID, s_STRING, s_STRING_ARRAY and s_METHOD. */
		default: break;
	}
	
	/* Now, we have to translate the assignment expression. */
	/* If it's not a string, we simply have to print the expression. */
	if (search->type != s_STRING)
	{
		switch(aExp->assOp)
		{
			case (is_ASSIGN): 	fprintf(dest, " = "); break;
			case (is_ASS_MUL):	fprintf(dest, " *= "); break;
			case (is_ASS_DIV):	fprintf(dest, " /= "); break;
			case (is_ASS_ADD):	fprintf(dest, " += "); break;
			case (is_ASS_SUB):	fprintf(dest, " -= "); break;
			case (is_ASS_XOR):	fprintf(dest, " ^= "); break;
			case (is_ASS_MOD):	fprintf(dest, " %%= "); break;
			case (is_ASS_SHL):	fprintf(dest, " <<= "); break;
			case (is_ASS_SHR):	fprintf(dest, " >>= "); break;
		}
		
		fprintf(dest, "temp%d;\n", tOne);
	}
	
	/* If it's a string, we are using strcpy, so we need to properly close
	 * the parenthesis.
	 */
	else if (search->type == s_STRING)
		fprintf(dest, "strcpy((char*) sp->locals[%d], temp%d);\n", offset, tOne);
	
	/* This value shouldn't be used anywhere. */
	return -1;
	
}

int translateLabeledStatement(is_LabeledStatement* lS, environmentList *environment)
{
	int tempIf, temp;

	switch(lS->disc_d)
	{
		case (d_ID):
			//TODO: do we have goto's? I cant find them so I didnt test it. if we wont have goto's this case is useless.
			fprintf(dest, "%s:\n", lS->data_LabeledStatement.id);			
			translateConditionalExpression(lS->data_LabeledStatement.exp,environment,false);
			break;

		case (d_CASE):
			fprintf(dest, "NEXTLABEL%d: ;\n", nextLabel++);
			tempIf = translateConditionalExpression(lS->data_LabeledStatement.exp,environment,false);
			temp = ifCounter++;
			fprintf(dest, "if (temp%d != temp%d) goto NEXTLABEL%d;\n", tSwitch, tempIf,nextLabel);
			translateLocalVariableDeclarationsOrStatements(lS->lvdos, environment);
			break;

		case (d_DEFAULT): 
			fprintf(dest, "NEXTLABEL%d: ;\n", nextLabel++);
			translateLocalVariableDeclarationsOrStatements(lS->lvdos, environment);
			break;
	}

	return 0;
}

int translateSelectionStatement(is_SelectionStatement* sS, environmentList *environment)
{
	/* Variables that save the counter so we make sure we are assigning
	 * the right values.
	 */
	int tOne, tempIf,tempSw, oldIt;
	
	switch(sS->disc_d)
	{
		case (is_IF):
			tOne = translateExpression(sS->exp, environment, false);
			fprintf(dest, "if (!temp%d) goto ELSE%d;\n", tOne, ifCounter);
			/* Save the number of the if counter. */
			tempIf = ifCounter++;
			/* There's a new environement, so we need to pass the new one. */
			translateStatement(sS->stat, sS->env);
			fprintf(dest, "ELSE%d: ;\n", tempIf);
			break;
		case (is_IFELSE):
			tOne = translateExpression(sS->exp, environment, false);
			fprintf(dest, "if (!temp%d) goto ELSE%d;\n", tOne, ifCounter);
			/* Save the number of the if counter. */
			tempIf = ifCounter++;
			/* There's a new environement, so we need to pass the new one. */
			translateStatement(sS->stat, sS->env);
			fprintf(dest, "goto ENDIF%d;\n", tempIf);
			fprintf(dest, "ELSE%d: ;\n", tempIf);
			translateStatement(sS->statSecond, sS->env);
			fprintf(dest, "ENDIF%d: ;\n", tempIf);			
			break;
		case (is_SWITCH):
			tSwitch = translateExpression(sS->exp, sS->env, false);
			tempSw = cycleCounter++;
			oldIt = currentCycle;
			currentCycle = tempSw;
			translateBlock(sS->block, sS->env);
			currentCycle = oldIt;

			fprintf(dest, "NEXTLABEL%d: ; ENDCYCLE%d: ;\n", nextLabel, tempSw);

			break;
	}
	
	return 0;
}

int translateIterationStatement(is_IterationStatement* iS, environmentList *environment)
{
	/* Variables that save the counter so we make sure we are assigning
	 * the right values.
	 */
	int tOne, tempIt, oldIt;
	
	is_Expressions_list* aux;
	
	/* NOTE: In the whiles and do whiles, the label INCRCYCLE isn't necessary
	 * at all for a correct function of the cycle.
	 * However, we need it because in the for cycle, when there's a continue,
	 * we need to execute the incremental expressions, like i++.
	 * To mantain compatibility and avoid having to check if we are inside
	 * a for or a while cycle, we preferred to print this label in all the
	 * cycles, making the continue translation more generic and easy going.
	 */
	
	switch(iS->disc_d)
	{
		case (is_WHILE):
			tempIt = cycleCounter++;
			fprintf(dest, "CYCLE%d: ;\n", tempIt);
			tOne = translateExpression(iS->exp, iS->env, false);
			fprintf(dest, "if (!temp%d) goto ENDCYCLE%d;\n", tOne, tempIt);
			oldIt = currentCycle;
			currentCycle = tempIt;
			translateStatement(iS->statement, iS->env);
			currentCycle = oldIt;
			fprintf(dest, "INCRCYCLE%d: ;\n", tempIt);
			fprintf(dest, "goto CYCLE%d;\n", tempIt);
			fprintf(dest, "ENDCYCLE%d: ;\n", tempIt);
			break;
		case (is_DO):
			tempIt = cycleCounter++;
			fprintf(dest, "CYCLE%d: ;\n", tempIt);
			oldIt = currentCycle;
			currentCycle = tempIt;
			translateStatement(iS->statement, iS->env);
			currentCycle = oldIt;
			tOne = translateExpression(iS->exp, iS->env, false);
			fprintf(dest, "if (!temp%d) goto ENDCYCLE%d;\n", tOne, tempIt);
			fprintf(dest, "INCRCYCLE%d: ;\n", tempIt);
			fprintf(dest, "goto CYCLE%d;\n", tempIt);
			fprintf(dest, "ENDCYCLE%d: ;\n", tempIt);
			break;
		case (is_FOR):
			/* We initiate everything out of the for cycle. Then, it's
			 * quite similar to a while.
			 */
			translateForInit(iS->forInit, iS->env);
			tempIt = cycleCounter++;
			fprintf(dest, "CYCLE%d: ;\n", tempIt);
			/* The conditional expressions that keep the cycle alive. */
			tOne = translateExpression(iS->exp, iS->env, false);
			fprintf(dest, "if (!temp%d) goto ENDCYCLE%d;\n", tOne, tempIt);
			/* Then, execute whatever code it has to execute. */
			oldIt = currentCycle;
			currentCycle = tempIt;
			translateStatement(iS->statement, iS->env);
			currentCycle = oldIt;
			
			fprintf(dest, "INCRCYCLE%d: ;\n", tempIt);
			/* The incrementation expressions at the end of the cycle. */
			for(aux = iS->forIncr; aux != NULL; aux = aux->next)
				translateExpression(aux->exp, iS->env, false);
				
			/* Another iteration on the cycle. */	
			fprintf(dest, "goto CYCLE%d;\n", tempIt);
			/* The end of the cycle. */	
			fprintf(dest, "ENDCYCLE%d: ;\n", tempIt);
			break;
	}
	
	return 0;
}

void translateForInit(is_ForInit* fI, environmentList *environment)
{
	
	if (fI != NULL)
	{
		/* It's a list of expressions. */
		if (fI->list != NULL)
		{
			/* And now the list of parameters. */
			is_Expressions_list* aux;
			
			for(aux = fI->list; aux != NULL; aux = aux->next)
				translateExpression(aux->exp, environment, false);
		}
		/* It's a declaration statement. */
		else
		{
			translateLocalVariableDeclarationStatement(fI->lvds, environment);
		}
	}
	
	return;
}

void translateJumpStatement(is_JumpStatement* jS, environmentList *environment)
{
	int tOne; 
	char typeInString[15];
	
	switch(jS->disc_d)
	{
		case (is_BREAK):
			fprintf(dest, "goto ENDCYCLE%d;\n", currentCycle);
			break;
		case (is_BREAK_ID):
			fprintf(dest, "goto ENDCYCLE%d;\n", currentCycle);
			break;
		case (is_CONTINUE_ID):
			//This is not a declaration
			//HERE
			break;
		case (is_CONTINUE):
			fprintf(dest, "goto INCRCYCLE%d;\n", currentCycle);
			break;
		case (is_RETURN_EXP):
			tOne = translateExpression(jS->data_JumpStatement.exp, jS->env, false);
			
			/* We will only save the return address if we aren't at the
			 * main method.
			 */
			if (strcmp(currentMethod, "main"))
			{		
				/* First, print the type of the variable. */
				switch(jS->data_JumpStatement.exp->primType)
				{
					case(is_BOOLEAN): strcpy(typeInString, "int"); break;
					case(is_CHAR): strcpy(typeInString, "char "); break;
					case(is_BYTE): strcpy(typeInString, "int "); break;
					case(is_SHORT): strcpy(typeInString, "short "); break;
					case(is_INT): strcpy(typeInString, "int "); break;
					case(is_LONG): strcpy(typeInString, "long "); break;
					case(is_FLOAT): strcpy(typeInString, "float "); break;
					case(is_DOUBLE): strcpy(typeInString, "double "); break;
					/* Goes for is_VOID, is_STRING and is_STRING_ARRAY. */
					default: break;
				}
				
				if (jS->data_JumpStatement.exp->primType != is_STRING)
					fprintf(dest, "sp->parent->returnValue = (%s *) malloc(sizeof(%s));\n"
								"(*((%s *) sp->parent->returnValue)) = temp%d;\n", typeInString, typeInString, typeInString, tOne);
				/* We are returning a string. */
				else
				{
					fprintf(dest, "sp->parent->returnValue = (char*) malloc(sizeof(char)*1024);\n");
					/* We are limiting strings to 1024 characters. */
					if (tOne >= 0)
						fprintf(dest, "strcpy(((char *) sp->parent->returnValue),  temp%d);\n", tOne);
					else
						fprintf(dest, "strcpy(((char *) sp->parent->returnValue),  ((char *) sp->locals[%d]));\n", -tOne - 1);
				}
			}
			
			/* Goes directly to the epilogue of current method. */
			fprintf(dest, "goto EPILOGUE_%s;\n", currentMethod);
			break;
		case (is_RETURN):
			/* Goes directly to the epilogue of current method. */
			fprintf(dest, "goto EPILOGUE_%s;\n", currentMethod);
			break;
		default:
			break;
	}
	
	return;
}

int translateRelationalExpression(is_RelationalExpression* rExp, environmentList *environment, bool isArgument)
{
	/* Variables to save the numbers of the temporary variables coming
	 * from each branch.
	 */
	int tOne, tTwo;
	/* First, find the outcome of the first arithmetic expression. */
	tOne = translateArithmeticExpression(rExp->aExpression, environment, isArgument);
		
	/* We have another expression, meaning that we also have an operator
	 * in between.
	 */	
	if (rExp->next != NULL)
	{
		tTwo = translateRelationalExpression(rExp->next, environment, isArgument);
		/* We are not using an ID. */
		if (tOne >= 0)
			fprintf(dest, "int temp%d = temp%d", tempCounter++, tOne);
		/* It's an ID, so we won't use temporary variables. */
		else
			fprintf(dest, "int temp%d = (%s sp->locals[%d])", tempCounter++, globalType, -tOne - 1);
			
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

int translateArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment, bool isArgument)
{
	/* We have to use otherwise we will have troubles in the printf. */
	char tempChar = '%';
	int outcome;
	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		if (!isArgument)
		{
			/* If the type of the expression isn't void, we have to
			 * attribute the value of the expression to some variable.
			 */
			if (aExp->primType != is_VOID)
			{
				/* Print the type of the temporary variable. */
				translateTypeSpecifier(aExp->primType, false);
				if (aExp->primType != is_STRING)
					fprintf(dest, "temp%d = ", tempCounter++);
				else
				{
					int tempC = tempCounter++;
					fprintf(dest, "temp%d[1024]; strcpy(temp%d", tempC, tempC);
				}
				outcome = translateCastExpression(aExp->cExpression, environment, isArgument);
				fprintf(dest, ";\n");
			}
			/* It's void, so we won't be assigning the outcome to any variable. */
			else
			{
				translateCastExpression(aExp->cExpression, environment, isArgument);
				fprintf(dest, "\n");
			}
		}
		else
		{
			outcome = translateCastExpression(aExp->cExpression, environment, isArgument);
		}
		
		if (outcome < 0)
			return outcome;
		return tempCounter - 1;
	} 
	 
	/* Saves the values of the temporary expressions. */
	int tOne, tTwo; 
	 
	/* If there are more arithmetic expressions on the chain, we have to
	 * print them.
	 */
	if (aExp->firstAE != NULL)
		tOne = translateArithmeticExpression(aExp->firstAE, environment, isArgument);
	
	/* Same as above. */
	if (aExp->secondAE != NULL)
		tTwo = translateArithmeticExpression(aExp->secondAE, environment, isArgument);
		
	/* Now, create another temporary variable to save the joint of the
	 * two arithmetic expressions.
	 */
	translateTypeSpecifier(aExp->primType, false);
	
	int tempC = tempCounter++;
	
	if (aExp->primType != is_STRING)
	{
		if (tOne >= 0)
			fprintf(dest, "temp%d = temp%d", tempC, tOne);
		else
			fprintf(dest, "temp%d = (%s sp->locals[%d])", tempC, globalType, -tOne - 1);
		
		/* Prints the correct operator. */
		switch(aExp->op)
		{
			case (is_PLUS): fprintf(dest, " + "); break;
			case (is_MINUS): fprintf(dest, " - "); break;
			case (is_SLASH): fprintf(dest, " / "); break;
			case (is_TIMES): fprintf(dest, " * "); break;
			case (is_MODULO): fprintf(dest, " %c ", tempChar); break;
			case (is_OP_SHL): fprintf(dest, " << "); break;
			case (is_OP_SHR): fprintf(dest, " >> "); break;
			case (is_PARENTHESIS): fprintf(dest, ";\n"); break;
			case (is_AE_NONE): fprintf(dest, ";\n"); break;	
		}
		
		/* Make sure we are not printing garbage. */
		if (aExp->secondAE != NULL)
		{
			if (tTwo >= 0)
				fprintf(dest, "temp%d;\n", tTwo);
			else
				fprintf(dest, "(%s sp->locals[%d]);\n", globalType, -tTwo - 1);
		}
	}
	else
	{
		if (tOne >= 0)
			fprintf(dest, "temp%d[1024]; strcpy(temp%d, temp%d);\n", tempC, tempC, tOne);
		else
			fprintf(dest, "temp%d[1024]; strcpy(temp%d, ((char*) sp->locals[%d]));\n", tempC, tempC, -tOne - 1);
			
		/* Make sure we are not printing garbage. */
		if (aExp->secondAE != NULL)
		{
			if (tTwo >= 0)
				fprintf(dest, "strcat(temp%d, temp%d);\n", tempC, tTwo);
			else
				fprintf(dest, "strcat(temp%d, ((char*) sp->locals[%d]));\n", tempC, -tTwo -1);
		}
	}

	
	return tempCounter - 1;
}

int translateCastExpression(is_CastExpression* cExp, environmentList *environment, bool isArgument)
{
	/* Prints the cast type if applicable. */
	if (cExp->castType != NULL)
	{
		fprintf(dest, " ( ");
		translateTypeSpecifier(cExp->castType->typeName->type, false);
		fprintf(dest, ") ");
	}
	
	switch(cExp->disc_d)
	{
		case (d_UnaryExpression):
			return translateUnaryExpression(cExp->data_CastExpression.unaryExpression, environment);
		case (d_AssignmentExpression):
			return translateAssignmentExpression(cExp->data_CastExpression.assignmentExpression, environment, isArgument);
		case (d_ConditionalExpression):
			return translateConditionalExpression(cExp->data_CastExpression.conditionalExpression, environment, isArgument);
	}
	
	return 0;
}

int translateUnaryExpression(is_UnaryExpression* uE, environmentList *environment)
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
	
	if (uE->element->disc_d == is_ID)
		return -(searchSymbolLocal(uE->element->data_BasicElement.name, environment)->offset + 1);
	
	return 0;
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
				case (s_BOOLEAN): 	strcpy(globalType, "*(int*) "); break;
				case (s_CHAR): 		strcpy(globalType, "*(char*) ");break;
				case (s_BYTE): 		strcpy(globalType, "*(int*) ");break;
				case (s_SHORT): 	strcpy(globalType, "*(short*) ");break;
				case (s_INT): 		strcpy(globalType, "*(int*) ");break;
				case (s_LONG): 		strcpy(globalType, "*(long*) ");break;
				case (s_FLOAT): 	strcpy(globalType, "*(float*) ");break;
				case (s_DOUBLE): 	strcpy(globalType, "*(double*) ");break;
				case (s_STRING): 	strcpy(globalType, "*(char*) "); break;
				/* Goes for s_VOID, s_STRING_ARRAY and s_METHOD. */
				default: break;
			}

			/* Print the variable name, meaning its offset in locals of the sp. */
			fprintf(dest, "(%s sp->locals[%d])", globalType, offset);
			
			break;
			
		case (is_LITERAL):
			fprintf(dest, ", %s)", bE->data_BasicElement.name);
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
		case (is_ARGS):
			fprintf(dest, "argv[%d] ", bE->data_BasicElement.i);
			break;
	}
	
	return;
}

int translateMethodCall(is_MethodCall* mC, environmentList *environment)
{
	char mType[15];
	
	/* To make the solution general, we are always creating a temporary
	 * variable that will hold the value of the expression. As in this case
	 * we are making a method call, that variable will be useless. Therefore,
	 * we assign it the value 0 so it won't interfere with the rest of the
	 * program.
	 */
	fprintf(dest, "0;\n");
	/* Saves the parameters that we pass to the function. */
	translatePassParameters(mC, environment);
	/* Saves the retuning address. */
	fprintf(dest, "_ra = %d;\n",returnCounter);
	/* Jumps to the called method. */
	fprintf(dest, "goto %s;\n", mC->id);
		
	/* Returning label, so we can keep on with the flux of execution after
	 * the method returns.
	 */
	fprintf(dest, "return%d: ;\n", returnCounter);
	
	/* Then, look for the entry of this method on the symbol table. We will
	 * use the information to know if the method returns any type other than
	 * void and therefore, assign or not its return value to a temporary
	 * variable.
	 */
	
	tableElement* element = searchMethodCall(mC);
		
	if (element->type != s_VOID)
	{
		switch(element->type)
		{
			case(is_BOOLEAN): strcpy(mType, "int "); break;
			case(is_CHAR): strcpy(mType, "char "); break;
			case(is_BYTE): strcpy(mType, "int "); break;
			case(is_SHORT): strcpy(mType, "short "); break;
			case(is_INT): strcpy(mType, "int "); break;
			case(is_LONG): strcpy(mType, "long "); break;
			case(is_FLOAT): strcpy(mType, "float "); break;
			case(is_DOUBLE): strcpy(mType, "double "); break;
			/* Goes for is_STRING and is_STRING_ARRAY. */
			default: break;
		}
		
		if (element->type != is_STRING)
			fprintf(dest, "%s temp%d = *((%s*) sp->returnValue)", mType, tempCounter++, mType);
		else
		{
			int tOne = tempCounter++;
			fprintf(dest, "char temp%d[1024];\nstrcpy(temp%d, ((char *) sp->returnValue))", tOne, tOne);
		}
	}
	
	returnCounter++;
	
	return	tempCounter - 1;
}

void translatePassParameters(is_MethodCall* mC, environmentList *environment)
{
	/* And now the list of parameters. */
	is_Expressions_list* aux;
	char typeInString[15];
	int tOne;
	int parCounter = 0;
	
	/* Now, we have to check the parameters. */
	for (aux = mC->argumentsList; aux != NULL; aux = aux->next)
	{	
		tOne = translateExpression(aux->exp, environment, false);
		/* First, print the type of the variable. */
		switch(aux->exp->primType)
		{
			case(is_BOOLEAN): strcpy(typeInString, "int "); break;
			case(is_CHAR): strcpy(typeInString, "char "); break;
			case(is_BYTE): strcpy(typeInString, "int "); break;
			case(is_SHORT): strcpy(typeInString, "short "); break;
			case(is_INT): strcpy(typeInString, "int "); break;
			case(is_LONG): strcpy(typeInString, "long "); break;
			case(is_FLOAT): strcpy(typeInString, "float "); break;
			case(is_DOUBLE): strcpy(typeInString, "double "); break;
			/* Goes for is_VOID, is_STRING and is_STRING_ARRAY. */
			default: break;
		}
		
		if (aux->exp->primType != is_STRING)
			fprintf(dest, "sp->outgoing[%d] = (%s *) malloc(sizeof(%s));\n"
						"(*((%s *) sp->outgoing[%d])) = temp%d;\n", parCounter, typeInString, typeInString, typeInString, parCounter, tOne);
		else
			fprintf(dest, "sp->outgoing[%d] = (char*) malloc(sizeof(char)*1024);\n"
						"strcpy(((char *) sp->outgoing[%d]), temp%d);\n", parCounter, parCounter, tOne);
		
		parCounter++;
	}
	
}

void translateSystemOutPrintln(is_SystemOutPrintln* p, environmentList *environment)
{
	/* The arguments of the print. */
	is_Expressions_list* aux;
	is_PrintExpressions_list* exps;
	
	int helpTemp, tOne, tTwo;
	/* For printing the control caracters on the final code file. */
	char strTemp[10];
	
	/* Initiates the print. */
	
	/* A C style printf. */
	if (p->printExps == NULL)
	{
		fprintf(dest, "printf(%s ", p->literal);
		/* Now, prints all the arguments. */
		for (aux = p->argumentsList; aux != NULL; aux = aux->next)
		{
			fprintf(dest, ", ");
			translateExpression(aux->exp, environment, true);			
		}
		/* Ends the print. */
		fprintf(dest, ");");
	}
	/* A Java style println. */
	else
	{
		/* We are assuming that strings won't be larger than 1024 characters. */
		helpTemp = tempCounter++;
		fprintf(dest, "char temp%d[1024]; temp%d[0] = '\\0';", helpTemp, helpTemp);
		
		/* Now, prints all the arguments. */
		for (exps = p->printExps; exps != NULL; exps = exps->next)
		{
			tableElement *search;
			int offset;
			char mType[15];
			
			switch(exps->bE->disc_d)
			{
				/* And then, we assume that substrings are never greater
				 * than 256 characters.
				 */
				
				case is_ID:
					/* If it is an ID, we have to look for the offset.
					 * We know for sure that we will find the element.
					 */
					search = searchSymbolLocal(exps->bE->data_BasicElement.name, environment);
					offset = search->offset;
					
					switch (search->type)
					{
						/* Now, we have to print the right type. */
						case(is_BOOLEAN): strcpy(strTemp, "%d"); strcpy(mType, "int* "); break;
						case(is_CHAR): strcpy(strTemp, "%c"); strcpy(mType, "char* "); break;
						case(is_BYTE): strcpy(strTemp, "%d"); strcpy(mType, "int* "); break;
						case(is_SHORT): strcpy(strTemp, "%d"); strcpy(mType, "short* "); break;
						case(is_INT): strcpy(strTemp, "%d"); strcpy(mType, "int* "); break;
						case(is_LONG): strcpy(strTemp, "%lu"); strcpy(mType, "long* "); break;
						case(is_FLOAT): strcpy(strTemp, "%lf"); strcpy(mType, "float* "); break;
						case(is_DOUBLE): strcpy(strTemp, "%lf"); strcpy(mType, "double* "); break;
						/* Goes for is_STRING and is_STRING_ARRAY. */
						default: break;
					}
					
					/* Prints the value of this identifier. */
					tTwo = tempCounter++;
					if (search->type != is_STRING)
						fprintf(dest, "char temp%d[256];\nsprintf(temp%d, \"%s\", *((%s) sp->locals[%d]));\n", tTwo, tTwo, strTemp, mType, offset);
					else
						fprintf(dest, "char temp%d[256];\nsprintf(temp%d, \"%%s\", ((char *) sp->locals[%d]));\n", tTwo, tTwo, offset);
					
					fprintf(dest, "strcat(temp%d, temp%d);\n", helpTemp, tTwo);
					
					break;
				case is_LITERAL:
					fprintf(dest, "strcat(temp%d, %s);\n", helpTemp, exps->bE->data_BasicElement.name);
					break;
				case is_METHOD_CALL:
					tTwo = tempCounter++;
					tOne = translateMethodCall(exps->bE->data_BasicElement.methodCall, environment);
					fprintf(dest, ";\n");
					/* Now, we have to recheck the type of the method, so we 
					 * can print the proper control caracter.
					 */
					tableElement* element = searchMethodCall(exps->bE->data_BasicElement.methodCall);
						
					if (element->type != s_VOID)
					{
						switch(element->type)
						{
							case(is_BOOLEAN): strcpy(strTemp, "%d"); break;
							case(is_CHAR): strcpy(strTemp, "%c"); break;
							case(is_BYTE): strcpy(strTemp, "%d"); break;
							case(is_SHORT): strcpy(strTemp, "%d"); break;
							case(is_INT): strcpy(strTemp, "%d"); break;
							case(is_LONG): strcpy(strTemp, "%lu"); break;
							case(is_FLOAT): strcpy(strTemp, "%lf"); break;
							case(is_DOUBLE): strcpy(strTemp, "%lf"); break;
							case(is_STRING): strcpy(strTemp, "%s"); break;
							/* Shouldn't be used. */
							case(is_STRING_ARRAY): break;
							/* Shouldn't get here. */
							default: break;
						}
					}
					fprintf(dest, "char temp%d[256];\nsprintf(temp%d, \"%s\", temp%d);\n", tTwo, tTwo, strTemp, tOne);
					fprintf(dest, "strcat(temp%d, temp%d);\n", helpTemp, tTwo);
					break;
				case is_FALSE:
					fprintf(dest, "strcat(temp%d, \"false\");\n", helpTemp);
					break;
				case is_TRUE:	
					fprintf(dest, "strcat(temp%d, \"true\");\n", helpTemp);
					break;
				case is_INTEGER:
					tOne = tempCounter++;
					tTwo = tempCounter++;
					fprintf(dest, "int temp%d = ", tOne);
					translateBasicElement(exps->bE, environment);
					fprintf(dest, ";\n");
					fprintf(dest, "char temp%d[256];\nsprintf(temp%d, \"%%d\", temp%d);\n", tTwo, tTwo, tOne);
					fprintf(dest, "strcat(temp%d, temp%d);\n", helpTemp, tTwo);
					break;
				case is_FLOATPOINT:
					tOne = tempCounter++;
					tTwo = tempCounter++;
					fprintf(dest, "double temp%d = ", tOne);
					translateBasicElement(exps->bE, environment);
					fprintf(dest, ";\n");					
					fprintf(dest, "char temp%d[256];\nsprintf(temp%d, \"%%lf\", temp%d);\n", tTwo, tTwo, tOne);
					fprintf(dest, "strcat(temp%d, temp%d);\n", helpTemp, tTwo);
					break;
				/* Should never be this. */
				case is_PRINTLN:
					break;
				case is_ARGS:
					fprintf(dest, "strcat(temp%d, argv[%d]);\n", helpTemp, exps->bE->data_BasicElement.i);
					break;
			}
		
		}
		/* Ends the print. */
		fprintf(dest, "printf(\"%%s\\n\", temp%d);", helpTemp);
	}
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
			case (is_BYTE): fprintf(dest, "int *"); break;
			case (is_SHORT): fprintf(dest, "short *"); break;
			case (is_INT): fprintf(dest, "int *"); break;
			case (is_LONG): fprintf(dest, "long *"); break;
			case (is_FLOAT): fprintf(dest, "float *"); break;
			case (is_DOUBLE): fprintf(dest, "double *"); break;
			case (is_VOID): fprintf(dest, "void *"); break;
			case (is_STRING): fprintf(dest, "char *"); break;
			/* Shouldn't be used. */
			case (is_STRING_ARRAY): break;
		}
	}
	else
	{
		/* Show the type of the variable. */
		switch(type)
		{
			case (is_BOOLEAN): fprintf(dest, "int "); break;
			case (is_CHAR): fprintf(dest, "char "); break;
			case (is_BYTE): fprintf(dest, "int "); break;
			case (is_SHORT): fprintf(dest, "short "); break;
			case (is_INT): fprintf(dest, "int "); break;
			case (is_LONG): fprintf(dest, "long "); break;
			case (is_FLOAT): fprintf(dest, "float "); break;
			case (is_DOUBLE): fprintf(dest, "double "); break;
			case (is_VOID): fprintf(dest, "void "); break;
			case (is_STRING): fprintf(dest, "char "); break;
			/* Shouldn't be used. */
			case (is_STRING_ARRAY): break;
		}

	}
	
	return;
}
