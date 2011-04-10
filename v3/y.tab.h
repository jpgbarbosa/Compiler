
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
     BOOLEAN = 258,
     BREAK = 259,
     BYTE = 260,
     BYVALUE = 261,
     CASE = 262,
     CAST = 263,
     CHAR = 264,
     CLASS = 265,
     CONST = 266,
     CONTINUE = 267,
     DEFAULT = 268,
     DO = 269,
     DOUBLE = 270,
     ELSE = 271,
     ELSE_IF = 272,
     FLOAT = 273,
     FOR = 274,
     GOTO = 275,
     IF = 276,
     IMPORT = 277,
     INT = 278,
     JNULL = 279,
     LONG = 280,
     NEW = 281,
     OPERATOR = 282,
     PACKAGE = 283,
     PUBLIC = 284,
     RETURN = 285,
     SHORT = 286,
     STATIC = 287,
     SWITCH = 288,
     THIS = 289,
     VAR = 290,
     VOID = 291,
     WHILE = 292,
     OP_INC = 293,
     OP_DEC = 294,
     OP_SHL = 295,
     OP_SHR = 296,
     OP_SHRR = 297,
     OP_GREATER_EQUAL = 298,
     OP_LESS_EQUAL = 299,
     OP_EQUAL = 300,
     OP_DIFFERENT = 301,
     OP_AND = 302,
     OP_OR = 303,
     OP_DIM = 304,
     ASS_MUL = 305,
     ASS_DIV = 306,
     ASS_ADD = 307,
     ASS_SUB = 308,
     IDENTIFIER = 309,
     LITERAL = 310,
     BOOLLIT = 311
   };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define BYTE 260
#define BYVALUE 261
#define CASE 262
#define CAST 263
#define CHAR 264
#define CLASS 265
#define CONST 266
#define CONTINUE 267
#define DEFAULT 268
#define DO 269
#define DOUBLE 270
#define ELSE 271
#define ELSE_IF 272
#define FLOAT 273
#define FOR 274
#define GOTO 275
#define IF 276
#define IMPORT 277
#define INT 278
#define JNULL 279
#define LONG 280
#define NEW 281
#define OPERATOR 282
#define PACKAGE 283
#define PUBLIC 284
#define RETURN 285
#define SHORT 286
#define STATIC 287
#define SWITCH 288
#define THIS 289
#define VAR 290
#define VOID 291
#define WHILE 292
#define OP_INC 293
#define OP_DEC 294
#define OP_SHL 295
#define OP_SHR 296
#define OP_SHRR 297
#define OP_GREATER_EQUAL 298
#define OP_LESS_EQUAL 299
#define OP_EQUAL 300
#define OP_DIFFERENT 301
#define OP_AND 302
#define OP_OR 303
#define OP_DIM 304
#define ASS_MUL 305
#define ASS_DIV 306
#define ASS_ADD 307
#define ASS_SUB 308
#define IDENTIFIER 309
#define LITERAL 310
#define BOOLLIT 311




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


