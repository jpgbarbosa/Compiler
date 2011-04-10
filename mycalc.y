%{

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include "symtab.h"
#define NSYMS 100

symtab tab[NSYMS];

symtab *symlook(char *varname);

%}

%token <string> VAR
%token <value> NUMBER
%token <string> TEXT


/* Program tokens. */
%token <string> CLASS
%token <string> MAIN
%token <string> METHOD

%token <string> LESS
%token <string> LESS_EQUAL
%token <string> GREATER
%token <string> GREATER_EQUAL
%token <string> EQUALS
%token <string> NOT
%token <string> AND
%token <string> OR

%token <string> SUM
%token <string> SUBTRACT
%token <string> DIVIDE
%token <string> MULTIPLY
%token <string> MODULO
%token <string> INCR
%token <string> DCR

%token <string> INT
%token <string>	CHAR
%token <string> DOUBLE
%token <string> FLOAT
%token <string> VOID
%token <string> STRING

%token <string> IF
%token <string> ELSE_IF
%token <string> ELSE
%token <string> FOR
%token <string> WHILE
%token <string> RETURN
%token <string> VOID_RETURN
%token <string> BREAK
%token <string> CONTINUE
%token <string> PRINT

%union{
	double d;
	int i;
	char* string;
}

%left OR
%left AND
%right '='
%left '+' '-'
%left '/' '*' '%'
%left '(' ')'

%% 

Class
	: CLASS VAR '{' Main Method '}'		{printf("Class completed...\n");}
	;

Main
	: MAIN '{' BlockContents '}'
	;

/* All the other methods are defined by the following statement. We assume all of them
 * are public and static.
 */
/* TODO: Maybe change the name of the method from VAR? */
Method
	:Method METHOD ReturnType VAR '(' MultiArgument ')' '{' BlockContents '}'
	|	
	;

ReturnType
	: INT 
	| DOUBLE 
	| FLOAT 
	| CHAR 
	| VOID
	;


/* ARGUMENTS */
MultiArgument
	:	MultiArgument ',' Argument
	|	Argument
	|
	;

Argument
	: 	INT VAR
	|	DOUBLE VAR
	|	FLOAT VAR
	|	CHAR VAR
	;

/* Instructions inside a block. */

/* TODO: We must insert here instead of the others, but it give us shift/reduce, probably due to the
 * if's, for's and while's.
 */
Block
	: 	'{' BlockContents '}'
	| 	Expression ';'
	|	MethodCalling ';'
	| 	ReturnClause
	| 	PrintClause
	;

BlockContents
	: 	BlockContents Statement
	|
	;

Statement
	:	Declaration
	|	IfClause
	|	ForClause
	|	WhileClause
	|	ReturnClause
	|	PrintClause
	|	MethodCalling ';'
	|	Expression ';'
	;


MethodCalling
	: VAR '(' MultiArgumentCall ')'
	;

/* While the previous arguments we used as arguments in the method declaration, these are the arguments
 * when we want to call a certain method.
 */
MultiArgumentCall
	:	MultiArgumentCall ',' Expression
	|	Expression
	|	
	;

/* Declaration of variables. */
Declaration
	:	INT MultipleDec ';'
	|	DOUBLE MultipleDec ';'
	|	FLOAT MultipleDec ';'
	|	CHAR MultipleDec ';'
	;

/* TODO: Is this acceptable |	VAR '=' Expression ? */
MultipleDec
	: 	MultipleDec ',' VAR
	|	VAR	
	|	VAR '=' Expression
	|	VAR '=' STRING
	;


/* Control instructions. */

/* IF CLAUSE. */
IfClause
	: 	IF '(' MultiConditions ')' Block ElseIfClause ElseClause
	;

ElseIfClause
	: 	ElseIfClause ELSE_IF '(' MultiConditions ')' Block
	| 	
	;

ElseClause
	: 	ELSE Block
	|
	;

/* FOR CLAUSE. */
ForClause
	: 	FOR '(' ForInit ';' ForExpr ';' ForIncr ')' Block
	;

ForInit
	: Expression
	| 
	;

ForExpr
	: Condition
	| 
	;

ForIncr
	: Expression
	|
	;

/* WHILE CLAUSE. */
WhileClause
	: 	WHILE '(' MultiConditions ')' Block
	;	


Expression
	:	VAR '=' Expression	
	|	Expression '+' Expression
	|	Expression '-' Expression
	|	Expression '/' Expression
	|	Expression '*' Expression
	|	Expression '%' Expression
	|	'(' Expression ')'
	|	'-' NUMBER
	|	NUMBER
	|	VAR
	|	INCR VAR
	|	VAR INCR
	|	DCR VAR
	|	VAR DCR
	;

Condition
	: 	Expression CondOperator Expression
	|	NOT Expression
	|	Expression
	;

MultiConditions
	: 	MultiConditions ConditionLinkers Condition
	|	Condition
	;

ConditionLinkers
	: 	AND
	|	OR
	;

CondOperator
	: 	LESS
	|	LESS_EQUAL
	|	GREATER
	|	GREATER_EQUAL
	|	EQUALS
	;

ReturnClause
	: 	RETURN Expression ';'
	|	VOID_RETURN ';'
	|	RETURN MethodCalling ';'
	;

/* TODO: We are only accepting strings, and without special characters like %d. Change this. */
PrintClause
	: PRINT '(' MultiPrintArguments ')' ';'
	;

MultiPrintArguments
	:	PrintArgument '+' MultiArgument
	|	PrintArgument
	;

/* TODO: It's missing the expression option. */
PrintArgument
	:
	|	STRING
	|	MethodCalling
	;

%%

int main()
{
yyparse();
return 0;
}

symtab *symlook(char *varname)
{
int i;
  
for(i=0; i<NSYMS; i++)
 {
        if(tab[i].name && strcmp(varname, tab[i].name)==0)   
                return &tab[i];
        if(!tab[i].name)
        {
                tab[i].name=varname;
                return &tab[i];
        }
 }

yyerror("variaveis a mais...");
exit(1);
}
