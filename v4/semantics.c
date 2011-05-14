#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"

int errorCount = 0;
int global_offset = 0;
int local_offset = 0;

extern progEnv *pEnv;

int checkProgramFile(is_ProgramFile* pF)
{
	checkClassHeader(pF->classHeader);
	
	/* Now gets the errors from the list of field declarations. */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
		checkFieldDeclaration(aux->fieldDeclaration);
		
	return errorCount;
		
}

void checkClassHeader(is_ClassHeader *cH)
{
	//TODO: Is it correct?
	//HERE
}

void checkFieldDeclaration(is_FieldDeclaration* fD)
{
	switch(fD->disc_d)
	{
		case (d_attrDeclaration):
			checkAttrDeclaration(fD->data_FieldDeclaration.u_attrDeclaration);
			break;
		case (d_methodDeclaration):
			checkMethodDeclaration(fD->data_FieldDeclaration.u_methodDeclaration);
			break;
	}
}

void checkAttrDeclaration(is_AttrDeclaration* aD)
{	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = aD->variablesDeclarators; aux != NULL; aux = aux->next)
		checkVariablesDeclarator(aux->variablesDeclarator,enumConverter(aD->typeSpecifier->typeName->type), pEnv->globalTable);
	
}

void checkMethodDeclaration(is_MethodDeclaration* mD)
{
	environmentList *environment = searchEnvironment(mD->methodDeclarator->id);
	
	/* Defines the return type. */
	environment->returnType = enumConverter(mD->typeSpecifier->typeName->type);
	
	checkMethodDeclarator(mD->methodDeclarator, environment);
	
	/* It's the same environment of the parameters, so, we don't change it. */
	checkBlock(mD->block, environment);
}

void checkMethodDeclarator(is_MethodDeclarator* mD, environmentList *environment)
{
	/* WARNING: The method is inserted at the insertionFunction.c. */
	
	/* And now the list of parameters. */
	is_Parameters_list* aux;
	
	for(aux = mD->parametersList; aux != NULL; aux = aux->next)
		checkParameter(aux->parameter, environment);

}

void checkParameter(is_Parameter* par, environmentList *environment)
{
	/* Insert the parameter at the local scope of the method. */
	tableElement *sym = insertSymbol(par->id, enumConverter(par->typeSpecifier->typeName->type), environment);
	
	if (sym == NULL)
	{
		printf("Line %d: There's another parameter with that name (%s)!\n", par->line, par->id);
		errorCount++;
	}
}

void checkVariablesDeclarator(is_VariablesDeclarator* vD, tableBasicTypes type, environmentList *environment)
{
	//HERE
	tableElement *new = insertSymbol(vD->id, type, environment);
	
	if (new == NULL)
	{
		printf("Line %d: There's already a symbol with that name (%s)!\n", vD->line, vD->id);
		errorCount++;
	}
	
	/* It is initialiazed. */
	if (vD->expression != NULL)
		checkExpression(vD->expression, environment);

}

void checkBlock(is_Block* block, environmentList *environment)
{
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		checkLocalVariableDeclarationsOrStatements(aux->lvdos, environment);

}

void checkLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos, environmentList *environment)
{
	switch(lvdos->disc_d)
	{
		case (d_LocalVariableDeclarationStatement):
			checkLocalVariableDeclarationStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds, environment);
			break;
		case (d_Statement):
			checkStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_statement, environment);
			break;
	}
}

void checkLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, environmentList *environment)
{	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = lvds->variablesDeclarator_list; aux != NULL; aux = aux->next)
		checkVariablesDeclarator(aux->variablesDeclarator, enumConverter(lvds->typeSpecifier->typeName->type), environment);

}

void checkStatement(is_Statement* s, environmentList *environment)
{
	switch(s->disc_d)
	{
		case (d_LabeledStatement):
			checkLabeledStatement(s->data_Statement.labeledStatement, environment);
			break;
		case (d_StatementExpression):
			checkExpression(s->data_Statement.expression, environment);
			break;
		case (d_SelectionStatement):
			checkSelectionStatement(s->data_Statement.selectionStatement, environment);
			break;
		case (d_IterationStatement):
			checkIterationStatement(s->data_Statement.iterationStatement, environment);
			break;
		case (d_JumpStatement):
			checkJumpStatement(s->data_Statement.jumpStatement, environment);
			break;
		case (d_StatementBlock):
			//TODO: Block here
			checkBlock(s->data_Statement.block, environment);
			break;
	}

	
}

void checkExpression(is_Expression* exp, environmentList *environment)
{
	
	
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			checkConditionalExpression(exp->data_Expression.cExpression, environment);
			break;
		case (d_AssignmentExp):
			checkAssignmentExpression(exp->data_Expression.aExpression, environment);
			break;
		case (d_Exp):
			checkExpression(exp->data_Expression.expression, environment);
			break;
	}
	
	
}

void checkConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment)
{
	
	
	switch(cExp->type)
	{
		case (is_UNARY):
			checkRelationalExpression(cExp->rExpression, environment);
			break;
		case (is_UNARY_NOT):
			checkRelationalExpression(cExp->rExpression, environment);
			break;
		case (is_TRINARY):
			checkRelationalExpression(cExp->rExpression, environment);
			checkExpression(cExp->firstExp, environment);
			checkExpression(cExp->secondExp, environment);
			break;
	}
	
	
}

void checkAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment)
{
	

	tableElement *search = searchSymbolLocal(aExp->id, environment);
	if (search == NULL)
	{
		printf("Line %d: %s hasn't been declared in this scope.\n", aExp->line, aExp->id);
		errorCount++;
	}
	
	checkExpression(aExp->expression, environment);
	
	
}

void checkLabeledStatement(is_LabeledStatement* lS, environmentList *environment)
{
	environmentList *newEnv = createNewEnvironment(environment);
	
	switch(lS->disc_d)
	{
		case (d_ID):
			//This it not a declaration.
			//HERE
			checkLocalVariableDeclarationsOrStatements(lS->lvdos, newEnv);
			break;
		case (d_CASE):
			checkConditionalExpression(lS->data_LabeledStatement.exp, newEnv);
			checkLocalVariableDeclarationsOrStatements(lS->lvdos, newEnv);
			break;
		case (d_DEFAULT):
			checkLocalVariableDeclarationsOrStatements(lS->lvdos, newEnv);
			break;
	}
	
	
}

void checkSelectionStatement(is_SelectionStatement* sS, environmentList *environment)
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

void checkIterationStatement(is_IterationStatement* iS, environmentList *environment)
{
	
	environmentList *newEnv = createNewEnvironment(environment);
	is_Expressions_list* aux;
	
	switch(iS->disc_d)
	{
		case (is_WHILE):
			checkExpression(iS->exp, newEnv);
			checkStatement(iS->statement, newEnv);
			break;
		case (is_DO):
			checkStatement(iS->statement, newEnv);
			checkExpression(iS->exp, newEnv);
			break;
		case (is_FOR):
			checkForInit(iS->forInit, newEnv);
			checkExpression(iS->exp, newEnv);
			/* The incrementation expressions. */
			for(aux = iS->forIncr; aux != NULL; aux = aux->next)
				checkExpression(aux->exp, newEnv);

			checkStatement(iS->statement, newEnv);
			break;
	}
	
	
}

void checkForInit(is_ForInit* fI, environmentList *environment)
{
	
	
	if (fI != NULL)
	{
		/* It's a list of expressions. */
		if (fI->list != NULL)
		{
			/* And now the list of parameters. */
			is_Expressions_list* aux;
			
			for(aux = fI->list; aux != NULL; aux = aux->next)
				checkExpression(aux->exp, environment);
		}
		/* It's a declaration statement. */
		else
		{
			checkLocalVariableDeclarationStatement(fI->lvds, environment);
		}
	}
	
	
}

void checkJumpStatement(is_JumpStatement* jS, environmentList *environment)
{
	environmentList *newEnv = createNewEnvironment(environment);

	switch(jS->disc_d)
	{
		case (is_BREAK_ID):
			//This is not a declaration
			//HERE
			break;
		case (is_CONTINUE_ID):
			//This is not a declaration
			//HERE
			break;
		case (is_RETURN_EXP):
			checkExpression(jS->data_JumpStatement.exp, newEnv);
			break;
		default:
			break;
	}

	
}

void checkRelationalExpression(is_RelationalExpression* rExp, environmentList *environment)
{
	
	
	checkArithmeticExpression(rExp->aExpression, environment);
	
	/* If there are more relational expressions on the chain, we have to
	 * print them.
	 */
	if (rExp->next != NULL)
		checkRelationalExpression(rExp->next, environment);
	
	
}

void checkArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment)
{
	
	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		checkCastExpression(aExp->cExpression, environment);
		return;
	} 
	 
	/* If there are more arithmetic expressions on the chain, we have to
	 * print them.
	 */
	if (aExp->firstAE != NULL)
		checkArithmeticExpression(aExp->firstAE, environment);
	
	/* Same as above. */
	if (aExp->secondAE != NULL)
		checkArithmeticExpression(aExp->secondAE, environment);
	
	
}

void checkCastExpression(is_CastExpression* cExp, environmentList *environment)
{
	
	//TODO Check the cast type!!
	/* Prints the cast type if applicable. */
	//if (cExp->castType != NULL)
	//	checkTypeSpecifier(cExp->castType);
	
	switch(cExp->disc_d)
	{
		case (d_UnaryExpression):
			checkUnaryExpression(cExp->data_CastExpression.unaryExpression, environment);
			break;
		case (d_AssignmentExpression):
			checkAssignmentExpression(cExp->data_CastExpression.assignmentExpression, environment);
			break;
		case (d_ConditionalExpression):
			checkConditionalExpression(cExp->data_CastExpression.conditionalExpression, environment);
			break;
	}
	
	
}

void checkUnaryExpression(is_UnaryExpression* uE, environmentList *environment)
{
	
	
	switch(uE->op)
	{
		case (is_OP_INC_AFTER):
			checkBasicElement(uE->element, environment);
			break;
		case (is_OP_DCR_AFTER):
			checkBasicElement(uE->element, environment);
			break;
		case (is_OP_INC_BEFORE):
			checkBasicElement(uE->element, environment);
			break;
		case (is_OP_DCR_BEFORE):
			checkBasicElement(uE->element, environment);
			break;
		case (is_OP_DIFFERENT_UNARY):
			checkBasicElement(uE->element, environment);
			break;
		case (is_NONE):
			checkBasicElement(uE->element, environment);
			break;
	}
	
	
}


void checkBasicElement(is_BasicElement* bE, environmentList *environment)
{
	
	tableElement *search;
			
	switch(bE->disc_d)
	{
		case (is_ID):
			//HERE
			/* Looks for this symbol in the table. */
			search = searchSymbolLocal(bE->data_BasicElement.id, environment);
			if (search == NULL)
			{
				printf("Line %d: %s hasn't been declared in this scope.\n", bE->line, bE->data_BasicElement.id);
				errorCount++;
			}
			break;
		case (is_LITERAL):
			//This is not a declaration
			//HERE
			break;
		case (is_METHOD_CALL):
			checkMethodCall(bE->data_BasicElement.methodCall, environment);
			break;
	}
	
	
}

void checkMethodCall(is_MethodCall* mC, environmentList *environment)
{
	
	
	is_Expressions_list* aux;
	
	/* Prints the identification of the method. */
	//This is not a declaration
	//HERE
	
	for (aux = mC->argumentsList; aux != NULL; aux = aux->next)
		checkExpression(aux->exp, environment);
		
		
		
}

tableBasicTypes enumConverter(is_PrimitiveType type)
{
	switch(type)
	{
		case is_BOOLEAN: 		return s_BOOLEAN;
		case is_CHAR:			return s_CHAR;
		case is_BYTE:			return s_BYTE;
		case is_SHORT:			return s_SHORT;
		case is_INT:			return s_INT;
		case is_LONG:			return s_LONG;
		case is_FLOAT:			return s_FLOAT;
		case is_DOUBLE:			return s_DOUBLE;
		case is_VOID:			return s_VOID;
		case is_STRING:			return s_STRING;
		case is_STRING_ARRAY:	return s_STRING_ARRAY;
		
	}
	
	//TODO: WATCHOUT FOR THE DEFAULT!
	return s_INT;
	
}
