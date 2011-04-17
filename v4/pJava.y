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
TypeSpecifier /*TODO: WITH STRUCT*/
	: TypeName
	;

/* TODO: We are keeping this in case we want to expand
 * our gramatic to accept types other than the basic ones.
 * In that case, up there, we have to change the PrimitiveType
 * to TypeName.
 *
/

/* Accepts a primitive type. */
TypeName /*TODO: WITH STRUCT*/
	: PrimitiveType
	;

PrimitiveType /*TODO: WITH STRUCT*/
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
	| STRING '['']'
	;

/* We can have imports or only a class. */
ProgramFile /*TODO: WITH STRUCT*/
	: ClassHeader '{' FieldDeclarations '}'
	;

ClassHeader /*TODO: WITH STRUCT*/
	: PUBLIC CLASS ID
	| CLASS ID
	;
/* In here, we will declare some attributes of methods. */
FieldDeclarations /*TODO: WITH STRUCT*/
	: FieldDeclaration
        | FieldDeclarations FieldDeclaration
	;

FieldDeclaration /*TODO: WITH STRUCT*/
	: AttrDeclaration ';'
	| MethodDeclaration
	;

AttrDeclaration /*TODO: WITH STRUCT*/
	: PUBLIC STATIC TypeSpecifier VariableDeclarators
	|        STATIC TypeSpecifier VariableDeclarators
	;
/* Declaration of variables (both single and array). */
VariableDeclarators /*TODO: WITH STRUCT*/
	: VariableDeclarator
	| VariableDeclarators ',' VariableDeclarator
	;

VariableDeclarator /*TODO: WITH STRUCT*/
	: ID
	| ID '=' Expression
	;

/* Declaration of methods. */

MethodDeclaration /*TODO: WITH STRUCT*/
	: PUBLIC STATIC TypeSpecifier MethodDeclarator        Block
	|        STATIC TypeSpecifier MethodDeclarator        Block
	;

MethodDeclarator /*TODO: WITH STRUCT*/
	: ID '(' ParameterList ')'
	| ID '(' ')'
	;

ParameterList /*TODO: WITH STRUCT*/
	: Parameter
	| ParameterList ',' Parameter
	;

Parameter /*TODO: WITH STRUCT*/
	: TypeSpecifier ID
	;

Block /*TODO: WITH STRUCT*/
	: '{' LocalVariableDeclarationsAndStatements '}'
	| '{' '}'
        ;

/* Declarations of variables and use of statements. */

/* Used to perform a list of declarations or statements. */
LocalVariableDeclarationsAndStatements /*TODO: WITH STRUCT*/
	: LocalVariableDeclarationOrStatement
	| LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement
	;

LocalVariableDeclarationOrStatement /*TODO: WITH STRUCT*/
	: LocalVariableDeclarationStatement
	| Statement
	;

LocalVariableDeclarationStatement /*TODO: WITH STRUCT*/
	: TypeSpecifier VariableDeclarators ';'
	;

Statement /*TODO: WITH STRUCT*/
	: LabeledStatement
	| Expression ';'
        | SelectionStatement
        | IterationStatement
	| JumpStatement
	| Block
	| ';'
	;

LabeledStatement /*TODO: WITH STRUCT*/
	: ID ':' LocalVariableDeclarationOrStatement
        | CASE ConditionalExpression ':' LocalVariableDeclarationOrStatement
	| DEFAULT ':' LocalVariableDeclarationOrStatement
        ;

SelectionStatement /*TODO: WITH STRUCT*/
	: IF '(' Expression ')' Statement
        | IF '(' Expression ')' Statement ELSE Statement
        | SWITCH '(' Expression ')' Block
        ;

IterationStatement /*TODO: WITH STRUCT*/
	: WHILE '(' Expression ')' Statement
	| DO Statement WHILE '(' Expression ')' ';'
	| FOR '(' ForInit ForExpr ForIncr ')' Statement
	| FOR '(' ForInit ForExpr         ')' Statement
	;

ForInit /*TODO: WITH STRUCT*/
	: Expressions ';'
	| LocalVariableDeclarationStatement
	| ';'
	;

ForExpr /*TODO: WITH STRUCT*/
	: Expression ';'
	| ';'
	;

ForIncr /*TODO: WITH STRUCT*/
	: Expressions
	;

Expressions /*TODO: WITH STRUCT*/
	: Expression
	| Expressions ',' Expression
	;

JumpStatement /*TODO: WITH STRUCT*/
	: BREAK ID ';'
	| BREAK            ';'
        | CONTINUE ID ';'
	| CONTINUE            ';'
	| RETURN Expression ';'
	| RETURN            ';'
	;

MethodCall /*TODO: WITH STRUCT*/
	: ID '(' ArgumentList ')'
	| ID '(' ')'
	;

ArgumentList /*TODO: WITH STRUCT*/
	: Expression
	| ArgumentList ',' Expression
	;

UnaryExpression /*TODO: WITH STRUCT*/
	: OP_INC   BasicElement
	| OP_DEC   BasicElement
	|          BasicElement OP_INC
	|          BasicElement OP_DEC
	|          BasicElement
	| '!' ID
	| '!' MethodCall /* We can negate the MethodCall if it returns a boolean. */
	;

/* The basic elements. */
BasicElement /*TODO: WITH STRUCT*/
	: LITERAL
	| MethodCall
	| ID
	;

/* TODO: is the third correct? */
CastExpression /*TODO: WITH STRUCT*/
	: UnaryExpression
	| '(' PrimitiveType ')' UnaryExpression
	| '(' PrimitiveType ')' '(' AssignmentExpression ')'
	| '(' PrimitiveType ')' '(' ConditionalExpression ')'
	;

ArithmeticExpression /*TODO: WITH STRUCT*/
	: CastExpression
	| ArithmeticExpression  '+'   ArithmeticExpression
	| ArithmeticExpression  '-'   ArithmeticExpression
	| ArithmeticExpression  '/'   ArithmeticExpression
	| ArithmeticExpression  '*'   ArithmeticExpression
	| ArithmeticExpression  '%'   ArithmeticExpression
	| ArithmeticExpression OP_SHL ArithmeticExpression
	| ArithmeticExpression OP_SHR ArithmeticExpression
        ;


RelationalExpression /*TODO: WITH STRUCT*/
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

Expression /*TODO: WITH STRUCT*/
	: ConditionalExpression
	| AssignmentExpression
	| '(' Expression ')'
	;


ConditionalExpression /*TODO: WITH STRUCT*/
	: RelationalExpression
	| '!' '(' RelationalExpression ')'
	| RelationalExpression '?' Expression ':' Expression
	;

AssignmentExpression /*TODO: WITH STRUCT*/
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
