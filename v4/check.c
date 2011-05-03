#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "check.h"
#include "structures.h"


int checkProgramFile(is_ProgramFile* pF)
{
	int errorCount = 0;
	
	errorCount += checkClassHeader(pF->classHeader);
	
	/* Now gets the errors from the list of field declarations. */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
		errorCount += showFieldDeclaration(aux->fieldDeclaration);
	
	return errorCount;
}

int checkClassHeader(is_ClassHeader *cH)
{
	//TODO: Is it correct?
	return 0;
}

int checkFieldDeclaration(is_FieldDeclaration* fD)
{
	int errorCount = 0;
	
	switch(fD->disc_d)
	{
		case (d_attrDeclaration):
			errorCount += checkAttrDeclaration(fD->data_FieldDeclaration.u_attrDeclaration);
			break;
		case (d_methodDeclaration):
			errorCount += checkMethodDeclaration(fD->data_FieldDeclaration.u_methodDeclaration);
			break;
	}
	
	return errorCount;
}

int checkAttrDeclaration(is_AttrDeclaration* aD)
{
	int errorCount = 0;
	
	/* Gets the errors from the list of field declarations. */
	errorCount += checkTypeSpecifier(aD->typeSpecifier);
	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = aD->variablesDeclarators; aux != NULL; aux = aux->next)
		errorCount += checkVariablesDeclarator(aux->variablesDeclarator);
	
	return errorCount;
}

int checkMethodDeclaration(is_MethodDeclaration* mD)
{
	int errorCount = 0;
	
	errorCount += checkTypeSpecifier(mD->typeSpecifier);
	errorCount += checkMethodDeclarator(mD->methodDeclarator);
	errorCount += showBlock(mD->block);
	
	return errorCount;
}

int checkMethodDeclarator(is_MethodDeclarator* mD)
{
	int errorCount = 0;
	
	//TODO This one!
	printf("%s ", mD->id);

	/* And now the list of parameters. */
	is_Parameters_list* aux;
	
	for(aux = mD->parametersList; aux != NULL; aux = aux->next)
		errorCount += checkParameter(aux->parameter);


	return errorCount;
}

int checkParameter(is_Parameter* par)
{
	int errorCount = 0;
	
	errorCount += checkTypeSpecifier(par->typeSpecifier);
	
	//TODO : This one!
	printf("%s", par->id);
}

int checkVariablesDeclarator(is_VariablesDeclarator* vD)
{
	int errorCount = 0;
	
	//TODO: This one
	printf("%s", vD->id);
	
	/* It is initialiazed. */
	if (vD->expression != NULL)
		errorCount += checkExpression(vD->expression);

	return errorCount;
}

int checkTypeSpecifier(is_TypeSpecifier* tS)
{
	int errorCount = 0;
	
	errorCount += checkTypename(tS->typeName);
	
	return errorCount;
}

int checkTypename(is_Typename* tn)
{
	int errorCount = 0;
	
	//TODO: This one!
	/* Show the type of the variable. */
	switch(tn->type)
	{
		case (is_BOOLEAN): break;
		case (is_CHAR): break;
		case (is_BYTE): break;
		case (is_SHORT): break;
		case (is_INT): break;
		case (is_LONG): break;
		case (is_FLOAT): break;
		case (is_DOUBLE): break;
		case (is_VOID): break;
		case (is_STRING): break;
		case (is_STRING_ARRAY): break;
	}
	
	return errorCount;
}

int checkBlock(is_Block* block)
{
	int errorCount = 0;
	
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		errorCount += checkLocalVariableDeclarationsOrStatements(aux->lvdos);
	
	return errorCount;
}

int checkLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos)
{
	int errorCount = 0;
	
	switch(lvdos->disc_d)
	{
		case (d_LocalVariableDeclarationStatement):
			errorCount += checkLocalVariableDeclarationStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds);
			break;
		case (d_Statement):
			errorCount += checkStatement(lvdos->data_LocalVariableDeclarationsOrStatements.u_statement);
			break;
	}
	
	return errorCount;
}

int checkLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds)
{
	int errorCount = 0;
	
	/* Shows the list of variables. */
	/* First the type. */
	errorCount += checkTypeSpecifier(lvds->typeSpecifier);
	
	/* And now the names and initializations. */
	is_VariablesDeclarator_list* aux;
	
	for(aux = lvds->variablesDeclarator_list; aux != NULL; aux = aux->next)
		errorCount += checkVariablesDeclarator(aux->variablesDeclarator);

	return errorCount;
}

int checkStatement(is_Statement* s)
{
	int errorCount = 0;
	
	switch(s->disc_d)
	{
		case (d_LabeledStatement):
			errorCount += checkLabeledStatement(s->data_Statement.labeledStatement);
			break;
		case (d_StatementExpression):
			errorCount += checkExpression(s->data_Statement.expression);
			break;
		case (d_SelectionStatement):
			errorCount += checkSelectionStatement(s->data_Statement.selectionStatement);
			break;
		case (d_IterationStatement):
			errorCount += checkIterationStatement(s->data_Statement.iterationStatement);
			break;
		case (d_JumpStatement):
			errorCount += checkJumpStatement(s->data_Statement.jumpStatement);
			break;
		case (d_StatementBlock):
			errorCount += checkBlock(s->data_Statement.block);
			break;
	}

	return errorCount;
}

int checkExpression(is_Expression* exp)
{
	int errorCount = 0;
	
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			errorCount += checkConditionalExpression(exp->data_Expression.cExpression);
			break;
		case (d_AssignmentExp):
			errorCount += checkAssignmentExpression(exp->data_Expression.aExpression);
			break;
		case (d_Exp):
			errorCount += checkExpression(exp->data_Expression.expression);
			break;
	}
	
	return errorCount;
}

int checkConditionalExpression(is_ConditionalExpression* cExp)
{
	int errorCount = 0;
	
	switch(cExp->type)
	{
		case (is_UNARY):
			errorCount += checkRelationalExpression(cExp->rExpression);
			break;
		case (is_UNARY_NOT):
			errorCount += checkRelationalExpression(cExp->rExpression);
			break;
		case (is_TRINARY):
			errorCount += checkRelationalExpression(cExp->rExpression);
			errorCount += checkExpression(cExp->firstExp);
			errorCount += checkExpression(cExp->secondExp);
			break;
	}
	
	return errorCount;
}

int checkAssignmentExpression(is_AssignmentExpression* aExp)
{
	int errorCount = 0;

	//TODO This one!
	printf("%s ", aExp->id);
	
	errorCount += checkExpression(aExp->expression);
	
	return errorCount;
}

int checkLabeledStatement(is_LabeledStatement* lS)
{
	int errorCount = 0;
	
	switch(lS->disc_d)
	{
		case (d_ID):
			//TODO: This one!
			printf("%s : ", lS->data_LabeledStatement.id);
			errorCount += checkLocalVariableDeclarationsOrStatements(lS->lvdos);
			break;
		case (d_CASE):
			errorCount += checkConditionalExpression(lS->data_LabeledStatement.exp);
			errorCount += checkLocalVariableDeclarationsOrStatements(lS->lvdos);
			break;
		case (d_DEFAULT):
			errorCount += checkLocalVariableDeclarationsOrStatements(lS->lvdos);
			break;
	}
	
	return errorCount;
}

int checkSelectionStatement(is_SelectionStatement* sS)
{
	int errorCount = 0;
	
	switch(sS->disc_d)
	{
		case (is_IF):
			errorCount += checkExpression(sS->exp);
			errorCount += checkStatement(sS->stat);
			break;
		case (is_IFELSE):
			errorCount += checkExpression(sS->exp);
			errorCount += checkStatement(sS->stat);
			errorCount += checkStatement(sS->statSecond);
			break;
		case (is_SWITCH):
			errorCount += checkExpression(sS->exp);
			errorCount += checkBlock(sS->block);
			break;
	}
	
	return errorCount;
}

int checkIterationStatement(is_IterationStatement* iS)
{
	int errorCount = 0;
	
	is_Expressions_list* aux;
	
	switch(iS->disc_d)
	{
		case (is_WHILE):
			errorCount += checkExpression(iS->exp);
			errorCount += checkStatement(iS->statement);
			break;
		case (is_DO):
			errorCount += checkStatement(iS->statement);
			errorCount += checkExpression(iS->exp);
			break;
		case (is_FOR):
			errorCount += checkForInit(iS->forInit);
			errorCount += checkExpression(iS->exp);
			/* The incrementation expressions. */
			for(aux = iS->forIncr; aux != NULL; aux = aux->next)
				errorCount += checkExpression(aux->exp);

			errorCount += checkStatement(iS->statement);
			break;
	}
	
	return errorCount;
}

int checkForInit(is_ForInit* fI)
{
	int errorCount = 0;
	
	if (fI != NULL)
	{
		/* It's a list of expressions. */
		if (fI->list != NULL)
		{
			/* And now the list of parameters. */
			is_Expressions_list* aux;
			
			for(aux = fI->list; aux != NULL; aux = aux->next)
				errorCount += checkExpression(aux->exp);
		}
		/* It's a declaration statement. */
		else
		{
			errorCount += checkLocalVariableDeclarationStatement(fI->lvds);
		}
	}
	
	return errorCount;
}

int checkJumpStatement(is_JumpStatement* jS)
{
	int errorCount = 0;

	switch(jS->disc_d)
	{
		case (is_BREAK_ID):
			//TODO This one!
			printf("break %s;\n", jS->data_JumpStatement.id);
			break;
		case (is_CONTINUE_ID):
			//TODO This one!
			printf("continue %s;\n", jS->data_JumpStatement.id);
			break;
		case (is_RETURN_EXP):
			errorCount += checkExpression(jS->data_JumpStatement.exp);
			break;
	}

	return errorCount;
}

int checkRelationalExpression(is_RelationalExpression* rExp)
{
	int errorCount = 0;
	
	errorCount += checkArithmeticExpression(rExp->aExpression);
	
	/* If there are more relational expressions on the chain, we have to
	 * print them.
	 */
	if (rExp->next != NULL)
		errorCount += checkRelationalExpression(rExp->next);
	
	return errorCount;
}

int checkArithmeticExpression(is_ArithmeticExpression* aExp)
{
	int errorCount = 0;
	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		errorCount += checkCastExpression(aExp->cExpression);
		return errorCount;
	} 
	 
	/* If there are more arithmetic expressions on the chain, we have to
	 * print them.
	 */
	if (aExp->firstAE != NULL)
		errorCount += checkArithmeticExpression(aExp->firstAE);
	
	/* Same as above. */
	if (aExp->secondAE != NULL)
		errorCount += checkArithmeticExpression(aExp->secondAE);
	
	return errorCount;
}

int checkCastExpression(is_CastExpression* cExp)
{
	int errorCount = 0;
	
	/* Prints the cast type if applicable. */
	if (cExp->castType != NULL)
		errorCount += checkTypeSpecifier(cExp->castType);
	
	switch(cExp->disc_d)
	{
		case (d_UnaryExpression):
			errorCount += checkUnaryExpression(cExp->data_CastExpression.unaryExpression);
			break;
		case (d_AssignmentExpression):
			errorCount += checkAssignmentExpression(cExp->data_CastExpression.assignmentExpression);
			break;
		case (d_ConditionalExpression):
			errorCount += checkConditionalExpression(cExp->data_CastExpression.conditionalExpression);
			break;
	}
}

int checkUnaryExpression(is_UnaryExpression* uE)
{
	int errorCount = 0;
	
	switch(uE->op)
	{
		case (is_OP_INC_AFTER):
			errorCount += checkBasicElement(uE->element);
			break;
		case (is_OP_DCR_AFTER):
			errorCount += checkBasicElement(uE->element);
			break;
		case (is_OP_INC_BEFORE):
			errorCount += checkBasicElement(uE->element);
			break;
		case (is_OP_DCR_BEFORE):
			errorCount += checkBasicElement(uE->element);
			break;
		case (is_OP_DIFFERENT_UNARY):
			errorCount += checkBasicElement(uE->element);
			break;
		case (is_NONE):
			errorCount += checkBasicElement(uE->element);
			break;
	}
	
	return errorCount;
}


int checkBasicElement(is_BasicElement* bE)
{
	int errorCount = 0;
			
	switch(bE->disc_d)
	{
		case (is_ID):
			//TODO This one
			printf("%s", bE->data_BasicElement.id);
			break;
		case (is_LITERAL):
			//TODO: This one
			printf("%s", bE->data_BasicElement.literal);
			break;
		case (is_METHOD_CALL):
			errorCount += checkMethodCall(bE->data_BasicElement.methodCall);
			break;
	}
	
	return errorCount;
}

int checkMethodCall(is_MethodCall* mC)
{
	int errorCount = 0;
	
	is_Expressions_list* aux;
	
	/* Prints the identification of the method. */
	//TODO This one!
	printf("%s (", mC->id);
	
	for (aux = mC->argumentsList; aux != NULL; aux = aux->next)
		errorCount += checkExpression(aux->exp);	
		
}
