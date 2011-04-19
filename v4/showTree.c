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
	printf("Attribute.\n");
	return;
}

void showMethodDeclaration(is_MethodDeclaration* mD)
{
	printf("Method.\n");
	return;
}
