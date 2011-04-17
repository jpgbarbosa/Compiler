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
	
	strcpy(cH->ID_S, id);
	
	return cH;
}
