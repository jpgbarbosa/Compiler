%{
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "insertionFunction.h"
#include "structures.h"
#include "showTree.h"
#include "symbolTable.h"
#include "semantics.h"
#include "translate.h"

extern int line_no;

progEnv *pEnv = NULL;

/* Used to know if a method has a return in it or not. */
bool hasReturn = false;


/* The pointer that will hold the start of the AST. */
is_ProgramFile* myProgram;

%}

/* All the tokens in our program. */
%token ARGS
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
%token PUBLIC PRINTLN
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
%token <id> ID
%token <id> LITERAL
%token <id> TRUE
%token <id> FALSE
%token <i> INTEGER
%token <d> FLOATPOINT

%nonassoc LOW_PRIORITY 

%type <_typeSpecifier> TypeSpecifier;
%type <_typename> TypeName;
%type <_programFile> ProgramFile;
%type <_classHeader> ClassHeader;
%type <_fieldDeclaration_list> FieldDeclarations;
%type <_fieldDeclaration> FieldDeclaration;
%type <_attrDeclaration> AttrDeclaration;
%type <_variablesDeclarator_list> VariableDeclarators;
%type <_variablesDeclarator> VariableDeclarator;
%type <_methodDeclaration> MethodDeclaration;
%type <_methodDeclarator> MethodDeclarator;
%type <_parameters_list> ParameterList;
%type <_parameter> Parameter;
%type <_block> Block;
%type <_localVariableDeclarationsOrStatements_list> LocalVariableDeclarationsAndStatements;
%type <_localVariableDeclarationsOrStatements> LocalVariableDeclarationOrStatement;
%type <_localVariableDeclarationStatement> LocalVariableDeclarationStatement;
%type <_statement> Statement;
%type <_labeledStatement> LabeledStatement;
%type <_selectionStatement> SelectionStatement;
%type <_iterationStatement> IterationStatement;
%type <_forInit> ForInit;
%type <_expression> ForExpr;
%type <_expressions_list> Expressions;
%type <_jumpStatement> JumpStatement;
%type <_methodCall> MethodCall;
%type <_systemOutPrintln> SystemOutPrintln;
%type <_unaryExpression> UnaryExpression;
%type <_basicElement> BasicElement;
%type <_castExpression> CastExpression;
%type <_arithmeticExpression> ArithmeticExpression;
%type <_relationalExpression> RelationalExpression;
%type <_expression> Expression;
%type <_conditionalExpression> ConditionalExpression;
%type <_assignmentExpression> AssignmentExpression;
%type <_printExpressions_list> PrintExpressions

/* Priorities */
%right ASS_MUL ASS_DIV ASS_ADD ASS_SUB ASS_XOR ASS_MOD ASS_SHL ASS_SHR
%right '='
%left '|'
%left '^'
%left '&'
%left OP_EQUAL OP_DIFFERENT
%left '>' OP_GREATER_EQUAL
%left '<' OP_LESS_EQUAL
%left OP_OR
%left OP_AND
%left OP_SHL OP_SHR
%left '-' '+'
%left '*' '/' '%'
%left '(' ')'
%right OP_INC OP_DEC '~' '!' NEW
%left IF ELSE

/* To save the returning types of the insertion functions. */
%union{
	int i;
	double d;
	char* id;
	is_TypeSpecifier* _typeSpecifier;
	is_Typename* _typename;
	is_ProgramFile* _programFile;
	is_ClassHeader* _classHeader;
	is_FieldDeclaration_list* _fieldDeclaration_list;
	is_FieldDeclaration* _fieldDeclaration;
	is_AttrDeclaration* _attrDeclaration;
	is_VariablesDeclarator_list* _variablesDeclarator_list;
	is_VariablesDeclarator* _variablesDeclarator;
	is_MethodDeclaration* _methodDeclaration;
	is_MethodDeclarator* _methodDeclarator;
	is_Parameters_list* _parameters_list;
	is_Parameter* _parameter;
	is_Block* _block;
	is_LocalVariableDeclarationsOrStatements_list* _localVariableDeclarationsOrStatements_list;
	is_LocalVariableDeclarationsOrStatements* _localVariableDeclarationsOrStatements;
	is_LocalVariableDeclarationStatement* _localVariableDeclarationStatement;
	is_Statement* _statement;
	is_LabeledStatement* _labeledStatement;
	is_SelectionStatement* _selectionStatement;
	is_IterationStatement* _iterationStatement;
	is_ForInit* _forInit;
	is_Expressions_list* _expressions_list;
	is_Expression* _expression;
	is_JumpStatement* _jumpStatement;
	is_MethodCall* _methodCall;
	is_SystemOutPrintln* _systemOutPrintln;
	is_UnaryExpression* _unaryExpression;
	is_BasicElement* _basicElement;
	is_CastExpression* _castExpression;
	is_ArithmeticExpression* _arithmeticExpression;
	is_RelationalExpression* _relationalExpression;
	is_ConditionalExpression* _conditionalExpression;
	is_AssignmentExpression* _assignmentExpression;
	is_PrintExpressions_list* _printExpressions_list;
}


%start ProgramFile

%%

/* This allows extending our grammar to types other than the
 * standard ones.
 */
TypeSpecifier
	: TypeName 		{$$ = insert_TypeSpecifier($1, line_no);}
	;


TypeName
	/* The primitive types. */
	: BOOLEAN				{$$ = insert_Typename(is_BOOLEAN);}
	| CHAR					{$$ = insert_Typename(is_CHAR);}
	| BYTE					{$$ = insert_Typename(is_BYTE);}
	| SHORT					{$$ = insert_Typename(is_SHORT);}
	| INT					{$$ = insert_Typename(is_INT);}
	| LONG					{$$ = insert_Typename(is_LONG);}
	| FLOAT					{$$ = insert_Typename(is_FLOAT);}
	| DOUBLE				{$$ = insert_Typename(is_DOUBLE);}
	| VOID					{$$ = insert_Typename(is_VOID);}
	| STRING				{$$ = insert_Typename(is_STRING);}
	| STRING '['']'     	{$$ = insert_Typename(is_STRING_ARRAY);}
	;

/* We can have imports or only a class. */
ProgramFile
	: ClassHeader '{' FieldDeclarations '}'		{$$ = insert_ProgramFile($1, $3); myProgram = $$;}
	;

ClassHeader
	: PUBLIC CLASS ID 		{$$ = insert_ClassHeader($3, line_no);}
	| CLASS ID 				{$$ = insert_ClassHeader($2, line_no);}
	;
/* In here, we will declare some attributes of methods. */
FieldDeclarations
	: FieldDeclaration							{$$ = insert_FieldDeclaration_list(NULL, $1);}
        | FieldDeclarations FieldDeclaration	{$$ = insert_FieldDeclaration_list($1, $2);}
	;

FieldDeclaration
	: AttrDeclaration ';'		{$$ = insert_FieldDeclaration_AttrDeclaration($1,line_no);}
	| MethodDeclaration			{$$ = insert_FieldDeclaration_MethodDeclaration($1,line_no);}
	;

AttrDeclaration
	: PUBLIC STATIC TypeSpecifier VariableDeclarators	{$$ = insert_AttrDeclaration($3, $4,line_no);}
	|        STATIC TypeSpecifier VariableDeclarators	{$$ = insert_AttrDeclaration($2, $3,line_no);}
	;
/* Declaration of variables. */
VariableDeclarators
	: VariableDeclarator								{$$ = insert_VariablesDeclarator_list(NULL, $1);}
	| VariableDeclarators ',' VariableDeclarator		{$$ = insert_VariablesDeclarator_list($1, $3);}
	;

VariableDeclarator
	: ID					{$$ = insert_VariablesDeclarator($1, NULL,line_no);}
	| ID '=' Expression		{$$ = insert_VariablesDeclarator($1, $3,line_no);}
	;

/* Declaration of methods. */

MethodDeclaration
	: PUBLIC STATIC TypeSpecifier MethodDeclarator        Block	{$$ = insert_MethodDeclaration($3, $4, $5, line_no); $4->isReturnOk = hasReturn; hasReturn = false;}
	|        STATIC TypeSpecifier MethodDeclarator        Block	{$$ = insert_MethodDeclaration($2, $3, $4, line_no); $3->isReturnOk = hasReturn; hasReturn = false;}
	;

MethodDeclarator
	: ID '(' ParameterList ')'	{$$ = insert_MethodDeclarator($1, $3, line_no);}
	| ID '(' ')'				{$$ = insert_MethodDeclarator($1, NULL, line_no);}
	;

ParameterList
	: Parameter						{$$ = insert_Parameters_list(NULL, $1);}
	| ParameterList ',' Parameter	{$$ = insert_Parameters_list($1, $3);}
	;

Parameter
	: TypeSpecifier ID		{$$ = insert_Parameter($2, $1, line_no);}
	| TypeSpecifier ARGS	{$$ = insert_Parameter("args", $1, line_no);}
	;

Block
	: '{' LocalVariableDeclarationsAndStatements '}'	{$$ = insert_Block($2);}
	| '{' '}'											{$$ = insert_Block(NULL);}
    ;

/* Declarations of variables and use of statements. */

/* Used to perform a list of declarations or statements. */
LocalVariableDeclarationsAndStatements
	: LocalVariableDeclarationOrStatement											{$$ = insert_LocalVariableDeclarationsOrStatements_list(NULL, $1);}
	| LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement	{$$ = insert_LocalVariableDeclarationsOrStatements_list($1, $2);}
	;

LocalVariableDeclarationOrStatement
	: LocalVariableDeclarationStatement		{$$ = insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement($1,line_no);}
	| Statement								{$$ = insert_LocalVariableDeclarationsOrStatements_Statement($1,line_no);}
	;

LocalVariableDeclarationStatement
	: TypeSpecifier VariableDeclarators ';'		{$$ = insert_LocalVariableDeclarationStatement($1, $2, line_no);}
	;

Statement
	: LabeledStatement			{$$ = insert_Statement_LabeledStatement($1);}
	| Expression ';'			{$$ = insert_Statement_Expression($1);}
	| SelectionStatement		{$$ = insert_Statement_SelectionStatement($1);}
	| IterationStatement		{$$ = insert_Statement_IterationStatement($1);}
	| JumpStatement				{$$ = insert_Statement_JumpStatement($1);}
	| Block						{$$ = insert_Statement_Block($1);}
	| ';'						{$$ = insert_EmptyStatement();}
	;

LabeledStatement
	: CASE ConditionalExpression ':' LocalVariableDeclarationOrStatement			{$$ = insert_LabeledStatement_CASE($4, $2, line_no);}
	| CASE '(' ConditionalExpression ')' ':' LocalVariableDeclarationOrStatement	{$$ = insert_LabeledStatement_CASE($6, $3, line_no);}
	| DEFAULT ':' LocalVariableDeclarationOrStatement								{$$ = insert_LabeledStatement_DEFAULT($3, line_no);}
	;

SelectionStatement
	: IF '(' Expression ')' Statement ELSE Statement	{$$ = insert_SelectionStatement_IFELSE($3, $5, $7,line_no);}
	| IF '(' Expression ')' Statement					{$$ = insert_SelectionStatement_IF($3, $5,line_no);}
	| SWITCH '(' Expression ')' Block					{$$ = insert_SelectionStatement_SWITCH($3, $5,line_no);}
	;

IterationStatement
	: WHILE '(' Expression ')' Statement					{$$ = insert_IterationStatement_WHILE($3, $5, line_no);}
	| DO Statement WHILE '(' Expression ')' ';'				{$$ = insert_IterationStatement_DO($5, $2, line_no);}
	| FOR '(' ForInit ForExpr Expressions ')' Statement		{$$ = insert_IterationStatement_FOR($4, $7, $3, $5, line_no);}
	| FOR '(' ForInit ForExpr         ')' Statement			{$$ = insert_IterationStatement_FOR($4, $6, $3, NULL, line_no);}
	;

ForInit
	: Expressions ';'						{$$ = insert_ForInit($1, NULL);}
	| LocalVariableDeclarationStatement		{$$ = insert_ForInit(NULL, $1);}
	| ';'									{$$ = NULL;}
	;

ForExpr
	: ConditionalExpression ';'		{$$ = insert_Expression_ConditionalExpression($1,line_no);}
	| AssignmentExpression	';' 	{$$ = insert_Expression_AssignmentExpression($1,line_no);}
	| '(' Expression ')'    ';'		{$$ = insert_Expression_Expression($2,line_no);}
	| ';'							{$$ = NULL;}
	;

Expressions
	: Expression					{$$ = insert_Expressions_list(NULL, $1);}
	| Expressions ',' Expression	{$$ = insert_Expressions_list($1, $3);}
	;

JumpStatement
	: BREAK               ';'		{$$ = insert_JumpStatement_BREAK(line_no);}
	| CONTINUE            ';'		{$$ = insert_JumpStatement_CONTINUE(line_no);}
	| RETURN   Expression ';'		{hasReturn = true; $$ = insert_JumpStatement_RETURN_EXP($2,line_no);}
	| RETURN              ';'		{hasReturn = true; $$ = insert_JumpStatement_RETURN(line_no);}
	;

MethodCall
	/* List of arguments. */
	: ID '(' Expressions ')'	{$$ = insert_MethodCall($1, $3, line_no);}
	| ID '(' ')'				{$$ = insert_MethodCall($1, NULL, line_no);}
	;

SystemOutPrintln
	/* List of arguments. */
	: PRINTLN '(' LITERAL ',' Expressions ')'		{$$ = insert_SystemOutPrintln($3, $5, line_no);}
	| PRINTLN '(' PrintExpressions ')'				{$$ = insert_SystemOutPrintlnJavaStyle($3, line_no);}
	;
	
PrintExpressions
	: BasicElement							{$$ = insert_PrintExpressions_list(NULL, $1);}
	| PrintExpressions '+' BasicElement		{$$ = insert_PrintExpressions_list($1, $3);}
	;

UnaryExpression
	: OP_INC   BasicElement				{$$ = insert_UnaryExpression(is_OP_INC_BEFORE, $2,line_no);}
	| OP_DEC   BasicElement				{$$ = insert_UnaryExpression(is_OP_DCR_BEFORE, $2,line_no);}
	|          BasicElement OP_INC		{$$ = insert_UnaryExpression(is_OP_INC_AFTER, $1,line_no);}
	|          BasicElement OP_DEC		{$$ = insert_UnaryExpression(is_OP_DCR_AFTER, $1,line_no);}
	|          BasicElement				{$$ = insert_UnaryExpression(is_NONE, $1,line_no);}
	/* We can negate the MethodCall if it returns a boolean.
	 * The same applies for the literal, if it's true or false.
         */
	| '!' 	   BasicElement				{$$ = insert_UnaryExpression(is_OP_DIFFERENT_UNARY, $2,line_no);}
	;
/* The basic elements. */
BasicElement
	: LITERAL				{$$ = insert_BasicElement_LITERAL($1, line_no);}
	| MethodCall			{$$ = insert_BasicElement_METHOD_CALL($1, line_no);}
	| ID					{$$ = insert_BasicElement_ID($1, line_no);}
	| TRUE					{$$ = insert_BasicElement_TRUE($1, line_no);}
	| FALSE					{$$ = insert_BasicElement_FALSE($1, line_no);}
	| INTEGER				{$$ = insert_BasicElement_INTEGER(yylval.i, line_no);}
	| FLOATPOINT			{$$ = insert_BasicElement_FLOATPOINT(yylval.d, line_no);}
	| ARGS  '[' INTEGER ']' {$$ = insert_BasicElement_ARGS(yylval.i, line_no);}
	| SystemOutPrintln		{$$ = insert_BasicElement_PRINTLN($1, line_no);}
	;

CastExpression
	: UnaryExpression										{$$ = insert_CastExpression_UnaryExpression(NULL, $1, line_no);}
	| '(' TypeSpecifier ')' UnaryExpression					{$$ = insert_CastExpression_UnaryExpression($2, $4, line_no);}
	| '(' TypeSpecifier ')' '(' AssignmentExpression ')'	{$$ = insert_CastExpression_AssignmentExpression($2, $5, line_no);}
	| '(' TypeSpecifier ')' '(' ConditionalExpression ')'	{$$ = insert_CastExpression_ConditionalExpression($2, $5, line_no);}
	;

ArithmeticExpression
	: CastExpression									{$$ = insert_ArithmeticExpression(is_AE_NONE, NULL, NULL, $1,line_no);}
	| ArithmeticExpression  '+'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_PLUS, $1, $3, NULL,line_no);}
	| ArithmeticExpression  '-'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_MINUS, $1, $3, NULL,line_no);}
	| ArithmeticExpression  '/'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_SLASH, $1, $3, NULL,line_no);}
	| ArithmeticExpression  '*'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_TIMES, $1, $3, NULL,line_no);}
	| ArithmeticExpression  '%'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_MODULO, $1, $3, NULL,line_no);}
	| ArithmeticExpression OP_SHL ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_OP_SHL, $1, $3, NULL,line_no);}
	| ArithmeticExpression OP_SHR ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_OP_SHR, $1, $3, NULL,line_no);}
	| '(' ArithmeticExpression 	')'	 					{$$ = insert_ArithmeticExpression(is_PARENTHESIS, $2, NULL, NULL, line_no);}
    ;


RelationalExpression
	: ArithmeticExpression		%prec LOW_PRIORITY 					{$$ = insert_RelationalExpression(is_RE_NONE, $1, NULL,line_no);}
	| ArithmeticExpression '<' 	        RelationalExpression		{$$ = insert_RelationalExpression(is_OP_LESS, $1, $3,line_no);}
	| ArithmeticExpression '>' 	        RelationalExpression		{$$ = insert_RelationalExpression(is_OP_GREATER, $1, $3,line_no);}
	| ArithmeticExpression OP_LESS_EQUAL    RelationalExpression	{$$ = insert_RelationalExpression(is_OP_LESS_EQUAL, $1, $3,line_no);}
	| ArithmeticExpression OP_GREATER_EQUAL RelationalExpression	{$$ = insert_RelationalExpression(is_OP_GREATER_EQUAL, $1, $3,line_no);}
	| ArithmeticExpression OP_EQUAL	        RelationalExpression	{$$ = insert_RelationalExpression(is_OP_EQUAL, $1, $3,line_no);}
	| ArithmeticExpression OP_DIFFERENT	RelationalExpression		{$$ = insert_RelationalExpression(is_OP_DIFFERENT, $1, $3,line_no);}
	| ArithmeticExpression '&'		RelationalExpression			{$$ = insert_RelationalExpression(is_OP_SAND, $1, $3,line_no);}
	| ArithmeticExpression '^'		RelationalExpression			{$$ = insert_RelationalExpression(is_OP_SXOR, $1, $3,line_no);}
	| ArithmeticExpression '|'		RelationalExpression			{$$ = insert_RelationalExpression(is_OP_SOR, $1, $3,line_no);}
	;

Expression
	: ConditionalExpression		{$$ = insert_Expression_ConditionalExpression($1,line_no);}
	| AssignmentExpression		{$$ = insert_Expression_AssignmentExpression($1,line_no);}
	| '(' Expression ')'		{$$ = insert_Expression_Expression($2,line_no);}
	;


ConditionalExpression
	: RelationalExpression									{$$ = insert_ConditionalExpression(is_UNARY, $1, NULL, NULL, line_no);}
	| RelationalExpression OP_AND ConditionalExpression		{$$ = insert_ConditionalExpressionMultiple(is_OP_AND, $1, $3, line_no);}
	| RelationalExpression OP_OR ConditionalExpression		{$$ = insert_ConditionalExpressionMultiple(is_OP_OR, $1, $3, line_no);}
	| '!' '(' RelationalExpression ')'						{$$ = insert_ConditionalExpression(is_UNARY_NOT, $3, NULL, NULL, line_no);}
	| RelationalExpression '?' Expression ':' Expression	{$$ = insert_ConditionalExpression(is_TRINARY, $1, $3, $5, line_no);}
	;

AssignmentExpression
	: ID '='     Expression		{$$ = insert_AssignmentExpression($1, is_ASSIGN, $3, line_no);}
	| ID ASS_MUL Expression		{$$ = insert_AssignmentExpression($1, is_ASS_MUL, $3, line_no);}
	| ID ASS_DIV Expression		{$$ = insert_AssignmentExpression($1, is_ASS_DIV, $3, line_no);}
	| ID ASS_ADD Expression		{$$ = insert_AssignmentExpression($1, is_ASS_ADD, $3, line_no);}
	| ID ASS_SUB Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SUB, $3, line_no);}
	| ID ASS_XOR Expression		{$$ = insert_AssignmentExpression($1, is_ASS_XOR, $3, line_no);}
	| ID ASS_MOD Expression		{$$ = insert_AssignmentExpression($1, is_ASS_MOD, $3, line_no);}
	| ID ASS_SHL Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SHL, $3, line_no);}
	| ID ASS_SHR Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SHR, $3, line_no);}
	;


%%

int main()
{
	int noErrors;
	
	pEnv = malloc(sizeof(progEnv));
	pEnv->globalTable = malloc(sizeof(environmentList));
	
	printf("Parsing the file...\n");
	/* Only makes the semantic analysis if the parsing went well. */
	if (yyparse() == 0)
	{
		printf("\n=====================================\n\n");
		showProgramFile(myProgram);
		noErrors = checkProgramFile(myProgram);
		printf("\n\n=====================================\n\n");
		printf("We have found %d errors in the program.\n", noErrors);
	}
	else
		return -1;
	
	if (noErrors == 0)
	{
		translateProgramFile(myProgram);
		printf("Code generation conclude!\n\n");
		printf("=====================================\n\n");
	}
	
	return 0;
}


int yyerror(char *msg)
{
	/* Message to print in case the parsing found an error. */
	printf("Line %d: %s\n", line_no, msg);
	return 1;
}
