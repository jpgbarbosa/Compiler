#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "showTree.h"
#include "structures.h"

/* This variable is used to keep track of the number of tabs we must
 * use for readibility before printing the output.
 */
int noTabs = 0;

/* We use this variable to print less tabs if we are printing an else
 * if, in order to distinguish it from an isolated if.
 */
bool isElseIf = false;

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
	showBlock(mD->block);
	
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
		showExpression(vD->expression, false, true);
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
		case (is_BOOLEAN): printf("bool "); break;
		case (is_CHAR): printf("char "); break;
		case (is_BYTE): printf("byte "); break;
		case (is_SHORT): printf("short "); break;
		case (is_INT): printf("int "); break;
		case (is_LONG): printf("long "); break;
		case (is_FLOAT): printf("float "); break;
		case (is_DOUBLE): printf("double "); break;
		case (is_VOID): printf("void "); break;
		case (is_STRING): printf("char * "); break;
		case (is_STRING_ARRAY): printf("char ** "); break;
	}
	
	return;
}

void showBlock(is_Block* block)
{
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	
	printf("\n{\n");
	noTabs++;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		showLocalVariableDeclarationsOrStatements(aux->lvdos);
	
	noTabs--;
	printf("\n}\n");
}

void showLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos)
{
	switch(lvdos->disc_d)
	{
		case (d_LocalVariableDeclarationStatement):
			showLocalVariableDeclarationStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds);
			break;
		case (d_Statement):
			showStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_statement);
			break;
	}
	return;
}

void showLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds)
{
	/* We make the right indentation. */
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

void showStatement(is_Statement* s)
{
	/* It's an isolated else, so we ought to print a \n at the end. */
	if (isElseIf && s->disc_d != d_SelectionStatement)
	{
		noTabs++;
		printf("\n");
	}
		
	switch(s->disc_d)
	{
		case (d_LabeledStatement):
			showLabeledStatement(s->data_Statement.labeledStatement);
			break;
		case (d_StatementExpression):
			showExpression(s->data_Statement.expression, true, true);
			break;
		case (d_SelectionStatement):
			showSelectionStatement(s->data_Statement.selectionStatement);
			break;
		case (d_IterationStatement):
			showIterationStatement(s->data_Statement.iterationStatement);
			break;
		case (d_JumpStatement):
			showJumpStatement(s->data_Statement.jumpStatement);
			break;
		case (d_StatementBlock):
			showBlock(s->data_Statement.block);
			break;
	}
	
	/* If we increased the number of tabs, now we ought to decrease it again. */
	if (isElseIf && s->disc_d != d_SelectionStatement)
		noTabs--;
	
	return;
}

void showExpression(is_Expression* exp, bool nextLine, bool printTab)
{
	/* If this expression belongs to an if, we won't want it to print
	 * the tabs.
	 */
	if (printTab)
		printTabs();
		
	printf("Expression");
	
	if(nextLine)
		printf("\n");
}

void showLabeledStatement(is_LabeledStatement* lS)
{
	printTabs();
	printf("Labeled Statement\n");
}

void showSelectionStatement(is_SelectionStatement* sS)
{
	/* Used to store the previousValue of isElseIf. */
	bool temp;
	switch(sS->disc_d)
	{
		case (is_IF):
			if (!isElseIf)
			{
				printf("\n");
				printTabs();
			}
			printf("if (");
			showExpression(sS->exp, false, false);
			printf(")\n");
			noTabs++;
			temp = isElseIf;
			isElseIf = false;
			showStatement(sS->data_SelectionStatement.stat);
			isElseIf = temp;
			noTabs--;
			break;
		case (is_IFELSE):
			if (!isElseIf)
			{
				printf("\n");
				printTabs();
			}
			printf("if (");
			showExpression(sS->exp, false, false);
			printf(")\n");
			noTabs++;
			showStatement(sS->data_SelectionStatement.stat);
			noTabs--;
			printTabs();
			printf("else ");
			temp = isElseIf;
			isElseIf = true;
			showStatement(sS->data_SelectionStatement.statSecond);
			isElseIf = temp;
			break;
		case (is_SWITCH):
			printf("SWITCH! NOT YET HANDLED...\n");
			break;
	}
	return;
	printTabs();
	printf("Selection Statement\n");
}

void showIterationStatement(is_IterationStatement* iS)
{
	printTabs();
	printf("Iteration Statement\n");
}

void showJumpStatement(is_JumpStatement* jS)
{
	printTabs();
	printf("Jump Statement\n");
}
