#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "showTree.h"
#include "structures.h"

/* This variable is used to keep track of the number of tabs we must
 * use for readibility before printing the output.
 */
int noTabs = 0;

void printTabs()
{
	int i;
	for (i = 0; i < noTabs; i++)
		printf("\t");
}


void showProgramFile(is_ProgramFile* pF)
{
	showClassHeader(pF->classHeader);
	
	/* Now shows the list of field declarations. */
	is_FieldDeclaration_list* aux;
	printf("/* Global variables. */\n");
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
	{
		showFieldDeclaration(aux->fieldDeclaration);
		if (aux->next != NULL)
			printf("\n");
	}
	return;
}

void showClassHeader(is_ClassHeader *cH)
{
	printf("CLASS NAME: %s.\n\n", cH->id);
	
	return;
}

void showFieldDeclaration(is_FieldDeclaration* fD)
{
	switch(fD->disc_d)
	{
		case (d_attrDeclaration):
			showAttrDeclaration(fD->data_FieldDeclaration.u_attrDeclaration);
			break;
		case (d_methodDeclaration):
			showMethodDeclaration(fD->data_FieldDeclaration.u_methodDeclaration);
			break;
	}
	
	return;
}

void showAttrDeclaration(is_AttrDeclaration* aD)
{
	/* Shows the list of field declarations. */
	/* First the type. */
	showTypeSpecifier(aD->typeSpecifier);
	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = aD->variablesDeclarators; aux != NULL; aux = aux->next)
	{
		showVariablesDeclarator(aux->variablesDeclarator);
		/* We aren't yet at the last element. */
		if (aux->next != NULL)
			printf(", ");
	}
	printf(";\n");
	
	return;
}

void showMethodDeclaration(is_MethodDeclaration* mD)
{
	showTypeSpecifier(mD->typeSpecifier);
	showMethodDeclarator(mD->methodDeclarator);
	printf("\n");
	showBlock(mD->block, false);
	
	return;
}

void showMethodDeclarator(is_MethodDeclarator* mD)
{
	printf("%s ", mD->id);
	printf("(");
	/* And now the list of parameters. */
	is_Parameters_list* aux;
	
	for(aux = mD->parametersList; aux != NULL; aux = aux->next)
	{
		showParameter(aux->parameter);
		/* We aren't yet at the last element. */
		if (aux->next != NULL)
			printf(", ");
	}
	printf(")");

	return;
}

void showParameter(is_Parameter* par)
{
	showTypeSpecifier(par->typeSpecifier);
	printf("%s", par->id);
}

void showVariablesDeclarator(is_VariablesDeclarator* vD)
{
	printf("%s", vD->id);
	/* It is initialiazed. */
	if (vD->expression != NULL)
	{
		printf(" = ");
		showExpression(vD->expression, false, false);
	}
	
	return;
}

void showTypeSpecifier(is_TypeSpecifier* tS)
{
	showTypename(tS->typeName);
	
	return;
}

void showTypename(is_Typename* tn)
{
	/* Show the type of the variable. */
	switch(tn->type)
	{
		case (is_BOOLEAN): 		printf("bool "); break;
		case (is_CHAR): 		printf("char "); break;
		case (is_BYTE): 		printf("byte "); break;
		case (is_SHORT): 		printf("short "); break;
		case (is_INT): 			printf("int "); break;
		case (is_LONG): 		printf("long "); break;
		case (is_FLOAT): 		printf("float "); break;
		case (is_DOUBLE): 		printf("double "); break;
		case (is_VOID): 		printf("void "); break;
		case (is_STRING): 		printf("char * "); break;
		case (is_STRING_ARRAY): printf("char ** "); break;
	}
	
	return;
}

void showBlock(is_Block* block, bool isDoWhile)
{
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	printTabs();
	printf("{\n");
	noTabs++;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		showLocalVariableDeclarationsOrStatements(aux->lvdos);
	
	noTabs--;
	printTabs();
	
	if(isDoWhile)
		printf("}");
	else
		printf("}\n");
}

void showLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos)
{
	switch(lvdos->disc_d)
	{
		case (d_LocalVariableDeclarationStatement):
			showLocalVariableDeclarationStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds);
			break;
		case (d_Statement):
			showStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_statement, false, false, false);
			break;
	}
	
	return;
}

void showLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds)
{
	/* We do the right indentation. */
	printTabs();
	
	/* Shows the list of variables. */
	/* First the type. */
	showTypeSpecifier(lvds->typeSpecifier);
	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = lvds->variablesDeclarator_list; aux != NULL; aux = aux->next)
	{
		showVariablesDeclarator(aux->variablesDeclarator);
		/* We aren't yet at the last element. */
		if (aux->next != NULL)
			printf(", ");
	}
	printf(";\n");
}

void showStatement(is_Statement* s, bool isToTab, bool isElseIf, bool isDoWhile)
{
	if (isToTab && s->disc_d != d_StatementBlock)
		noTabs++;
		
	switch(s->disc_d)
	{
		case (d_LabeledStatement):
			showLabeledStatement(s->data_Statement.labeledStatement);
			break;
		case (d_StatementExpression):
			showExpression(s->data_Statement.expression, true, true);
			break;
		case (d_SelectionStatement):
			showSelectionStatement(s->data_Statement.selectionStatement, isElseIf);
			break;
		case (d_IterationStatement):
			showIterationStatement(s->data_Statement.iterationStatement);
			break;
		case (d_JumpStatement):
			showJumpStatement(s->data_Statement.jumpStatement);
			break;
		case (d_StatementBlock):
			showBlock(s->data_Statement.block, isDoWhile);
			break;
		/* It's an empty statement ( ';' ), so we won't be showing
		 * nothing at all as it is useless.
		 */
		case (d_EmptyStatement):
			break;
	}
	
	if (isToTab && s->disc_d != d_StatementBlock)
		noTabs--;
	
	return;
}

void showExpression(is_Expression* exp, bool nextLine, bool isTabs)
{
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			showConditionalExpression(exp->data_Expression.cExpression, nextLine, isTabs);
			break;
		case (d_AssignmentExp):
			showAssignmentExpression(exp->data_Expression.aExpression, nextLine, isTabs);
			break;
		case (d_Exp):
			printf("(");
			showExpression(exp->data_Expression.expression, false, false);
			printf(")");
			if (nextLine)
				printf("\n");
			break;
	}
	
	return;
}

void showConditionalExpression(is_ConditionalExpression* cExp, bool nextLine, bool isTabs)
{
	switch(cExp->type)
	{
		case (is_UNARY):
			showRelationalExpression(cExp->rExpression, nextLine, isTabs);
			break;
		case (is_UNARY_NOT):
			printf("! (");
			showRelationalExpression(cExp->rExpression, false, false);
			printf(")");
			if (nextLine)
				printf("\n");
			break;
		case (is_TRINARY):
			showRelationalExpression(cExp->rExpression, false, false);
			printf(" ? ");
			showExpression(cExp->firstExp, false, false);
			printf(" : ");
			showExpression(cExp->secondExp, nextLine, isTabs);
			break;
		case (is_OP_AND):
			showRelationalExpression(cExp->rExpression, false, false);
			printf(" && ");
			showConditionalExpression(cExp->next, false, false);
			break;
		case (is_OP_OR):
			showRelationalExpression(cExp->rExpression, false, false);
			printf(" || ");
			showConditionalExpression(cExp->next, false, false);
			break;
	}
	
	return;
}

void showAssignmentExpression(is_AssignmentExpression* aExp, bool nextLine, bool isTabs)
{			
	/* Shows the identification. */
	if (isTabs)
		printTabs();
		
	printf("%s ", aExp->id);
	
	
	switch(aExp->assOp)
	{
		case (is_ASSIGN): 	printf(" = "); break;
		case (is_ASS_MUL):	printf(" *= "); break;
		case (is_ASS_DIV):	printf(" /= "); break;
		case (is_ASS_ADD):	printf(" += "); break;
		case (is_ASS_SUB):	printf(" -= "); break;
		case (is_ASS_XOR):	printf(" ^= "); break;
		case (is_ASS_MOD):	printf(" %%= "); break;
		case (is_ASS_SHL):	printf(" <<= "); break;
		case (is_ASS_SHR):	printf(" >>= "); break;
	}
	
	showExpression(aExp->expression, nextLine, isTabs);
	
	return;
}

void showLabeledStatement(is_LabeledStatement* lS)
{
	switch(lS->disc_d)
	{
		case (d_CASE):
			printTabs();
			printf("case (");
			showConditionalExpression(lS->exp, false, false);
			printf("):\n");
			noTabs++;
			showLocalVariableDeclarationsOrStatements(lS->lvdos);
			noTabs--;
			break;
		case (d_DEFAULT):
			printTabs();
			printf("default:\n");
			noTabs++;
			showLocalVariableDeclarationsOrStatements(lS->lvdos);
			noTabs--;
			break;
	}
	
	return;
}

void showSelectionStatement(is_SelectionStatement* sS, bool isElseIf)
{
	switch(sS->disc_d)
	{
		case (is_IF):
			if (!isElseIf)
				printTabs();
			printf("if (");
			showExpression(sS->exp, false, false);
			printf(")\n");
			showStatement(sS->stat, true, false, false);
			break;
		case (is_IFELSE):
			if (!isElseIf)
				printTabs();
			printf("if (");
			showExpression(sS->exp, false, false);
			printf(")\n");
			showStatement(sS->stat, true, false, false);
			printTabs();
			printf("else ");
			showStatement(sS->statSecond, false, true, false);
			break;
		case (is_SWITCH):
			printTabs();
			printf("switch (");
			showExpression(sS->exp, false, false);
			printf(")\n");
			showBlock(sS->block, false);
			break;
	}
	
	return;
}

void showIterationStatement(is_IterationStatement* iS)
{
	is_Expressions_list* aux;
	
	switch(iS->disc_d)
	{
		case (is_WHILE):
			printTabs();
			printf("while (");
			showExpression(iS->exp, false, false);
			printf(")\n");
			showStatement(iS->statement, true, false, false);
			break;
		case (is_DO):
			printTabs();
			printf("do\n");
			showStatement(iS->statement, true, false, true);
			printf("while(");
			showExpression(iS->exp, false, false);
			printf(")\n\n");			
			break;
		case (is_FOR):
			printTabs();
			printf("for ( ");
			showForInit(iS->forInit);
			if (iS->exp != NULL)
				showExpression(iS->exp, false, false);
			printf("; ");
			/* The incrementation expressions. */
			for(aux = iS->forIncr; aux != NULL; aux = aux->next)
				if (aux->exp != NULL)
				{
					showExpression(aux->exp, false, false);
					/* We aren't yet at the last element. */
					if (aux->next != NULL)
						printf(", ");
				}
			printf(" )\n");
			showStatement(iS->statement, true, false, false);
			printf("\n");
			break;
	}
	
	return;
}

void showForInit(is_ForInit* fI)
{
	if (fI != NULL)
	{
		/* It's a list of expressions. */
		if (fI->list != NULL)
		{
			/* And now the list of parameters. */
			is_Expressions_list* aux;
			
			for(aux = fI->list; aux != NULL; aux = aux->next)
			{
				showExpression(aux->exp, false, false);
				/* We aren't yet at the last element. */
				if (aux->next != NULL)
					printf(", ");
			}
		}
		/* It's a declaration statement. */
		else
			showLocalVariableDeclarationStatement(fI->lvds);
	}
	
	printf(" ;");
	
	return;
}

void showJumpStatement(is_JumpStatement* jS)
{
	printTabs();
	switch(jS->disc_d)
	{
		case (is_BREAK):	printf("break;\n"); break;
		case (is_CONTINUE):	printf("continue;\n"); break;
		case (is_RETURN):	printf("return;\n"); break;
		case (is_RETURN_EXP):
			printf("return ");
			showExpression(jS->exp, false, false);
			printf(";\n");
			break;
	}

	return;
}

void showRelationalExpression(is_RelationalExpression* rExp, bool nextLine, bool isTabs)
{
	showArithmeticExpression(rExp->aExpression, nextLine, isTabs);
	
	/* Prints the correct operator. */
	switch(rExp->op)
	{
		case (is_OP_GREATER):		printf(" > "); break;
		case (is_OP_LESS):			printf(" < "); break;
		case (is_OP_LESS_EQUAL):	printf(" <= "); break;
		case (is_OP_GREATER_EQUAL):	printf(" >= "); break;
		case (is_OP_EQUAL):			printf(" == "); break;
		case (is_OP_DIFFERENT):		printf(" != "); break;
		case (is_OP_SAND):			printf(" & "); break;
		case (is_OP_SXOR):			printf(" ^ "); break;
		case (is_OP_SOR):			printf(" | "); break;
		case (is_RE_NONE):			break;
	}
	
	/* If there are more relational expressions on the chain, we have to
	 * print them.
	 */
	if (rExp->next != NULL)
		showRelationalExpression(rExp->next, false, false);
	
	return;
}

void showArithmeticExpression(is_ArithmeticExpression* aExp, bool nextLine, bool isTabs)
{	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		showCastExpression(aExp->cExpression, nextLine, isTabs);
		return;
	} 
	 
	/* If there are more arithmetic expressions on the chain, we have to
	 * print them.
	 */
	if (aExp->firstAE != NULL && aExp->op != is_PARENTHESIS)
		showArithmeticExpression(aExp->firstAE, false, false);
		
	
	/* Prints the correct operator. */
	switch(aExp->op)
	{
		case (is_PLUS):		printf(" + "); break;
		case (is_MINUS):	printf(" - "); break;
		case (is_SLASH):	printf(" / "); break;
		case (is_TIMES):	printf(" * "); break;
		case (is_MODULO):	printf(" %% "); break;
		case (is_OP_SHL):	printf(" << "); break;
		case (is_OP_SHR):	printf(" >> "); break;
		case (is_PARENTHESIS):
			printf("(");
			showArithmeticExpression(aExp->firstAE, nextLine, isTabs);
			printf(")");
			break;
		case (is_AE_NONE):	break;
	}
	
	/* Same as above. */
	if (aExp->secondAE != NULL)
		showArithmeticExpression(aExp->secondAE, nextLine, isTabs);
	
	return;
}

void showCastExpression(is_CastExpression* cExp, bool nextLine, bool isTabs)
{
	/* Prints the cast type if applicable. */
	if (cExp->castType != NULL)
	{
		printf(" ( ");
		showTypeSpecifier(cExp->castType);
		printf(") ");
	}
	
	switch(cExp->disc_d)
	{
		case (d_UnaryExpression):
			showUnaryExpression(cExp->data_CastExpression.unaryExpression, nextLine, false);
			break;
		case (d_AssignmentExpression):
			showAssignmentExpression(cExp->data_CastExpression.assignmentExpression, nextLine, false);
			break;
		case (d_ConditionalExpression):
			showConditionalExpression(cExp->data_CastExpression.conditionalExpression, nextLine, false);
			break;
	}
}

void showUnaryExpression(is_UnaryExpression* uE, bool nextLine, bool isTabs)
{
	switch(uE->op)
	{
		case (is_OP_INC_AFTER):
			showBasicElement(uE->element, false, false);
			printf("++");
			break;
		case (is_OP_DCR_AFTER):
			showBasicElement(uE->element, false, false);
			printf("--");
			break;
		case (is_OP_INC_BEFORE):
			printf("++");
			showBasicElement(uE->element, nextLine, isTabs);
			break;
		case (is_OP_DCR_BEFORE):
			printf("--");
			showBasicElement(uE->element, nextLine, isTabs);
			break;
		case (is_OP_DIFFERENT_UNARY):
			printf("!");
			showBasicElement(uE->element, nextLine, isTabs);
			break;
		case (is_NONE):
			showBasicElement(uE->element, nextLine, isTabs);
			break;
	}
	
	return;
}


void showBasicElement(is_BasicElement* bE, bool nextLine, bool isTabs)
{
	if (isTabs && bE->disc_d != is_METHOD_CALL)
		printTabs();
		
			
	switch(bE->disc_d)
	{
		case (is_ID):			printf("%s", bE->data_BasicElement.name); break;
		case (is_LITERAL):		printf("%s", bE->data_BasicElement.name); break;
		case (is_TRUE):			printf("1"); break;
		case (is_FALSE):		printf("0"); break;
		case (is_INTEGER):		printf("%d", bE->data_BasicElement.i); break;
		case (is_FLOATPOINT):	printf("%lf", bE->data_BasicElement.d); break;
		case (is_METHOD_CALL):	showMethodCall(bE->data_BasicElement.methodCall, nextLine, isTabs); break;
		case (is_PRINTLN):		showSystemOutPrintln(bE->data_BasicElement.print, nextLine, isTabs); break;
		case (is_ARGS):			printf("argv[%d] ", bE->data_BasicElement.i); break;
	}
	
	if (nextLine && bE->disc_d != is_METHOD_CALL)
		printf("\n");
	
	return;
}

void showMethodCall(is_MethodCall* mC, bool nextLine, bool isTabs)
{
		if (isTabs)
			printTabs();
		
		is_Expressions_list* aux;
		
		/* Prints the identification of the method. */
		printf("%s (", mC->id);
		for (aux = mC->argumentsList; aux != NULL; aux = aux->next)
		{
			showExpression(aux->exp, false, false);
			if (aux->next != NULL)
				printf(", ");
		}
		printf(")");	
			
		if (nextLine)
			printf("\n");
}

void showSystemOutPrintln(is_SystemOutPrintln* p, bool nextLine, bool isTabs)
{
		if (isTabs)
			printTabs();
		
		is_Expressions_list* aux;
		is_PrintExpressions_list* exps;
		
		/* It's a C style printf. */
		if (p->printExps == NULL)
		{
			/* Prints the literal of the print. */
			printf("System.out.println(%s, ", p->literal);
			for (aux = p->argumentsList; aux != NULL; aux = aux->next)
			{
				showExpression(aux->exp, false, false);
				if (aux->next != NULL)
					printf(", ");
			}
			printf(");");
		}
		/* It's a Java style println. */
		else
		{
			/* Prints the literal of the print. */
			printf("System.out.println( ");
			for (exps = p->printExps; exps != NULL; exps = exps->next)
			{
				showBasicElement(exps->bE, false, false);
				if (exps->next != NULL)
					printf(" + ");
			}
			printf(");");
		}	
			
		if (nextLine)
			printf("\n");
}
