%{
#include "structures.h"
#include "y.tab.h"

int line_no = 1,column=1;

void count();
void commentCounter();

%}

Separator	[\(\)\{\}\[\]\;\,\.]
Delimiter1	[\=\>\<\!\~\?\:\+\-\*\/\&\|\^\%]
HexDigit	[0-9a-fA-F]
Digit		[0-9]
OctalDigit	[0-7]
TetraDigit	[0-3]
NonZeroDigit	[1-9]
Letter		[a-zA-Z_]
AnyButSlash	[^\/]
AnyButAstr	[^\*]
BLK		[\b]
TAB		[\t]
FF		[\f]
ESCCHR		[\\]
CR		[\r]
LF		[\n]

Escape		[\\]([r]|[n]|[b]|[f]|[t]|[\\])
Identifier 	{Letter}({Letter}|{Digit})*

Comment1        [\/][\*]({AnyButAstr}|[\*]{AnyButSlash})*[\*][\/]
Comment2        [\/][\/].*
Comment		({Comment1}|{Comment2})
WhiteSpace	({CR}|{LF}|{FF}|{TAB}|{BLK}|[ ])

IntSuffix	([l]|[L])
DecimalNum	{NonZeroDigit}{Digit}*{IntSuffix}?
OctalNum	[0]{OctalDigit}*{IntSuffix}?
HexNum		[0]([x]|[X]){HexDigit}{HexDigit}*{IntSuffix}?
IntegerLiteral	({DecimalNum}|{OctalNum}|{HexNum})

Sign		([\+]|[\-])
FlSuffix	([f]|[F]|[d][D])
SignedInt	{Sign}?{Digit}+
Expo		([e]|[E])
ExponentPart	{Expo}{SignedInt}?
Float1          {Digit}+[\.]{Digit}+?{ExponentPart}?{FlSuffix}?
Float2		[\.]{Digit}+{ExponentPart}?{FlSuffix}?
Float3		{Digit}+{ExponentPart}{FlSuffix}?
Float4		{Digit}+{FlSuffix}
FloatingPoint	({Float1}|{Float2}|{Float3}|{Float4})

AnyChrChr	[^\\']
AnyStrChr	[^\\"]
Character	[\']({Escape}|{AnyChrChr})[\']
String		[\"]({Escape}|{AnyStrChr})*[\"]
Numeric  	({IntegerLiteral}|{FloatingPoint})
Literal		({Numeric}|{Character}|{String})



%%

"true"		{return LITERAL;}
"false"		{return LITERAL;}

{Separator}	{return yytext[0];}
{Delimiter1}	{return yytext[0];}

"=="		{return OP_EQUAL;}
"<="		{return OP_LESS_EQUAL;}
">="		{return OP_GREATER_EQUAL;}
"!="		{return OP_DIFFERENT;}
"||"		{return OP_OR;}
"&&"		{return OP_AND;}
"++"		{return OP_INC;}
"--"		{return OP_DEC;}
">>"		{return OP_SHR;}
"<<"		{return OP_SHL;}
"+="		{return ASS_ADD;}
"-="		{return ASS_SUB;}
"*="		{return ASS_MUL;}
"/="		{return ASS_DIV;}
"&="		{return ASS_AND;}
"|="		{return ASS_OR;}
"^="		{return ASS_XOR;}
"%="		{return ASS_MOD;}
"<<="		{return ASS_SHL;}
">>="		{return ASS_SHR;}

"do"            {return DO;}
"boolean"	{return BOOLEAN;}
"double"	{return DOUBLE;}
"import"	{return IMPORT;}
"break"		{return BREAK;}
"else"		{return ELSE;}
"byte"		{return BYTE;}
"public"	{return PUBLIC;}
"case"		{return CASE;}
"int"		{return INT;}
"return"	{return RETURN;}
"void"		{return VOID;}
"float"		{return FLOAT;}
"long"		{return LONG;}
"short"		{return SHORT;}
"char"		{return CHAR;}
"for"		{return FOR;}
"static"	{return STATIC;}
"while"		{return WHILE;}
"class"		{return CLASS;}
"new"		{return NEW;}
"null"		{return JNULL;}
"switch"	{return SWITCH;}
"continue"	{return CONTINUE;}
"default"	{return DEFAULT;}
"if"		{return IF;}
"String"	{return STRING;}

{Identifier}	{yylval.id = (char*)strdup(yytext); return ID;}

{Numeric}	{yylval.id = (char*)strdup(yytext); return LITERAL;}

{Literal}	{return LITERAL;}

\n		{count(); line_no++;}

{WhiteSpace}    {;}

{Comment}	{commentCounter();}


%%

/*Testar esta funcao qd o yacc estiver pronto para receber o line_no*/
void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	/* ECHO */;
}

void commentCounter()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			line_no++;
	
	/* ECHO */;
}

