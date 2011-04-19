#include <stdio.h>
#include <stdlib.h>
#include "showTree.h"
#include "structures.h"


void showProgramFile(is_ProgramFile* pF)
{
	showClassHeader(pF->classHeader);
	
	/* Now shows the list of field declarations. */
	is_FieldDeclaration_list* aux;
	
	for(aux = pF->fieldDeclarations; aux != NULL; aux = aux->next)
	{
		showFieldDeclaration(aux->fieldDeclaration);
	}
	
	return;
}

void showClassHeader(is_ClassHeader *cH)
{
	printf("The name is %s.\n", cH->id);
	
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
	}
	printf(";\n");
	
	return;
}

void showMethodDeclaration(is_MethodDeclaration* mD)
{
	printf("Method.\n");
	return;
}

void showVariablesDeclarator(is_VariablesDeclarator* vD)
{
	/* TODO: Missing the initialization part. */
	printf("%s ", vD->id);
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
