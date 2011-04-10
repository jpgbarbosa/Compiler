
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     VAR = 258,
     NUMBER = 259,
     TEXT = 260,
     CLASS = 261,
     MAIN = 262,
     METHOD = 263,
     LESS = 264,
     LESS_EQUAL = 265,
     GREATER = 266,
     GREATER_EQUAL = 267,
     EQUALS = 268,
     NOT = 269,
     AND = 270,
     OR = 271,
     SUM = 272,
     SUBTRACT = 273,
     DIVIDE = 274,
     MULTIPLY = 275,
     MODULO = 276,
     INCR = 277,
     DCR = 278,
     INT = 279,
     CHAR = 280,
     DOUBLE = 281,
     FLOAT = 282,
     VOID = 283,
     STRING = 284,
     IF = 285,
     ELSE_IF = 286,
     ELSE = 287,
     FOR = 288,
     WHILE = 289,
     RETURN = 290,
     VOID_RETURN = 291,
     BREAK = 292,
     CONTINUE = 293,
     PRINT = 294
   };
#endif
/* Tokens.  */
#define VAR 258
#define NUMBER 259
#define TEXT 260
#define CLASS 261
#define MAIN 262
#define METHOD 263
#define LESS 264
#define LESS_EQUAL 265
#define GREATER 266
#define GREATER_EQUAL 267
#define EQUALS 268
#define NOT 269
#define AND 270
#define OR 271
#define SUM 272
#define SUBTRACT 273
#define DIVIDE 274
#define MULTIPLY 275
#define MODULO 276
#define INCR 277
#define DCR 278
#define INT 279
#define CHAR 280
#define DOUBLE 281
#define FLOAT 282
#define VOID 283
#define STRING 284
#define IF 285
#define ELSE_IF 286
#define ELSE 287
#define FOR 288
#define WHILE 289
#define RETURN 290
#define VOID_RETURN 291
#define BREAK 292
#define CONTINUE 293
#define PRINT 294




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 61 "mycalc.y"

	double d;
	int i;
	char* string;



/* Line 1676 of yacc.c  */
#line 138 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


