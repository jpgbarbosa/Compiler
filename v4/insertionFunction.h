/* The header for all the insertion functions. */
#include "structures.h"

is_TypeSpecifier* insert_TypeSpecifier( is_Typename* tyoeName);
is_Typename* insert_Typename( int type);
is_ProgramFile* insert_ProgramFile(is_ClassHeader *classHeader, is_FieldDeclaration_list *fieldDeclarations);
is_ClassHeader* insert_ClassHeader(char *ID);
is_FieldDeclaration_list* insert_FieldDeclaration_list(is_FieldDeclaration_list* list, is_FieldDeclaration* fD);
is_FieldDeclaration* insert_FieldDeclaration_AttrDeclaration(is_AttrDeclaration* declaration);
is_FieldDeclaration* insert_FieldDeclaration_MethodDeclaration(is_MethodDeclaration* declaration);
is_AttrDeclaration* insert_AttrDeclaration( is_TypeSpecifier* typeS, is_VariablesDeclarator_list* vD_list);
is_VariablesDeclarator_list* insert_VariablesDeclarator_list(is_VariablesDeclarator_list* list, is_VariablesDeclarator* vD);
is_VariablesDeclarator* insert_VariablesDeclarator(char *id, is_Expression* exp);
is_MethodDeclaration* insert_MethodDeclaration(is_TypeSpecifier* typeS, is_MethodDeclarator* methodD, is_Block* block);
is_MethodDeclarator* insert_MethodDeclarator(char *id, is_Parameters_list* list);
is_Parameters_list* insert_Parameters_list(is_Parameters_list* list, is_Parameter* par);
is_Parameter* insert_Parameter(char *id, is_TypeSpecifier* typeS);
is_Block* insert_Block(is_LocalVariableDeclarationsOrStatements_list* list);

