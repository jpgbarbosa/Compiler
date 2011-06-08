
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "pJava.y"

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



/* Line 189 of yacc.c  */
#line 98 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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
     FLOATPOINT = 313
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 109 "pJava.y"

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
	is_ArithmeticExpression* _arithmeticExpression;
	is_RelationalExpression* _relationalExpression;
	is_ConditionalExpression* _conditionalExpression;
	is_AssignmentExpression* _assignmentExpression;
	is_PrintExpressions_list* _printExpressions_list;



/* Line 214 of yacc.c  */
#line 292 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 304 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   639

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNRULES -- Number of states.  */
#define YYNSTATES  255

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    73,     2,     2,     2,    69,    62,     2,
      70,    71,    67,    66,    79,    65,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    80,    78,
      64,    59,    63,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    76,    60,    77,    72,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    29,    34,    38,    41,    43,    46,
      49,    51,    56,    60,    62,    66,    68,    72,    78,    83,
      88,    92,    94,    98,   101,   105,   108,   110,   113,   115,
     117,   121,   123,   126,   128,   130,   132,   134,   136,   140,
     145,   152,   156,   164,   170,   176,   182,   190,   198,   205,
     208,   210,   212,   215,   218,   223,   225,   227,   231,   235,
     238,   242,   245,   249,   252,   257,   261,   268,   273,   275,
     279,   282,   285,   288,   291,   293,   296,   298,   300,   302,
     304,   306,   308,   310,   312,   314,   318,   322,   326,   330,
     334,   338,   342,   344,   348,   352,   356,   360,   364,   368,
     372,   376,   380,   382,   384,   388,   390,   394,   398,   403,
     409,   413,   417,   421,   425,   429,   433,   437,   441
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      85,     0,    -1,    84,    -1,     3,    -1,     7,    -1,     5,
      -1,    26,    -1,    18,    -1,    20,    -1,    14,    -1,    12,
      -1,    30,    -1,    28,    -1,    28,    74,    75,    -1,    86,
      76,    87,    77,    -1,    23,     8,    53,    -1,     8,    53,
      -1,    88,    -1,    87,    88,    -1,    89,    78,    -1,    92,
      -1,    23,    27,    83,    90,    -1,    27,    83,    90,    -1,
      91,    -1,    90,    79,    91,    -1,    53,    -1,    53,    59,
     115,    -1,    23,    27,    83,    93,    96,    -1,    27,    83,
      93,    96,    -1,    53,    70,    94,    71,    -1,    53,    70,
      71,    -1,    95,    -1,    94,    79,    95,    -1,    83,    53,
      -1,    76,    97,    77,    -1,    76,    77,    -1,    98,    -1,
      97,    98,    -1,    99,    -1,   100,    -1,    83,    90,    78,
      -1,   101,    -1,   115,    78,    -1,   102,    -1,   103,    -1,
     107,    -1,    96,    -1,    78,    -1,    53,    80,    98,    -1,
       6,   116,    80,    98,    -1,     6,    70,   116,    71,    80,
      98,    -1,    10,    80,    98,    -1,    16,    70,   115,    71,
     100,    13,   100,    -1,    16,    70,   115,    71,   100,    -1,
      29,    70,   115,    71,    96,    -1,    31,    70,   115,    71,
     100,    -1,    11,   100,    31,    70,   115,    71,    78,    -1,
      15,    70,   104,   105,   106,    71,   100,    -1,    15,    70,
     104,   105,    71,   100,    -1,   106,    78,    -1,    99,    -1,
      78,    -1,   116,    78,    -1,   117,    78,    -1,    70,   115,
      71,    78,    -1,    78,    -1,   115,    -1,   106,    79,   115,
      -1,     4,    53,    78,    -1,     4,    78,    -1,     9,    53,
      78,    -1,     9,    78,    -1,    25,   115,    78,    -1,    25,
      78,    -1,    53,    70,   106,    71,    -1,    53,    70,    71,
      -1,    24,    70,    54,    79,   106,    71,    -1,    24,    70,
     110,    71,    -1,   112,    -1,   110,    66,   112,    -1,    32,
     112,    -1,    33,   112,    -1,   112,    32,    -1,   112,    33,
      -1,   112,    -1,    73,   112,    -1,    54,    -1,   108,    -1,
      53,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
     109,    -1,   111,    -1,   113,    66,   113,    -1,   113,    65,
     113,    -1,   113,    68,   113,    -1,   113,    67,   113,    -1,
     113,    69,   113,    -1,   113,    34,   113,    -1,   113,    35,
     113,    -1,   113,    -1,   113,    64,   114,    -1,   113,    63,
     114,    -1,   113,    37,   114,    -1,   113,    36,   114,    -1,
     113,    38,   114,    -1,   113,    39,   114,    -1,   113,    62,
     114,    -1,   113,    61,   114,    -1,   113,    60,   114,    -1,
     116,    -1,   117,    -1,    70,   115,    71,    -1,   114,    -1,
     114,    40,   116,    -1,   114,    41,   116,    -1,    73,    70,
     114,    71,    -1,   114,    81,   115,    80,   115,    -1,    53,
      59,   115,    -1,    53,    43,   115,    -1,    53,    44,   115,
      -1,    53,    45,   115,    -1,    53,    46,   115,    -1,    53,
      47,   115,    -1,    53,    48,   115,    -1,    53,    49,   115,
      -1,    53,    50,   115,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   156,   156,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   182,   186,   187,   191,   192,   196,
     197,   201,   202,   206,   207,   211,   212,   218,   219,   223,
     224,   228,   229,   233,   237,   238,   245,   246,   250,   251,
     255,   259,   260,   261,   262,   263,   264,   268,   272,   273,
     274,   275,   279,   280,   281,   285,   286,   287,   288,   292,
     293,   294,   298,   299,   300,   301,   305,   306,   310,   311,
     312,   313,   314,   315,   320,   321,   326,   327,   331,   332,
     336,   337,   338,   339,   340,   344,   348,   349,   350,   351,
     352,   353,   354,   355,   359,   360,   361,   362,   363,   364,
     365,   366,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   384,   385,   386,   391,   392,   393,   394,   395,
     399,   400,   401,   402,   403,   404,   405,   406,   407
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "BYTE", "CASE",
  "CHAR", "CLASS", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE", "FLOAT",
  "FOR", "IF", "IMPORT", "INT", "JNULL", "LONG", "NEW", "OPERATOR",
  "PUBLIC", "PRINTLN", "RETURN", "SHORT", "STATIC", "STRING", "SWITCH",
  "VOID", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_GREATER_EQUAL", "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT",
  "OP_AND", "OP_OR", "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB",
  "ASS_XOR", "ASS_MOD", "ASS_SHL", "ASS_SHR", "ASS_AND", "ASS_OR", "ID",
  "LITERAL", "TRUE", "FALSE", "INTEGER", "FLOATPOINT", "'='", "'|'", "'^'",
  "'&'", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "'('", "')'",
  "'~'", "'!'", "'['", "']'", "'{'", "'}'", "';'", "','", "':'", "'?'",
  "$accept", "TypeSpecifier", "TypeName", "ProgramFile", "ClassHeader",
  "FieldDeclarations", "FieldDeclaration", "AttrDeclaration",
  "VariableDeclarators", "VariableDeclarator", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "Expressions", "JumpStatement", "MethodCall", "SystemOutPrintln",
  "PrintExpressions", "UnaryExpression", "BasicElement",
  "ArithmeticExpression", "RelationalExpression", "Expression",
  "ConditionalExpression", "AssignmentExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    61,
     124,    94,    38,    62,    60,    45,    43,    42,    47,    37,
      40,    41,   126,    33,    91,    93,   123,   125,    59,    44,
      58,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    96,    96,    97,    97,    98,    98,
      99,   100,   100,   100,   100,   100,   100,   100,   101,   101,
     101,   101,   102,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   105,   106,   106,   107,   107,
     107,   107,   107,   107,   108,   108,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   113,   113,   113,
     113,   113,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   115,   115,   115,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     1,     2,     2,
       1,     4,     3,     1,     3,     1,     3,     5,     4,     4,
       3,     1,     3,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     4,
       6,     3,     7,     5,     5,     5,     7,     7,     6,     2,
       1,     1,     2,     2,     4,     1,     1,     3,     3,     2,
       3,     2,     3,     2,     4,     3,     6,     4,     1,     3,
       2,     2,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     1,     3,     3,     4,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    16,     0,     1,     0,    15,
       0,     0,     0,    17,     0,    20,     0,     3,     5,     4,
      10,     9,     7,     8,     6,    12,    11,     0,     2,    14,
      18,    19,     0,     0,    25,    22,    23,     0,    21,     0,
      13,     0,     0,     0,     0,    28,    27,     0,     0,     0,
      88,    86,    89,    90,    91,    92,     0,     0,    87,    93,
      94,    84,   102,   115,    26,   112,   113,    30,     0,     0,
      31,    25,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,    35,    47,     0,    46,     0,    36,
      38,    39,    41,    43,    44,    45,     0,     0,    88,    80,
      81,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    29,     0,     0,    69,
       0,     0,     0,    71,     0,     0,     0,     0,    73,     0,
       0,     0,     0,     0,    34,    37,    42,    86,     0,    78,
     121,   122,   123,   124,   125,   126,   127,   128,   120,    75,
       0,    66,   114,     0,     0,   100,   101,   106,   105,   107,
     108,   111,   110,   109,   104,   103,    96,    95,    98,    97,
      99,   116,   117,     0,    32,    68,     0,     0,    70,    51,
       0,    61,    60,     0,     0,     0,    72,     0,     0,    48,
      40,     0,     0,    77,    74,     0,   118,     0,     0,    49,
       0,     0,    65,     0,     0,     0,    59,     0,     0,     0,
       0,    79,    67,   119,     0,     0,     0,     0,     0,    62,
      63,    53,    54,    55,    76,    50,     0,     0,    58,     0,
       0,    56,    64,    57,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    86,    28,     3,     4,    12,    13,    14,    35,    36,
      15,    37,    69,    70,    87,    88,    89,    90,    91,    92,
      93,    94,   203,   223,   170,    95,    58,    59,   158,    60,
      61,    62,    63,    96,    65,    66
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
       5,   -42,    24,    18,   -23,  -138,   -14,  -138,     7,  -138,
      51,   609,    -2,  -138,     6,  -138,   609,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,    13,  -138,    72,  -138,  -138,
    -138,  -138,    72,    52,   -32,    47,  -138,    54,    47,    54,
    -138,   454,    17,    80,   183,  -138,  -138,    64,     2,     2,
     174,  -138,  -138,  -138,  -138,  -138,   454,   324,  -138,  -138,
    -138,    63,   542,   -33,  -138,  -138,  -138,  -138,    86,   -38,
    -138,    81,  -138,   -36,   482,   -34,    61,   427,    74,    75,
      59,    76,    85,   104,  -138,  -138,    80,  -138,   259,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,    79,   269,    89,  -138,
    -138,   454,   454,   454,   454,   454,   454,   454,   454,   454,
      65,    71,   489,  -138,  -138,  -138,   489,   489,   489,   489,
     489,   489,   489,   489,   489,   489,   489,   489,   489,   489,
     489,   489,   517,   517,   454,  -138,  -138,   609,    82,  -138,
     517,    84,    87,  -138,   335,   131,   392,   454,  -138,    90,
     454,   454,   335,    26,  -138,  -138,  -138,    91,    10,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
     -25,  -138,  -138,     2,    98,    34,    34,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,   -18,   -18,  -138,  -138,
    -138,  -138,  -138,    92,  -138,  -138,   102,   335,  -138,  -138,
     106,  -138,  -138,   172,    30,   111,  -138,   114,   129,  -138,
    -138,   454,     2,  -138,  -138,   454,  -138,   454,   122,  -138,
     454,   454,  -138,   248,   128,   132,  -138,   427,    54,   427,
      11,  -138,  -138,  -138,   335,   160,   161,   427,    14,  -138,
    -138,   221,  -138,  -138,  -138,  -138,   157,   165,  -138,   427,
     427,  -138,  -138,  -138,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,    -6,  -138,  -138,  -138,  -138,   234,  -138,    -9,   204,
    -138,   216,  -138,   112,   -37,  -138,   -73,   105,   -71,  -138,
    -138,  -138,  -138,  -138,  -137,  -138,  -138,  -138,  -138,  -138,
     -45,   180,   473,   -40,   -60,    49
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    64,    46,    99,   100,    27,   145,   132,   133,   204,
      32,     5,   113,     1,   141,   155,   111,   138,     7,   142,
      17,    10,    18,    38,    19,    11,    47,    41,     2,    20,
      10,    21,     6,   136,    11,    22,    68,    23,    42,     9,
     149,   137,   139,    24,   143,    25,   214,    26,   134,   129,
     130,   131,   159,     8,   215,    98,    51,    52,    53,    54,
      55,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     171,   199,   191,   192,   230,    29,   212,   153,    16,   209,
     196,   213,   244,    47,    31,   249,   238,    33,    67,    47,
     215,    48,    49,   215,   193,   114,   115,    48,    49,   127,
     128,   129,   130,   131,   210,    43,   171,   205,   226,   215,
     207,   208,    50,    51,    52,    53,    54,    55,    50,    51,
      52,    53,    54,    55,   219,    34,    43,    40,   113,    56,
      44,    68,    57,    71,    97,    56,   169,   148,    57,   135,
      41,   144,   172,   224,   146,   147,   150,   101,   102,   103,
     104,   105,   106,   107,   108,   151,   241,   156,   243,   110,
     195,   245,   200,   109,   197,   198,   248,   231,   206,   216,
     211,   171,   217,   218,   110,   232,   220,   233,   253,   254,
     235,   236,   227,   171,   152,   228,    17,    73,    18,    74,
      19,   242,    75,    76,    77,    20,    47,    21,    78,    79,
     229,    22,   234,    23,    48,    49,   239,    47,    80,    24,
     240,    25,    81,    26,    82,    48,    49,   101,   102,   103,
     104,   105,   106,   107,   108,    50,    51,    52,    53,    54,
      55,   246,   247,   109,   250,   251,    83,    51,    52,    53,
      54,    55,   221,   252,   110,    57,    30,    72,    39,   194,
     222,   202,   225,    56,     0,     0,    57,     0,     0,    44,
      84,    85,    17,    73,    18,    74,    19,     0,    75,    76,
      77,    20,    47,    21,    78,    79,     0,    22,     0,    23,
      48,    49,     0,    47,    80,    24,     0,    25,    81,    26,
      82,    48,    49,    47,     0,     0,   175,   176,     0,     0,
       0,    50,    51,    52,    53,    54,    55,   186,   187,   188,
     189,   190,    83,    51,    52,    53,    54,    55,    56,   237,
       0,    57,    98,   157,    52,    53,    54,    55,     0,    56,
       0,     0,    57,     0,     0,    44,   154,    85,    17,    73,
      18,    74,    19,     0,    75,    76,    77,    20,    47,    21,
      78,    79,     0,    22,     0,    23,     0,     0,     0,    47,
      80,    24,     0,    25,    81,    26,    82,    48,    49,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    51,    52,
      53,    54,    55,     0,     0,     0,     0,     0,    83,    51,
      52,    53,    54,    55,   112,    17,     0,    18,     0,    19,
       0,     0,     0,     0,    20,    56,    21,     0,    57,     0,
      22,    44,    23,    85,     0,     0,    47,     0,    24,     0,
      25,     0,    26,     0,    48,    49,     0,     0,     0,     0,
       0,    73,     0,    74,     0,     0,    75,    76,    77,     0,
       0,     0,    78,    79,     0,    50,    51,    52,    53,    54,
      55,    47,    80,     0,     0,     0,    81,     0,    82,    48,
      49,     0,    56,     0,     0,    57,     0,     0,     0,     0,
     201,     0,     0,     0,     0,     0,     0,     0,    47,     0,
      83,    51,    52,    53,    54,    55,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
      57,     0,     0,    44,     0,    85,    47,    50,    51,    52,
      53,    54,    55,    47,    48,    49,     0,     0,     0,     0,
       0,    48,    49,     0,    56,     0,     0,    57,     0,     0,
       0,     0,     0,     0,     0,    98,    51,    52,    53,    54,
      55,    47,    98,    51,    52,    53,    54,    55,     0,    48,
      49,     0,   140,     0,     0,    57,     0,     0,     0,     0,
       0,     0,   173,     0,     0,     0,     0,     0,     0,     0,
      98,    51,    52,    53,    54,    55,   116,   117,   118,   119,
     120,   121,     0,     0,     0,   174,     0,     0,     0,     0,
      57,   177,   178,   179,   180,   181,   182,   183,   184,   185,
       0,     0,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,    17,     0,    18,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,     0,    23,
       0,     0,     0,     0,     0,    24,     0,    25,     0,    26
};

static const yytype_int16 yycheck[] =
{
      37,    41,    39,    48,    49,    11,    77,    40,    41,   146,
      16,    53,    57,     8,    74,    88,    56,    53,     0,    53,
       3,    23,     5,    32,     7,    27,    24,    59,    23,    12,
      23,    14,     8,    71,    27,    18,    42,    20,    70,    53,
      80,    79,    78,    26,    78,    28,    71,    30,    81,    67,
      68,    69,    97,    76,    79,    53,    54,    55,    56,    57,
      58,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   144,   132,   133,   211,    77,    66,    86,    27,   152,
     140,    71,    71,    24,    78,    71,   223,    74,    71,    24,
      79,    32,    33,    79,   134,    32,    33,    32,    33,    65,
      66,    67,    68,    69,    78,    79,   146,   147,    78,    79,
     150,   151,    53,    54,    55,    56,    57,    58,    53,    54,
      55,    56,    57,    58,   197,    53,    79,    75,   173,    70,
      76,   137,    73,    53,    70,    70,    71,    78,    73,    53,
      59,    80,    71,   203,    70,    70,    70,    43,    44,    45,
      46,    47,    48,    49,    50,    70,   227,    78,   229,    70,
      78,   234,    31,    59,    80,    78,   237,   212,    78,    71,
      79,   211,    80,    71,    70,   215,    70,   217,   249,   250,
     220,   221,    71,   223,    80,    71,     3,     4,     5,     6,
       7,   228,     9,    10,    11,    12,    24,    14,    15,    16,
      71,    18,    80,    20,    32,    33,    78,    24,    25,    26,
      78,    28,    29,    30,    31,    32,    33,    43,    44,    45,
      46,    47,    48,    49,    50,    53,    54,    55,    56,    57,
      58,    71,    71,    59,    13,    78,    53,    54,    55,    56,
      57,    58,    70,    78,    70,    73,    12,    43,    32,   137,
      78,   146,   203,    70,    -1,    -1,    73,    -1,    -1,    76,
      77,    78,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    24,    14,    15,    16,    -1,    18,    -1,    20,
      32,    33,    -1,    24,    25,    26,    -1,    28,    29,    30,
      31,    32,    33,    24,    -1,    -1,   116,   117,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,   127,   128,   129,
     130,   131,    53,    54,    55,    56,    57,    58,    70,    71,
      -1,    73,    53,    54,    55,    56,    57,    58,    -1,    70,
      -1,    -1,    73,    -1,    -1,    76,    77,    78,     3,     4,
       5,     6,     7,    -1,     9,    10,    11,    12,    24,    14,
      15,    16,    -1,    18,    -1,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    30,    31,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    57,    58,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    56,    57,    58,    70,     3,    -1,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    70,    14,    -1,    73,    -1,
      18,    76,    20,    78,    -1,    -1,    24,    -1,    26,    -1,
      28,    -1,    30,    -1,    32,    33,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    -1,    53,    54,    55,    56,    57,
      58,    24,    25,    -1,    -1,    -1,    29,    -1,    31,    32,
      33,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    24,    -1,
      53,    54,    55,    56,    57,    58,    32,    33,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,
      73,    -1,    -1,    76,    -1,    78,    24,    53,    54,    55,
      56,    57,    58,    24,    32,    33,    -1,    -1,    -1,    -1,
      -1,    32,    33,    -1,    70,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    24,    53,    54,    55,    56,    57,    58,    -1,    32,
      33,    -1,    70,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    54,    55,    56,    57,    58,    34,    35,    36,    37,
      38,    39,    -1,    -1,    -1,   112,    -1,    -1,    -1,    -1,
      73,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      -1,    -1,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    28,    -1,    30
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    23,    85,    86,    53,     8,     0,    76,    53,
      23,    27,    87,    88,    89,    92,    27,     3,     5,     7,
      12,    14,    18,    20,    26,    28,    30,    83,    84,    77,
      88,    78,    83,    74,    53,    90,    91,    93,    90,    93,
      75,    59,    70,    79,    76,    96,    96,    24,    32,    33,
      53,    54,    55,    56,    57,    58,    70,    73,   108,   109,
     111,   112,   113,   114,   115,   116,   117,    71,    83,    94,
      95,    53,    91,     4,     6,     9,    10,    11,    15,    16,
      25,    29,    31,    53,    77,    78,    83,    96,    97,    98,
      99,   100,   101,   102,   103,   107,   115,    70,    53,   112,
     112,    43,    44,    45,    46,    47,    48,    49,    50,    59,
      70,   115,    70,   112,    32,    33,    34,    35,    36,    37,
      38,    39,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    40,    41,    81,    53,    71,    79,    53,    78,
      70,   116,    53,    78,    80,   100,    70,    70,    78,   115,
      70,    70,    80,    90,    77,    98,    78,    54,   110,   112,
     115,   115,   115,   115,   115,   115,   115,   115,   115,    71,
     106,   115,    71,    73,   114,   113,   113,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   113,   113,   113,   113,
     113,   116,   116,   115,    95,    78,   116,    80,    78,    98,
      31,    78,    99,   104,   106,   115,    78,   115,   115,    98,
      78,    79,    66,    71,    71,    79,    71,    80,    71,    98,
      70,    70,    78,   105,   116,   117,    78,    71,    71,    71,
     106,   112,   115,   115,    80,   115,   115,    71,   106,    78,
      78,   100,    96,   100,    71,    98,    71,    71,   100,    71,
      13,    78,    78,   100,   100
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 156 "pJava.y"
    {(yyval._typeSpecifier) = insert_TypeSpecifier((yyvsp[(1) - (1)]._typename), line_no);}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 167 "pJava.y"
    {(yyval._typename) = insert_Typename(is_BOOLEAN);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 168 "pJava.y"
    {(yyval._typename) = insert_Typename(is_CHAR);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 169 "pJava.y"
    {(yyval._typename) = insert_Typename(is_BYTE);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 170 "pJava.y"
    {(yyval._typename) = insert_Typename(is_SHORT);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 171 "pJava.y"
    {(yyval._typename) = insert_Typename(is_INT);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 172 "pJava.y"
    {(yyval._typename) = insert_Typename(is_LONG);}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 173 "pJava.y"
    {(yyval._typename) = insert_Typename(is_FLOAT);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 174 "pJava.y"
    {(yyval._typename) = insert_Typename(is_DOUBLE);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 175 "pJava.y"
    {(yyval._typename) = insert_Typename(is_VOID);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 176 "pJava.y"
    {(yyval._typename) = insert_Typename(is_STRING);}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 177 "pJava.y"
    {(yyval._typename) = insert_Typename(is_STRING_ARRAY);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 182 "pJava.y"
    {(yyval._programFile) = insert_ProgramFile((yyvsp[(1) - (4)]._classHeader), (yyvsp[(3) - (4)]._fieldDeclaration_list)); myProgram = (yyval._programFile);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 186 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(3) - (3)].id), line_no);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 187 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(2) - (2)].id), line_no);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 191 "pJava.y"
    {(yyval._fieldDeclaration_list) = insert_FieldDeclaration_list(NULL, (yyvsp[(1) - (1)]._fieldDeclaration));}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 192 "pJava.y"
    {(yyval._fieldDeclaration_list) = insert_FieldDeclaration_list((yyvsp[(1) - (2)]._fieldDeclaration_list), (yyvsp[(2) - (2)]._fieldDeclaration));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 196 "pJava.y"
    {(yyval._fieldDeclaration) = insert_FieldDeclaration_AttrDeclaration((yyvsp[(1) - (2)]._attrDeclaration),line_no);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 197 "pJava.y"
    {(yyval._fieldDeclaration) = insert_FieldDeclaration_MethodDeclaration((yyvsp[(1) - (1)]._methodDeclaration),line_no);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 201 "pJava.y"
    {(yyval._attrDeclaration) = insert_AttrDeclaration((yyvsp[(3) - (4)]._typeSpecifier), (yyvsp[(4) - (4)]._variablesDeclarator_list),line_no);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 202 "pJava.y"
    {(yyval._attrDeclaration) = insert_AttrDeclaration((yyvsp[(2) - (3)]._typeSpecifier), (yyvsp[(3) - (3)]._variablesDeclarator_list),line_no);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 206 "pJava.y"
    {(yyval._variablesDeclarator_list) = insert_VariablesDeclarator_list(NULL, (yyvsp[(1) - (1)]._variablesDeclarator));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 207 "pJava.y"
    {(yyval._variablesDeclarator_list) = insert_VariablesDeclarator_list((yyvsp[(1) - (3)]._variablesDeclarator_list), (yyvsp[(3) - (3)]._variablesDeclarator));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 211 "pJava.y"
    {(yyval._variablesDeclarator) = insert_VariablesDeclarator((yyvsp[(1) - (1)].id), NULL,line_no);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 212 "pJava.y"
    {(yyval._variablesDeclarator) = insert_VariablesDeclarator((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)]._expression),line_no);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 218 "pJava.y"
    {(yyval._methodDeclaration) = insert_MethodDeclaration((yyvsp[(3) - (5)]._typeSpecifier), (yyvsp[(4) - (5)]._methodDeclarator), (yyvsp[(5) - (5)]._block), line_no); (yyvsp[(4) - (5)]._methodDeclarator)->isReturnOk = hasReturn; hasReturn = false;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 219 "pJava.y"
    {(yyval._methodDeclaration) = insert_MethodDeclaration((yyvsp[(2) - (4)]._typeSpecifier), (yyvsp[(3) - (4)]._methodDeclarator), (yyvsp[(4) - (4)]._block), line_no); (yyvsp[(3) - (4)]._methodDeclarator)->isReturnOk = hasReturn; hasReturn = false;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 223 "pJava.y"
    {(yyval._methodDeclarator) = insert_MethodDeclarator((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)]._parameters_list), line_no);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 224 "pJava.y"
    {(yyval._methodDeclarator) = insert_MethodDeclarator((yyvsp[(1) - (3)].id), NULL, line_no);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 228 "pJava.y"
    {(yyval._parameters_list) = insert_Parameters_list(NULL, (yyvsp[(1) - (1)]._parameter));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 229 "pJava.y"
    {(yyval._parameters_list) = insert_Parameters_list((yyvsp[(1) - (3)]._parameters_list), (yyvsp[(3) - (3)]._parameter));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 233 "pJava.y"
    {(yyval._parameter) = insert_Parameter((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)]._typeSpecifier), line_no);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 237 "pJava.y"
    {(yyval._block) = insert_Block((yyvsp[(2) - (3)]._localVariableDeclarationsOrStatements_list));}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 238 "pJava.y"
    {(yyval._block) = insert_Block(NULL);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 245 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements_list) = insert_LocalVariableDeclarationsOrStatements_list(NULL, (yyvsp[(1) - (1)]._localVariableDeclarationsOrStatements));}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 246 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements_list) = insert_LocalVariableDeclarationsOrStatements_list((yyvsp[(1) - (2)]._localVariableDeclarationsOrStatements_list), (yyvsp[(2) - (2)]._localVariableDeclarationsOrStatements));}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 250 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements) = insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement((yyvsp[(1) - (1)]._localVariableDeclarationStatement),line_no);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 251 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements) = insert_LocalVariableDeclarationsOrStatements_Statement((yyvsp[(1) - (1)]._statement),line_no);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 255 "pJava.y"
    {(yyval._localVariableDeclarationStatement) = insert_LocalVariableDeclarationStatement((yyvsp[(1) - (3)]._typeSpecifier), (yyvsp[(2) - (3)]._variablesDeclarator_list), line_no);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 259 "pJava.y"
    {(yyval._statement) = insert_Statement_LabeledStatement((yyvsp[(1) - (1)]._labeledStatement));}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 260 "pJava.y"
    {(yyval._statement) = insert_Statement_Expression((yyvsp[(1) - (2)]._expression));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 261 "pJava.y"
    {(yyval._statement) = insert_Statement_SelectionStatement((yyvsp[(1) - (1)]._selectionStatement));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 262 "pJava.y"
    {(yyval._statement) = insert_Statement_IterationStatement((yyvsp[(1) - (1)]._iterationStatement));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 263 "pJava.y"
    {(yyval._statement) = insert_Statement_JumpStatement((yyvsp[(1) - (1)]._jumpStatement));}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 264 "pJava.y"
    {(yyval._statement) = insert_Statement_Block((yyvsp[(1) - (1)]._block));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 268 "pJava.y"
    {(yyval._statement) = NULL;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 272 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_ID((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)]._localVariableDeclarationsOrStatements), line_no);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 273 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_CASE((yyvsp[(4) - (4)]._localVariableDeclarationsOrStatements), (yyvsp[(2) - (4)]._conditionalExpression), line_no);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 274 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_CASE((yyvsp[(6) - (6)]._localVariableDeclarationsOrStatements), (yyvsp[(3) - (6)]._conditionalExpression), line_no);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 275 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_DEFAULT((yyvsp[(3) - (3)]._localVariableDeclarationsOrStatements), line_no);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 279 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_IFELSE((yyvsp[(3) - (7)]._expression), (yyvsp[(5) - (7)]._statement), (yyvsp[(7) - (7)]._statement),line_no);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 280 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_IF((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._statement),line_no);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 281 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_SWITCH((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._block),line_no);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 285 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_WHILE((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._statement), line_no);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 286 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_DO((yyvsp[(5) - (7)]._expression), (yyvsp[(2) - (7)]._statement), line_no);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 287 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_FOR((yyvsp[(4) - (7)]._expression), (yyvsp[(7) - (7)]._statement), (yyvsp[(3) - (7)]._forInit), (yyvsp[(5) - (7)]._expressions_list), line_no);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 288 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_FOR((yyvsp[(4) - (6)]._expression), (yyvsp[(6) - (6)]._statement), (yyvsp[(3) - (6)]._forInit), NULL, line_no);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 292 "pJava.y"
    {(yyval._forInit) = insert_ForInit((yyvsp[(1) - (2)]._expressions_list), NULL);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 293 "pJava.y"
    {(yyval._forInit) = insert_ForInit(NULL, (yyvsp[(1) - (1)]._localVariableDeclarationStatement));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 294 "pJava.y"
    {(yyval._forInit) = NULL;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 298 "pJava.y"
    {(yyval._expression) = insert_Expression_ConditionalExpression((yyvsp[(1) - (2)]._conditionalExpression),line_no);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 299 "pJava.y"
    {(yyval._expression) = insert_Expression_AssignmentExpression((yyvsp[(1) - (2)]._assignmentExpression),line_no);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 300 "pJava.y"
    {(yyval._expression) = insert_Expression_Expression((yyvsp[(2) - (4)]._expression),line_no);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 301 "pJava.y"
    {(yyval._expression) = NULL;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 305 "pJava.y"
    {(yyval._expressions_list) = insert_Expressions_list(NULL, (yyvsp[(1) - (1)]._expression));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 306 "pJava.y"
    {(yyval._expressions_list) = insert_Expressions_list((yyvsp[(1) - (3)]._expressions_list), (yyvsp[(3) - (3)]._expression));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 310 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_BREAK_ID((yyvsp[(2) - (3)].id),line_no);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 311 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_BREAK(line_no);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 312 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_CONTINUE_ID((yyvsp[(2) - (3)].id),line_no);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 313 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_CONTINUE(line_no);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 314 "pJava.y"
    {hasReturn = true; (yyval._jumpStatement) = insert_JumpStatement_RETURN_EXP((yyvsp[(2) - (3)]._expression),line_no);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 315 "pJava.y"
    {hasReturn = true; (yyval._jumpStatement) = insert_JumpStatement_RETURN(line_no);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 320 "pJava.y"
    {(yyval._methodCall) = insert_MethodCall((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)]._expressions_list), line_no);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 321 "pJava.y"
    {(yyval._methodCall) = insert_MethodCall((yyvsp[(1) - (3)].id), NULL, line_no);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 326 "pJava.y"
    {(yyval._systemOutPrintln) = insert_SystemOutPrintln((yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)]._expressions_list), line_no);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 327 "pJava.y"
    {(yyval._systemOutPrintln) = insert_SystemOutPrintlnJavaStyle((yyvsp[(3) - (4)]._printExpressions_list), line_no);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 331 "pJava.y"
    {(yyval._printExpressions_list) = insert_PrintExpressions_list(NULL, (yyvsp[(1) - (1)]._basicElement));}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 332 "pJava.y"
    {(yyval._printExpressions_list) = insert_PrintExpressions_list((yyvsp[(1) - (3)]._printExpressions_list), (yyvsp[(3) - (3)]._basicElement));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 336 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_INC_BEFORE, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 337 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DCR_BEFORE, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 338 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_INC_AFTER, (yyvsp[(1) - (2)]._basicElement),line_no);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 339 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DCR_AFTER, (yyvsp[(1) - (2)]._basicElement),line_no);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 340 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_NONE, (yyvsp[(1) - (1)]._basicElement),line_no);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 344 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DIFFERENT_UNARY, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 348 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_LITERAL((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 349 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_METHOD_CALL((yyvsp[(1) - (1)]._methodCall), line_no);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 350 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_ID((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 351 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_TRUE((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 352 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_FALSE((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 353 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_INTEGER(yyval.i, line_no);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 354 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_FLOATPOINT(yyval.d, line_no);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 355 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_PRINTLN((yyvsp[(1) - (1)]._systemOutPrintln), line_no);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 359 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_AE_NONE, NULL, NULL, (yyvsp[(1) - (1)]._unaryExpression),line_no);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 360 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_PLUS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 361 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_MINUS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 362 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_SLASH, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 363 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_TIMES, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 364 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_MODULO, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 365 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_OP_SHL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 366 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_OP_SHR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 371 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_RE_NONE, (yyvsp[(1) - (1)]._arithmeticExpression), NULL,line_no);}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 372 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_LESS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 373 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_GREATER, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 374 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_LESS_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 375 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_GREATER_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 376 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 377 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_DIFFERENT, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 378 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SAND, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 379 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SXOR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 380 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SOR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 384 "pJava.y"
    {(yyval._expression) = insert_Expression_ConditionalExpression((yyvsp[(1) - (1)]._conditionalExpression),line_no);}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 385 "pJava.y"
    {(yyval._expression) = insert_Expression_AssignmentExpression((yyvsp[(1) - (1)]._assignmentExpression),line_no);}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 386 "pJava.y"
    {(yyval._expression) = insert_Expression_Expression((yyvsp[(2) - (3)]._expression),line_no);}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 391 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_UNARY, (yyvsp[(1) - (1)]._relationalExpression), NULL, NULL, line_no);}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 392 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpressionMultiple(is_OP_AND, (yyvsp[(1) - (3)]._relationalExpression), (yyvsp[(3) - (3)]._conditionalExpression), line_no);}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 393 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpressionMultiple(is_OP_OR, (yyvsp[(1) - (3)]._relationalExpression), (yyvsp[(3) - (3)]._conditionalExpression), line_no);}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 394 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_UNARY_NOT, (yyvsp[(3) - (4)]._relationalExpression), NULL, NULL, line_no);}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 395 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_TRINARY, (yyvsp[(1) - (5)]._relationalExpression), (yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._expression), line_no);}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 399 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASSIGN, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 400 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_MUL, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 401 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_DIV, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 402 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_ADD, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 403 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SUB, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 404 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_XOR, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 405 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_MOD, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 406 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SHL, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 407 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SHR, (yyvsp[(3) - (3)]._expression), line_no);}
    break;



/* Line 1455 of yacc.c  */
#line 2704 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 411 "pJava.y"


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

