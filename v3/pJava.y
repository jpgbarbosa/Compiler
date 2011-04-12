%{
#include <stdio.h>
%}

%token BOOLEAN BREAK BYTE
%token CASE CHAR CLASS CONTINUE
%token DEFAULT DO DOUBLE
%token ELSE
%token FLOAT FOR
%token IF IMPORT INT
%token JNULL
%token LONG
%token NEW
%token OPERATOR
%token PUBLIC
%token RETURN
%token SHORT STATIC SWITCH
%token VOID
%token WHILE
%token OP_INC OP_DEC
%token OP_SHL OP_SHR
%token OP_GREATER_EQUAL OP_LESS_EQUAL OP_EQUAL OP_DIFFERENT
%token OP_AND OP_OR
%token OP_DIM
%token ASS_MUL ASS_DIV ASS_ADD ASS_SUB
%token ASS_XOR ASS_MOD ASS_SHL ASS_SHR
%token ASS_AND ASS_OR
%token ID LITERAL

/* Priorities */
%right ASS_MUL ASS_DIV ASS_ADD ASS_SUB ASS_XOR ASS_MOD ASS_SHL ASS_SHR
%right '='
%left OP_OR
%left OP_AND
%left '|'
%left '^'
%left '&'
%left OP_EQUAL OP_DIFFERENT
%left '>' OP_GREATER_EQUAL
%left '<' OP_LESS_EQUAL
%left OP_SHL OP_SHR
%left '-' '+'
%left '*' '/' '%'
%left '(' ')'
%right OP_INC OP_DEC '~' '!' NEW
%left IF ELSE

%start ProgramFile

%%

/* It can be a single variable or an array. */
TypeSpecifier
	: TypeName
	| TypeName DimExprs
	;

/* Accepts a primitive type or another class. */
TypeName
	: PrimitiveType
	| QualifiedName
	;

PrimitiveType
	: BOOLEAN
	| CHAR
	| BYTE
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| VOID
	;

/* We can have imports or only a class. */
ProgramFile
	: ImportStatements ClassHeader '{' FieldDeclarations '}'
	|                  ClassHeader '{' FieldDeclarations '}'
	;

ImportStatements
	: ImportStatement
	| ImportStatements ImportStatement
	;

ImportStatement
	: IMPORT QualifiedName ';'
	| IMPORT QualifiedName '.' '*' ';'
	;

QualifiedName
	: ID
	| QualifiedName '.' ID
	;

ClassHeader
	: PUBLIC CLASS ID
	| CLASS ID
	;
/* In here, we will declare some attributes of methods. */
FieldDeclarations
	: FieldDeclaration
        | FieldDeclarations FieldDeclaration
	;

FieldDeclaration
	: AttrDeclaration ';'
	| MethodDeclaration
	;

AttrDeclaration
	: PUBLIC STATIC TypeSpecifier VariableDeclarators
	|        STATIC TypeSpecifier VariableDeclarators
	;
/* Declaration of variables (both single and array). */
VariableDeclarators
	: VariableDeclarator
	| VariableDeclarators ',' VariableDeclarator
	;

VariableDeclarator
	: DeclaratorName
	| DeclaratorName '=' VariableInitializer
	;

VariableInitializer
	: Expression
	| '{' '}'
        | '{' ArrayInitializers '}'
        ;

ArrayInitializers
	: VariableInitializer
	| ArrayInitializers ',' VariableInitializer
	| ArrayInitializers ','
	;

/* Declaration of methods. */

MethodDeclaration
	: PUBLIC STATIC TypeSpecifier MethodDeclarator        Block
	|        STATIC TypeSpecifier MethodDeclarator        Block
	;

MethodDeclarator
	: DeclaratorName '(' ParameterList ')'
	| DeclaratorName '(' ')'
	| MethodDeclarator OP_DIM
	;

ParameterList
	: Parameter
	| ParameterList ',' Parameter
	;

Parameter
	: TypeSpecifier DeclaratorName
	;

DeclaratorName
	: ID
        | DeclaratorName OP_DIM
        ;

Block
	: '{' LocalVariableDeclarationsAndStatements '}'
	| '{' '}'
        ;

/* Declarations of variables and use of statements. */
LocalVariableDeclarationsAndStatements
	: LocalVariableDeclarationOrStatement
	| LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement
	;

LocalVariableDeclarationOrStatement
	: LocalVariableDeclarationStatement
	| Statement
	;

LocalVariableDeclarationStatement
	: TypeSpecifier VariableDeclarators ';'
	;

Statement
	: ';'
	;

/*Statement
	: LabeledStatement
	| Expression ';'
        | SelectionStatement
        | IterationStatement
	| JumpStatement
	| Block
	| ';'
	;

LabeledStatement
	: ID ':' LocalVariableDeclarationOrStatement
        | CASE ConditionalExpression ':' LocalVariableDeclarationOrStatement
	| DEFAULT ':' LocalVariableDeclarationOrStatement
        ;

SelectionStatement
	: IF '(' Expression ')' Statement
        | IF '(' Expression ')' Statement ELSE Statement
        | SWITCH '(' Expression ')' Block
        ;

IterationStatement
	: WHILE '(' Expression ')' Statement
	| DO Statement WHILE '(' Expression ')' ';'
	| FOR '(' ForInit ForExpr ForIncr ')' Statement
	| FOR '(' ForInit ForExpr         ')' Statement
	;

ForInit
	: Expressions ';'
	| LocalVariableDeclarationStatement
	| ';'
	;

ForExpr
	: Expression ';'
	| ';'
	;

ForIncr
	: Expressions
	;/*

Expressions
	: Expression
	| Expressions ',' Expression
	;

JumpStatement
	: BREAK ID ';'
	| BREAK            ';'
        | CONTINUE ID ';'
	| CONTINUE            ';'
	| RETURN Expression ';'
	| RETURN            ';'
	;

PrimaryExpression
	: QualifiedName
	| NotJustName
	;

NotJustName
	: NewAllocationExpression
	| ComplexPrimary
	;

ComplexPrimary
	: '(' Expression ')'
	| ComplexPrimaryNoParenthesis
	;

ComplexPrimaryNoParenthesis
	: LITERAL
	| ArrayAccess
	| MethodCall
	;

ArrayAccess
	: QualifiedName '[' Expression ']'
	| ComplexPrimary '[' Expression ']'
	;

MethodCall
	: ID '(' ArgumentList ')'
	| ID '(' ')'
	;

ArgumentList
	: Expression
	| ArgumentList ',' Expression
	;

NewAllocationExpression
    	: ArrayAllocationExpression
    	| ArrayAllocationExpression '{' '}'
    	| ArrayAllocationExpression '{' ArrayInitializers '}'
    	;

ArrayAllocationExpression
	: NEW TypeName DimExprs
	;
*/

/* TODO: Corrigir isto. */
DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
	: '[' Expression ']'
	| '[' ']'
	;
/*
UnaryExpression
	: OP_INC UnaryExpression
	| OP_DEC UnaryExpression
	|        UnaryExpression OP_INC
	|	 UnaryExpression OP_DEC
	| '!' UnaryExpression
	| ArithmeticUnaryOperator CastExpression
	| ID
	| LITERAL
	;

ArithmeticUnaryOperator
	: '+'
	| '-'
	;
*/

UnaryExpression
	: OP_INC ID
	| OP_DEC ID
	| ID OP_INC
	| ID OP_DEC
	| BasicElement
	| '!' ID
	;

/* The basic elements. */
BasicElement
	: ID
	| LITERAL
	;


/* TODO: The second should be Expression. */
CastExpression
	: UnaryExpression
	| '(' PrimitiveType ')' UnaryExpression
	;

ArithmeticExpression
	: CastExpression
	| ArithmeticExpression  '+'   ArithmeticExpression
	| ArithmeticExpression  '-'   ArithmeticExpression
	| ArithmeticExpression  '/'   ArithmeticExpression
	| ArithmeticExpression  '*'   ArithmeticExpression
	| ArithmeticExpression  '%'   ArithmeticExpression
	| ArithmeticExpression OP_SHL ArithmeticExpression
	| ArithmeticExpression OP_SHR ArithmeticExpression
        ;


RelationalExpression
	: ArithmeticExpression
        | ArithmeticExpression '<' 	        RelationalExpression
        | ArithmeticExpression '>' 	        RelationalExpression
        | ArithmeticExpression OP_LESS_EQUAL    RelationalExpression
        | ArithmeticExpression OP_GREATER_EQUAL RelationalExpression
        | ArithmeticExpression OP_EQUAL	        RelationalExpression
        | ArithmeticExpression OP_DIFFERENT	RelationalExpression
        | ArithmeticExpression '&'		RelationalExpression
        | ArithmeticExpression '^'		RelationalExpression
        | ArithmeticExpression '|'		RelationalExpression
        | ArithmeticExpression OP_AND		RelationalExpression
        | ArithmeticExpression OP_OR		RelationalExpression
	;

/*
BinaryExpression
	: ArithmeticExpression
	| AssignmentExpression
	;

Expression
	: BinaryExpression
	| ConditionalExpression
	| UnaryExpression
	;
*/

Expression
	: ConditionalExpression
	| AssignmentExpression
	;


ConditionalExpression
	: RelationalExpression
	| RelationalExpression '?' Expression ':' Expression
	;

AssignmentExpression
	: ID '='     Expression
	| ID ASS_MUL Expression
	| ID ASS_DIV Expression
	| ID ASS_ADD Expression
	| ID ASS_SUB Expression
	| ID ASS_XOR Expression
	| ID ASS_MOD Expression
	| ID ASS_SHL Expression
	| ID ASS_SHR Expression
	;


%%

int main()
{
yyparse();
return 0;
}
