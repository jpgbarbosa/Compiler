
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
#include "insertionFunction.h"
#include "structures.h"



/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

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
     RETURN = 279,
     SHORT = 280,
     STATIC = 281,
     STRING = 282,
     SWITCH = 283,
     VOID = 284,
     WHILE = 285,
     OP_INC = 286,
     OP_DEC = 287,
     OP_SHL = 288,
     OP_SHR = 289,
     OP_GREATER_EQUAL = 290,
     OP_LESS_EQUAL = 291,
     OP_EQUAL = 292,
     OP_DIFFERENT = 293,
     OP_AND = 294,
     OP_OR = 295,
     OP_DIM = 296,
     ASS_MUL = 297,
     ASS_DIV = 298,
     ASS_ADD = 299,
     ASS_SUB = 300,
     ASS_XOR = 301,
     ASS_MOD = 302,
     ASS_SHL = 303,
     ASS_SHR = 304,
     ASS_AND = 305,
     ASS_OR = 306,
     ID = 307,
     LITERAL = 308
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
#define RETURN 279
#define SHORT 280
#define STATIC 281
#define STRING 282
#define SWITCH 283
#define VOID 284
#define WHILE 285
#define OP_INC 286
#define OP_DEC 287
#define OP_SHL 288
#define OP_SHR 289
#define OP_GREATER_EQUAL 290
#define OP_LESS_EQUAL 291
#define OP_EQUAL 292
#define OP_DIFFERENT 293
#define OP_AND 294
#define OP_OR 295
#define OP_DIM 296
#define ASS_MUL 297
#define ASS_DIV 298
#define ASS_ADD 299
#define ASS_SUB 300
#define ASS_XOR 301
#define ASS_MOD 302
#define ASS_SHL 303
#define ASS_SHR 304
#define ASS_AND 305
#define ASS_OR 306
#define ID 307
#define LITERAL 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 59 "pJava.y"

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
	is_LocalVariableDeclarationStatement* insert_LocalVariableDeclarationStatement;
	is_Statement* _statement;
	is_LabeledStatement* _labeledStatement;
	is_SelectionStatement* _selectionStatement;
	is_IterationStatement* _iterationStatement;
	is_Expressions_list* _expressions_list;
	is_JumpStatement* _jumpStatement;
	is_MethodCall* _methodCall;
	is_UnaryExpression* _unaryExpression;
	is_BasicElement* _basicElement;
	is_CastExpression* _castExpression;
	is_ArithmeticExpression* _arithmeticExpression;
	is_RelationalExpression* _relationalExpression;
	is_ConditionalExpression* _conditionalExpression;
	is_AssignmentExpression* _assignmentExpression;



/* Line 214 of yacc.c  */
#line 261 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 273 "y.tab.c"

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
#define YYLAST   515

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  123
/* YYNRULES -- Number of states.  */
#define YYNSTATES  242

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    64,    57,     2,
      65,    66,    62,    61,    74,    60,     2,    63,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    73,
      59,    54,    58,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    55,    72,    67,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
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
     145,   149,   155,   163,   169,   175,   183,   191,   198,   201,
     203,   205,   208,   210,   212,   214,   218,   222,   225,   229,
     232,   236,   239,   244,   248,   250,   254,   257,   260,   263,
     266,   268,   271,   273,   275,   277,   279,   284,   291,   298,
     300,   304,   308,   312,   316,   320,   324,   328,   330,   334,
     338,   342,   346,   350,   354,   358,   362,   366,   370,   374,
     376,   378,   382,   384,   389,   395,   399,   403,   407,   411,
     415,   419,   423,   427
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      80,     0,    -1,    79,    -1,     3,    -1,     7,    -1,     5,
      -1,    25,    -1,    18,    -1,    20,    -1,    14,    -1,    12,
      -1,    29,    -1,    27,    -1,    27,    69,    70,    -1,    81,
      71,    82,    72,    -1,    23,     8,    52,    -1,     8,    52,
      -1,    83,    -1,    82,    83,    -1,    84,    73,    -1,    87,
      -1,    23,    26,    78,    85,    -1,    26,    78,    85,    -1,
      86,    -1,    85,    74,    86,    -1,    52,    -1,    52,    54,
     111,    -1,    23,    26,    78,    88,    91,    -1,    26,    78,
      88,    91,    -1,    52,    65,    89,    66,    -1,    52,    65,
      66,    -1,    90,    -1,    89,    74,    90,    -1,    78,    52,
      -1,    71,    92,    72,    -1,    71,    72,    -1,    93,    -1,
      92,    93,    -1,    94,    -1,    95,    -1,    78,    85,    73,
      -1,    96,    -1,   111,    73,    -1,    97,    -1,    98,    -1,
     103,    -1,    91,    -1,    73,    -1,    52,    75,    93,    -1,
       6,   112,    75,    93,    -1,    10,    75,    93,    -1,    16,
      65,   111,    66,    95,    -1,    16,    65,   111,    66,    95,
      13,    95,    -1,    28,    65,   111,    66,    91,    -1,    30,
      65,   111,    66,    95,    -1,    11,    95,    30,    65,   111,
      66,    73,    -1,    15,    65,    99,   100,   101,    66,    95,
      -1,    15,    65,    99,   100,    66,    95,    -1,   102,    73,
      -1,    94,    -1,    73,    -1,   111,    73,    -1,    73,    -1,
     102,    -1,   111,    -1,   102,    74,   111,    -1,     4,    52,
      73,    -1,     4,    73,    -1,     9,    52,    73,    -1,     9,
      73,    -1,    24,   111,    73,    -1,    24,    73,    -1,    52,
      65,   105,    66,    -1,    52,    65,    66,    -1,   111,    -1,
     105,    74,   111,    -1,    31,   107,    -1,    32,   107,    -1,
     107,    31,    -1,   107,    32,    -1,   107,    -1,    68,   107,
      -1,    53,    -1,   104,    -1,    52,    -1,   106,    -1,    65,
      79,    66,   106,    -1,    65,    79,    66,    65,   113,    66,
      -1,    65,    79,    66,    65,   112,    66,    -1,   108,    -1,
     109,    61,   109,    -1,   109,    60,   109,    -1,   109,    63,
     109,    -1,   109,    62,   109,    -1,   109,    64,   109,    -1,
     109,    33,   109,    -1,   109,    34,   109,    -1,   109,    -1,
     109,    59,   110,    -1,   109,    58,   110,    -1,   109,    36,
     110,    -1,   109,    35,   110,    -1,   109,    37,   110,    -1,
     109,    38,   110,    -1,   109,    57,   110,    -1,   109,    56,
     110,    -1,   109,    55,   110,    -1,   109,    39,   110,    -1,
     109,    40,   110,    -1,   112,    -1,   113,    -1,    65,   111,
      66,    -1,   110,    -1,    68,    65,   110,    66,    -1,   110,
      76,   111,    75,   111,    -1,    52,    54,   111,    -1,    52,
      42,   111,    -1,    52,    43,   111,    -1,    52,    44,   111,
      -1,    52,    45,   111,    -1,    52,    46,   111,    -1,    52,
      47,   111,    -1,    52,    48,   111,    -1,    52,    49,   111,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   128,   132,   133,   137,   138,   142,
     143,   147,   148,   152,   153,   157,   158,   164,   165,   169,
     170,   174,   175,   179,   183,   184,   191,   192,   196,   197,
     201,   205,   206,   207,   208,   209,   210,   214,   218,   219,
     220,   224,   225,   226,   230,   231,   232,   233,   237,   238,
     239,   243,   244,   248,   252,   253,   257,   258,   259,   260,
     261,   262,   266,   267,   271,   272,   276,   277,   278,   279,
     280,   284,   288,   289,   290,   294,   295,   296,   297,   301,
     302,   303,   304,   305,   306,   307,   308,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   328,
     329,   330,   335,   336,   337,   341,   342,   343,   344,   345,
     346,   347,   348,   349
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
  "PUBLIC", "RETURN", "SHORT", "STATIC", "STRING", "SWITCH", "VOID",
  "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR", "OP_GREATER_EQUAL",
  "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT", "OP_AND", "OP_OR", "OP_DIM",
  "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB", "ASS_XOR", "ASS_MOD",
  "ASS_SHL", "ASS_SHR", "ASS_AND", "ASS_OR", "ID", "LITERAL", "'='", "'|'",
  "'^'", "'&'", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'", "'%'", "'('",
  "')'", "'~'", "'!'", "'['", "']'", "'{'", "'}'", "';'", "','", "':'",
  "'?'", "$accept", "TypeSpecifier", "TypeName", "ProgramFile",
  "ClassHeader", "FieldDeclarations", "FieldDeclaration",
  "AttrDeclaration", "VariableDeclarators", "VariableDeclarator",
  "MethodDeclaration", "MethodDeclarator", "ParameterList", "Parameter",
  "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "ForIncr", "Expressions", "JumpStatement", "MethodCall", "ArgumentList",
  "UnaryExpression", "BasicElement", "CastExpression",
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
     305,   306,   307,   308,    61,   124,    94,    38,    62,    60,
      45,    43,    42,    47,    37,    40,    41,   126,    33,    91,
      93,   123,   125,    59,    44,    58,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    81,    81,    82,    82,    83,
      83,    84,    84,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    91,    91,    92,    92,    93,    93,
      94,    95,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    97,    97,    97,    98,    98,    98,    98,    99,    99,
      99,   100,   100,   101,   102,   102,   103,   103,   103,   103,
     103,   103,   104,   104,   105,   105,   106,   106,   106,   106,
     106,   106,   107,   107,   107,   108,   108,   108,   108,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   111,
     111,   111,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     2,     1,     2,     2,
       1,     4,     3,     1,     3,     1,     3,     5,     4,     4,
       3,     1,     3,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     1,     1,     1,     1,     1,     3,     4,
       3,     5,     7,     5,     5,     7,     7,     6,     2,     1,
       1,     2,     1,     1,     1,     3,     3,     2,     3,     2,
       3,     2,     4,     3,     1,     3,     2,     2,     2,     2,
       1,     2,     1,     1,     1,     1,     4,     6,     6,     1,
       3,     3,     3,     3,     3,     3,     3,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     3,     1,     4,     5,     3,     3,     3,     3,     3,
       3,     3,     3,     3
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
      13,     0,     0,     0,     0,    28,    27,     0,     0,    84,
      82,     0,     0,    83,    85,    80,    89,    97,   112,    26,
     109,   110,    30,     0,     0,    31,    25,    24,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    35,
      47,     0,    46,     0,    36,    38,    39,    41,    43,    44,
      45,     0,    84,    76,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,    29,     0,     0,    67,     0,     0,     0,    69,     0,
       0,     0,     0,    71,     0,     0,     0,     0,     0,    34,
      37,    42,   116,   117,   118,   119,   120,   121,   122,   123,
     115,    73,     0,    74,     0,   111,     0,     0,    95,    96,
     101,   100,   102,   103,   107,   108,   106,   105,   104,    99,
      98,    91,    90,    93,    92,    94,     0,    32,    66,     0,
      68,    50,     0,    60,    59,     0,     0,    64,     0,    70,
       0,     0,    48,    40,    72,     0,     0,    86,   113,     0,
      49,     0,    62,     0,     0,    58,     0,     0,     0,     0,
      75,     0,     0,   114,     0,     0,     0,    63,    61,    65,
      51,    53,    54,    88,    87,     0,    57,     0,     0,    55,
      56,    52
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    81,    28,     3,     4,    12,    13,    14,    35,    36,
      15,    37,    64,    65,    82,    83,    84,    85,    86,    87,
      88,    89,   195,   213,   226,   196,    90,    53,   162,    54,
      55,    56,    57,    58,    91,    60,    61
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int16 yypact[] =
{
      -2,   -32,     7,    30,   -28,   -70,    33,   -70,    85,   -70,
      67,   475,    -7,   -70,    27,   -70,   475,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,    49,   -70,    73,   -70,   -70,
     -70,   -70,    73,    59,    12,    56,   -70,    61,    56,    61,
     -70,    51,    20,    81,   179,   -70,   -70,     0,     0,   312,
     -70,   362,   -11,   -70,   -70,    37,   -70,   413,    60,   -70,
     -70,   -70,   -70,    86,    24,   -70,    83,   -70,   -45,   211,
     -44,    64,   310,    76,    77,    42,    78,    84,   391,   -70,
     -70,    81,   -70,   209,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,    79,    88,   -70,   -70,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    82,    80,    93,   271,   -70,   -70,
     -70,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,    51,
     -70,   -70,   475,    90,   -70,   475,    89,    94,   -70,   280,
     121,    19,    51,   -70,    95,    51,    51,   280,    48,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,    25,   -70,   353,   -70,     0,   100,   195,   195,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,    17,    17,   -70,   -70,   -70,    97,   -70,   -70,   280,
     -70,   -70,    96,   -70,   -70,    44,    54,   -70,   104,   -70,
     111,   112,   -70,   -70,   -70,    51,   364,   -70,   -70,    51,
     -70,    51,   -70,    92,   106,   -70,    51,   310,    61,   310,
     -70,   114,   126,   -70,   130,   310,   132,   113,   -70,   -70,
     187,   -70,   -70,   -70,   -70,   128,   -70,   310,   310,   -70,
     -70,   -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -70,    -6,   -47,   -70,   -70,   -70,   190,   -70,   -14,   162,
     -70,   185,   -70,    98,   -37,   -70,   -69,    87,   -63,   -70,
     -70,   -70,   -70,   -70,   -70,     9,   -70,   -70,   -70,    62,
     -35,   -70,   142,   392,   -40,   -66,    29
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    59,    46,   136,   105,    27,     1,   133,   137,   140,
      32,   106,    93,    94,   150,     6,    10,   108,    38,    11,
       5,     2,    17,    17,    18,    18,    19,    19,   134,   138,
       7,    20,    20,    21,    21,   144,    63,    22,    22,    23,
      23,    92,    50,     8,    24,    24,    25,    25,    26,    26,
      47,    48,    92,    50,   107,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   163,    29,    41,   148,   109,   110,
     191,    49,    50,    47,    48,    47,    48,    42,   202,   126,
     127,   128,    47,    48,    51,     9,    62,    52,   105,   186,
     131,   204,   193,    16,    49,    50,    49,    50,   132,   205,
      31,   197,   198,    49,    50,   200,   201,    51,    10,    51,
      52,    11,    52,    47,    48,   143,    51,   212,    33,    52,
     210,   203,    43,    47,    48,    34,    63,   215,   216,    40,
      43,   108,    44,    66,    49,    50,   129,    41,   130,   139,
     221,   141,   142,   145,    49,    50,   164,    51,   161,   146,
      52,   192,   151,   104,   230,   214,   232,    51,   225,   165,
      52,   211,   236,   188,   189,   220,   208,   190,   199,   223,
     217,   224,   209,   197,   240,   241,   229,   218,   219,   228,
     233,   231,    17,    68,    18,    69,    19,   216,    70,    71,
      72,    20,   234,    21,    73,    74,   235,    22,   237,    23,
     238,   239,    30,    75,    24,    67,    25,    76,    26,    77,
      47,    48,    17,    68,    18,    69,    19,    39,    70,    71,
      72,    20,   227,    21,    73,    74,   207,    22,   194,    23,
     187,    78,    50,    75,    24,   222,    25,    76,    26,    77,
      47,    48,    47,    48,    51,     0,     0,    52,     0,     0,
      44,    79,    80,   168,   169,   124,   125,   126,   127,   128,
       0,    78,    50,    92,    50,     0,   181,   182,   183,   184,
     185,     0,     0,     0,    51,     0,   135,    52,     0,    52,
      44,   149,    80,    17,    68,    18,    69,    19,     0,    70,
      71,    72,    20,     0,    21,    73,    74,     0,    22,     0,
      23,     0,    47,    48,    75,    24,     0,    25,    76,    26,
      77,    47,    48,     0,    68,     0,    69,     0,     0,    70,
      71,    72,     0,    92,    50,    73,    74,     0,     0,     0,
       0,     0,    78,    50,    75,     0,   135,     0,    76,   166,
      77,    47,    48,     0,     0,    51,     0,     0,    52,     0,
       0,    44,     0,    80,    95,    96,    97,    98,    99,   100,
     101,   102,    78,    50,     0,    17,   103,    18,     0,    19,
       0,     0,     0,     0,    20,    51,    21,   104,    52,     0,
      22,    44,    23,    80,    47,    48,     0,    24,     0,    25,
       0,    26,     0,    47,    48,    47,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    50,     0,     0,     0,
       0,     0,     0,     0,    49,    50,    49,    50,   206,     0,
       0,   166,     0,     0,     0,     0,     0,    51,     0,   135,
      52,     0,    52,    95,    96,    97,    98,    99,   100,   101,
     102,     0,     0,     0,     0,   103,   111,   112,   113,   114,
     115,   116,   117,   118,     0,     0,   104,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   147,     0,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    17,     0,
      18,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,     0,    23,     0,     0,     0,   167,
      24,     0,    25,     0,    26,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180
};

static const yytype_int16 yycheck[] =
{
      37,    41,    39,    69,    51,    11,     8,    52,    52,    72,
      16,    51,    47,    48,    83,     8,    23,    52,    32,    26,
      52,    23,     3,     3,     5,     5,     7,     7,    73,    73,
       0,    12,    12,    14,    14,    75,    42,    18,    18,    20,
      20,    52,    53,    71,    25,    25,    27,    27,    29,    29,
      31,    32,    52,    53,    65,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,    72,    54,    81,    31,    32,
     139,    52,    53,    31,    32,    31,    32,    65,   147,    62,
      63,    64,    31,    32,    65,    52,    66,    68,   135,   129,
      66,    66,    73,    26,    52,    53,    52,    53,    74,    74,
      73,   141,   142,    52,    53,   145,   146,    65,    23,    65,
      68,    26,    68,    31,    32,    73,    65,    73,    69,    68,
     189,    73,    74,    31,    32,    52,   132,    73,    74,    70,
      74,   166,    71,    52,    52,    53,    76,    54,    52,    75,
     206,    65,    65,    65,    52,    53,    66,    65,    66,    65,
      68,    30,    73,    65,   217,   195,   219,    65,    66,    66,
      68,    65,   225,    73,    75,   205,    66,    73,    73,   209,
      66,   211,    75,   213,   237,   238,   216,    66,    66,    73,
      66,   218,     3,     4,     5,     6,     7,    74,     9,    10,
      11,    12,    66,    14,    15,    16,    66,    18,    66,    20,
      13,    73,    12,    24,    25,    43,    27,    28,    29,    30,
      31,    32,     3,     4,     5,     6,     7,    32,     9,    10,
      11,    12,   213,    14,    15,    16,   164,    18,   141,    20,
     132,    52,    53,    24,    25,   206,    27,    28,    29,    30,
      31,    32,    31,    32,    65,    -1,    -1,    68,    -1,    -1,
      71,    72,    73,   111,   112,    60,    61,    62,    63,    64,
      -1,    52,    53,    52,    53,    -1,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    65,    -1,    65,    68,    -1,    68,
      71,    72,    73,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    18,    -1,
      20,    -1,    31,    32,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,     4,    -1,     6,    -1,    -1,     9,
      10,    11,    -1,    52,    53,    15,    16,    -1,    -1,    -1,
      -1,    -1,    52,    53,    24,    -1,    65,    -1,    28,    68,
      30,    31,    32,    -1,    -1,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    42,    43,    44,    45,    46,    47,
      48,    49,    52,    53,    -1,     3,    54,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    65,    14,    65,    68,    -1,
      18,    71,    20,    73,    31,    32,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    52,    53,    65,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,    65,    -1,    65,
      68,    -1,    68,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    -1,    -1,    -1,    54,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     3,    -1,
       5,    -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    14,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,   107,
      25,    -1,    27,    -1,    29,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    23,    80,    81,    52,     8,     0,    71,    52,
      23,    26,    82,    83,    84,    87,    26,     3,     5,     7,
      12,    14,    18,    20,    25,    27,    29,    78,    79,    72,
      83,    73,    78,    69,    52,    85,    86,    88,    85,    88,
      70,    54,    65,    74,    71,    91,    91,    31,    32,    52,
      53,    65,    68,   104,   106,   107,   108,   109,   110,   111,
     112,   113,    66,    78,    89,    90,    52,    86,     4,     6,
       9,    10,    11,    15,    16,    24,    28,    30,    52,    72,
      73,    78,    91,    92,    93,    94,    95,    96,    97,    98,
     103,   111,    52,   107,   107,    42,    43,    44,    45,    46,
      47,    48,    49,    54,    65,    79,   111,    65,   107,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    76,
      52,    66,    74,    52,    73,    65,   112,    52,    73,    75,
      95,    65,    65,    73,   111,    65,    65,    75,    85,    72,
      93,    73,   111,   111,   111,   111,   111,   111,   111,   111,
     111,    66,   105,   111,    66,    66,    68,   110,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   109,   109,   109,   109,   109,   111,    90,    73,    75,
      73,    93,    30,    73,    94,    99,   102,   111,   111,    73,
     111,   111,    93,    73,    66,    74,    65,   106,    66,    75,
      93,    65,    73,   100,   111,    73,    74,    66,    66,    66,
     111,   112,   113,   111,   111,    66,   101,   102,    73,   111,
      95,    91,    95,    66,    66,    66,    95,    66,    13,    73,
      95,    95
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
        case 15:

/* Line 1455 of yacc.c  */
#line 132 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(3) - (3)].id));}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(2) - (2)].id));}
    break;



/* Line 1455 of yacc.c  */
#line 1767 "y.tab.c"
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
#line 353 "pJava.y"


int main()
{
yyparse();
return 0;
}

