#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"

int errorCount = 0;
int globalOffset = 0;
int localOffset = 0;

extern progEnv *pEnv;

/* We use this variable to know if a return statement returns a value
 * according to the return type of the method.
 */
is_PrimitiveType methodReturnType;

int checkProgramFile(is_ProgramFile* pF)
{
	/* First, we need to verify if there's a main method, with an array
	 * of strings as input.
	 */
	 
	tableElement *mainMethod = searchSymbolGlobal("main", true);
	
	if (mainMethod == NULL)
	{
		printf("No method named 'main' could be found.\n");
		errorCount++;
	}
	else
	{
		if (mainMethod->type != s_INT)
		{
			printf("'main' method return type isn't 'int'.\n");
			errorCount++;
		}
		else if (mainMethod->noParameters != 1 || mainMethod->parameters[0] != s_STRING_ARRAY)
		{
			printf("'main' method has incorrect parameters (supports only 'String [] args').\n");
			errorCount++;
		}
	}
	
	/* Now gets the errors from the list of field declarations. */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
		checkFieldDeclaration(aux->fieldDeclaration);
		
	return errorCount;
		
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
		checkVariablesDeclarator(aux->variablesDeclarator,enumConverter(aD->typeSpecifier->typeName->type), pEnv->globalTable, true);
	
}

void checkMethodDeclaration(is_MethodDeclaration* mD)
{
	environmentList *environment = searchEnvironment(mD->methodDeclarator->id);
	
	/* Defines the return type. */
	environment->returnType = enumConverter(mD->typeSpecifier->typeName->type);
	
	/* If we have a return type and this method has no return, we print an error message. */
	if (mD->typeSpecifier->typeName->type != is_VOID && !mD->methodDeclarator->isReturnOk)
	{
		printf("Line %d: Method '%s' has a return type, but no return statement could be found.\n", mD->line, mD->methodDeclarator->id);
		errorCount++;
	
	}
	
	/* Now, we have to reset the localOffset counter for each method. */
	localOffset = 0;
	
	methodReturnType = mD->typeSpecifier->typeName->type;
	
	
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
	
	/* Before leaving, saves the environemnt of this object. */
	mD->env = environment;
}

void checkParameter(is_Parameter* par, environmentList *environment)
{
	/* Insert the parameter at the local scope of the method.
	 * The same with the local offset as descripted somewhere else. We can
	 * increment even if there's another symbol with it because in case of
	 * errors at the semantics, we won't be generating any code.
	 */
	tableElement *sym = insertSymbol(par->id, localOffset++, enumConverter(par->typeSpecifier->typeName->type), environment, NULL, false);
	
	if (sym == NULL)
	{
		printf("Line %d: There's another parameter with that name ('%s')!\n", par->line, par->id);
		errorCount++;
	}
	
	/* Before leaving, saves the environemnt of this object. */
	par->env = environment;
}

void checkVariablesDeclarator(is_VariablesDeclarator* vD, tableBasicTypes type, environmentList *environment, bool isGlobal)
{
	tableElement *new;
	
	/* We can increment the offset variables without worrying if it's a valid symbol
	 * or not because if they are invalid, they won't conclude the semantics without
	 * errors and we won't pass to the next stage, of generating code. Therefore,
	 * at the point of generating code, we will only have correct offsets.
	 */
	if (isGlobal)
		new = insertSymbol(vD->id, globalOffset++, type, environment, vD->expression, false);
	else
		new = insertSymbol(vD->id, localOffset++, type, environment, vD->expression, false);
	
	if (new == NULL)
	{
		printf("Line %d: There's already a symbol with that name ('%s')!\n", vD->line, vD->id);
		errorCount++;
	}
	
	/* It is initialiazed. */
	if (vD->expression != NULL)
	{
		tableBasicTypes typeExp = checkExpression(vD->expression, environment);
		if (!compatibilityChecker(type, typeExp))
		{
			//TODO: Maybe print the types.
			printf("Line %d: Incompatible types in initialization of '%s'.\n", vD->line, vD->id);
			errorCount++;
		}
	}

	/* Before leaving, saves the environemnt of this object. */
	vD->env = environment;
}

void checkBlock(is_Block* block, environmentList *environment)
{
	/* Shows the list of variables declarations or statements. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
	
	for (aux = block->lvdos_list; aux != NULL; aux = aux->next)
		checkLocalVariableDeclarationsOrStatements(aux->lvdos, environment);

	/* Before leaving, saves the environemnt of this object. */
	block->env = environment;
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
		checkVariablesDeclarator(aux->variablesDeclarator, enumConverter(lvds->typeSpecifier->typeName->type), environment, false);
	
	/* Before leaving, saves the environemnt of this object. */
	lvds->env = environment;
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
			checkBlock(s->data_Statement.block, environment);
			break;
	}

	/* Before leaving, saves the environemnt of this object. */
	s->env = environment;
}

tableBasicTypes checkExpression(is_Expression* exp, environmentList *environment)
{	
	/* Before starting, saves the environemnt of this object. */
	exp->env = environment;
	tableBasicTypes temp;
	
	switch(exp->disc_d)
	{
		case (d_ConditionalExp):
			temp = checkConditionalExpression(exp->data_Expression.cExpression, environment);
			exp->primType = enumInvConverter(temp);
			return temp;
		case (d_AssignmentExp):
			temp = checkAssignmentExpression(exp->data_Expression.aExpression, environment);
			exp->primType = enumInvConverter(temp);
			return temp;
		case (d_Exp):
			temp = checkExpression(exp->data_Expression.expression, environment);
			exp->primType = enumInvConverter(temp);
			return temp;
	}
	
	/* Should never get here. */
	return s_VOID;
	
}

tableBasicTypes checkConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment)
{
	/* Before starting, saves the environemnt of this object. */
	cExp->env = environment;
	
	tableBasicTypes typeOne, typeTwo;
	
	switch(cExp->type)
	{
		case (is_UNARY):
			return checkRelationalExpression(cExp->rExpression, environment);
		case (is_UNARY_NOT):
			return checkRelationalExpression(cExp->rExpression, environment);
		case (is_TRINARY):
			checkRelationalExpression(cExp->rExpression, environment);
			typeOne = checkExpression(cExp->firstExp, environment);
			typeTwo = checkExpression(cExp->secondExp, environment);
			break;
		case (is_OP_AND):
			typeOne = checkRelationalExpression(cExp->rExpression, environment);
			typeTwo = checkConditionalExpression(cExp->next, environment);
			break;
		case (is_OP_OR):
			typeOne = checkRelationalExpression(cExp->rExpression, environment);
			typeTwo = checkConditionalExpression(cExp->next, environment);
			break;
	}
	
	/* If we get here, it must have been a is_TRINARY. */
	
	/* In the trinary operator, the returning types are different. */
	if (typeOne != typeTwo && cExp->type == is_TRINARY)
	{
		//TODO: Maybe print the types.
		printf("Line %d: The returning values of the trinary operator are inconsistent.\n", cExp->line);
		errorCount++;
		/* It will go as an error. */	
		return s_VOID;
	}
	else if (typeOne != typeTwo)
	{
		//TODO: Maybe print the types.
		printf("Line %d: Conditional expressions should be booleans.\n", cExp->line);
		errorCount++;
		/* It will go as an error. */	
		return s_VOID;
	}

	/* We have previously verified that both operands have the same type, so
	 * it's different which type to return.
	 */
	return typeOne;	
}

tableBasicTypes checkAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment)
{
	/* Before starting, saves the environemnt of this object. */
	aExp->env = environment;
	
	tableElement *search = searchSymbolLocal(aExp->id, environment);
	if (search == NULL)
	{
		printf("Line %d: '%s' hasn't been declared in this scope.\n", aExp->line, aExp->id);
		errorCount++;
		
		return s_VOID;
	}

	tableBasicTypes type = checkExpression(aExp->expression, environment);
	
	/* The type of the variable and the type of the expression are different. */
	if (!compatibilityChecker(search->type, type))
	{
		//TODO: Maybe print the types.
		//printf("%d and %d (s_INT %d and s_DOUBLE %d and s_VOID %d)\n", search->type, type, s_INT, s_DOUBLE, s_VOID);
		printf("Line %d: Incompatible types in assignment.\n", aExp->line);
		errorCount++;
		
		return s_VOID;
	}
	
	/* We return the type of the ID. */
	return search->type;
	
}

void checkLabeledStatement(is_LabeledStatement* lS, environmentList *environment)
{
	
	environmentList *newEnv = createNewEnvironment(environment);
	
	/* Before starting, saves the environemnt of this object. */
	lS->env = newEnv;
	
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
	
	/* Before starting, saves the environemnt of this object. */
	sS->env = newEnv;
	
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
	
	iS->env = newEnv;
	
	/* Before starting, saves the environemnt of this object. */
	iS->env = newEnv;
	
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
	/* Before starting, saves the environemnt of this object. */
	fI->env = environment;
	
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
	tableBasicTypes bType;
	
	/* Before starting, saves the environemnt of this object. */
	jS->env = newEnv;

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
			bType = checkExpression(jS->data_JumpStatement.exp, newEnv);
			if (bType != enumConverter(methodReturnType))
			{
				printf("Line %d: Return expression isn't according to the return type of the method.\n", jS->line);
				errorCount++;
			}
			break;
		case (is_RETURN):
			if (methodReturnType != is_VOID)
			{
				printf("Line %d: Return expression isn't according to the return type of the method.\n", jS->line);
				errorCount++;
			}
			break;
		default:
			break;
	}

	
}

tableBasicTypes checkRelationalExpression(is_RelationalExpression* rExp, environmentList *environment)
{
	/* Before starting, saves the environemnt of this object. */
	rExp->env = environment;
	
	tableBasicTypes type = checkArithmeticExpression(rExp->aExpression, environment);
	
	/* What really counts is the first relational expression. If we have
	 * more expressions in the chain, it's an expression with some operands
	 * between arithmetic expressions, what means in Java we would return
	 * a TRUE or FALSE value.
	 * Consequently, in C, we will be returning an INT.
	 */
	if (rExp->next != NULL)
	{
		checkRelationalExpression(rExp->next, environment);
		return s_INT;
	}
	
	/* In the other case, only having one arithmetic expression, we have to return
	 * whatever that functions returns.
	 * We could switch the position and in here return directly the outcome,
	 * but we prefered to use an extra variable to save the outcome and only
	 * return now because that is the way that the expressions are displayed,
	 * and therefore, we are preserving clarity.
	 */

	return type;
}

tableBasicTypes checkArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment)
{
	/* These expressions are of the type:
	 *    	CastExpression
	 * 		ArithmeticExpression OPERAND ArithmeticExpression
	 */
	
	/* Before starting, saves the environemnt of this object. */
	aExp->env = environment;
	
	/* This is a cast expression and consequently, we have to stop the 
	 * recursive calls.
	 */
	if (aExp->cExpression != NULL)
	{
		/* We are saving the type of the expression for the code generation
		 * stage.
		 */
		tableBasicTypes temp;
		
		temp = checkUnaryExpression(aExp->cExpression, environment);
		aExp->primType = enumInvConverter(temp);
		return temp;
	} 
	
	tableBasicTypes typeOne, typeTwo, temp;
	
	/* If the arithmetic expressions aren't NULL, we find their returning
	 * value. Else, we assign it as void.
	 */
	if (aExp->firstAE != NULL) /* First Expression. */
		typeOne = checkArithmeticExpression(aExp->firstAE, environment);
	else
		typeOne = s_VOID;
	
	/* Same as above. */
	if (aExp->secondAE != NULL) /* Second Expression. */
		typeTwo = checkArithmeticExpression(aExp->secondAE, environment);
	else
		typeTwo = s_VOID;
	
	/* If we are using shifts, both expressions must be integers. */ 
	if ((aExp->op == is_OP_SHL || aExp->op == is_OP_SHR)
		&& (typeOne != s_INT || typeTwo != s_INT))
	{
		printf("Line %d: Incompatible types in shift operation (both operands must be integers).\n", aExp->line);
		errorCount++;
				
		return s_VOID;
	}
	
	/* The second expression is NULL, so we will return the type of the first one. */
	if (typeTwo == s_VOID)
	{
		aExp->primType = enumInvConverter(typeOne);
		return typeOne;
	}
	
	/* Once again, saving the value for code generation. */
	temp = convertTypes(typeOne, typeTwo);
	aExp->primType = temp;	
	return temp;
}

tableBasicTypes checkUnaryExpression(is_UnaryExpression* uE, environmentList *environment)
{	
	/* Before starting, saves the environemnt of this object. */
	uE->env = environment;
	
	switch(uE->op)
	{
		case (is_OP_INC_AFTER):
			return checkBasicElement(uE->element, environment);
		case (is_OP_DCR_AFTER):
			return checkBasicElement(uE->element, environment);
		case (is_OP_INC_BEFORE):
			return checkBasicElement(uE->element, environment);
		case (is_OP_DCR_BEFORE):
			return checkBasicElement(uE->element, environment);
		case (is_OP_DIFFERENT_UNARY):
			return checkBasicElement(uE->element, environment);
		case (is_NONE):
			return checkBasicElement(uE->element, environment);
	}
	
	/* Should never get here. */
	return s_VOID;
}


tableBasicTypes checkBasicElement(is_BasicElement* bE, environmentList *environment)
{
	/* Before starting, saves the environemnt of this object. */
	bE->env = environment;
	
	tableElement *search;
			
	switch(bE->disc_d)
	{
		case (is_ID):
			//HERE
			/* Looks for this symbol in the table. */
			search = searchSymbolLocal(bE->data_BasicElement.name, environment);
			if (search == NULL)
			{
				printf("Line %d: '%s' hasn't been declared in this scope.\n", bE->line, bE->data_BasicElement.name);
				errorCount++;
				
				return s_VOID;
			}

			/* We return the type of the ID. */
			return search->type;
		case (is_LITERAL):
			return s_STRING;
		/* In C, both true and false can be considered integers. */
		case (is_TRUE):
			return s_INT;
		case (is_FALSE):
			return s_INT;
		case (is_INTEGER):
			return s_INT;
		case (is_FLOATPOINT):
			return s_DOUBLE;
		case (is_METHOD_CALL):
			return checkMethodCall(bE->data_BasicElement.methodCall, environment);
		case (is_PRINTLN):
			return checkSystemOutPrintln(bE->data_BasicElement.print, environment);
	}
	
	/* We shouldn't get here. */
	return s_VOID;
}

tableBasicTypes checkMethodCall(is_MethodCall* mC, environmentList *environment)
{
	/* Before starting, saves the environemnt of this object. */
	mC->env = environment;
	
	is_Expressions_list* aux;
	tableElement* element = searchMethodCall(mC);
	int parCounter = 0;
	
	if (!element)
	{
		printf("Line %d: Method '%s' has not been declared.\n", mC->line, mC->id);
		errorCount++;
		
		/* We can't conclude anything about this method. */
		return s_VOID;
	}
	
	/* Now, we have to check the parameters. */
	for (aux = mC->argumentsList; aux != NULL && parCounter < element->noParameters; aux = aux->next)
	{
		/* If one of the parameters of the function mismatches the type given,
		 * we immediately return with an error.
		 */
		if (element->parameters[parCounter] != checkExpression(aux->exp, environment))
		{
			printf("Line %d: Parameter %d of method '%s' has an incorrect type.\n", mC->line, (parCounter + 1), mC->id);
			errorCount++;
			
			return s_VOID;
		}
		parCounter++;
	}
	
	/* The method call has too many arguments. */
	if (aux != NULL)
	{
		printf("Line %d: Too many arguments for method '%s'.\n", mC->line, mC->id);
		errorCount++;
			
		return s_VOID;
	}
	/* The method call has too few arguments. */
	if (parCounter < element->noParameters)
	{
		printf("Line %d: Too few arguments for method '%s'.\n", mC->line, mC->id);
		errorCount++;
			
		return s_VOID;
	}
	
	/* If everything's ok, we return the type of the method. */
	return element->type;
				
}

tableBasicTypes checkSystemOutPrintln(is_SystemOutPrintln* p, environmentList *environment)
{
	int i, len, counter;
	
	/* Before starting, saves the environemnt of this object. */
	p->env = environment;
	is_Expressions_list* aux;
	is_PrintExpressions_list* exps;
	
	/* This is in the C style printf. */
	if (p->printExps == NULL)
	{
		counter = 0;
		aux = p->argumentsList;
		
		len = strlen(p->literal);
		/* We only need to look to the penultimate position for the % characters. */
		for (i = 0; i < len - 1; i++)
		{
			/* This is a control caracter. */
			if (p->literal[i] == '%')
			{
				/* We have more control caracters than arguments. */
				if (aux == NULL)
				{
					printf("Line %d: Too few arguments for the print line.\n", p->line);
					errorCount++;
					return s_VOID;
				}
				
				/* Else, we need to check whether the type of the expression
				 * and the control caracter are accordingly. 
				 */
				if (p->literal[i + 1] == 'd')
				{
					if (checkExpression(aux->exp, environment) != s_INT)
					{
						printf("Line %d: In the print line call, argument number %d mismatches the control caracter type.\n", p->line, counter);
						errorCount++;
					}
				}
				else if (p->literal[i + 1] == 's')
				{
					if (checkExpression(aux->exp, environment) != s_STRING)
					{
						printf("Line %d: In the print line call, argument number %d mismatches the control caracter type.\n", p->line, counter);
						errorCount++;
					}
				}
				else if (i < len - 2 && p->literal[i + 1] == 'l' && p->literal[i + 2] == 'f')
				{
					if (checkExpression(aux->exp, environment) != s_DOUBLE)
					{
						printf("Line %d: In the print line call, argument number %d mismatches the control caracter type.\n", p->line, counter);
						errorCount++;
					}
				}
				else
				{
					printf("Line %d: In the print line call, unknown type of caracter control number %d.\n", p->line, counter);
					errorCount++;
				}
					
				/* Increases the counter so we can keep track of the argument number
				 * we are at the moment.
				 */	
				counter++;
				aux = aux->next;
			}
			
		}
		
		/* We still have more arguments, but no more control caracters. */
		if (aux != NULL)
		{
			printf("Line %d: Too many arguments for the print line.\n", p->line);
			errorCount++;
		}
	}
	/* There might be some method calls and therefore, we need to save them. */
	else
	{
		for (exps = p->printExps; exps != NULL; exps = exps->next)
			checkBasicElement(exps->bE, environment);
	}

	
	/* If everything's ok, we have to return s_VOID, because it's a print call. */
	return s_VOID;
				
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
	return s_VOID;
	
}

is_PrimitiveType enumInvConverter(tableBasicTypes type)
{
	switch(type)
	{
		case s_BOOLEAN: 		return is_BOOLEAN;
		case s_CHAR:			return is_CHAR;
		case s_BYTE:			return is_BYTE;
		case s_SHORT:			return is_SHORT;
		case s_INT:				return is_INT;
		case s_LONG:			return is_LONG;
		case s_FLOAT:			return is_FLOAT;
		case s_DOUBLE:			return is_DOUBLE;
		case s_VOID:			return is_VOID;
		case s_STRING:			return is_STRING;
		case s_STRING_ARRAY:	return is_STRING_ARRAY;
		//TODO: Watchout for the default!
		default:				return is_VOID;
	}
	
	//TODO: WATCHOUT FOR THE DEFAULT!
	return s_VOID;
	
}

tableBasicTypes convertTypes(tableBasicTypes typeOne, tableBasicTypes typeTwo)
{
	/* TODO WARNING: We aren't considering is_STRING_ARRAYs. */
	/* A string with anything else will return a string. */
	if (typeOne == s_STRING || typeTwo == s_STRING)
		return s_STRING;
		
	/* We can't operate over booleans, they can only be used at relational
	 * expressions.
	 */	
	if (typeOne == s_BOOLEAN || typeTwo == s_BOOLEAN)
		return s_VOID;
		
	/* Automatically converts a type. */
	/* From floats to double. */
	if (typeOne == s_FLOAT)
		typeOne = s_DOUBLE;
	/* And a lot of types to integers... */
	else if (typeOne == s_BYTE || typeOne == s_CHAR || typeOne == s_SHORT || typeOne == s_LONG)
		typeOne = s_INT;

	if (typeTwo == s_FLOAT)
		typeTwo = s_DOUBLE;
	else if(typeTwo == s_BYTE || typeTwo == s_CHAR || typeTwo == s_SHORT || typeTwo == s_LONG)
		typeTwo = s_INT;

	
	/* The types are equal. */
	if (typeOne == typeTwo)
		return typeOne;	

	/* First, we convert floats into doubles. */
	if (typeOne == s_FLOAT)
		typeOne = s_DOUBLE;
	if (typeTwo == s_FLOAT)
		typeTwo = s_DOUBLE;
	
	/* If we have a double at either operands, we return a double,
	 * because at this point we won't have any strings. */	
	if ((typeOne == s_DOUBLE && typeTwo != s_BOOLEAN) || (typeTwo == s_DOUBLE  && typeOne != s_BOOLEAN))
		return s_DOUBLE;
		
	/* The types are incompatible, because at this point, we can
	 * only have integers or strings.
	 */
	return s_VOID;
}

/* Checks if we can assign the assigningExp to the assigned. */
bool compatibilityChecker(tableBasicTypes assigned, tableBasicTypes assigningExp)
{
	/* TODO WARNING: We aren't considering is_STRING_ARRAYs. */
	
	/* Automatically converts a type. */
	/* From floats to double. */
	if (assigned == s_FLOAT)
		assigned = s_DOUBLE;
	/* And a lot of types to integers... */
	else if (assigned == s_BOOLEAN || assigned == s_BYTE || assigned == s_CHAR || assigned == s_SHORT || assigned == s_LONG)
		assigned = s_INT;
	
	/* The types are equal. */
	if (assigned == assigningExp)
		return assigned;
	
	/* We are trying to assign a double to an integer. */
	if (assigned == s_INT && assigningExp == s_DOUBLE)
		return false;
	if (assigned == s_DOUBLE && assigningExp == s_INT)
		return true;
		
	/* If we get here, we are trying to match strings with double/arrays. */
	return false;
}
