#ifndef _STRUCTURES_
#define _STRUCTURES_

#define MAX_SIZE 256
typedef struct _a1 is_AssignmentExpression;
typedef struct _a2 is_Typename;
typedef struct _a3 is_TypeSpecifier;
typedef struct _a4 is_ProgramFile;
typedef struct _a5 is_ClassHeader;
typedef struct _a6 is_FieldDeclaration_list;
typedef struct _a7 is_FieldDeclaration;
typedef struct _a8 is_AttrDeclaration;
typedef struct _a9 is_VariablesDeclarator_list;
typedef struct _a10 is_VariablesDeclarator;
typedef struct _a11 is_MethodDeclaration;
typedef struct _a12 is_MethodDeclarator;
typedef struct _a13 is_Parameters_list;
typedef struct _a14 is_Parameter;
typedef struct _a15 is_Block;
typedef struct _a16 is_LocalVariableDeclarationsOrStatements_list;
typedef struct _a17 is_LocalVariableDeclarationsOrStatements;
typedef struct _a18 is_LocalVariableDeclarationStatement;
typedef struct _a19 is_Statement;
typedef struct _a20 is_BasicElement;
typedef struct _a21 is_MethodCall;
typedef struct _a22 is_Expressions_list;
typedef struct _a23 is_UnaryExpression;
typedef struct _a24 is_CastExpression;
typedef struct _a25 is_ArithmeticExpression;
typedef struct _a26 is_RelationalExpression;
typedef struct _a27 is_Expression;
typedef struct _a28 is_ConditionalExpression;
typedef struct _a29 is_IterationStatement;
typedef struct _a30 is_LabeledStatement;
typedef struct _a31 is_JumpStatement;
typedef struct _a32 is_SelectionStatement;
typedef struct _a33 is_ForInit;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */
typedef enum {is_ID, is_LITERAL, is_METHOD_CALL} disc_BasicElement;

struct _a20{
	disc_BasicElement disc_d;
	union{
		char id[MAX_SIZE];
		/* TODO: We may have to change the LITERAL to something else. */
		char literal[MAX_SIZE];
		is_MethodCall *methodCall; /* It can be NULL in case we are not using it. */
	}data_BasicElement;

} /*is_BasicElement*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */
typedef enum {is_OP_INC_AFTER, is_OP_DCR_AFTER, is_OP_INC_BEFORE, is_OP_DCR_BEFORE, is_OP_DIFFERENT_UNARY, is_NONE} is_UnaryOp;

struct _a23{
	is_UnaryOp op;
	is_BasicElement *element;
	
} /*is_UnaryExpression*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a22{
	is_Expression *exp;
	is_Expressions_list *next;
	
} /*is_Expressions_list*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */
struct _a21{
	char id[MAX_SIZE];
	is_Expressions_list *argumentsList; /* The list of arguments is a list of expressions. */
	
} /*is_MethodCall */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_PLUS, is_MINUS, is_SLASH, is_TIMES, is_MODULO, is_OP_SHL, is_OP_SHR, is_AE_NONE} is_ArithmeticOp;
	
struct _a25{
	is_ArithmeticExpression *firstAE;
	is_ArithmeticExpression *secondAE;
	is_CastExpression *cExpression;
	is_ArithmeticOp op;
	
} /*is_ArithmeticExpression*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_OP_GREATER, is_OP_LESS, is_OP_LESS_EQUAL, is_OP_GREATER_EQUAL, is_OP_EQUAL, is_OP_DIFFERENT, is_OP_SAND, is_OP_SXOR, is_OP_SOR, is_OP_AND, is_OP_OR, is_RE_NONE} is_RelationalOp;
	
struct _a26{
	is_ArithmeticExpression *aExpression;
	is_RelationalExpression *next; /* It's null if it's the last element. */
	is_RelationalOp op; /* If the above is NULL, this is useless. */
	
} /*is_RelationalExpression*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_BOOLEAN, is_CHAR, is_BYTE, is_SHORT, is_INT, is_LONG, is_FLOAT, is_DOUBLE, is_VOID, is_STRING, is_STRING_ARRAY} is_PrimitiveType;

struct _a2{
	is_PrimitiveType type;
} /*is_Typename*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a3{
	is_Typename* typeName;

} /*is_TypeSpecifier*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_UnaryExpression, d_AssignmentExpression, d_ConditionalExpression} disc_CastExpression;
struct _a24{
	disc_CastExpression disc_d;
	union{
		is_UnaryExpression *unaryExpression;
		is_AssignmentExpression *assignmentExpression;
		is_ConditionalExpression *conditionalExpression;
	}data_CastExpression;
	
	is_PrimitiveType primitiveType; /* It is used when we make a cast. Otherwise, it remains NULL. */
	
} /*is_CastExpression*/;
/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a5{
	char id[MAX_SIZE];
	
} /*is_ClassHeader*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a14{
	is_TypeSpecifier *typeSpecifier;
	char id[MAX_SIZE];
	
}/*is_Parameter*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a13{
	is_Parameter *parameter;
	is_Parameters_list *next;
}/*is_Parameters_list*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a12{
	char id[MAX_SIZE];
	is_Parameters_list *parametersList;
	
} /*is_MethodDeclarator*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

/* expression can be null. */
struct _a10{
	char id[MAX_SIZE];
	is_Expression *expression;
	
} /*is_VariablesDeclarator*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a9{
	is_VariablesDeclarator *variablesDeclarator;
	is_VariablesDeclarator_list *next;

}/*is_VariablesDeclarator_list*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a18{
	is_TypeSpecifier *typeSpecifier;
	is_VariablesDeclarator_list *variablesDeclarator_list;
	
}/*is_LocalVariableDeclarationStatement*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_WHILE, is_DO, is_FOR} disc_IterationStatement;

struct _a29{
	disc_IterationStatement disc_d;
	/* In the case of the FOR, it will be used for the ForExpr. */
	is_Expression *exp;
	is_Statement *statement;
	
	/* Only concerns the FOR. */
	union{
		/* ForInit. */
		is_ForInit *forInit;
		/* ForIncr. */
		is_Expressions_list *forIncr;
	}data_FOR;
	
} /* is_IterationStatement */;

struct _a33{
	is_Expressions_list* list;
	is_LocalVariableDeclarationStatement* lvds;
	
} /* is_ForInit */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_ID, d_CASE, d_DEFAULT} disc_LabeledStatement;

struct _a30{
	disc_LabeledStatement disc_d;
	is_LocalVariableDeclarationsOrStatements *lvdos;
	/* We might or not use these depending on value of the above enumeration. */
	union{
		char id[MAX_SIZE];
		is_ConditionalExpression *exp;
	}data_LabeledStatement;
	
} /* is_LabeledStatement */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_BREAK, is_BREAK_ID, is_CONTINUE, is_CONTINUE_ID, is_RETURN, is_RETURN_EXP} disc_JumpStatement;

struct _a31{
	disc_JumpStatement disc_d;
	/* Both may not be used. */
	union{
		char id[MAX_SIZE];
		is_Expression *exp;
	}data_JumpStatement;
	
} /* is_JumpStatement. */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_IF, is_IFELSE, is_SWITCH} disc_SelectionStatement;

struct _a32{
	disc_SelectionStatement disc_d;
	is_Expression *exp;
	/* We might or not use these depending on value of the above enumeration. */
	union{
		is_Statement *stat;
		is_Statement *statSecond;
		is_Block *block;
	}data_SelectionStatement;
	
} /* is_SelectionStatement */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_LabeledStatement, d_StatementExpression, d_SelectionStatement, d_IterationStatement, d_JumpStatement, d_StatementBlock} disc_Statement;
struct _a19{
	disc_Statement disc_d;
	union{
		is_LabeledStatement *labeledStatement;
		is_Expression *expression;
		is_SelectionStatement *selectionStatement;
		is_IterationStatement *iterationStatement;
		is_JumpStatement *jumpStatement;
		is_Block *block;
	}data_Statement;
	
} /*is_Statement*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_LocalVariableDelcarationStatement, d_Statement} disc_LocalVariableDeclarationsOrStatements;
struct _a17{
	disc_LocalVariableDeclarationsOrStatements disc_d;
	union{
		is_LocalVariableDeclarationStatement *u_lvds;
		is_Statement *u_statement;
	}data_LocalVariableDeclarationsOrStatements;
} /*is_LocalVariableDeclarationsOrStatements */;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a16{
	is_LocalVariableDeclarationsOrStatements* lvdos;
	is_LocalVariableDeclarationsOrStatements_list *next;
} /*is_LocalVariableDeclarationsOrStatements_list*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a15{
	is_LocalVariableDeclarationsOrStatements_list *lvdos_list;
} /*is_Block*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a11{
	is_TypeSpecifier *typeSpecifier;
	is_MethodDeclarator *methodDeclarator;
	is_Block *block;
	
} /*is_MethodDeclaration*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a8{
		is_TypeSpecifier *typeSpecifier;
		is_VariablesDeclarator_list * variablesDeclarators;
} /*is_AttrDeclaration*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_attrDeclaration, d_methodDeclaration} disc_FieldDeclaration;
struct _a7{
	disc_FieldDeclaration disc_d;
	union{
		is_AttrDeclaration *u_attrDeclaration;
		is_MethodDeclaration *u_methodDeclaration;
	}data_FieldDeclaration;
	
} /*is_FieldDeclaration*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a6{
	is_FieldDeclaration* fieldDeclaration;
	struct _a6 *next;
	
} /*is_FieldDeclaration_list*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

struct _a4{
	is_ClassHeader* classHeader;
	is_FieldDeclaration_list* fieldDeclarations;
	
} /*is_ProgramFile*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {d_ConditionalExp, d_AssignmentExp, d_Exp} disc_Expression;
struct _a27{
	disc_Expression disc_d;
	union{
		is_ConditionalExpression *cExpression;
		is_AssignmentExpression *aExpression;
		is_Expression *expression;
	}data_Expression;
	
} /*is_Expression*/;

/* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -  */

typedef enum {is_UNARY, is_UNARY_NOT, is_TRINARY} is_ConditionalType;

struct _a28{
	is_ConditionalType type;
	is_RelationalExpression *rExpression;
	/* Both can be NULL if we aren't using a trinary operator. */
	is_Expression *firstExp;
	is_Expression *secondExp;
	
} /*is_ConditionalExpression*/;

typedef enum {is_ASSIGN, is_ASS_MUL, is_ASS_DIV, is_ASS_ADD, is_ASS_SUB, is_ASS_XOR, is_ASS_MOD, is_ASS_SHL, is_ASS_SHR} is_AssignmentOp;

struct _a1{
	char id[MAX_SIZE];
	is_AssignmentOp assOp;
	is_Expression* expression;

} /*is_AssignmnetExpression*/;

#endif
