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

/* The non-terminals symbols of our grammar. */
%type <string> calc
%type <string> expression

%union{
double value;
char* string;
}


%% 
calc: 	expression			{;}
	;

expression: expression TEXT {printf("%s\n", $2);$$ = $2;}
	|		TEXT		{printf("%s\n", $1); $$ = $1;}
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
