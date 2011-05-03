%{
#include <stdio.h>
#include "insertionFunction.h"
#include "structures.h"
#include "showTree.h"

extern int line_no;

/* The pointer that will hold the start of the AST. */
is_ProgramFile* myProgram;

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
%token <id> ID
%token <id> LITERAL

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
%type <_unaryExpression> UnaryExpression;
%type <_basicElement> BasicElement;
%type <_castExpression> CastExpression;
%type <_arithmeticExpression> ArithmeticExpression;
%type <_relationalExpression> RelationalExpression;
%type <_expression> Expression;
%type <_conditionalExpression> ConditionalExpression;
%type <_assignmentExpression> AssignmentExpression;

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
	is_UnaryExpression* _unaryExpression;
	is_BasicElement* _basicElement;
	is_CastExpression* _castExpression;
	is_ArithmeticExpression* _arithmeticExpression;
	is_RelationalExpression* _relationalExpression;
	is_ConditionalExpression* _conditionalExpression;
	is_AssignmentExpression* _assignmentExpression;
}


%start ProgramFile

%%

/* It can be a single variable or an array. */
TypeSpecifier
	: TypeName 		{$$ = insert_TypeSpecifier($1);}
	;

/* TODO: We are keeping this in case we want to expand
 * our gramatic to accept types other than the basic ones.
 * In that case, up there, we have to change the PrimitiveType
 * to TypeName.
 */

TypeName
	/* The primitive types. */
	: BOOLEAN		{$$ = insert_Typename(is_BOOLEAN);}
	| CHAR			{$$ = insert_Typename(is_CHAR);}
	| BYTE			{$$ = insert_Typename(is_BYTE);}
	| SHORT			{$$ = insert_Typename(is_SHORT);}
	| INT			{$$ = insert_Typename(is_INT);}
	| LONG			{$$ = insert_Typename(is_LONG);}
	| FLOAT			{$$ = insert_Typename(is_FLOAT);}
	| DOUBLE		{$$ = insert_Typename(is_DOUBLE);}
	| VOID			{$$ = insert_Typename(is_VOID);}
	| STRING		{$$ = insert_Typename(is_STRING);}
	| STRING '['']'		{$$ = insert_Typename(is_STRING_ARRAY);}
	;

/* We can have imports or only a class. */
ProgramFile
	: ClassHeader '{' FieldDeclarations '}'		{$$ = insert_ProgramFile($1, $3); myProgram = $$;}
	;

ClassHeader
	: PUBLIC CLASS ID 	{$$ = insert_ClassHeader($3);}
	| CLASS ID 		{$$ = insert_ClassHeader($2);}
	;
/* In here, we will declare some attributes of methods. */
FieldDeclarations
	: FieldDeclaration				{$$ = insert_FieldDeclaration_list(NULL, $1);}
        | FieldDeclarations FieldDeclaration		{$$ = insert_FieldDeclaration_list($1, $2);}
	;

FieldDeclaration
	: AttrDeclaration ';'	{$$ = insert_FieldDeclaration_AttrDeclaration($1);}
	| MethodDeclaration	{$$ = insert_FieldDeclaration_MethodDeclaration($1);}
	;

AttrDeclaration
	: PUBLIC STATIC TypeSpecifier VariableDeclarators	{$$ = insert_AttrDeclaration($3, $4);}
	|        STATIC TypeSpecifier VariableDeclarators	{$$ = insert_AttrDeclaration($2, $3);}
	;
/* Declaration of variables. */
VariableDeclarators
	: VariableDeclarator					{$$ = insert_VariablesDeclarator_list(NULL, $1);}
	| VariableDeclarators ',' VariableDeclarator		{$$ = insert_VariablesDeclarator_list($1, $3);}
	;

VariableDeclarator
	: ID			{$$ = insert_VariablesDeclarator($1, NULL);}
	| ID '=' Expression	{$$ = insert_VariablesDeclarator($1, $3);}
	;

/* Declaration of methods. */

MethodDeclaration
	: PUBLIC STATIC TypeSpecifier MethodDeclarator        Block	{$$ = insert_MethodDeclaration($3, $4, $5);}
	|        STATIC TypeSpecifier MethodDeclarator        Block	{$$ = insert_MethodDeclaration($2, $3, $4);}
	;

MethodDeclarator
	: ID '(' ParameterList ')'	{$$ = insert_MethodDeclarator($1, $3);}
	| ID '(' ')'			{$$ = insert_MethodDeclarator($1, NULL);}
	;

ParameterList
	: Parameter			{$$ = insert_Parameters_list(NULL, $1);}
	| ParameterList ',' Parameter	{$$ = insert_Parameters_list($1, $3);}
	;

Parameter
	: TypeSpecifier ID		{$$ = insert_Parameter($2, $1);}
	;

Block
	: '{' LocalVariableDeclarationsAndStatements '}'		{$$ = insert_Block($2);}
	| '{' '}'							{$$ = insert_Block(NULL);}
    ;

/* Declarations of variables and use of statements. */

/* Used to perform a list of declarations or statements. */
LocalVariableDeclarationsAndStatements
	: LocalVariableDeclarationOrStatement						{$$ = insert_LocalVariableDeclarationsOrStatements_list(NULL, $1);}
	| LocalVariableDeclarationsAndStatements LocalVariableDeclarationOrStatement	{$$ = insert_LocalVariableDeclarationsOrStatements_list($1, $2);}
	;

LocalVariableDeclarationOrStatement
	: LocalVariableDeclarationStatement		{$$ = insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement($1);}
	| Statement					{$$ = insert_LocalVariableDeclarationsOrStatements_Statement($1);}
	;

LocalVariableDeclarationStatement
	: TypeSpecifier VariableDeclarators ';'		{$$ = insert_LocalVariableDeclarationStatement($1, $2);}
	;

Statement
	: LabeledStatement			{$$ = insert_Statement_LabeledStatement($1);}
	| Expression ';'			{$$ = insert_Statement_Expression($1);}
	| SelectionStatement		{$$ = insert_Statement_SelectionStatement($1);}
	| IterationStatement		{$$ = insert_Statement_IterationStatement($1);}
	| JumpStatement				{$$ = insert_Statement_JumpStatement($1);}
	| Block						{$$ = insert_Statement_Block($1);}
	/* TODO: Here, we might return NULL. Then, be careful to check it in the for and while's
         * statements (e.g. while(a < b); -> endless cycle.
	 */
	| ';'					{$$ = NULL;}
	;

LabeledStatement
	: ID ':' LocalVariableDeclarationOrStatement				{$$ = insert_LabeledStatement_ID($1, $3);}
	| CASE ConditionalExpression ':' LocalVariableDeclarationOrStatement	{$$ = insert_LabeledStatement_CASE($4, $2);}
	| CASE '(' ConditionalExpression ')' ':' LocalVariableDeclarationOrStatement	{$$ = insert_LabeledStatement_CASE($6, $3);}
	| DEFAULT ':' LocalVariableDeclarationOrStatement			{$$ = insert_LabeledStatement_DEFAULT($3);}
	;

SelectionStatement
	: IF '(' Expression ')' Statement ELSE Statement			{$$ = insert_SelectionStatement_IFELSE($3, $5, $7);}
	| IF '(' Expression ')' Statement					{$$ = insert_SelectionStatement_IF($3, $5);}
	| SWITCH '(' Expression ')' Block					{$$ = insert_SelectionStatement_SWITCH($3, $5);}
	;

IterationStatement
	: WHILE '(' Expression ')' Statement					{$$ = insert_IterationStatement_WHILE($3, $5);}
	| DO Statement WHILE '(' Expression ')' ';'				{$$ = insert_IterationStatement_DO($5, $2);}
	| FOR '(' ForInit ForExpr Expressions ')' Statement				{$$ = insert_IterationStatement_FOR($4, $7, $3, $5);}
	| FOR '(' ForInit ForExpr         ')' Statement				{$$ = insert_IterationStatement_FOR($4, $6, $3, NULL);}
	;

ForInit
	: Expressions ';'			{$$ = insert_ForInit($1, NULL);}
	| LocalVariableDeclarationStatement	{$$ = insert_ForInit(NULL, $1);}
	| ';'					{$$ = NULL;}
	;

ForExpr
	: ConditionalExpression ';'	{$$ = insert_Expression_ConditionalExpression($1);}
	| AssignmentExpression	';' 	{$$ = insert_Expression_AssignmentExpression($1);}
	| '(' Expression ')'    ';'	{$$ = insert_Expression_Expression($2);}
	| ';'				{$$ = NULL;}
	;

Expressions
	: Expression				{$$ = insert_Expressions_list(NULL, $1);}
	| Expressions ',' Expression		{$$ = insert_Expressions_list($1, $3);}
	;

JumpStatement
	: BREAK    ID         ';'		{$$ = insert_JumpStatement_BREAK_ID($2);}
	| BREAK               ';'		{$$ = insert_JumpStatement_BREAK();}
	| CONTINUE ID 	      ';'		{$$ = insert_JumpStatement_CONTINUE_ID($2);}
	| CONTINUE            ';'		{$$ = insert_JumpStatement_CONTINUE();}
	| RETURN   Expression ';'		{$$ = insert_JumpStatement_RETURN_EXP($2);}
	| RETURN              ';'		{$$ = insert_JumpStatement_RETURN();}
	;

MethodCall
	/* List of arguments. */
	: ID '(' Expressions ')'		{$$ = insert_MethodCall($1, $3);}
	| ID '(' ')'				{$$ = insert_MethodCall($1, NULL);}
	;

UnaryExpression
	: OP_INC   BasicElement			{$$ = insert_UnaryExpression(is_OP_INC_BEFORE, $2);}
	| OP_DEC   BasicElement			{$$ = insert_UnaryExpression(is_OP_DCR_BEFORE, $2);}
	|          BasicElement OP_INC		{$$ = insert_UnaryExpression(is_OP_INC_AFTER, $1);}
	|          BasicElement OP_DEC		{$$ = insert_UnaryExpression(is_OP_DCR_AFTER, $1);}
	|          BasicElement			{$$ = insert_UnaryExpression(is_NONE, $1);}
	/* We can negate the MethodCall if it returns a boolean.
	 * The same applies for the literal, if it's true or false.
         */
	| '!' 	   BasicElement			{$$ = insert_UnaryExpression(is_OP_DIFFERENT_UNARY, $2);}
	;
/* The basic elements. */
BasicElement
	: LITERAL				{$$ = insert_BasicElement_LITERAL($1);}
	| MethodCall				{$$ = insert_BasicElement_METHOD_CALL($1);}
	| ID					{$$ = insert_BasicElement_ID($1);}
	;

CastExpression
	: UnaryExpression					{$$ = insert_CastExpression_UnaryExpression(NULL, $1);}
	| '(' TypeSpecifier ')' UnaryExpression			{$$ = insert_CastExpression_UnaryExpression($2, $4);}
	| '(' TypeSpecifier ')' '(' AssignmentExpression ')'		{$$ = insert_CastExpression_AssignmentExpression($2, $5);}
	| '(' TypeSpecifier ')' '(' ConditionalExpression ')'	{$$ = insert_CastExpression_ConditionalExpression($2, $5);}
	;

ArithmeticExpression
	: CastExpression					{$$ = insert_ArithmeticExpression(is_AE_NONE, NULL, NULL, $1);}
	| ArithmeticExpression  '+'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_PLUS, $1, $3, NULL);}
	| ArithmeticExpression  '-'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_MINUS, $1, $3, NULL);}
	| ArithmeticExpression  '/'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_SLASH, $1, $3, NULL);}
	| ArithmeticExpression  '*'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_TIMES, $1, $3, NULL);}
	| ArithmeticExpression  '%'   ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_MODULO, $1, $3, NULL);}
	| ArithmeticExpression OP_SHL ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_OP_SHL, $1, $3, NULL);}
	| ArithmeticExpression OP_SHR ArithmeticExpression	{$$ = insert_ArithmeticExpression(is_OP_SHR, $1, $3, NULL);}
        ;


RelationalExpression
	: ArithmeticExpression						{$$ = insert_RelationalExpression(is_RE_NONE, $1, NULL);}
	| ArithmeticExpression '<' 	        RelationalExpression	{$$ = insert_RelationalExpression(is_OP_LESS, $1, $3);}
	| ArithmeticExpression '>' 	        RelationalExpression	{$$ = insert_RelationalExpression(is_OP_GREATER, $1, $3);}
	| ArithmeticExpression OP_LESS_EQUAL    RelationalExpression	{$$ = insert_RelationalExpression(is_OP_LESS_EQUAL, $1, $3);}
	| ArithmeticExpression OP_GREATER_EQUAL RelationalExpression	{$$ = insert_RelationalExpression(is_OP_GREATER_EQUAL, $1, $3);}
	| ArithmeticExpression OP_EQUAL	        RelationalExpression	{$$ = insert_RelationalExpression(is_OP_EQUAL, $1, $3);}
	| ArithmeticExpression OP_DIFFERENT	RelationalExpression	{$$ = insert_RelationalExpression(is_OP_DIFFERENT, $1, $3);}
	| ArithmeticExpression '&'		RelationalExpression	{$$ = insert_RelationalExpression(is_OP_SAND, $1, $3);}
	| ArithmeticExpression '^'		RelationalExpression	{$$ = insert_RelationalExpression(is_OP_SXOR, $1, $3);}
	| ArithmeticExpression '|'		RelationalExpression	{$$ = insert_RelationalExpression(is_OP_SOR, $1, $3);}
	| ArithmeticExpression OP_AND		RelationalExpression	{$$ = insert_RelationalExpression(is_OP_AND, $1, $3);}
	| ArithmeticExpression OP_OR		RelationalExpression	{$$ = insert_RelationalExpression(is_OP_OR, $1, $3);}
	;

Expression
	: ConditionalExpression		{$$ = insert_Expression_ConditionalExpression($1);}
	| AssignmentExpression		{$$ = insert_Expression_AssignmentExpression($1);}
	| '(' Expression ')'		{$$ = insert_Expression_Expression($2);}
	;


ConditionalExpression
	: RelationalExpression					{$$ = insert_ConditionalExpression(is_UNARY, $1, NULL, NULL);}
	| '!' '(' RelationalExpression ')'			{$$ = insert_ConditionalExpression(is_UNARY_NOT, $3, NULL, NULL);}
	| RelationalExpression '?' Expression ':' Expression	{$$ = insert_ConditionalExpression(is_TRINARY, $1, $3, $5);}
	;

AssignmentExpression
	: ID '='     Expression		{$$ = insert_AssignmentExpression($1, is_ASSIGN, $3);}
	| ID ASS_MUL Expression		{$$ = insert_AssignmentExpression($1, is_ASS_MUL, $3);}
	| ID ASS_DIV Expression		{$$ = insert_AssignmentExpression($1, is_ASS_DIV, $3);}
	| ID ASS_ADD Expression		{$$ = insert_AssignmentExpression($1, is_ASS_ADD, $3);}
	| ID ASS_SUB Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SUB, $3);}
	| ID ASS_XOR Expression		{$$ = insert_AssignmentExpression($1, is_ASS_XOR, $3);}
	| ID ASS_MOD Expression		{$$ = insert_AssignmentExpression($1, is_ASS_MOD, $3);}
	| ID ASS_SHL Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SHL, $3);}
	| ID ASS_SHR Expression		{$$ = insert_AssignmentExpression($1, is_ASS_SHR, $3);}
	;


%%

int main()
{
	yyparse();
	showProgramFile(myProgram);
	return 0;
}
