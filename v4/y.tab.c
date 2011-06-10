
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
     ARGS = 258,
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     CASE = 262,
     CHAR = 263,
     CLASS = 264,
     CONTINUE = 265,
     DEFAULT = 266,
     DO = 267,
     DOUBLE = 268,
     ELSE = 269,
     FLOAT = 270,
     FOR = 271,
     IF = 272,
     IMPORT = 273,
     INT = 274,
     JNULL = 275,
     LONG = 276,
     NEW = 277,
     OPERATOR = 278,
     PUBLIC = 279,
     PRINTLN = 280,
     RETURN = 281,
     SHORT = 282,
     STATIC = 283,
     STRING = 284,
     SWITCH = 285,
     VOID = 286,
     WHILE = 287,
     OP_INC = 288,
     OP_DEC = 289,
     OP_SHL = 290,
     OP_SHR = 291,
     OP_GREATER_EQUAL = 292,
     OP_LESS_EQUAL = 293,
     OP_EQUAL = 294,
     OP_DIFFERENT = 295,
     OP_AND = 296,
     OP_OR = 297,
     OP_DIM = 298,
     ASS_MUL = 299,
     ASS_DIV = 300,
     ASS_ADD = 301,
     ASS_SUB = 302,
     ASS_XOR = 303,
     ASS_MOD = 304,
     ASS_SHL = 305,
     ASS_SHR = 306,
     ASS_AND = 307,
     ASS_OR = 308,
     ID = 309,
     LITERAL = 310,
     TRUE = 311,
     FALSE = 312,
     INTEGER = 313,
     FLOATPOINT = 314,
     LOW_PRIORITY = 315
   };
#endif
/* Tokens.  */
#define ARGS 258
#define BOOLEAN 259
#define BREAK 260
#define BYTE 261
#define CASE 262
#define CHAR 263
#define CLASS 264
#define CONTINUE 265
#define DEFAULT 266
#define DO 267
#define DOUBLE 268
#define ELSE 269
#define FLOAT 270
#define FOR 271
#define IF 272
#define IMPORT 273
#define INT 274
#define JNULL 275
#define LONG 276
#define NEW 277
#define OPERATOR 278
#define PUBLIC 279
#define PRINTLN 280
#define RETURN 281
#define SHORT 282
#define STATIC 283
#define STRING 284
#define SWITCH 285
#define VOID 286
#define WHILE 287
#define OP_INC 288
#define OP_DEC 289
#define OP_SHL 290
#define OP_SHR 291
#define OP_GREATER_EQUAL 292
#define OP_LESS_EQUAL 293
#define OP_EQUAL 294
#define OP_DIFFERENT 295
#define OP_AND 296
#define OP_OR 297
#define OP_DIM 298
#define ASS_MUL 299
#define ASS_DIV 300
#define ASS_ADD 301
#define ASS_SUB 302
#define ASS_XOR 303
#define ASS_MOD 304
#define ASS_SHL 305
#define ASS_SHR 306
#define ASS_AND 307
#define ASS_OR 308
#define ID 309
#define LITERAL 310
#define TRUE 311
#define FALSE 312
#define INTEGER 313
#define FLOATPOINT 314
#define LOW_PRIORITY 315




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 115 "pJava.y"

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



/* Line 214 of yacc.c  */
#line 297 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 309 "y.tab.c"

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
#define YYLAST   910

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  84
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  132
/* YYNRULES -- Number of states.  */
#define YYNSTATES  266

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,     2,     2,     2,    71,    64,     2,
      72,    73,    69,    68,    81,    67,     2,    70,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    80,
      66,    61,    65,    83,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    76,     2,    77,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    78,    62,    79,    74,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    29,    34,    38,    41,    43,    46,
      49,    51,    56,    60,    62,    66,    68,    72,    78,    83,
      88,    92,    94,    98,   101,   104,   108,   111,   113,   116,
     118,   120,   124,   126,   129,   131,   133,   135,   137,   139,
     144,   151,   155,   163,   169,   175,   181,   189,   197,   204,
     207,   209,   211,   214,   217,   222,   224,   226,   230,   233,
     236,   240,   243,   248,   252,   259,   264,   266,   270,   273,
     276,   279,   282,   284,   287,   289,   291,   293,   295,   297,
     299,   301,   306,   308,   310,   315,   322,   329,   331,   335,
     339,   343,   347,   351,   355,   359,   363,   365,   369,   373,
     377,   381,   385,   389,   393,   397,   401,   403,   405,   409,
     411,   415,   419,   424,   430,   434,   438,   442,   446,   450,
     454,   458,   462
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      87,     0,    -1,    86,    -1,     4,    -1,     8,    -1,     6,
      -1,    27,    -1,    19,    -1,    21,    -1,    15,    -1,    13,
      -1,    31,    -1,    29,    -1,    29,    76,    77,    -1,    88,
      78,    89,    79,    -1,    24,     9,    54,    -1,     9,    54,
      -1,    90,    -1,    89,    90,    -1,    91,    80,    -1,    94,
      -1,    24,    28,    85,    92,    -1,    28,    85,    92,    -1,
      93,    -1,    92,    81,    93,    -1,    54,    -1,    54,    61,
     118,    -1,    24,    28,    85,    95,    98,    -1,    28,    85,
      95,    98,    -1,    54,    72,    96,    73,    -1,    54,    72,
      73,    -1,    97,    -1,    96,    81,    97,    -1,    85,    54,
      -1,    85,     3,    -1,    78,    99,    79,    -1,    78,    79,
      -1,   100,    -1,    99,   100,    -1,   101,    -1,   102,    -1,
      85,    92,    80,    -1,   103,    -1,   118,    80,    -1,   104,
      -1,   105,    -1,   109,    -1,    98,    -1,    80,    -1,     7,
     119,    82,   100,    -1,     7,    72,   119,    73,    82,   100,
      -1,    11,    82,   100,    -1,    17,    72,   118,    73,   102,
      14,   102,    -1,    17,    72,   118,    73,   102,    -1,    30,
      72,   118,    73,    98,    -1,    32,    72,   118,    73,   102,
      -1,    12,   102,    32,    72,   118,    73,    80,    -1,    16,
      72,   106,   107,   108,    73,   102,    -1,    16,    72,   106,
     107,    73,   102,    -1,   108,    80,    -1,   101,    -1,    80,
      -1,   119,    80,    -1,   120,    80,    -1,    72,   118,    73,
      80,    -1,    80,    -1,   118,    -1,   108,    81,   118,    -1,
       5,    80,    -1,    10,    80,    -1,    26,   118,    80,    -1,
      26,    80,    -1,    54,    72,   108,    73,    -1,    54,    72,
      73,    -1,    25,    72,    55,    81,   108,    73,    -1,    25,
      72,   112,    73,    -1,   114,    -1,   112,    68,   114,    -1,
      33,   114,    -1,    34,   114,    -1,   114,    33,    -1,   114,
      34,    -1,   114,    -1,    75,   114,    -1,    55,    -1,   110,
      -1,    54,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,     3,    76,    58,    77,    -1,   111,    -1,   113,    -1,
      72,    85,    73,   113,    -1,    72,    85,    73,    72,   120,
      73,    -1,    72,    85,    73,    72,   119,    73,    -1,   115,
      -1,   116,    68,   116,    -1,   116,    67,   116,    -1,   116,
      70,   116,    -1,   116,    69,   116,    -1,   116,    71,   116,
      -1,   116,    35,   116,    -1,   116,    36,   116,    -1,    72,
     116,    73,    -1,   116,    -1,   116,    66,   117,    -1,   116,
      65,   117,    -1,   116,    38,   117,    -1,   116,    37,   117,
      -1,   116,    39,   117,    -1,   116,    40,   117,    -1,   116,
      64,   117,    -1,   116,    63,   117,    -1,   116,    62,   117,
      -1,   119,    -1,   120,    -1,    72,   118,    73,    -1,   117,
      -1,   117,    41,   119,    -1,   117,    42,   119,    -1,    75,
      72,   117,    73,    -1,   117,    83,   118,    82,   118,    -1,
      54,    61,   118,    -1,    54,    44,   118,    -1,    54,    45,
     118,    -1,    54,    46,   118,    -1,    54,    47,   118,    -1,
      54,    48,   118,    -1,    54,    49,   118,    -1,    54,    50,
     118,    -1,    54,    51,   118,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   165,   165,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   186,   190,   191,   195,   196,   200,
     201,   205,   206,   210,   211,   215,   216,   222,   223,   227,
     228,   232,   233,   237,   238,   242,   243,   250,   251,   255,
     256,   260,   264,   265,   266,   267,   268,   269,   270,   274,
     275,   276,   280,   281,   282,   286,   287,   288,   289,   293,
     294,   295,   299,   300,   301,   302,   306,   307,   311,   312,
     313,   314,   319,   320,   325,   326,   330,   331,   335,   336,
     337,   338,   339,   343,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   359,   360,   361,   362,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   392,   393,   394,   399,
     400,   401,   402,   403,   407,   408,   409,   410,   411,   412,
     413,   414,   415
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARGS", "BOOLEAN", "BREAK", "BYTE",
  "CASE", "CHAR", "CLASS", "CONTINUE", "DEFAULT", "DO", "DOUBLE", "ELSE",
  "FLOAT", "FOR", "IF", "IMPORT", "INT", "JNULL", "LONG", "NEW",
  "OPERATOR", "PUBLIC", "PRINTLN", "RETURN", "SHORT", "STATIC", "STRING",
  "SWITCH", "VOID", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_GREATER_EQUAL", "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT",
  "OP_AND", "OP_OR", "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB",
  "ASS_XOR", "ASS_MOD", "ASS_SHL", "ASS_SHR", "ASS_AND", "ASS_OR", "ID",
  "LITERAL", "TRUE", "FALSE", "INTEGER", "FLOATPOINT", "LOW_PRIORITY",
  "'='", "'|'", "'^'", "'&'", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'",
  "'%'", "'('", "')'", "'~'", "'!'", "'['", "']'", "'{'", "'}'", "';'",
  "','", "':'", "'?'", "$accept", "TypeSpecifier", "TypeName",
  "ProgramFile", "ClassHeader", "FieldDeclarations", "FieldDeclaration",
  "AttrDeclaration", "VariableDeclarators", "VariableDeclarator",
  "MethodDeclaration", "MethodDeclarator", "ParameterList", "Parameter",
  "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "Expressions", "JumpStatement", "MethodCall", "SystemOutPrintln",
  "PrintExpressions", "UnaryExpression", "BasicElement", "CastExpression",
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    61,   124,    94,    38,    62,    60,    45,    43,    42,
      47,    37,    40,    41,   126,    33,    91,    93,   123,   125,
      59,    44,    58,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    84,    85,    86,    86,    86,    86,    86,    86,    86,
      86,    86,    86,    86,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    99,    99,   100,
     100,   101,   102,   102,   102,   102,   102,   102,   102,   103,
     103,   103,   104,   104,   104,   105,   105,   105,   105,   106,
     106,   106,   107,   107,   107,   107,   108,   108,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   113,   113,
     113,   113,   113,   113,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   119,   119,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     1,     2,     2,
       1,     4,     3,     1,     3,     1,     3,     5,     4,     4,
       3,     1,     3,     2,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     4,
       6,     3,     7,     5,     5,     5,     7,     7,     6,     2,
       1,     1,     2,     2,     4,     1,     1,     3,     2,     2,
       3,     2,     4,     3,     6,     4,     1,     3,     2,     2,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     4,     6,     6,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     1,     3,     1,
       3,     3,     4,     5,     3,     3,     3,     3,     3,     3,
       3,     3,     3
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
       0,    86,    84,    87,    88,    89,    90,     0,     0,    85,
      92,    93,    82,    97,   106,   119,    26,   116,   117,    30,
       0,     0,    31,    25,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    48,     0,    47,     0,
      37,    39,    40,    42,    44,    45,    46,     0,     0,     0,
      86,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   106,     0,     0,    83,    80,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      33,    29,     0,    68,     0,     0,    69,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    35,    38,    43,     0,
      84,     0,    76,   125,   126,   127,   128,   129,   130,   131,
     132,   124,    73,     0,    66,     0,   105,   118,     0,     0,
       0,   103,   104,   110,   109,   111,   112,   115,   114,   113,
     108,   107,    99,    98,   101,   100,   102,   120,   121,     0,
      32,     0,     0,    51,     0,    61,    60,     0,     0,     0,
      70,     0,     0,    41,    91,     0,     0,    75,    72,     0,
       0,    94,     0,   122,     0,     0,    49,     0,     0,    65,
       0,     0,     0,    59,     0,     0,     0,     0,    77,    67,
       0,     0,   123,     0,     0,     0,     0,     0,    62,    63,
      53,    54,    55,    74,    96,    95,    50,     0,     0,    58,
       0,     0,    56,    64,    57,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    28,     3,     4,    12,    13,    14,    35,    36,
      15,    37,    71,    72,    88,    89,    90,    91,    92,    93,
      94,    95,   207,   230,   173,    96,    59,    60,   161,    61,
      62,    63,    64,    65,    97,    67,    68
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -198
static const yytype_int16 yypact[] =
{
      10,   -17,    29,    54,   -21,  -198,     7,  -198,    31,  -198,
      53,    20,   -16,  -198,     4,  -198,    20,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,    16,  -198,    40,  -198,  -198,
    -198,  -198,    40,    32,   -40,    35,  -198,    41,    35,    41,
    -198,   690,   122,    64,   197,  -198,  -198,    44,    50,   431,
     431,   188,  -198,  -198,  -198,  -198,  -198,   504,   437,  -198,
    -198,  -198,    -4,  -198,   839,   -25,  -198,  -198,  -198,  -198,
       6,   -37,  -198,    62,  -198,    45,   700,    47,    56,   388,
      60,    67,    49,    68,    70,  -198,  -198,    64,  -198,   275,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,    72,    96,   495,
      83,  -198,  -198,   690,   690,   690,   690,   690,   690,   690,
     690,   690,   627,    84,   823,    91,   735,  -198,  -198,  -198,
     735,   735,   735,   735,   735,   735,   735,   735,   735,   735,
     735,   735,   735,   735,   735,   735,   763,   763,   690,  -198,
    -198,  -198,    20,  -198,   562,    88,  -198,   353,   133,   446,
     690,  -198,    94,   690,   690,    -2,  -198,  -198,  -198,    95,
      90,   -46,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   -33,  -198,   770,  -198,  -198,   620,   431,
     102,    92,    92,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,    27,    27,  -198,  -198,  -198,  -198,  -198,    97,
    -198,   104,   353,  -198,   109,  -198,  -198,   264,    21,   110,
    -198,   113,   114,  -198,  -198,   690,   431,  -198,  -198,   690,
     798,  -198,    77,  -198,   690,   100,  -198,   690,   504,  -198,
     655,   116,   117,  -198,   388,    41,   388,   -31,  -198,  -198,
     121,   125,  -198,   353,   138,   142,   388,   -28,  -198,  -198,
     176,  -198,  -198,  -198,  -198,  -198,  -198,   126,   139,  -198,
     388,   388,  -198,  -198,  -198,  -198
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,   -11,  -198,  -198,  -198,  -198,   208,  -198,   -12,   178,
    -198,   193,  -198,    98,   -36,  -198,   -85,    93,   -68,  -198,
    -198,  -198,  -198,  -198,  -135,  -198,  -198,  -198,  -198,    66,
     -43,  -198,   -44,   418,   -39,   -51,  -197
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,    45,    66,    46,   157,    32,   101,   102,    10,   139,
     232,   148,    11,   114,   208,   117,   136,   137,   115,     1,
      38,    41,   216,   241,    17,   145,    18,   217,    19,   118,
     119,    70,    42,    20,     2,    21,   141,     5,     6,    22,
     218,    23,   253,   152,   142,   260,   113,    24,   219,    25,
     219,    26,    47,   219,     7,    10,   162,     8,   138,    11,
     140,     9,   203,    29,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   174,    48,   155,   181,   182,   213,    43,
     237,    16,    49,    50,    31,   197,   198,   192,   193,   194,
     195,   196,    33,   201,    34,   247,   133,   134,   135,   199,
     114,   233,   219,    51,    52,    53,    54,    55,    56,    40,
     174,   209,   120,   121,   211,   212,    43,   226,    73,    44,
      98,    57,    99,    41,    58,   143,    17,   146,    18,   151,
      19,    70,   149,   113,   222,    20,   117,    21,   147,   150,
     153,    22,   154,    23,   131,   132,   133,   134,   135,    24,
     176,    25,   158,    26,   159,   112,   231,   175,   256,   131,
     132,   133,   134,   135,   177,   204,   250,   113,   252,   240,
     202,   215,   214,   238,   210,   223,   174,   225,   259,   224,
     239,   227,   243,   234,   114,   242,   235,   236,   244,   245,
     261,   174,   264,   265,   254,    69,   248,   249,   255,   251,
      47,    17,    75,    18,    76,    19,   262,    77,    78,    79,
      20,   257,    21,    80,    81,   258,    22,   113,    23,   263,
      30,    74,    48,    82,    24,    39,    25,    83,    26,    84,
      49,    50,   103,   104,   105,   106,   107,   108,   109,   110,
     200,   221,   206,     0,     0,     0,     0,     0,     0,   111,
       0,    51,    52,    53,    54,    55,    56,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     0,    47,     0,    57,
       0,     0,    58,     0,     0,    44,    85,    86,    47,    17,
      75,    18,    76,    19,     0,    77,    78,    79,    20,    48,
      21,    80,    81,     0,    22,     0,    23,    49,    50,     0,
      48,    82,    24,     0,    25,    83,    26,    84,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,    51,    52,
      53,    54,    55,    56,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,    56,     0,   228,     0,     0,    58,
       0,     0,     0,     0,   229,     0,     0,    57,     0,     0,
      58,     0,     0,    44,   156,    86,    47,    17,    75,    18,
      76,    19,     0,    77,    78,    79,    20,     0,    21,    80,
      81,     0,    22,     0,    23,     0,     0,     0,    48,    82,
      24,     0,    25,    83,    26,    84,    49,    50,     0,     0,
       0,    47,     0,    75,     0,    76,     0,     0,    77,    78,
      79,     0,     0,     0,    80,    81,     0,    51,    52,    53,
      54,    55,    56,    48,    82,     0,     0,     0,    83,     0,
      84,    49,    50,     0,     0,    57,     0,     0,    58,     0,
       0,    44,     0,    86,    47,     0,     0,     0,     0,     0,
      47,     0,    51,    52,    53,    54,    55,    56,     0,    47,
      17,     0,    18,     0,    19,     0,    48,     0,     0,    20,
      57,    21,    48,    58,     0,    22,    44,    23,    86,     0,
       0,    48,     0,    24,     0,    25,     0,    26,     0,    49,
      50,     0,     0,     0,     0,   100,    52,    53,    54,    55,
      56,   100,    52,    53,    54,    55,    56,     0,    47,     0,
      51,    52,    53,    54,    55,    56,     0,    47,    17,   116,
      18,     0,    19,     0,     0,     0,     0,    20,    57,    21,
      48,    58,     0,    22,     0,    23,   205,     0,     0,    48,
       0,    24,     0,    25,   180,    26,     0,    49,    50,     0,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   100,
     160,    53,    54,    55,    56,     0,     0,     0,    51,    52,
      53,    54,    55,    56,     0,    47,    17,     0,    18,     0,
      19,     0,     0,     0,     0,    20,    57,    21,     0,    58,
       0,    22,     0,    23,     0,     0,     0,    48,     0,    24,
       0,    25,     0,    26,     0,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   100,    52,    53,    54,
      55,    56,     0,    47,    17,     0,    18,     0,    19,     0,
      47,     0,     0,    20,   178,    21,     0,    58,     0,    22,
       0,    23,     0,     0,     0,    48,     0,    24,     0,    25,
       0,    26,    48,    49,    50,     0,     0,     0,    47,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,    52,    53,    54,    55,    56,
      48,    51,    52,    53,    54,    55,    56,     0,    49,    50,
       0,     0,   178,    47,     0,   179,     0,     0,     0,    57,
     172,     0,    58,    47,     0,     0,     0,     0,     0,    51,
      52,    53,    54,    55,    56,    48,     0,     0,     0,     0,
       0,     0,     0,    49,    50,    48,     0,    57,   246,     0,
      58,     0,     0,    49,    50,     0,     0,     0,    47,     0,
       0,     0,     0,     0,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,   100,    52,    53,    54,    55,    56,
      48,     0,    57,     0,     0,    58,    47,     0,    49,    50,
       0,     0,   144,    47,     0,    58,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    48,   100,
      52,    53,    54,    55,    56,    48,    49,    50,     0,     0,
       0,    47,     0,    49,    50,     0,     0,   178,     0,     0,
     179,     0,     0,     0,     0,     0,     0,   100,    52,    53,
      54,    55,    56,    48,   100,    52,    53,    54,    55,    56,
       0,    49,    50,     0,     0,   178,     0,     0,    58,     0,
       0,     0,   220,     0,     0,   179,     0,     0,     0,     0,
       0,     0,    51,    52,    53,    54,    55,    56,   120,   121,
     122,   123,   124,   125,     0,     0,     0,     0,     0,     0,
     178,     0,     0,    58,   120,   121,   122,   123,   124,   125,
       0,     0,     0,     0,     0,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     0,   176,     0,     0,     0,
       0,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

static const yytype_int16 yycheck[] =
{
      11,    37,    41,    39,    89,    16,    49,    50,    24,     3,
     207,    79,    28,    57,   149,    58,    41,    42,    57,     9,
      32,    61,    68,   220,     4,    76,     6,    73,     8,    33,
      34,    42,    72,    13,    24,    15,    73,    54,     9,    19,
      73,    21,    73,    82,    81,    73,    57,    27,    81,    29,
      81,    31,     3,    81,     0,    24,    99,    78,    83,    28,
      54,    54,   147,    79,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    25,    87,   120,   121,    80,    81,
     215,    28,    33,    34,    80,   136,   137,   131,   132,   133,
     134,   135,    76,   144,    54,   230,    69,    70,    71,   138,
     144,    80,    81,    54,    55,    56,    57,    58,    59,    77,
     149,   150,    35,    36,   153,   154,    81,   202,    54,    78,
      76,    72,    72,    61,    75,    80,     4,    80,     6,    80,
       8,   142,    72,   144,   178,    13,   179,    15,    82,    72,
      72,    19,    72,    21,    67,    68,    69,    70,    71,    27,
      73,    29,    80,    31,    58,    72,   207,    73,   243,    67,
      68,    69,    70,    71,    73,    32,   234,   178,   236,   220,
      82,    81,    77,   216,    80,    73,   215,    73,   246,    82,
     219,    72,    82,    73,   228,   224,    73,    73,   227,   228,
      14,   230,   260,   261,    73,    73,    80,    80,    73,   235,
       3,     4,     5,     6,     7,     8,    80,    10,    11,    12,
      13,    73,    15,    16,    17,    73,    19,   228,    21,    80,
      12,    43,    25,    26,    27,    32,    29,    30,    31,    32,
      33,    34,    44,    45,    46,    47,    48,    49,    50,    51,
     142,   175,   149,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      72,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    72,
      -1,    -1,    75,    -1,    -1,    78,    79,    80,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    12,    13,    25,
      15,    16,    17,    -1,    19,    -1,    21,    33,    34,    -1,
      25,    26,    27,    -1,    29,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    -1,    72,    -1,    -1,    75,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    78,    79,    80,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    12,    13,    -1,    15,    16,
      17,    -1,    19,    -1,    21,    -1,    -1,    -1,    25,    26,
      27,    -1,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,     3,    -1,     5,    -1,     7,    -1,    -1,    10,    11,
      12,    -1,    -1,    -1,    16,    17,    -1,    54,    55,    56,
      57,    58,    59,    25,    26,    -1,    -1,    -1,    30,    -1,
      32,    33,    34,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    78,    -1,    80,     3,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    54,    55,    56,    57,    58,    59,    -1,     3,
       4,    -1,     6,    -1,     8,    -1,    25,    -1,    -1,    13,
      72,    15,    25,    75,    -1,    19,    78,    21,    80,    -1,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    -1,    33,
      34,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    54,    55,    56,    57,    58,    59,    -1,     3,    -1,
      54,    55,    56,    57,    58,    59,    -1,     3,     4,    72,
       6,    -1,     8,    -1,    -1,    -1,    -1,    13,    72,    15,
      25,    75,    -1,    19,    -1,    21,    80,    -1,    -1,    25,
      -1,    27,    -1,    29,   116,    31,    -1,    33,    34,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    -1,     3,     4,    -1,     6,    -1,
       8,    -1,    -1,    -1,    -1,    13,    72,    15,    -1,    75,
      -1,    19,    -1,    21,    -1,    -1,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    -1,     3,     4,    -1,     6,    -1,     8,    -1,
       3,    -1,    -1,    13,    72,    15,    -1,    75,    -1,    19,
      -1,    21,    -1,    -1,    -1,    25,    -1,    27,    -1,    29,
      -1,    31,    25,    33,    34,    -1,    -1,    -1,     3,    -1,
      33,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      25,    54,    55,    56,    57,    58,    59,    -1,    33,    34,
      -1,    -1,    72,     3,    -1,    75,    -1,    -1,    -1,    72,
      73,    -1,    75,     3,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    25,    -1,    72,    73,    -1,
      75,    -1,    -1,    33,    34,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      25,    -1,    72,    -1,    -1,    75,     3,    -1,    33,    34,
      -1,    -1,    72,     3,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    54,
      55,    56,    57,    58,    59,    25,    33,    34,    -1,    -1,
      -1,     3,    -1,    33,    34,    -1,    -1,    72,    -1,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    25,    54,    55,    56,    57,    58,    59,
      -1,    33,    34,    -1,    -1,    72,    -1,    -1,    75,    -1,
      -1,    -1,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    -1,    75,    35,    36,    37,    38,    39,    40,
      -1,    -1,    -1,    -1,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    -1,    73,    -1,    -1,    -1,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    24,    87,    88,    54,     9,     0,    78,    54,
      24,    28,    89,    90,    91,    94,    28,     4,     6,     8,
      13,    15,    19,    21,    27,    29,    31,    85,    86,    79,
      90,    80,    85,    76,    54,    92,    93,    95,    92,    95,
      77,    61,    72,    81,    78,    98,    98,     3,    25,    33,
      34,    54,    55,    56,    57,    58,    59,    72,    75,   110,
     111,   113,   114,   115,   116,   117,   118,   119,   120,    73,
      85,    96,    97,    54,    93,     5,     7,    10,    11,    12,
      16,    17,    26,    30,    32,    79,    80,    85,    98,    99,
     100,   101,   102,   103,   104,   105,   109,   118,    76,    72,
      54,   114,   114,    44,    45,    46,    47,    48,    49,    50,
      51,    61,    72,    85,   116,   118,    72,   114,    33,    34,
      35,    36,    37,    38,    39,    40,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    41,    42,    83,     3,
      54,    73,    81,    80,    72,   119,    80,    82,   102,    72,
      72,    80,   118,    72,    72,    92,    79,   100,    80,    58,
      55,   112,   114,   118,   118,   118,   118,   118,   118,   118,
     118,   118,    73,   108,   118,    73,    73,    73,    72,    75,
     117,   116,   116,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   116,   116,   116,   116,   116,   119,   119,   118,
      97,   119,    82,   100,    32,    80,   101,   106,   108,   118,
      80,   118,   118,    80,    77,    81,    68,    73,    73,    81,
      72,   113,   116,    73,    82,    73,   100,    72,    72,    80,
     107,   119,   120,    80,    73,    73,    73,   108,   114,   118,
     119,   120,   118,    82,   118,   118,    73,   108,    80,    80,
     102,    98,   102,    73,    73,    73,   100,    73,    73,   102,
      73,    14,    80,    80,   102,   102
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
#line 165 "pJava.y"
    {(yyval._typeSpecifier) = insert_TypeSpecifier((yyvsp[(1) - (1)]._typename), line_no);}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 171 "pJava.y"
    {(yyval._typename) = insert_Typename(is_BOOLEAN);}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 172 "pJava.y"
    {(yyval._typename) = insert_Typename(is_CHAR);}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 173 "pJava.y"
    {(yyval._typename) = insert_Typename(is_BYTE);}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 174 "pJava.y"
    {(yyval._typename) = insert_Typename(is_SHORT);}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 175 "pJava.y"
    {(yyval._typename) = insert_Typename(is_INT);}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 176 "pJava.y"
    {(yyval._typename) = insert_Typename(is_LONG);}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 177 "pJava.y"
    {(yyval._typename) = insert_Typename(is_FLOAT);}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 178 "pJava.y"
    {(yyval._typename) = insert_Typename(is_DOUBLE);}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 179 "pJava.y"
    {(yyval._typename) = insert_Typename(is_VOID);}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 180 "pJava.y"
    {(yyval._typename) = insert_Typename(is_STRING);}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 181 "pJava.y"
    {(yyval._typename) = insert_Typename(is_STRING_ARRAY);}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 186 "pJava.y"
    {(yyval._programFile) = insert_ProgramFile((yyvsp[(1) - (4)]._classHeader), (yyvsp[(3) - (4)]._fieldDeclaration_list)); myProgram = (yyval._programFile);}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 190 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(3) - (3)].id), line_no);}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 191 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(2) - (2)].id), line_no);}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 195 "pJava.y"
    {(yyval._fieldDeclaration_list) = insert_FieldDeclaration_list(NULL, (yyvsp[(1) - (1)]._fieldDeclaration));}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 196 "pJava.y"
    {(yyval._fieldDeclaration_list) = insert_FieldDeclaration_list((yyvsp[(1) - (2)]._fieldDeclaration_list), (yyvsp[(2) - (2)]._fieldDeclaration));}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 200 "pJava.y"
    {(yyval._fieldDeclaration) = insert_FieldDeclaration_AttrDeclaration((yyvsp[(1) - (2)]._attrDeclaration),line_no);}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 201 "pJava.y"
    {(yyval._fieldDeclaration) = insert_FieldDeclaration_MethodDeclaration((yyvsp[(1) - (1)]._methodDeclaration),line_no);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 205 "pJava.y"
    {(yyval._attrDeclaration) = insert_AttrDeclaration((yyvsp[(3) - (4)]._typeSpecifier), (yyvsp[(4) - (4)]._variablesDeclarator_list),line_no);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 206 "pJava.y"
    {(yyval._attrDeclaration) = insert_AttrDeclaration((yyvsp[(2) - (3)]._typeSpecifier), (yyvsp[(3) - (3)]._variablesDeclarator_list),line_no);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 210 "pJava.y"
    {(yyval._variablesDeclarator_list) = insert_VariablesDeclarator_list(NULL, (yyvsp[(1) - (1)]._variablesDeclarator));}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 211 "pJava.y"
    {(yyval._variablesDeclarator_list) = insert_VariablesDeclarator_list((yyvsp[(1) - (3)]._variablesDeclarator_list), (yyvsp[(3) - (3)]._variablesDeclarator));}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 215 "pJava.y"
    {(yyval._variablesDeclarator) = insert_VariablesDeclarator((yyvsp[(1) - (1)].id), NULL,line_no);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 216 "pJava.y"
    {(yyval._variablesDeclarator) = insert_VariablesDeclarator((yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)]._expression),line_no);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 222 "pJava.y"
    {(yyval._methodDeclaration) = insert_MethodDeclaration((yyvsp[(3) - (5)]._typeSpecifier), (yyvsp[(4) - (5)]._methodDeclarator), (yyvsp[(5) - (5)]._block), line_no); (yyvsp[(4) - (5)]._methodDeclarator)->isReturnOk = hasReturn; hasReturn = false;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 223 "pJava.y"
    {(yyval._methodDeclaration) = insert_MethodDeclaration((yyvsp[(2) - (4)]._typeSpecifier), (yyvsp[(3) - (4)]._methodDeclarator), (yyvsp[(4) - (4)]._block), line_no); (yyvsp[(3) - (4)]._methodDeclarator)->isReturnOk = hasReturn; hasReturn = false;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 227 "pJava.y"
    {(yyval._methodDeclarator) = insert_MethodDeclarator((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)]._parameters_list), line_no);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 228 "pJava.y"
    {(yyval._methodDeclarator) = insert_MethodDeclarator((yyvsp[(1) - (3)].id), NULL, line_no);}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 232 "pJava.y"
    {(yyval._parameters_list) = insert_Parameters_list(NULL, (yyvsp[(1) - (1)]._parameter));}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 233 "pJava.y"
    {(yyval._parameters_list) = insert_Parameters_list((yyvsp[(1) - (3)]._parameters_list), (yyvsp[(3) - (3)]._parameter));}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 237 "pJava.y"
    {(yyval._parameter) = insert_Parameter((yyvsp[(2) - (2)].id), (yyvsp[(1) - (2)]._typeSpecifier), line_no);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 238 "pJava.y"
    {(yyval._parameter) = insert_Parameter("args", (yyvsp[(1) - (2)]._typeSpecifier), line_no);}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 242 "pJava.y"
    {(yyval._block) = insert_Block((yyvsp[(2) - (3)]._localVariableDeclarationsOrStatements_list));}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 243 "pJava.y"
    {(yyval._block) = insert_Block(NULL);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 250 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements_list) = insert_LocalVariableDeclarationsOrStatements_list(NULL, (yyvsp[(1) - (1)]._localVariableDeclarationsOrStatements));}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 251 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements_list) = insert_LocalVariableDeclarationsOrStatements_list((yyvsp[(1) - (2)]._localVariableDeclarationsOrStatements_list), (yyvsp[(2) - (2)]._localVariableDeclarationsOrStatements));}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 255 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements) = insert_LocalVariableDeclarationsOrStatements_LocalVariableDeclarationStatement((yyvsp[(1) - (1)]._localVariableDeclarationStatement),line_no);}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 256 "pJava.y"
    {(yyval._localVariableDeclarationsOrStatements) = insert_LocalVariableDeclarationsOrStatements_Statement((yyvsp[(1) - (1)]._statement),line_no);}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 260 "pJava.y"
    {(yyval._localVariableDeclarationStatement) = insert_LocalVariableDeclarationStatement((yyvsp[(1) - (3)]._typeSpecifier), (yyvsp[(2) - (3)]._variablesDeclarator_list), line_no);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 264 "pJava.y"
    {(yyval._statement) = insert_Statement_LabeledStatement((yyvsp[(1) - (1)]._labeledStatement));}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 265 "pJava.y"
    {(yyval._statement) = insert_Statement_Expression((yyvsp[(1) - (2)]._expression));}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 266 "pJava.y"
    {(yyval._statement) = insert_Statement_SelectionStatement((yyvsp[(1) - (1)]._selectionStatement));}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 267 "pJava.y"
    {(yyval._statement) = insert_Statement_IterationStatement((yyvsp[(1) - (1)]._iterationStatement));}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 268 "pJava.y"
    {(yyval._statement) = insert_Statement_JumpStatement((yyvsp[(1) - (1)]._jumpStatement));}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 269 "pJava.y"
    {(yyval._statement) = insert_Statement_Block((yyvsp[(1) - (1)]._block));}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 270 "pJava.y"
    {(yyval._statement) = insert_EmptyStatement();}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 274 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_CASE((yyvsp[(4) - (4)]._localVariableDeclarationsOrStatements), (yyvsp[(2) - (4)]._conditionalExpression), line_no);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 275 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_CASE((yyvsp[(6) - (6)]._localVariableDeclarationsOrStatements), (yyvsp[(3) - (6)]._conditionalExpression), line_no);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 276 "pJava.y"
    {(yyval._labeledStatement) = insert_LabeledStatement_DEFAULT((yyvsp[(3) - (3)]._localVariableDeclarationsOrStatements), line_no);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 280 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_IFELSE((yyvsp[(3) - (7)]._expression), (yyvsp[(5) - (7)]._statement), (yyvsp[(7) - (7)]._statement),line_no);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 281 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_IF((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._statement),line_no);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 282 "pJava.y"
    {(yyval._selectionStatement) = insert_SelectionStatement_SWITCH((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._block),line_no);}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 286 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_WHILE((yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._statement), line_no);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 287 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_DO((yyvsp[(5) - (7)]._expression), (yyvsp[(2) - (7)]._statement), line_no);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 288 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_FOR((yyvsp[(4) - (7)]._expression), (yyvsp[(7) - (7)]._statement), (yyvsp[(3) - (7)]._forInit), (yyvsp[(5) - (7)]._expressions_list), line_no);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 289 "pJava.y"
    {(yyval._iterationStatement) = insert_IterationStatement_FOR((yyvsp[(4) - (6)]._expression), (yyvsp[(6) - (6)]._statement), (yyvsp[(3) - (6)]._forInit), NULL, line_no);}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 293 "pJava.y"
    {(yyval._forInit) = insert_ForInit((yyvsp[(1) - (2)]._expressions_list), NULL);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 294 "pJava.y"
    {(yyval._forInit) = insert_ForInit(NULL, (yyvsp[(1) - (1)]._localVariableDeclarationStatement));}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 295 "pJava.y"
    {(yyval._forInit) = NULL;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 299 "pJava.y"
    {(yyval._expression) = insert_Expression_ConditionalExpression((yyvsp[(1) - (2)]._conditionalExpression),line_no);}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 300 "pJava.y"
    {(yyval._expression) = insert_Expression_AssignmentExpression((yyvsp[(1) - (2)]._assignmentExpression),line_no);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 301 "pJava.y"
    {(yyval._expression) = insert_Expression_Expression((yyvsp[(2) - (4)]._expression),line_no);}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 302 "pJava.y"
    {(yyval._expression) = NULL;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 306 "pJava.y"
    {(yyval._expressions_list) = insert_Expressions_list(NULL, (yyvsp[(1) - (1)]._expression));}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 307 "pJava.y"
    {(yyval._expressions_list) = insert_Expressions_list((yyvsp[(1) - (3)]._expressions_list), (yyvsp[(3) - (3)]._expression));}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 311 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_BREAK(line_no);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 312 "pJava.y"
    {(yyval._jumpStatement) = insert_JumpStatement_CONTINUE(line_no);}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 313 "pJava.y"
    {hasReturn = true; (yyval._jumpStatement) = insert_JumpStatement_RETURN_EXP((yyvsp[(2) - (3)]._expression),line_no);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 314 "pJava.y"
    {hasReturn = true; (yyval._jumpStatement) = insert_JumpStatement_RETURN(line_no);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 319 "pJava.y"
    {(yyval._methodCall) = insert_MethodCall((yyvsp[(1) - (4)].id), (yyvsp[(3) - (4)]._expressions_list), line_no);}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 320 "pJava.y"
    {(yyval._methodCall) = insert_MethodCall((yyvsp[(1) - (3)].id), NULL, line_no);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 325 "pJava.y"
    {(yyval._systemOutPrintln) = insert_SystemOutPrintln((yyvsp[(3) - (6)].id), (yyvsp[(5) - (6)]._expressions_list), line_no);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 326 "pJava.y"
    {(yyval._systemOutPrintln) = insert_SystemOutPrintlnJavaStyle((yyvsp[(3) - (4)]._printExpressions_list), line_no);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 330 "pJava.y"
    {(yyval._printExpressions_list) = insert_PrintExpressions_list(NULL, (yyvsp[(1) - (1)]._basicElement));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 331 "pJava.y"
    {(yyval._printExpressions_list) = insert_PrintExpressions_list((yyvsp[(1) - (3)]._printExpressions_list), (yyvsp[(3) - (3)]._basicElement));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 335 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_INC_BEFORE, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 336 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DCR_BEFORE, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 337 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_INC_AFTER, (yyvsp[(1) - (2)]._basicElement),line_no);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 338 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DCR_AFTER, (yyvsp[(1) - (2)]._basicElement),line_no);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 339 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_NONE, (yyvsp[(1) - (1)]._basicElement),line_no);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 343 "pJava.y"
    {(yyval._unaryExpression) = insert_UnaryExpression(is_OP_DIFFERENT_UNARY, (yyvsp[(2) - (2)]._basicElement),line_no);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 347 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_LITERAL((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 348 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_METHOD_CALL((yyvsp[(1) - (1)]._methodCall), line_no);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 349 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_ID((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 350 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_TRUE((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 351 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_FALSE((yyvsp[(1) - (1)].id), line_no);}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 352 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_INTEGER(yylval.i, line_no);}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 353 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_FLOATPOINT(yylval.d, line_no);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 354 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_ARGS(yylval.i, line_no);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 355 "pJava.y"
    {(yyval._basicElement) = insert_BasicElement_PRINTLN((yyvsp[(1) - (1)]._systemOutPrintln), line_no);}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 359 "pJava.y"
    {(yyval._castExpression) = insert_CastExpression_UnaryExpression(NULL, (yyvsp[(1) - (1)]._unaryExpression), line_no);}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 360 "pJava.y"
    {(yyval._castExpression) = insert_CastExpression_UnaryExpression((yyvsp[(2) - (4)]._typeSpecifier), (yyvsp[(4) - (4)]._unaryExpression), line_no);}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 361 "pJava.y"
    {(yyval._castExpression) = insert_CastExpression_AssignmentExpression((yyvsp[(2) - (6)]._typeSpecifier), (yyvsp[(5) - (6)]._assignmentExpression), line_no);}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 362 "pJava.y"
    {(yyval._castExpression) = insert_CastExpression_ConditionalExpression((yyvsp[(2) - (6)]._typeSpecifier), (yyvsp[(5) - (6)]._conditionalExpression), line_no);}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 366 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_AE_NONE, NULL, NULL, (yyvsp[(1) - (1)]._castExpression),line_no);}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 367 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_PLUS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 368 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_MINUS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 369 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_SLASH, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 370 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_TIMES, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 371 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_MODULO, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 372 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_OP_SHL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 373 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_OP_SHR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._arithmeticExpression), NULL,line_no);}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 374 "pJava.y"
    {(yyval._arithmeticExpression) = insert_ArithmeticExpression(is_PARENTHESIS, (yyvsp[(2) - (3)]._arithmeticExpression), NULL, NULL, line_no);}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 379 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_RE_NONE, (yyvsp[(1) - (1)]._arithmeticExpression), NULL,line_no);}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 380 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_LESS, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 381 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_GREATER, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 382 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_LESS_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 383 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_GREATER_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 384 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_EQUAL, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 385 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_DIFFERENT, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 386 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SAND, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 387 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SXOR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 388 "pJava.y"
    {(yyval._relationalExpression) = insert_RelationalExpression(is_OP_SOR, (yyvsp[(1) - (3)]._arithmeticExpression), (yyvsp[(3) - (3)]._relationalExpression),line_no);}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 392 "pJava.y"
    {(yyval._expression) = insert_Expression_ConditionalExpression((yyvsp[(1) - (1)]._conditionalExpression),line_no);}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 393 "pJava.y"
    {(yyval._expression) = insert_Expression_AssignmentExpression((yyvsp[(1) - (1)]._assignmentExpression),line_no);}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 394 "pJava.y"
    {(yyval._expression) = insert_Expression_Expression((yyvsp[(2) - (3)]._expression),line_no);}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 399 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_UNARY, (yyvsp[(1) - (1)]._relationalExpression), NULL, NULL, line_no);}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 400 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpressionMultiple(is_OP_AND, (yyvsp[(1) - (3)]._relationalExpression), (yyvsp[(3) - (3)]._conditionalExpression), line_no);}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 401 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpressionMultiple(is_OP_OR, (yyvsp[(1) - (3)]._relationalExpression), (yyvsp[(3) - (3)]._conditionalExpression), line_no);}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 402 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_UNARY_NOT, (yyvsp[(3) - (4)]._relationalExpression), NULL, NULL, line_no);}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 403 "pJava.y"
    {(yyval._conditionalExpression) = insert_ConditionalExpression(is_TRINARY, (yyvsp[(1) - (5)]._relationalExpression), (yyvsp[(3) - (5)]._expression), (yyvsp[(5) - (5)]._expression), line_no);}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 407 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASSIGN, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 408 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_MUL, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 409 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_DIV, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 410 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_ADD, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 411 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SUB, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 412 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_XOR, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 413 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_MOD, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 414 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SHL, (yyvsp[(3) - (3)]._expression), line_no);}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 415 "pJava.y"
    {(yyval._assignmentExpression) = insert_AssignmentExpression((yyvsp[(1) - (3)].id), is_ASS_SHR, (yyvsp[(3) - (3)]._expression), line_no);}
    break;



/* Line 1455 of yacc.c  */
#line 2802 "y.tab.c"
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
#line 419 "pJava.y"


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

