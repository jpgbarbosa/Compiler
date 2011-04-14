#ifndef _STRUCTURES_
#define _STRUCTURES_

#define MAX_SIZE 256

typedef enum {is_BOOLEAN, is_CHAR, is_BYTE, is_SHORT, is_INT, is_LONG, is_FLOAT, is_DOUBLE, is_VOID, is_STRING, is_STRING_ARRAY} is_PrimitiveType;


typedef struct _a2{
	is_PrimitiveType type;
} is_Typename;

typedef struct _a3{
	is_Typename* typeName;

} is_TypeSpecifier;

typedef struct _a5{
	char ID[MAX_SIZE];
	
} is_ClassHeader;

typedef struct _a14{
	is_TypeSpecifier *typeSpecifier;
	char ID[MAX_SIZE];
	
}is_Parameter;

typedef struct _a13{
	is_Parameter *parameter;
	struct _a13 *next;
}is_Parameters_list;

typedef struct _a12{
	char ID[MAX_SIZE];
	is_Parameters_list *parametersList;
	
} is_MethodDeclarator;

/* expression can be null. */
typedef struct _a10{
	char ID[MAX_SIZE];
	is_Expression *expression;
	
} is_VariablesDeclarator;

typedef struct _a9{
	is_VariablesDeclarator *variablesDeclarator;
	struct _a9 *next;
}is_VariablesDeclarator_list;

typedef struct _a18{
	is_TypeSpecifier *typeSpecifier;
	is_VariablesDeclarator_list *variablesDeclarator_list;
	
}is_LocalVariableDeclarationStatement;

typedef enum {d_LabeledStatement, d_StatementExpression, d_SelectionStatement, d_IterationStatement, d_JumpStatement, d_StatementBlock} disc_Statement;
typedef struct _a19{
	disc_Statement disc_d;
	union{
		is_LabeledStatement *labeledStatement;
		is_Expression *expression;
		is_SelectionStatement *selectionStatement;
		is_IterationStatement *iterationStatement;
		is_JumpStatement *jumpStatement;
		is_Block *block;
	}data_Statement;
	
} is_Statement;

typedef enum {d_LocalVariableDelcarationStatement, d_Statement} disc_LocalVariableDeclarationsOrStatements;
typedef struct _a17{
	disc_LocalVariableDeclarationsOrStatements disc_d;
	union{
		is_LocalVariableDeclarationStatement *u_lvds;
		is_Statement *u_statement;
	}data_LocalVariableDeclarationsOrStatements;
}is_LocalVariableDeclarationsOrStatements;

typedef struct _a16{
	is_LocalVariableDeclarationsOrStatements* lvdos;
	struct _a16 *next;
}is_LocalVariableDeclarationsOrStatements_list;

typedef struct _a15{
	is_LocalVariableDeclarationsOrStatements_list *lvdos_list;
} is_Block;

typedef struct _a11{
	is_TypeSpecifier *typeSpecifier;
	is_MethodDeclarator *methodDeclarator;
	is_Block *block;
	
} is_MethodDeclaration;

typedef struct _a8{
		is_TypeSpecifier *typeSpecifier;
		is_VariablesDeclarator_list * variablesDeclarators;
} is_AttrDeclaration;

typedef enum {d_attrDeclaration, d_methodDeclaration} disc_FieldDeclaration;
typedef struct _a7{
	disc_FieldDeclaration disc_d;
	union{
		is_AttrDeclaration *u_attrDeclaration;
		is_MethodDeclaration *u_methodDeclaration;
	}data_FieldDeclaration;
	
} is_FieldDeclaration;

typedef struct _a6{
	is_FieldDeclaration* fieldDeclaration;
	struct _a6 *next;
	
} is_FieldDeclaration_list;

typedef struct _a4{
	is_ClassHeader* classHeader;
	is_FieldDeclaration_list* fieldDeclarations;
	
} is_ProgramFile;

typedef enum {is_ASSIGN, is_ASS_MUL, is_ASS_DIV, is_ASS_ADD, is_ASS_SUB, is_ASS_XOR, is_ASS_MOD, is_ASS_SHL, is_ASS_SHR} is_AssignmentOp;

typedef struct _a1{
	char ID[MAX_SIZE];
	is_AssignmentOp assOp;
	is_Expression* expression;

} is_AssignmnetOperation;

#endif
