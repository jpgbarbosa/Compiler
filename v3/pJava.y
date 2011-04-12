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
%token SHORT STATIC STRING SWITCH
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
	| TypeName TypeDimExprs
	;

TypeDimExprs
	: '[' ']'
	| TypeDimExprs '[' ']'
	;

/* TODO: We are keeping this in case we want to expand
 * our gramatic to accept types other than the basic ones.
 * In that case, up there, we have to change the PrimitiveType
 * to TypeName.
 *
/

/* Accepts a primitive type. */
TypeName
	: PrimitiveType
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
	| STRING
	;

/* We can have imports or only a class. */
ProgramFile
	: ClassHeader '{' FieldDeclarations '}'
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

NewAllocationExpression
    	: ArrayAllocationExpression
    	| ArrayAllocationExpression '{' '}'
    	| ArrayAllocationExpression '{' ArrayInitializers '}'
    	;

ArrayAllocationExpression
	: NEW TypeName DimExprs
	;

ArrayInitializers
	: VariableInitializer
	| ArrayInitializers ',' VariableInitializer
	| ArrayInitializers ','
	;

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
	: '[' ArithmeticExpression ']'
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
	;

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

MethodCall
	: ID '(' ArgumentList ')'
	| ID '(' ')'
	;

ArgumentList
	: Expression
	| ArgumentList ',' Expression
	;

UnaryExpression
	: OP_INC   BasicElement
	| OP_DEC   BasicElement
	|          BasicElement OP_INC
	|          BasicElement OP_DEC
	|          BasicElement
	| '!' ID
	/* We can negate the MethodCall or ArrayAccess if it returns a boolean. */
	| '!' MethodCall
	| '!' ArrayAccess
	;

/* The basic elements. */
BasicElement
	: LITERAL
	| MethodCall
	| ID
	| ArrayAccess
	;

ArrayAccess
	: ID '[' ArithmeticExpression ']'
	;

/* TODO: is the third correct? */
CastExpression
	: UnaryExpression
	| '(' PrimitiveType ')' UnaryExpression
	| '(' PrimitiveType ')' '(' AssignmentExpression ')'
	| '(' PrimitiveType ')' '(' ConditionalExpression ')'
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

Expression
	: ConditionalExpression
	| AssignmentExpression
	| '(' Expression ')'
	;


ConditionalExpression
	: RelationalExpression
	| RelationalExpression '?' Expression ':' Expression
	;

AssignmentExpression
	: ID '='     Expression
	| ID '='     NewAllocationExpression
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
