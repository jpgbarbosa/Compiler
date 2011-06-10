#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "insertionFunction.h"
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"

extern progEnv* pEnv;

is_TypeSpecifier* insert_TypeSpecifier( is_Typename* typeName, int line)
{
	is_TypeSpecifier* tS = malloc(sizeof(is_TypeSpecifier));
	tS->typeName = typeName;
	tS->line = line;

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

is_ClassHeader* insert_ClassHeader(char *id, int line)
{
	is_ClassHeader* cH = malloc(sizeof(is_ClassHeader));
	
	strcpy(cH->id, id);
	
	cH->line = line;

	
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

is_FieldDeclaration* insert_FieldDeclaration_AttrDeclaration(is_AttrDeclaration* declaration, int line)
{
	is_FieldDeclaration* fD = malloc(sizeof(is_FieldDeclaration));
	fD->disc_d = d_attrDeclaration;
	fD->data_FieldDeclaration.u_attrDeclaration = declaration;
	fD->line = line;

	return fD;

}

is_FieldDeclaration* insert_FieldDeclaration_MethodDeclaration(is_MethodDeclaration* declaration, int line)
{
	is_FieldDeclaration* fD = malloc(sizeof(is_FieldDeclaration));
	fD->disc_d = d_methodDeclaration;
	fD->data_FieldDeclaration.u_methodDeclaration = declaration;
	fD->line = line;

	return fD;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_AttrDeclaration* insert_AttrDeclaration( is_TypeSpecifier* typeS, is_VariablesDeclarator_list* vD_list, int line)
{
	is_AttrDeclaration* aD = malloc(sizeof(is_AttrDeclaration));
	aD->typeSpecifier = typeS;
	aD->variablesDeclarators = vD_list;
	aD->line = line;
	
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

is_VariablesDeclarator* insert_VariablesDeclarator(char *id, is_Expression* exp, int line)
{
	is_VariablesDeclarator* vD = malloc(sizeof(is_VariablesDeclarator));
	vD->expression = exp;
	strcpy(vD->id, id);
	vD->line = line;
	
	return vD;
}

is_MethodDeclaration* insert_MethodDeclaration(is_TypeSpecifier* typeS, is_MethodDeclarator* methodD, is_Block* block, int line)
{
	is_MethodDeclaration* mD = malloc(sizeof(is_MethodDeclaration));
	mD->typeSpecifier = typeS;
	mD->methodDeclarator = methodD;
	mD->block = block;
	mD->line = line;
	
	/* We need to this second search to insert the type of the method. */
	tableElement* element = searchSymbolGlobal(methodD->id, true);

	if (element != NULL)
		element->type = enumConverter(typeS->typeName->type);
	
	return mD;
}

is_MethodDeclarator* insert_MethodDeclarator(char *id, is_Parameters_list* list, int line)
{
	is_MethodDeclarator* mD = malloc(sizeof(is_MethodDeclarator));
	strcpy(mD->id, id);
	mD->parametersList = list;
	mD->line = line;
	
	/* Inserts the method in the list of global symbols. */
	tableElement *sym = insertSymbol(mD->id, -1, s_METHOD, pEnv->globalTable, NULL, true);
	
	if (sym == NULL)
		printf("Line %d: There's already a symbol with that name ('%s')!\n", mD->line, mD->id);
	else
	{
		sym->noParameters = 0;
		/* Now, we insert the number of types of the parameters. */
		is_Parameters_list *aux;
		for (aux = list; aux; aux = aux-> next)
			sym->parameters[sym->noParameters++] = enumConverter(aux->parameter->typeSpecifier->typeName->type);
	}

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

is_Parameter* insert_Parameter(char *id, is_TypeSpecifier* typeS, int line)
{
	is_Parameter* p = malloc(sizeof(is_Parameter));
	p->typeSpecifier = typeS;
	strcpy(p->id, id);
	p->line = line;
	
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

is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, int line)
{
	is_LocalVariableDeclarationsOrStatements* lvdos = malloc(sizeof(is_LocalVariableDeclarationsOrStatements));
	lvdos->disc_d = d_LocalVariableDeclarationStatement;
	lvdos->data_LocalVariableDeclarationsOrStatements.u_lvds = lvds;
	lvdos->line = line;
	
	return lvdos;
}

is_LocalVariableDeclarationsOrStatements* insert_LocalVariableDeclarationsOrStatements_Statement(is_Statement* statement, int line)
{
	is_LocalVariableDeclarationsOrStatements* lvdos = malloc(sizeof(is_LocalVariableDeclarationsOrStatements));
	lvdos->disc_d = d_Statement;
	lvdos->data_LocalVariableDeclarationsOrStatements.u_statement = statement;
	lvdos->line = line;
	
	return lvdos;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_LocalVariableDeclarationStatement* insert_LocalVariableDeclarationStatement(is_TypeSpecifier* typeS, is_VariablesDeclarator_list* list, int line)
{
	is_LocalVariableDeclarationStatement* lvds = malloc(sizeof(is_LocalVariableDeclarationStatement));
	lvds->typeSpecifier = typeS;
	lvds->variablesDeclarator_list = list;
	lvds->line = line;
	
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

is_LabeledStatement* insert_LabeledStatement_CASE(is_LocalVariableDeclarationsOrStatements *lvdos, is_ConditionalExpression* exp, int line)
{
	is_LabeledStatement* lS = malloc(sizeof(is_LabeledStatement));
	lS->disc_d = d_CASE;
	lS->lvdos = lvdos;
	lS->line = line;
	lS->exp = exp;
	
	return lS;
}

is_LabeledStatement* insert_LabeledStatement_DEFAULT(is_LocalVariableDeclarationsOrStatements *lvdos, int line)
{
	is_LabeledStatement* lS = malloc(sizeof(is_LabeledStatement));
	lS->disc_d = d_DEFAULT;
	lS->line = line;
	lS->lvdos = lvdos;
	
	return lS;
}

/* - - - - - - is_SelectionStatement - - - - - */

is_SelectionStatement* insert_SelectionStatement_IF(is_Expression* exp, is_Statement* stat, int line)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_IF;
	sS->exp = exp;
	sS->stat = stat;
	sS->statSecond = NULL;
	sS->line = line;
	
	return sS;
	
}

is_SelectionStatement* insert_SelectionStatement_IFELSE(is_Expression* exp, is_Statement* stat, is_Statement* statTwo, int line)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_IFELSE;
	sS->exp = exp;
	sS->stat = stat;
	sS->statSecond = statTwo;
	sS->line = line;
	
	return sS;
	
}

is_SelectionStatement* insert_SelectionStatement_SWITCH(is_Expression* exp, is_Block* block, int line)
{
	is_SelectionStatement* sS = malloc(sizeof(is_SelectionStatement));
	sS->disc_d = is_SWITCH;
	sS->exp = exp;
	sS->block = block;
	sS->line = line;
	
	return sS;
	
}

/* - - - - - - is_IterationStatement - - - - - */

is_IterationStatement* insert_IterationStatement_WHILE(is_Expression* exp, is_Statement* stat,int line)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_WHILE;
	iS->exp = exp;
	iS->statement = stat;
	iS->line = line;
	
	return iS;
	
}

is_IterationStatement* insert_IterationStatement_DO(is_Expression* exp, is_Statement* stat,int line)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_DO;
	iS->exp = exp;
	iS->statement = stat;
	iS->line = line;
	
	return iS;
	
}

is_IterationStatement* insert_IterationStatement_FOR(is_Expression* exp, is_Statement* stat,is_ForInit *forInit, is_Expressions_list *forIncr,int line)
{
	is_IterationStatement* iS = malloc(sizeof(is_IterationStatement));
	iS->disc_d = is_FOR;
	iS->exp = exp;
	iS->statement = stat;
	iS->line = line;
	
	iS->forInit = forInit;
	iS->forIncr = forIncr;
	
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

is_Expression* insert_Expression_ConditionalExpression(is_ConditionalExpression *cExpression, int line)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_ConditionalExp;
	exp->data_Expression.cExpression = cExpression;
	exp->line = line;
	
	return exp;
	
}

is_Expression* insert_Expression_AssignmentExpression(is_AssignmentExpression *aExpression, int line)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_AssignmentExpression;
	exp->data_Expression.aExpression = aExpression;
	exp->line = line;
	
	return exp;
	
}

is_Expression* insert_Expression_Expression(is_Expression *expression, int line)
{
	is_Expression* exp = malloc(sizeof(is_Expression));
	exp->disc_d = d_Exp;
	exp->data_Expression.expression = expression;
	exp->line = line;
	
	return exp;
	
}

/* - - - - - - - is_JumpStatement - - - - - -  */

is_JumpStatement* insert_JumpStatement_BREAK(int line)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_BREAK;
	jS->line = line;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_CONTINUE(int line)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_CONTINUE;
	jS->line = line;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_RETURN(int line)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_RETURN;
	jS->line = line;
	
	return jS;
}

is_JumpStatement* insert_JumpStatement_RETURN_EXP(is_Expression* exp, int line)
{
	is_JumpStatement* jS = malloc(sizeof(is_JumpStatement));
	jS->disc_d = is_RETURN_EXP;
	jS->exp = exp;
	jS->line = line;
	
	return jS;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_MethodCall* insert_MethodCall(char *id, is_Expressions_list* list, int line)
{
	is_MethodCall* mC = malloc(sizeof(is_MethodCall));
	mC->argumentsList = list;
	mC->line = line;
	strcpy(mC->id, id);
	
	return mC;
}

is_SystemOutPrintln* insert_SystemOutPrintln(char *literal, is_Expressions_list* list, int line)
{
	is_SystemOutPrintln* p = malloc(sizeof(is_SystemOutPrintln));
	p->argumentsList = list;
	p->line = line;
	p->printExps = NULL;
	strcpy(p->literal, literal);
	
	return p;
}

is_SystemOutPrintln* insert_SystemOutPrintlnJavaStyle(is_PrintExpressions_list* list, int line)
{
	is_SystemOutPrintln* p = malloc(sizeof(is_SystemOutPrintln));
	p->argumentsList = NULL;
	p->line = line;
	p->printExps = list;
	
	return p;
}

is_PrintExpressions_list* insert_PrintExpressions_list(is_PrintExpressions_list* list, is_BasicElement* bE)
{

	/* Creates a new node on the list and fills it with the correct information. */
	is_PrintExpressions_list* el = malloc(sizeof(is_PrintExpressions_list));
	el->bE = bE;
	
	/* It's an empty list, so this will be the first element. */
	if(list == NULL)
		return el;

	/* Else, we have to find the tail of the list and add this node in that position. */
	is_PrintExpressions_list* aux;
			
	for(aux = list; aux->next != NULL; aux = aux->next);
		aux->next = el;
	
	/* Returns the head of the list. */
	return list;
}

is_UnaryExpression* insert_UnaryExpression(is_UnaryOp op, is_BasicElement* element, int line)
{
	is_UnaryExpression* uE = malloc(sizeof(is_UnaryExpression));
	uE->op = op;
	uE->element = element;
	uE->line = line;

	return uE;
}

/* - - - - - - - is_BasicElement - - - - - - - */

is_BasicElement* insert_BasicElement_ID(char *id, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_ID;
	strcpy(bE->data_BasicElement.name, id);
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_LITERAL(char *literal, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_LITERAL;
	strcpy(bE->data_BasicElement.name, literal);
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_METHOD_CALL(is_MethodCall* call, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_METHOD_CALL;
	bE->data_BasicElement.methodCall = call;
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_PRINTLN(is_SystemOutPrintln* print, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_PRINTLN;
	bE->data_BasicElement.print = print;
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_TRUE(char* literal, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_TRUE;
	bE->line = line;
	
	
	
	return bE;
}

is_BasicElement* insert_BasicElement_FALSE(char* literal, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_FALSE;
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_INTEGER(int i, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_INTEGER;
	bE->data_BasicElement.i = i;
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_FLOATPOINT(double d, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_FLOATPOINT;
	bE->data_BasicElement.d = d;
	bE->line = line;
	
	return bE;
}

is_BasicElement* insert_BasicElement_ARGS(int i, int line)
{
	is_BasicElement* bE = malloc(sizeof(is_BasicElement));
	bE->disc_d = is_ARGS;
	bE->data_BasicElement.i = i;
	bE->line = line;
	
	return bE;
}

/* - - - - - - is_Cast_Expression - - - - - -  */

is_CastExpression* insert_CastExpression_UnaryExpression(is_TypeSpecifier* castType, is_UnaryExpression *unaryExpression, int line)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_UnaryExpression;
	cE->data_CastExpression.unaryExpression = unaryExpression;
	cE->castType = castType;
	cE->line = line;	

	return cE;
}

is_CastExpression* insert_CastExpression_AssignmentExpression(is_TypeSpecifier* castType,is_AssignmentExpression *assignmentExpression, int line)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_AssignmentExpression;
	cE->data_CastExpression.assignmentExpression = assignmentExpression;
	cE->castType = castType;
	cE->line = line;	
	
	return cE;
}

is_CastExpression* insert_CastExpression_ConditionalExpression(is_TypeSpecifier* castType, is_ConditionalExpression *conditionalExpression, int line)
{
	is_CastExpression* cE = malloc(sizeof(is_CastExpression));
	cE->disc_d = d_ConditionalExpression;
	cE->data_CastExpression.conditionalExpression = conditionalExpression;
	cE->castType = castType;
	cE->line = line;	
	
	return cE;
}

/* - - - - - - - - - - - - - - - - - - - - - - */

is_ArithmeticExpression* insert_ArithmeticExpression(is_ArithmeticOp op, is_ArithmeticExpression *firstAE, is_ArithmeticExpression *secondAE, is_CastExpression *cExpression, int line)
{
	is_ArithmeticExpression* aE = malloc(sizeof(is_ArithmeticExpression));
	aE->op = op;
	aE->firstAE = firstAE;
	aE->secondAE = secondAE ;
	aE->cExpression = cExpression;
	aE->line = line;
	
	return aE;
}

is_RelationalExpression* insert_RelationalExpression(is_RelationalOp op, is_ArithmeticExpression *aExpression, is_RelationalExpression *next, int line)
{
	is_RelationalExpression* rE = malloc(sizeof(is_RelationalExpression));
	rE-> op = op;
	rE->aExpression = aExpression;
	rE->next = next;
	rE->line = line;
	
	return rE;
}

is_ConditionalExpression* insert_ConditionalExpression(is_ConditionalType type, is_RelationalExpression *rExpression, is_Expression *firstExp, is_Expression *secondExp, int line)
{
	is_ConditionalExpression* cE = malloc(sizeof(is_ConditionalExpression));
	cE->type = type;
	cE->rExpression = rExpression;
	cE->firstExp = firstExp;
	cE->secondExp = secondExp;
	cE->line = line;
	
	return cE;
}

is_ConditionalExpression* insert_ConditionalExpressionMultiple(is_ConditionalType type, is_RelationalExpression *rExpression, is_ConditionalExpression* cExpression, int line)
{
	is_ConditionalExpression* cE = malloc(sizeof(is_ConditionalExpression));
	cE->type = type;
	cE->rExpression = rExpression;
	cE->next = cExpression;
	cE->line = line;
	
	return cE;
}

is_AssignmentExpression* insert_AssignmentExpression(char *id, is_AssignmentOp assOp, is_Expression* expression, int line)
{
	is_AssignmentExpression* aE = malloc(sizeof(is_AssignmentExpression));
	aE->assOp = assOp;
	aE->expression = expression;
	strcpy(aE-> id, id);
	aE->line = line;
	
	return aE;
}
