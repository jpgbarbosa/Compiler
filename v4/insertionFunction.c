#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insertionFunction.h"
#include "structures.h"


is_TypeSpecifier* insert_TypeSpecifier( is_Typename* typeName)
{
	is_TypeSpecifier* tS = malloc(sizeof(is_TypeSpecifier));
	tS->typeName = typeName;
	return tS;
}

is_Typename* insert_Typename(is_PrimitiveType type)
{
	is_Typename* tn = malloc(sizeof(is_Typename));
	tn->type = type;
	
	return tn;
}

is_ProgramFile* insert_ProgramFile(is_ClassHeader *classHeader, is_FieldDeclaration_list *fieldDeclarations)
{
		is_ProgramFile* pF = malloc(sizeof(is_ProgramFile));
		
		pF->classHeader = classHeader;
		pF->fieldDeclarations = fieldDeclarations;
		
		return pF;
}

is_ClassHeader* insert_ClassHeader(char *id)
{
	is_ClassHeader* cH = malloc(sizeof(is_ClassHeader));
	
	strcpy(cH->id, id);
	
	return cH;
}

is_FieldDeclaration_list* insert_FieldDeclaration_list(is_FieldDeclaration_list* list, is_FieldDeclaration* fD)
{
	/* Creates a new node on the list and fills it with the correct information. */
	is_FieldDeclaration_list* fdl = malloc(sizeof(is_FieldDeclaration_list));
	fdl->fieldDeclaration = fD;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return fdl;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_FieldDeclaration_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
	aux->next=fdl;
	
	/* Returns the head of the list. */
	return list;
}


/* - - - - - is_FieldDeclaration - - - - - - - */

is_FieldDeclaration* insert_FieldDeclaration_AttrDeclaration(is_AttrDeclaration* declaration)
{
	is_FieldDeclaration* fD = malloc(sizeof(is_FieldDeclaration));
	fD->disc_d = d_attrDeclaration;
	fD->data_FieldDeclaration.u_attrDeclaration = declaration;

	return fD;

}

is_FieldDeclaration* insert_FieldDeclaration_MethodDeclaration(is_MethodDeclaration* declaration)
{
	is_FieldDeclaration* fD = malloc(sizeof(is_FieldDeclaration));
	fD->disc_d = d_methodDeclaration;
	fD->data_FieldDeclaration.u_methodDeclaration = declaration;

	return fD;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_AttrDeclaration* insert_AttrDeclaration( is_TypeSpecifier* typeS, is_VariablesDeclarator_list* vD_list)
{
	is_AttrDeclaration* aD = malloc(sizeof(is_AttrDeclaration));
	aD->typeSpecifier = typeS;
	aD->variablesDeclarators = vD_list;
	
	return aD;
	
}

is_VariablesDeclarator_list* insert_VariablesDeclarator_list(is_VariablesDeclarator_list* list, is_VariablesDeclarator* vD)
{
	/* Creates a new node on the list and fills it with the correct information. */
	is_VariablesDeclarator_list* vdl = malloc(sizeof(is_VariablesDeclarator_list));
	vdl->variablesDeclarator = vD;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return vdl;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_VariablesDeclarator_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
	aux->next = vdl;
	
	/* Returns the head of the list. */
	return list;
}

is_VariablesDeclarator* insert_VariablesDeclarator(char *id, is_Expression* exp)
{
	is_VariablesDeclarator* vD = malloc(sizeof(is_VariablesDeclarator));
	vD->expression = exp;
	strcpy(vD->id, id);
	
	return vD;
}

is_MethodDeclaration* insert_MethodDeclaration(is_TypeSpecifier* typeS, is_MethodDeclarator* methodD, is_Block* block)
{
	is_MethodDeclaration* mD = malloc(sizeof(is_MethodDeclaration));
	mD->typeSpecifier = typeS;
	mD->methodDeclarator = methodD;
	mD->block = block;
	
	return mD;
}

is_MethodDeclarator* insert_MethodDeclarator(char *id, is_Parameters_list* list)
{
	is_MethodDeclarator* mD = malloc(sizeof(is_MethodDeclarator));
	strcpy(mD->id, id);
	mD->parametersList = list;
	
	return mD;
}

is_Parameters_list* insert_Parameters_list(is_Parameters_list* list, is_Parameter* par)
{
	/* Creates a new node on the list and fills it with the correct information. */
	is_Parameters_list* pl = malloc(sizeof(is_Parameters_list));
	pl->parameter = par;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return pl;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_Parameters_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
	aux->next = pl;
	
	/* Returns the head of the list. */
	return list;
}

is_Parameter* insert_Parameter(char *id, is_TypeSpecifier* typeS)
{
	is_Parameter* p = malloc(sizeof(is_Parameter));
	p->typeSpecifier = typeS;
	strcpy(p->id, id);
	
	return p;
	
}

is_Block* insert_Block(is_LocalVariableDeclarationsOrStatements_list* list)
{
	is_Block* block = malloc(sizeof(is_Block));
	block->lvdos_list = list;
	
	return block;
}

is_LocalVariableDeclarationsOrStatements_list* insert_LocalVariableDeclarationsOrStatements_list(is_LocalVariableDeclarationsOrStatements_list* list, is_LocalVariableDeclarationsOrStatements* lvdos)
{
	/* Creates a new node on the list and fills it with the correct information. */
	is_LocalVariableDeclarationsOrStatements_list* ll = malloc(sizeof(is_LocalVariableDeclarationsOrStatements_list));
	ll->lvdos = lvdos;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return ll;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_LocalVariableDeclarationsOrStatements_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
	aux->next = ll;
	
	/* Returns the head of the list. */
	return list;
}

/* - - - - is_LocalVariableOrStatement - - - - */

is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds)
{
	is_LocalVariableDeclarationsOrStatements* lvdos = malloc(sizeof(is_LocalVariableDeclarationsOrStatements));
	lvdos->disc_d = d_LocalVariableDelcarationStatement;
	lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds = lvds;
	
	return lvdos;
}

is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_Statement(is_Statement* statement)
{
	is_LocalVariableDeclarationsOrStatements* lvdos = malloc(sizeof(is_LocalVariableDeclarationsOrStatements));
	lvdos->disc_d = d_Statement;
	lvdos->data_LocalVariableDeclarationsOrStatements.u_statement = statement;
	
	return lvdos;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_LocalVariableDeclarationStatement* insert_LocalVariableDeclarationStatement(is_TypeSpecifier* typeS, is_VariablesDeclarator_list* list)
{
	is_LocalVariableDeclarationStatement* lvds = malloc(sizeof(is_LocalVariableDeclarationStatement));
	lvds->typeSpecifier = typeS;
	lvds->variablesDeclarator_list = list;
	
	return lvds;
}

/* - - - - - - - - is_Statement - - - - - - -  */

is_Statement* insert_Statement_LabeledStatement(is_LabeledStatement* labeled)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_LabeledStatement;
	statement->data_Statement.labeledStatement = labeled;
	
	return statement;
}

is_Statement* insert_Statement_Expression(is_Expression* exp)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_StatementExpression;
	statement->data_Statement.expression = exp;
	
	return statement;
}

is_Statement* insert_Statement_SelectionStatement(is_SelectionStatement* selection)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_SelectionStatement;
	statement->data_Statement.selectionStatement = selection;
	
	return statement;
}

is_Statement* insert_Statement_IterationStatement(is_IterationStatement* iteration)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_IterationStatement;
	statement->data_Statement.iterationStatement = iteration;
	
	return statement;
}

is_Statement* insert_Statement_JumpStatement(is_JumpStatement* jump)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_JumpStatement;
	statement->data_Statement.jumpStatement = jump;
	
	return statement;
}

is_Statement* insert_Statement_Block(is_Block* block)
{
	is_Statement* statement = malloc(sizeof(is_Statement));
	statement->disc_d = d_StatementBlock;
	statement->data_Statement.block = block;
	
	return statement;
}

/* - - - - - - is_LabeledStatement - - - - - - */

is_LabeledStatement* insert_LabeledStatement_ID(char *id, is_LocalVariableDeclarationsOrStatements *lvdos)
{
	is_LabeledStatement* lS = malloc(sizeof(is_LabeledStatement));
	lS->disc_d = d_ID;
	lS->lvdos = lvdos;
	strcpy(lS->data_LabeledStatement.id, id);
	
	return lS;
}

is_LabeledStatement* insert_LabeledStatement_CASE(is_LocalVariableDeclarationsOrStatements *lvdos, is_ConditionalExpression* exp)
{
	is_LabeledStatement* lS = malloc(sizeof(is_LabeledStatement));
	lS->disc_d = d_CASE;
	lS->lvdos = lvdos;
	lS->data_LabeledStatement.exp = exp;
	
	return lS;
}

is_LabeledStatement* insert_LabeledStatement_DEFAULT(is_LocalVariableDeclarationsOrStatements *lvdos)
{
	is_LabeledStatement* lS = malloc(sizeof(is_LabeledStatement));
	lS->disc_d = d_DEFAULT;
	lS->lvdos = lvdos;
	
	return lS;
}

/* - - - - - - is_SelectionStatement - - - - - */

is_SelectionStatement* insert_SelectionStatement_IF(is_Expression* exp, is_Statement* stat)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_IF;
	sS->exp = exp;
	sS->data_SelectionStatement.stat = stat;
	
	return sS;
	
}

is_SelectionStatement* insert_SelectionStatement_IFELSE(is_Expression* exp, is_Statement* stat, is_Statement* statTwo)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_IFELSE;
	sS->exp = exp;
	sS->data_SelectionStatement.stat = stat;
	sS->data_SelectionStatement.statSecond = statTwo;
	
	return sS;
	
}

is_SelectionStatement* insert_SelectionStatement_SWITCH(is_Expression* exp, is_Block* block)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_SWITCH;
	sS->exp = exp;
	sS->data_SelectionStatement.block = block;
	
	return sS;
	
}

/* - - - - - - is_IterationStatement - - - - - */

is_IterationStatement* insert_IterationStatement_WHILE(is_Expression* exp, is_Statement* stat)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_WHILE;
	iS->exp = exp;
	iS->statement = stat;
	
	return iS;
	
}

is_IterationStatement* insert_IterationStatement_DO(is_Expression* exp, is_Statement* stat)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_DO;
	iS->exp = exp;
	iS->statement = stat;
	
	return iS;
	
}

is_IterationStatement* insert_IterationStatement_FOR(is_Expression* exp, is_Statement* stat,is_ForInit *forInit, is_Expressions_list *forIncr)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_FOR;
	iS->exp = exp;
	iS->statement = stat;
	
	iS->data_FOR.forInit = forInit;
	iS->data_FOR.forIncr = forIncr;
	
	return iS;
	
}

is_ForInit* insert_ForInit(is_Expressions_list* list, is_LocalVariableDeclarationStatement* lvds)
{
	is_ForInit* fI = malloc(sizeof(is_ForInit));
	fI->list = list;
	fI->lvds = lvds;
	
	return fI;
	
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_Expressions_list* insert_Expressions_list(is_Expressions_list* list, is_Expression* exp)
{
	/* Creates a new node on the list and fills it with the correct information. */
	is_Expressions_list* el = malloc(sizeof(is_Expressions_list));
	el->exp = exp;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return el;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_Expressions_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
	aux->next = el;
	
	/* Returns the head of the list. */
	return list;
}

/* - - - - - - - is_Expression - - - - - - - - */

is_Expression* insert_Expression_ConditionalExpression(is_ConditionalExpression *cExpression)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_ConditionalExp;
	exp->data_Expression.cExpression = cExpression;
	
	return exp;
	
}

is_Expression* insert_Expression_AssignmentExpression(is_AssignmentExpression *aExpression)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_AssignmentExpression;
	exp->data_Expression.aExpression = aExpression;
	
	return exp;
	
}

is_Expression* insert_Expression_Expression(is_Expression *expression)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_Exp;
	exp->data_Expression.expression = expression;
	
	return exp;
	
}

/* - - - - - - - is_JumpStatement - - - - - -  */

is_JumpStatement* insert_JumpStatement_BREAK()
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_BREAK;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_BREAK_ID(char *id)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_BREAK_ID;
	strcpy(jS->data_JumpStatement.id, id);
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_CONTINUE()
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_CONTINUE;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_CONTINUE_ID(char *id)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_CONTINUE_ID;
	strcpy(jS->data_JumpStatement.id,id);
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_RETURN()
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_RETURN;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_RETURN_EXP(is_Expression* exp)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_RETURN_EXP;
	jS->data_JumpStatement.exp = exp;
	
	return jS;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_MethodCall* insert_MethodCall(char *id, is_Expressions_list* list)
{
	is_MethodCall* mC = malloc(sizeof(is_MethodCall));
	mC->argumentsList = list;
	strcpy(mC->id, id);
	
	return mC;
}

is_UnaryExpression* insert_UnaryExpression(is_UnaryOp op, is_BasicElement* element)
{
	is_UnaryExpression* uE = malloc(sizeof(is_UnaryExpression));
	uE->op = op;
	uE->element = element;
	
	return uE;
}

/* - - - - - - - is_BasicElement - - - - - - - */

is_BasicElement* insert_BasicElement_ID(char *id)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_ID;
	strcpy(bE->data_BasicElement.id, id);
	
	return bE;
}

is_BasicElement* insert_BasicElement_LITERAL(char *literal)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_LITERAL;
	strcpy(bE->data_BasicElement.literal, literal);
	
	return bE;
}

is_BasicElement* insert_BasicElement_METHOD_CALL(is_MethodCall* call)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_METHOD_CALL;
	bE->data_BasicElement.methodCall = call;
	
	return bE;
}

/* - - - - - - is_Cast_Expression - - - - - -  */

is_CastExpression* insert_CastExpression_UnaryExpression(is_Typename* castType, is_UnaryExpression *unaryExpression)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_UnaryExpression;
	cE->data_CastExpression.unaryExpression = unaryExpression;
	
	return cE;
}

is_CastExpression* insert_CastExpression_AssignmentExpression(is_Typename* castType,is_AssignmentExpression *assignmentExpression)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_AssignmentExpression;
	cE->data_CastExpression.assignmentExpression = assignmentExpression;
	
	return cE;
}

is_CastExpression* insert_CastExpression_ConditionalExpression(is_Typename* castType, is_ConditionalExpression *conditionalExpression)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_ConditionalExpression;
	cE->data_CastExpression.conditionalExpression = conditionalExpression;
	
	return cE;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_ArithmeticExpression* insert_ArithmeticExpression(is_ArithmeticOp op, is_ArithmeticExpression *firstAE, is_ArithmeticExpression *secondAE, is_CastExpression *cExpression)
{
	is_ArithmeticExpression* aE = malloc(sizeof(is_ArithmeticExpression));
	aE->op = op;
	aE->firstAE = firstAE;
	aE->secondAE = secondAE ;
	aE->cExpression = cExpression;
	
	return aE;
}

is_RelationalExpression* insert_RelationalExpression(is_RelationalOp op, is_ArithmeticExpression *aExpression, is_RelationalExpression *next)
{
	is_RelationalExpression* rE = malloc(sizeof(is_RelationalExpression));
	rE-> op = op;
	rE->aExpression = aExpression;
	rE->next = next;
	
	return rE;
}

is_ConditionalExpression* insert_ConditionalExpression(is_ConditionalType type, is_RelationalExpression *rExpression, is_Expression *firstExp, is_Expression *secondExp)
{
	is_ConditionalExpression* cE = malloc(sizeof(is_ConditionalExpression));
	cE->type = type;
	cE->rExpression = rExpression;
	cE->firstExp = firstExp;
	cE->secondExp = secondExp;
	
	return cE;
}

is_AssignmentExpression* insert_AssignmentExpression(is_AssignmentOp assOp, char *id, is_Expression* expression)
{
	is_AssignmentExpression* aE = malloc(sizeof(is_AssignmentExpression));
	aE->assOp = assOp;
	aE->expression = expression;
	strcpy(aE-> id, id);
	
	return aE;
}
