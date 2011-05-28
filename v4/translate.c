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

void translateProgramFile(is_ProgramFile* pF)
{
		
	return;
		
}

void translateClassHeader(is_ClassHeader *cH)
{
	return;
}

void translateFieldDeclaration(is_FieldDeclaration* fD)
{
	return;
}

void translateAttrDeclaration(is_AttrDeclaration* aD)
{	
	
}

void translateMethodDeclaration(is_MethodDeclaration* mD)
{
	
}

void translateMethodDeclarator(is_MethodDeclarator* mD, environmentList *environment)
{


}

void translateParameter(is_Parameter* par, environmentList *environment)
{

}

void translateVariablesDeclarator(is_VariablesDeclarator* vD, tableBasicTypes type, environmentList *environment)
{


}

void translateBlock(is_Block* block, environmentList *environment)
{

}

void translateLocalVariableDeclarationsOrStatements(is_LocalVariableDeclarationsOrStatements* lvdos, environmentList *environment)
{

}

void translateLocalVariableDeclarationStatement(is_LocalVariableDeclarationStatement* lvds, environmentList *environment)
{	

}

void translateStatement(is_Statement* s, environmentList *environment)
{


	
}

void translateExpression(is_Expression* exp, environmentList *environment)
{	

	
}

void translateConditionalExpression(is_ConditionalExpression* cExp, environmentList *environment)
{
	
}

void translateAssignmentExpression(is_AssignmentExpression* aExp, environmentList *environment)
{

	
}

void translateLabeledStatement(is_LabeledStatement* lS, environmentList *environment)
{
	
	
}

void translateSelectionStatement(is_SelectionStatement* sS, environmentList *environment)
{
	
	
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

void translateRelationalExpression(is_RelationalExpression* rExp, environmentList *environment)
{
	
	
}

void translateArithmeticExpression(is_ArithmeticExpression* aExp, environmentList *environment)
{
	
}

void translateCastExpression(is_CastExpression* cExp, environmentList *environment)
{

}

void translateUnaryExpression(is_UnaryExpression* uE, environmentList *environment)
{	
	
}


void translateBasicElement(is_BasicElement* bE, environmentList *environment)
{
	
}

void translateMethodCall(is_MethodCall* mC, environmentList *environment)
{
	
}

void translateSystemOutPrintln(is_SystemOutPrintln* p, environmentList *environment)
{
	
}
