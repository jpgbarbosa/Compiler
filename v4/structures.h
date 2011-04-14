#ifndef _STRUCTURES_
#define _STRUCTURES_

typedef enum {is_BOOLEAN, is_CHAR, is_BYTE, is_SHORT, is_INT, is_LONG, is_FLOAT, is_DOUBLE, is_VOID, is_STRING} is_PrimitiveType;

typedef struct _a3{
	is_Typename* typeName;
	is

} is_TypeSpecifier;

typedef struct _a2{
	is_PrimitiveType type;
} is_Typename;

typedef enum {is_ASSIGN, is_ASS_MUL, is_ASS_DIV, is_ASS_ADD, is_ASS_SUB, is_ASS_XOR, is_ASS_MOD, is_ASS_SHL, is_ASS_SHR} is_AssignmentOp;

typedef struct _a1{
	char[256] ID;
	is_AssignmentOp assOp;
	is_Expression* expression;

} is_AssignmnetOperation;

#endif
