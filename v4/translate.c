#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "structures.h"
#include "symbolTable.h"
#include "semantics.h"
#include "translate.h"

extern progEnv *pEnv;

void translateProgramFile(is_ProgramFile* pF)
{
	/* First, we create the file where we will be writing all the output. */
	FILE *dest;
	/* We are assuming that the class name has no more than 255 characters.
	 * We will be adding to the final the extension '.c' 
	 */
	char fileName[258];
	int len;
	sprintf(fileName, "%s", pF->classHeader->id);
	len = strlen(fileName);
	fileName [len] = '.';
	fileName [len + 1] = 'c';
	fileName [len + 2] = '\0';
	dest = fopen(fileName, "w");
	
	/* Now, we have to call some functions to start writing the final code. */
	translateHeader(dest);
	translateGlobalVariables(dest);
	translateMethods(dest);
	translateFooter(dest);
	
	
	/* Closes the output file. */
	fclose(dest);
	
	return;
		
}

void translateHeader(FILE* dest)
{
	/* This header writes in the output file all C headers that our
	 * program will need, as well as the start of the main.
	 */
	 
	fprintf(dest, "#include \"frame.h\"\n");
	fprintf(dest, "#include <stdlib.h>\n");
	fprintf(dest, "#include <stdio.h>\n\n");
	fprintf(dest, "int main()\n{\n");
	fprintf(dest, "frame* sp=NULL;\n");
	
	return;
}

void translateFooter(FILE* dest)
{
	/* Finishes the output file. */
	fprintf(dest, "\n}\n\n");
	
	return;
}

void translateGlobalVariables(FILE* dest)
{
		
	tableElement* gTable = pEnv->globalTable->locals;

	/* Prints, one by one, all the global variables. */
	for(; gTable; gTable = gTable->next)
		if (gTable->type != s_METHOD)
			translateVariablesDeclarator(dest, gTable, true);

}

void translateMethods(FILE* dest)
{
	return;
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

void translateVariablesDeclarator(FILE* dest, tableElement* element, bool isGlobal)
{
	/* This is used to distinguish local from global variables. */
	char varScope[2];
	int offset = element->offset;
	
	if (isGlobal)
		varScope[0] = 'g';
	else
		varScope[0] = 'l';
	varScope[1] = '\0';
		
	/* Declaration of variables according to their type. */
	switch(element->type)
	{
		case s_BOOLEAN:	fprintf(dest, "int %s%d;\n", varScope, offset); break;
		case s_CHAR:	fprintf(dest, "char %s%d;\n", varScope, offset); break;
		case s_SHORT:	fprintf(dest, "short %s%d;\n", varScope, offset); break;
		case s_INT:		fprintf(dest, "int %s%d;\n", varScope, offset); break;
		case s_LONG:	fprintf(dest, "long %s%d;\n", varScope, offset); break;
		case s_FLOAT:	fprintf(dest, "float %s%d;\n", varScope, offset); break;
		case s_DOUBLE:	fprintf(dest, "double %s%d;\n", varScope, offset); break;
		case s_VOID:	fprintf(dest, "void %s%d;\n", varScope, offset); break;
		
		//TODO: There are still Strings and string arrays!
		default:break;
	}

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
