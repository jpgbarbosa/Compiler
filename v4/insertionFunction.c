#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "insertionFunction.h"
#include "structures.h"


#define TP_BOOLEAN 0
#define TP_CHAR 1
#define TP_BYTE 2
#define TP_SHORT 3
#define TP_INT 4
#define TP_LONG 5
#define TP_FLOAT 6
#define TP_DOUBLE 7
#define TP_VOID 8
#define TP_STRING 9
#define TP_STRING_ARRAY 10 


is_TypeSpecifier* insert_TypeSpecifier( is_Typename* typeName)
{
	is_TypeSpecifier* tS = malloc(sizeof(is_TypeSpecifier));
	tS->typeName = typeName;
	return tS;
}

is_Typename* insert_Typename( int type)
{
	is_Typename* tn = malloc(sizeof(is_Typename));
	
	switch(type)
	{
			case(TP_BOOLEAN): tn->type = is_BOOLEAN; break;
			case(TP_CHAR): tn->type = is_CHAR; break;
			case(TP_BYTE): tn->type = is_BYTE; break;
			case(TP_SHORT): tn->type = is_SHORT; break;
			case(TP_INT): tn->type = is_INT; break;
			case(TP_LONG): tn->type = is_LONG; break;
			case(TP_FLOAT): tn->type = is_FLOAT; break;
			case(TP_VOID): tn->type = is_VOID; break;
			case(TP_STRING): tn->type = is_STRING; break;
			case(TP_STRING_ARRAY): tn->type = is_STRING_ARRAY; break;
			default: printf("ERROR ON INSERT_TYPENAME!!!\n");
	}
	
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

/* - - - - - - - - - - - - - - - - - - - - - - */

/* - - - - - - - - - - - - - - - - - - - - - - */

/* - - - - - - - - - - - - - - - - - - - - - - */

/* - - - - - - - - - - - - - - - - - - - - - - */

/* - - - - - - - - - - - - - - - - - - - - - - */

/* - - - - - - - - - - - - - - - - - - - - - - */
