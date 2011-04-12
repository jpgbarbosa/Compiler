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
%token IDENTIFIER LITERAL

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

%start CompilationUnit

%%

TypeSpecifier
	: TypeName
	| TypeName Dims
	;

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

CompilationUnit
	: ProgramFile
        ;

ProgramFile
	: ImportStatements TypeDeclarations
	|                  TypeDeclarations
	;

TypeDeclarations
	: TypeDeclaration
	| TypeDeclarations TypeDeclaration
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
	: IDENTIFIER
	| QualifiedName '.' IDENTIFIER
	;

TypeDeclaration
	: ClassHeader '{' FieldDeclarations '}'
	| ClassHeader '{' '}'
	;

ClassHeader
	: PUBLIC CLASS IDENTIFIER
	;

FieldDeclarations
	: FieldDeclaration
        | FieldDeclarations FieldDeclaration
	;

FieldDeclaration
	: FieldVariableDeclaration ';'
	| MethodDeclaration
	| StaticInitializer
        | NonStaticInitializer
        | TypeDeclaration
	;

FieldVariableDeclaration
	: PUBLIC STATIC TypeSpecifier VariableDeclarators
	|        STATIC TypeSpecifier VariableDeclarators
	;

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

MethodDeclaration
	: PUBLIC STATIC TypeSpecifier MethodDeclarator        MethodBody
	|        STATIC TypeSpecifier MethodDeclarator        MethodBody
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
	: IDENTIFIER
        | DeclaratorName OP_DIM
        ;

MethodBody
	: Block
	| ';'
	;

StaticInitializer
	: STATIC Block
	;

NonStaticInitializer
        : Block
        ;

Block
	: '{' LocalVariableDeclarationsAndStatements '}'
	| '{' '}'
        ;

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
	: IDENTIFIER ':' LocalVariableDeclarationOrStatement
        | CASE ConstantExpression ':' LocalVariableDeclarationOrStatement
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
	: BREAK            ';'
	| CONTINUE            ';'
	| RETURN Expression ';'
	| RETURN            ';'
	;

PrimaryExpression
	: QualifiedName
        | QualifiedName '.' NewAllocationExpression
        | QualifiedName '.' CLASS
        | PrimitiveType '.' CLASS
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
	: MethodAccess '(' ArgumentList ')'
	| MethodAccess '(' ')'
	;

MethodAccess
	: ComplexPrimaryNoParenthesis
	| QualifiedName
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
	: NEW TypeName DimExprs Dims
	| NEW TypeName DimExprs
	;

DimExprs
	: DimExpr
	| DimExprs DimExpr
	;

DimExpr
	: '[' Expression ']'
	;

Dims
	: OP_DIM
	| Dims OP_DIM
	;

PostfixExpression
	: PrimaryExpression
	| RealPostfixExpression
	;

RealPostfixExpression
	: PostfixExpression OP_INC
	| PostfixExpression OP_DEC
	;

UnaryExpression
	: OP_INC UnaryExpression
	| OP_DEC UnaryExpression
	| ArithmeticUnaryOperator CastExpression
	| LogicalUnaryExpression
	;

LogicalUnaryExpression
	: PostfixExpression
	| '!' UnaryExpression
	;

ArithmeticUnaryOperator
	: '+'
	| '-'
	;

CastExpression
	: UnaryExpression
	| '(' PrimitiveTypeExpression ')' CastExpression
	| '(' ClassTypeExpression ')' CastExpression
	| '(' Expression ')' LogicalUnaryExpression
	;

PrimitiveTypeExpression
	: PrimitiveType
        | PrimitiveType Dims
        ;

ClassTypeExpression
	: QualifiedName Dims
        ;

MultiplicativeExpression
	: CastExpression
	| MultiplicativeExpression '*' CastExpression
	| MultiplicativeExpression '/' CastExpression
	| MultiplicativeExpression '%' CastExpression
	;

AdditiveExpression
	: MultiplicativeExpression
        | AdditiveExpression '+' MultiplicativeExpression
	| AdditiveExpression '-' MultiplicativeExpression
        ;

ShiftExpression
	: AdditiveExpression
        | ShiftExpression OP_SHL AdditiveExpression
        | ShiftExpression OP_SHR AdditiveExpression
	;

RelationalExpression
	: ShiftExpression
        | RelationalExpression '<' ShiftExpression
	| RelationalExpression '>' ShiftExpression
	| RelationalExpression OP_LESS_EQUAL ShiftExpression
	| RelationalExpression OP_GREATER_EQUAL ShiftExpression
	;

EqualityExpression
	: RelationalExpression
        | EqualityExpression OP_EQUAL RelationalExpression
        | EqualityExpression OP_DIFFERENT RelationalExpression
        ;

AndExpression
	: EqualityExpression
        | AndExpression '&' EqualityExpression
        ;

ExclusiveOrExpression
	: AndExpression
	| ExclusiveOrExpression '^' AndExpression
	;

InclusiveOrExpression
	: ExclusiveOrExpression
	| InclusiveOrExpression '|' ExclusiveOrExpression
	;

ConditionalAndExpression
	: InclusiveOrExpression
	| ConditionalAndExpression OP_AND InclusiveOrExpression
	;

ConditionalOrExpression
	: ConditionalAndExpression
	| ConditionalOrExpression OP_OR ConditionalAndExpression
	;

ConditionalExpression
	: ConditionalOrExpression
	| ConditionalOrExpression '?' Expression ':' ConditionalExpression
	;

AssignmentExpression
	: ConditionalExpression
	| UnaryExpression AssignmentOperator AssignmentExpression
	;

AssignmentOperator
	: '='
	| ASS_MUL
	| ASS_DIV
	| ASS_ADD
	| ASS_SUB
	| ASS_XOR
	| ASS_MOD
	| ASS_SHL
	| ASS_SHR
	;

Expression
	: AssignmentExpression
        ;

ConstantExpression
	: ConditionalExpression
	;

%%

int main()
{
yyparse();
return 0;
}
