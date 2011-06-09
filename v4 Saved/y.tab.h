
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
     CASE = 261,
     CHAR = 262,
     CLASS = 263,
     CONTINUE = 264,
     DEFAULT = 265,
     DO = 266,
     DOUBLE = 267,
     ELSE = 268,
     FLOAT = 269,
     FOR = 270,
     IF = 271,
     IMPORT = 272,
     INT = 273,
     JNULL = 274,
     LONG = 275,
     NEW = 276,
     OPERATOR = 277,
     PUBLIC = 278,
     PRINTLN = 279,
     RETURN = 280,
     SHORT = 281,
     STATIC = 282,
     STRING = 283,
     SWITCH = 284,
     VOID = 285,
     WHILE = 286,
     OP_INC = 287,
     OP_DEC = 288,
     OP_SHL = 289,
     OP_SHR = 290,
     OP_GREATER_EQUAL = 291,
     OP_LESS_EQUAL = 292,
     OP_EQUAL = 293,
     OP_DIFFERENT = 294,
     OP_AND = 295,
     OP_OR = 296,
     OP_DIM = 297,
     ASS_MUL = 298,
     ASS_DIV = 299,
     ASS_ADD = 300,
     ASS_SUB = 301,
     ASS_XOR = 302,
     ASS_MOD = 303,
     ASS_SHL = 304,
     ASS_SHR = 305,
     ASS_AND = 306,
     ASS_OR = 307,
     ID = 308,
     LITERAL = 309,
     TRUE = 310,
     FALSE = 311,
     INTEGER = 312,
     FLOATPOINT = 313,
     LOW_PRIORITY = 314
   };
#endif
/* Tokens.  */
#define BOOLEAN 258
#define BREAK 259
#define BYTE 260
#define CASE 261
#define CHAR 262
#define CLASS 263
#define CONTINUE 264
#define DEFAULT 265
#define DO 266
#define DOUBLE 267
#define ELSE 268
#define FLOAT 269
#define FOR 270
#define IF 271
#define IMPORT 272
#define INT 273
#define JNULL 274
#define LONG 275
#define NEW 276
#define OPERATOR 277
#define PUBLIC 278
#define PRINTLN 279
#define RETURN 280
#define SHORT 281
#define STATIC 282
#define STRING 283
#define SWITCH 284
#define VOID 285
#define WHILE 286
#define OP_INC 287
#define OP_DEC 288
#define OP_SHL 289
#define OP_SHR 290
#define OP_GREATER_EQUAL 291
#define OP_LESS_EQUAL 292
#define OP_EQUAL 293
#define OP_DIFFERENT 294
#define OP_AND 295
#define OP_OR 296
#define OP_DIM 297
#define ASS_MUL 298
#define ASS_DIV 299
#define ASS_ADD 300
#define ASS_SUB 301
#define ASS_XOR 302
#define ASS_MOD 303
#define ASS_SHL 304
#define ASS_SHR 305
#define ASS_AND 306
#define ASS_OR 307
#define ID 308
#define LITERAL 309
#define TRUE 310
#define FALSE 311
#define INTEGER 312
#define FLOATPOINT 313
#define LOW_PRIORITY 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 112 "pJava.y"

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



/* Line 1676 of yacc.c  */
#line 213 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


