#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "translate.h"


extern progEnv *pEnv;

void translateProgramFile(FILE* dest, is_ProgramFile* pF)
{
		
	return;
		
}

void translateClassHeader(FILE* dest, is_ClassHeader *cH)
{
	return;
}

void translateFieldDeclaration(FILE* dest, is_FieldDeclaration* fD)
{
	return;
}

void translateAttrDeclaration(FILE* dest, is_AttrDeclaration* aD)
{	
	
}

void translateMethodDeclaration(FILE* dest, is_MethodDeclaration* mD)
{
	
}

void translateMethodDeclarator(FILE* dest, is_MethodDeclarator* mD, environmentList *environment)
{


}

void translateParameter(FILE* dest, is_Parameter* par, environmentList *environment)
{

}

void translateVariablesDeclarator(FILE* dest, is_VariablesDeclarator* vD, tableBasicTypes type, environmentList *environment)
{


}

void translateBlock(FILE* dest, is_Block* block, environmentList *environment)
{

}

void translateLocalVariableDeclarationsOrStatements(FILE* dest, is_LocalVariableDeclarationsOrStatements* lvdos, environmentList *environment)
{

}

void translateLocalVariableDeclarationStatement(FILE* dest, is_LocalVariableDeclarationStatement* lvds, environmentList *environment)
{	

}

void translateStatement(FILE* dest, is_Statement* s, environmentList *environment)
{


	
}

void translateExpression(FILE* dest, is_Expression* exp, environmentList *environment)
{	

	
}

void translateConditionalExpression(FILE* dest, is_ConditionalExpression* cExp, environmentList *environment)
{
	
}

void translateAssignmentExpression(FILE* dest, is_AssignmentExpression* aExp, environmentList *environment)
{

	
}

void translateLabeledStatement(FILE* dest, is_LabeledStatement* lS, environmentList *environment)
{
	
	
}

void translateSelectionStatement(FILE* dest, is_SelectionStatement* sS, environmentList *environment)
{
	
	
}

void translateIterationStatement(FILE* dest, is_IterationStatement* iS, environmentList *environment)
{
	
	
	
}

void translateForInit(FILE* dest, is_ForInit* fI, environmentList *environment)
{
	

	
}

void translateJumpStatement(FILE* dest, is_JumpStatement* jS, environmentList *environment)
{
	
	
}

void translateRelationalExpression(FILE* dest, is_RelationalExpression* rExp, environmentList *environment)
{
	
	
}

void translateArithmeticExpression(FILE* dest, is_ArithmeticExpression* aExp, environmentList *environment)
{
	
}

void translateCastExpression(FILE* dest, is_CastExpression* cExp, environmentList *environment)
{

}

void translateUnaryExpression(FILE* dest, is_UnaryExpression* uE, environmentList *environment)
{	
	
}


void translateBasicElement(FILE* dest, is_BasicElement* bE, environmentList *environment)
{
	
}

void translateMethodCall(FILE* dest, is_MethodCall* mC, environmentList *environment)
{
	
}

void translateSystemOutPrintln(FILE* dest, is_SystemOutPrintln* p, environmentList *environment)
{
	
}
