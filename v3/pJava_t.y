%{
#include <stdio.h>

is_program* myprogram;

%}

%token BOOLEAN BREAK BYTE BYVALUE
%token CASE CAST CHAR CLASS CONST CONTINUE
%token DEFAULT DO DOUBLE
%token ELSE ELSE_IF
%token FLOAT FOR
%token GOTO
%token IF IMPORT INT
%token JNULL
%token LONG
%token NEW
%token OPERATOR
%token PUBLIC
%token RETURN
%token SHORT STATIC SWITCH
%token THIS
%token VAR VOID
%token WHILE
%token OP_INC OP_DEC
%token OP_SHL OP_SHR OP_SHRR
%token OP_GREATER_EQUAL OP_LESS_EQUAL OP_EQUAL OP_DIFFERENT
%token OP_AND OP_OR
%token OP_DIM
%token ASS_MUL ASS_DIV ASS_ADD ASS_SUB
%token IDENTIFIER LITERAL BOOLLIT

%union{
char *id;
char *string;
int int_y;
char char_y;
float float_y;
int boolean;
double double_y
long long_y
short short_y
}

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
	: BOOLEAN		{$$ = insert_type_specifier(boolean);}
	| CHAR			{$$ = insert_type_specifier(char_y);}
	| BYTE			{$$ = insert_type_specifier(/**/);}
	| SHORT			{$$ = insert_type_specifier(short_y);}
	| INT			{$$ = insert_type_specifier(character);}
	| LONG			{$$ = insert_type_specifier(long_y);}
	| FLOAT			{$$ = insert_type_specifier(float_y);}
	| DOUBLE		{$$ = insert_type_specifier(double_y);}
	| VOID			{$$ = insert_type_specifier(/**/);}
	;

CompilationUnit
	: ProgramFile		{myprogram = insert_program ($1); $$=myprogram;}
        ;

ProgramFile
	: ImportStatements TypeDeclarations
	| ImportStatements
	|                  TypeDeclarations {printf("Hello World\n");}
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
	: Modifiers CLASS IDENTIFIER
	|           CLASS IDENTIFIER
	;

Modifiers
	: Modifier
	| Modifiers Modifier
	;

Modifier
	: PUBLIC
	| STATIC
	;


FieldDeclarations
	: FieldDeclaration
        | FieldDeclarations FieldDeclaration
	;

FieldDeclaration
	: FieldVariableDeclaration ';'
	| MethodDeclaration
	| ConstructorDeclaration
	| StaticInitializer
        | NonStaticInitializer
        | TypeDeclaration
	;

FieldVariableDeclaration
	: Modifiers TypeSpecifier VariableDeclarators
	|           TypeSpecifier VariableDeclarators
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
	: Modifiers TypeSpecifier MethodDeclarator        MethodBody
	|           TypeSpecifier MethodDeclarator        MethodBody
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

ConstructorDeclaration
	: Modifiers ConstructorDeclarator        Block
	|           ConstructorDeclarator        Block
	;

ConstructorDeclarator
	: IDENTIFIER '(' ParameterList ')'
	| IDENTIFIER '(' ')'
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
	: LabeledStatement		{$$ = insert_statement(d_lab,$1);}
	| ExpressionStatement ';'	{$$ = insert_statement(d_exp,$1);}
        | SelectionStatement		{$$ = insert_statement(d_sel,$1);}
        | IterationStatement		{$$ = insert_statement(d_ite,$1);}
	| JumpStatement			{$$ = insert_statement(d_jum,$1);}
	| Block				{$$ = insert_statement(d_blo,$1);}
	| ';'				//e preciso??
	;

LabeledStatement
	: IDENTIFIER ':' LocalVariableDeclarationOrStatement
        | CASE ConstantExpression ':' LocalVariableDeclarationOrStatement
	| DEFAULT ':' LocalVariableDeclarationOrStatement
        ;

ExpressionStatement
	: Expression
	;

SelectionStatement
	: IF '(' Expression ')' Statement ElseIfStatement 
        | IF '(' Expression ')' Statement ElseIfStatement ELSE Statement
        | SWITCH '(' Expression ')' Block
        ;

ElseIfStatement
	: ElseIfStatement ELSE_IF '(' Expression ')' Statement 
	| ELSE_IF '(' Expression ')' Statement
	|
	;

IterationStatement
	: WHILE '(' Expression ')' Statement 			{$$ = insert_while_statement($3,$5);}
	| DO Statement WHILE '(' Expression ')' ';'		{$$ = insert_do_while_statement($2,$5);}
	| FOR '(' ForInit ForExpr ForIncr ')' Statement		{$$ = insert_for_statement($3,$4,$5);}
	| FOR '(' ForInit ForExpr         ')' Statement		{$$ = insert_for_statement($3,$4,NULL);}
	;

ForInit
	: ExpressionStatements ';'
	| LocalVariableDeclarationStatement
	| ';'
	;

ForExpr
	: Expression ';'
	| ';'
	;

ForIncr
	: ExpressionStatements
	;

ExpressionStatements
	: ExpressionStatement
	| ExpressionStatements ',' ExpressionStatement
	;

JumpStatement
	: BREAK IDENTIFIER ';'
	| BREAK            ';'
        | CONTINUE IDENTIFIER ';'
	| CONTINUE            ';'
	| RETURN Expression ';'
	| RETURN            ';'
	;

PrimaryExpression
	: QualifiedName
        | QualifiedName '.' NewAllocationExpression
        | QualifiedName '.' THIS
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
	| BOOLLIT
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
	| THIS
	| QualifiedName
	;

ArgumentList
	: Expression
	| ArgumentList ',' Expression
	;

NewAllocationExpression
    	: ArrayAllocationExpression
    	| ClassAllocationExpression
    	| ArrayAllocationExpression '{' '}'
    	| ClassAllocationExpression '{' '}'
    	| ArrayAllocationExpression '{' ArrayInitializers '}'
    	| ClassAllocationExpression '{' FieldDeclarations '}'
    	;

ClassAllocationExpression
	: NEW TypeName '(' ArgumentList ')'
	| NEW TypeName '('              ')'
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
        | ShiftExpression OP_SHRR AdditiveExpression
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

/*
	line_no=1;
	int parsingOK;
	parsingOK = yyparse();
	printf("%d", parsingOK);
	program_environment = semantic_program(myprogram);
	
	show_translation_unit(myprogram->code);
	if(errorcount == 0) {
		translate_program(myprogram,program_environment);
		printf("Compilation Successful!\n");
	}
	else {
		printf("You have: %d errors in your program.\n ", errorcount);
	}

*/
yyparse();
return 0;
}
