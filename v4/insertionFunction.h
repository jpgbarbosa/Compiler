/* The header for all the insertion functions. */
#include "structures.h"

is_TypeSpecifier* insert_TypeSpecifier( is_Typename* tyoeName);
is_Typename* insert_Typename( int type);
is_ProgramFile* insert_ProgramFile(is_ClassHeader *classHeader, is_FieldDeclaration_list *fieldDeclarations);
is_ClassHeader* insert_ClassHeader(char *ID);
