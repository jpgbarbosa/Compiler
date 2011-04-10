%{
#include "y.tab.h"

%}

/* At least one space. */
space ([ ]|\t)+

/* Optional space. */
opSpace ([ ]|\t)*

/* The name of the classes or the methods. */
name [A-z]+

number [0-9]+

%%

"if"			{return IF;}
"else if"		{return ELSE_IF;}
"else"			{return ELSE;}
"for"			{return FOR;}
"while"			{return WHILE;}
"System.out.println"	{return PRINT;}
"return "		{return RETURN;}
"return"		{return VOID_RETURN;}
"break"			{return BREAK;}
"continue"		{return CONTINUE;}

"<"			{return LESS;}
"<="			{return LESS_EQUAL;}
">"			{return GREATER;}
">="			{return GREATER_EQUAL;}
"=="			{return EQUALS;}
"!"			{return NOT;}
"&&"			{return AND;}
"||"			{return OR;}

"-="			{return SUM;}
"+="			{return SUBTRACT;}
"/="			{return DIVIDE;}
"*="			{return MULTIPLY;}
"--"			{return INCR;}
"++"			{return DCR;}


"int "			{return INT;}
"char "			{return CHAR;}
"double "		{return DOUBLE;}
"float "		{return FLOAT;}
"void "			{return VOID;}

"\""[^"\""\n]*"\""		{printf("String\n"); return STRING;}



"/*"[^"*/"]*"*/"	{;}
"//".*\n		{;}

"class "		{printf("Class\n");return CLASS;}


"public"{space}"static"{space}"void"{space}"main"{opSpace}"("{opSpace}"String[]"{space}"args"{opSpace}")"                {printf("Main\n");return MAIN;}


"public"{space}"static"{space}			{return METHOD;} /* TODO: Watch out for the parameters and the returning type! */

{name}			{return VAR;}
{number}		{return NUMBER;}

{space}			{;}
\n			{;}


. 	      		{return yytext[0];}

%%
int yywrap()
{
return 1;
}

