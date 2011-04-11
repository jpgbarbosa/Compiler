
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


/* Line 189 of yacc.c  */
#line 78 "y.tab.c"

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
     PUBLIC = 283,
     RETURN = 284,
     SHORT = 285,
     STATIC = 286,
     SWITCH = 287,
     THIS = 288,
     VAR = 289,
     VOID = 290,
     WHILE = 291,
     OP_INC = 292,
     OP_DEC = 293,
     OP_SHL = 294,
     OP_SHR = 295,
     OP_SHRR = 296,
     OP_GREATER_EQUAL = 297,
     OP_LESS_EQUAL = 298,
     OP_EQUAL = 299,
     OP_DIFFERENT = 300,
     OP_AND = 301,
     OP_OR = 302,
     OP_DIM = 303,
     ASS_MUL = 304,
     ASS_DIV = 305,
     ASS_ADD = 306,
     ASS_SUB = 307,
     IDENTIFIER = 308,
     LITERAL = 309,
     BOOLLIT = 310
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
#define PUBLIC 283
#define RETURN 284
#define SHORT 285
#define STATIC 286
#define SWITCH 287
#define THIS 288
#define VAR 289
#define VOID 290
#define WHILE 291
#define OP_INC 292
#define OP_DEC 293
#define OP_SHL 294
#define OP_SHR 295
#define OP_SHRR 296
#define OP_GREATER_EQUAL 297
#define OP_LESS_EQUAL 298
#define OP_EQUAL 299
#define OP_DIFFERENT 300
#define OP_AND 301
#define OP_OR 302
#define OP_DIM 303
#define ASS_MUL 304
#define ASS_DIV 305
#define ASS_ADD 306
#define ASS_SUB 307
#define IDENTIFIER 308
#define LITERAL 309
#define BOOLLIT 310




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 230 "y.tab.c"

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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNRULES -- Number of states.  */
#define YYNSTATES  359

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,     2,     2,    72,    75,     2,
      63,    64,    58,    69,    61,    70,    57,    71,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    65,    56,
      73,    62,    74,    78,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    76,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,    77,    60,     2,     2,     2,     2,
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
      55
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    35,    37,    39,
      41,    44,    46,    49,    53,    59,    61,    65,    70,    74,
      78,    81,    83,    86,    88,    90,    92,    95,    98,   100,
     102,   104,   106,   108,   112,   115,   117,   121,   123,   127,
     129,   132,   136,   138,   142,   145,   150,   154,   159,   163,
     166,   168,   172,   175,   177,   180,   182,   184,   188,   191,
     196,   200,   203,   205,   209,   212,   214,   217,   219,   221,
     225,   227,   230,   232,   234,   236,   238,   240,   244,   249,
     253,   255,   262,   271,   277,   284,   290,   291,   297,   305,
     313,   320,   323,   325,   327,   330,   332,   334,   336,   340,
     344,   347,   351,   354,   358,   361,   363,   367,   371,   375,
     379,   381,   383,   385,   389,   391,   393,   395,   397,   399,
     404,   409,   414,   418,   420,   422,   424,   426,   430,   432,
     434,   438,   442,   447,   452,   458,   463,   468,   472,   474,
     477,   481,   483,   486,   488,   490,   493,   496,   499,   502,
     505,   507,   509,   512,   514,   516,   518,   523,   528,   533,
     535,   538,   541,   543,   547,   551,   555,   557,   561,   565,
     567,   571,   575,   579,   581,   585,   589,   593,   597,   599,
     603,   607,   609,   613,   615,   619,   621,   625,   627,   631,
     633,   637,   639,   645,   647,   651,   653,   655,   657,   659,
     661,   663
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      83,     0,    -1,    81,    -1,    81,   138,    -1,    82,    -1,
      88,    -1,     3,    -1,     9,    -1,     5,    -1,    30,    -1,
      23,    -1,    25,    -1,    18,    -1,    15,    -1,    35,    -1,
      84,    -1,    86,    85,    -1,    86,    -1,    85,    -1,    89,
      -1,    85,    89,    -1,    87,    -1,    86,    87,    -1,    22,
      88,    56,    -1,    22,    88,    57,    58,    56,    -1,    53,
      -1,    88,    57,    53,    -1,    90,    59,    93,    60,    -1,
      90,    59,    60,    -1,    91,    10,    53,    -1,    10,    53,
      -1,    92,    -1,    91,    92,    -1,    28,    -1,    31,    -1,
      94,    -1,    93,    94,    -1,    95,    56,    -1,   100,    -1,
     106,    -1,   108,    -1,   109,    -1,    89,    -1,    91,    80,
      96,    -1,    80,    96,    -1,    97,    -1,    96,    61,    97,
      -1,   104,    -1,   104,    62,    98,    -1,   160,    -1,    59,
      60,    -1,    59,    99,    60,    -1,    98,    -1,    99,    61,
      98,    -1,    99,    61,    -1,    91,    80,   101,   105,    -1,
      80,   101,   105,    -1,   104,    63,   102,    64,    -1,   104,
      63,    64,    -1,   101,    48,    -1,   103,    -1,   102,    61,
     103,    -1,    80,   104,    -1,    53,    -1,   104,    48,    -1,
     110,    -1,    56,    -1,    91,   107,   110,    -1,   107,   110,
      -1,    53,    63,   102,    64,    -1,    53,    63,    64,    -1,
      31,   110,    -1,   110,    -1,    59,   111,    60,    -1,    59,
      60,    -1,   112,    -1,   111,   112,    -1,   113,    -1,   114,
      -1,    80,    96,    56,    -1,   115,    -1,   116,    56,    -1,
     117,    -1,   119,    -1,   124,    -1,   110,    -1,    56,    -1,
      53,    65,   112,    -1,     7,   161,    65,   112,    -1,    13,
      65,   112,    -1,   160,    -1,    21,    63,   160,    64,   114,
     118,    -1,    21,    63,   160,    64,   114,   118,    16,   114,
      -1,    32,    63,   160,    64,   110,    -1,   118,    17,    63,
     160,    64,   114,    -1,    17,    63,   160,    64,   114,    -1,
      -1,    36,    63,   160,    64,   114,    -1,    14,   114,    36,
      63,   160,    64,    56,    -1,    19,    63,   120,   121,   122,
      64,   114,    -1,    19,    63,   120,   121,    64,   114,    -1,
     123,    56,    -1,   113,    -1,    56,    -1,   160,    56,    -1,
      56,    -1,   123,    -1,   116,    -1,   123,    61,   116,    -1,
       4,    53,    56,    -1,     4,    56,    -1,    12,    53,    56,
      -1,    12,    56,    -1,    29,   160,    56,    -1,    29,    56,
      -1,    88,    -1,    88,    57,   133,    -1,    88,    57,    33,
      -1,    88,    57,    10,    -1,    82,    57,    10,    -1,   126,
      -1,   133,    -1,   127,    -1,    63,   160,    64,    -1,   128,
      -1,    54,    -1,    55,    -1,   129,    -1,   130,    -1,    88,
      66,   160,    67,    -1,   127,    66,   160,    67,    -1,   131,
      63,   132,    64,    -1,   131,    63,    64,    -1,   128,    -1,
      33,    -1,    88,    -1,   160,    -1,   132,    61,   160,    -1,
     135,    -1,   134,    -1,   135,    59,    60,    -1,   134,    59,
      60,    -1,   135,    59,    99,    60,    -1,   134,    59,    93,
      60,    -1,    26,    81,    63,   132,    64,    -1,    26,    81,
      63,    64,    -1,    26,    81,   136,   138,    -1,    26,    81,
     136,    -1,   137,    -1,   136,   137,    -1,    66,   160,    67,
      -1,    48,    -1,   138,    48,    -1,   125,    -1,   140,    -1,
     139,    37,    -1,   139,    38,    -1,    37,   141,    -1,    38,
     141,    -1,   143,   144,    -1,   142,    -1,   139,    -1,    68,
     141,    -1,    69,    -1,    70,    -1,   141,    -1,    63,   145,
      64,   144,    -1,    63,   146,    64,   144,    -1,    63,   160,
      64,   142,    -1,    82,    -1,    82,   138,    -1,    88,   138,
      -1,   144,    -1,   147,    58,   144,    -1,   147,    71,   144,
      -1,   147,    72,   144,    -1,   147,    -1,   148,    69,   147,
      -1,   148,    70,   147,    -1,   148,    -1,   149,    39,   148,
      -1,   149,    40,   148,    -1,   149,    41,   148,    -1,   149,
      -1,   150,    73,   149,    -1,   150,    74,   149,    -1,   150,
      43,   149,    -1,   150,    42,   149,    -1,   150,    -1,   151,
      44,   150,    -1,   151,    45,   150,    -1,   151,    -1,   152,
      75,   151,    -1,   152,    -1,   153,    76,   152,    -1,   153,
      -1,   154,    77,   153,    -1,   154,    -1,   155,    46,   154,
      -1,   155,    -1,   156,    47,   155,    -1,   156,    -1,   156,
      78,   160,    65,   157,    -1,   157,    -1,   141,   159,   158,
      -1,    62,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,   158,    -1,   157,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    40,    41,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    57,    61,    62,    63,    67,
      68,    72,    73,    77,    78,    82,    83,    87,    88,    92,
      93,    97,    98,   102,   103,   108,   109,   113,   114,   115,
     116,   117,   118,   122,   123,   127,   128,   132,   133,   137,
     138,   139,   143,   144,   145,   149,   150,   154,   155,   156,
     160,   161,   165,   169,   170,   174,   175,   179,   180,   184,
     185,   189,   193,   197,   198,   202,   203,   207,   208,   212,
     216,   217,   218,   219,   220,   221,   222,   226,   227,   228,
     232,   236,   237,   238,   242,   243,   244,   248,   249,   250,
     251,   255,   256,   257,   261,   262,   266,   270,   271,   275,
     276,   277,   278,   279,   280,   284,   285,   286,   287,   288,
     289,   293,   294,   298,   299,   303,   304,   305,   306,   310,
     311,   315,   316,   320,   321,   322,   326,   327,   331,   332,
     333,   334,   335,   336,   340,   341,   345,   346,   350,   351,
     355,   359,   360,   364,   365,   369,   370,   374,   375,   376,
     377,   381,   382,   386,   387,   391,   392,   393,   394,   398,
     399,   403,   407,   408,   409,   410,   414,   415,   416,   420,
     421,   422,   423,   427,   428,   429,   430,   431,   435,   436,
     437,   441,   442,   446,   447,   451,   452,   456,   457,   461,
     462,   466,   467,   471,   472,   476,   477,   478,   479,   480,
     484,   488
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BOOLEAN", "BREAK", "BYTE", "BYVALUE",
  "CASE", "CAST", "CHAR", "CLASS", "CONST", "CONTINUE", "DEFAULT", "DO",
  "DOUBLE", "ELSE", "ELSE_IF", "FLOAT", "FOR", "GOTO", "IF", "IMPORT",
  "INT", "JNULL", "LONG", "NEW", "OPERATOR", "PUBLIC", "RETURN", "SHORT",
  "STATIC", "SWITCH", "THIS", "VAR", "VOID", "WHILE", "OP_INC", "OP_DEC",
  "OP_SHL", "OP_SHR", "OP_SHRR", "OP_GREATER_EQUAL", "OP_LESS_EQUAL",
  "OP_EQUAL", "OP_DIFFERENT", "OP_AND", "OP_OR", "OP_DIM", "ASS_MUL",
  "ASS_DIV", "ASS_ADD", "ASS_SUB", "IDENTIFIER", "LITERAL", "BOOLLIT",
  "';'", "'.'", "'*'", "'{'", "'}'", "','", "'='", "'('", "')'", "':'",
  "'['", "']'", "'!'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'", "'&'",
  "'^'", "'|'", "'?'", "$accept", "TypeSpecifier", "TypeName",
  "PrimitiveType", "CompilationUnit", "ProgramFile", "TypeDeclarations",
  "ImportStatements", "ImportStatement", "QualifiedName",
  "TypeDeclaration", "ClassHeader", "Modifiers", "Modifier",
  "FieldDeclarations", "FieldDeclaration", "FieldVariableDeclaration",
  "VariableDeclarators", "VariableDeclarator", "VariableInitializer",
  "ArrayInitializers", "MethodDeclaration", "MethodDeclarator",
  "ParameterList", "Parameter", "DeclaratorName", "MethodBody",
  "ConstructorDeclaration", "ConstructorDeclarator", "StaticInitializer",
  "NonStaticInitializer", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "ExpressionStatement", "SelectionStatement", "ElseIfStatement",
  "IterationStatement", "ForInit", "ForExpr", "ForIncr",
  "ExpressionStatements", "JumpStatement", "PrimaryExpression",
  "NotJustName", "ComplexPrimary", "ComplexPrimaryNoParenthesis",
  "ArrayAccess", "MethodCall", "MethodAccess", "ArgumentList",
  "NewAllocationExpression", "ClassAllocationExpression",
  "ArrayAllocationExpression", "DimExprs", "DimExpr", "Dims",
  "PostfixExpression", "RealPostfixExpression", "UnaryExpression",
  "LogicalUnaryExpression", "ArithmeticUnaryOperator", "CastExpression",
  "PrimitiveTypeExpression", "ClassTypeExpression",
  "MultiplicativeExpression", "AdditiveExpression", "ShiftExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "AssignmentOperator",
  "Expression", "ConstantExpression", 0
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
     305,   306,   307,   308,   309,   310,    59,    46,    42,   123,
     125,    44,    61,    40,    41,    58,    91,    93,    33,    43,
      45,    47,    37,    60,    62,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    79,    80,    80,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    84,    84,    84,    85,
      85,    86,    86,    87,    87,    88,    88,    89,    89,    90,
      90,    91,    91,    92,    92,    93,    93,    94,    94,    94,
      94,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   101,   101,   101,
     102,   102,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   108,   109,   110,   110,   111,   111,   112,   112,   113,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   115,
     116,   117,   117,   117,   118,   118,   118,   119,   119,   119,
     119,   120,   120,   120,   121,   121,   122,   123,   123,   124,
     124,   124,   124,   124,   124,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   132,   132,   133,   133,
     133,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   144,   145,
     145,   146,   147,   147,   147,   147,   148,   148,   148,   149,
     149,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   155,   155,   156,
     156,   157,   157,   158,   158,   159,   159,   159,   159,   159,
     160,   161
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       2,     1,     2,     3,     5,     1,     3,     4,     3,     3,
       2,     1,     2,     1,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     3,     2,     1,     3,     1,     3,     1,
       2,     3,     1,     3,     2,     4,     3,     4,     3,     2,
       1,     3,     2,     1,     2,     1,     1,     3,     2,     4,
       3,     2,     1,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     6,     8,     5,     6,     5,     0,     5,     7,     7,
       6,     2,     1,     1,     2,     1,     1,     1,     3,     3,
       2,     3,     2,     3,     2,     1,     3,     3,     3,     3,
       1,     1,     1,     3,     1,     1,     1,     1,     1,     4,
       4,     4,     3,     1,     1,     1,     1,     3,     1,     1,
       3,     3,     4,     4,     5,     4,     4,     3,     1,     2,
       3,     1,     2,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     4,     4,     4,     1,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    33,    34,     0,    15,    18,    17,    21,
      19,     0,     0,    31,    30,    25,     0,     1,    20,    16,
      22,     0,     0,    32,    23,     0,     6,     8,     7,    13,
      12,    10,    11,     9,    34,    14,    25,     0,    28,     0,
       2,     4,     5,    42,     0,     0,    35,     0,    38,    39,
       0,    40,    41,    72,    29,    26,     0,    71,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   134,
       0,     0,     0,    25,   125,   126,    86,    74,     0,     0,
     163,   164,     0,     4,   115,    85,     0,    75,    77,    78,
      80,     0,    82,    83,    84,   153,   120,   122,   124,   127,
     128,     0,   121,   139,   138,   161,   154,   165,   160,     0,
     172,   176,   179,   183,   188,   191,   193,   195,   197,   199,
     201,   203,   210,    90,    63,    44,    45,     0,    47,   151,
       3,     0,     0,     0,    27,    36,    37,    68,    24,    70,
       0,     0,    60,     0,   110,     0,   115,   165,   211,     0,
       0,   112,     0,     0,     0,     0,     0,   114,     0,     0,
       0,     0,   157,   158,     0,   169,   115,     0,     0,     0,
     162,     0,    47,     0,     0,     0,    73,    76,    81,     0,
       0,     0,     0,   155,   156,   206,   207,   208,   209,   205,
       0,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    59,    66,    56,    65,    64,     0,     0,
     152,    43,     0,    67,    62,     0,    69,   109,     0,   111,
      89,     0,   103,   102,   107,     0,     0,     0,     0,     0,
     147,   148,   113,     0,     0,     0,    87,   170,   171,     0,
       0,   123,    79,   119,   118,   117,   116,     0,     0,   132,
       0,   136,   141,     0,     0,   140,    52,     0,    49,   204,
     173,   174,   175,   177,   178,   180,   181,   182,   187,   186,
     184,   185,   189,   190,   192,   194,   196,   198,   200,     0,
      46,    48,    58,     0,    55,    61,    88,     0,   105,     0,
       0,   101,     0,     0,   145,     0,     0,   149,   146,     0,
       0,   123,   166,   167,   168,   129,   130,     0,   131,   143,
      50,     0,   142,    54,     0,    57,     0,     0,     0,   106,
     104,   108,    96,   144,   150,    93,    97,   137,    51,    53,
     202,     0,   100,     0,     0,    91,    98,    99,     0,     0,
       0,     0,    92,     0,     0,     0,    95,     0,    94
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    82,    40,   145,     5,     6,     7,     8,     9,   146,
      43,    11,    12,    13,    45,    46,    47,   125,   126,   266,
     267,    48,   127,   141,   142,   128,   215,    49,    50,    51,
      52,    85,    86,    87,    88,    89,    90,    91,    92,   345,
      93,   235,   299,   328,   236,    94,    95,    96,    97,    98,
      99,   100,   101,   260,   102,   103,   104,   240,   241,   130,
     105,   106,   107,   108,   109,   110,   167,   168,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     190,   123,   149
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const yytype_int16 yypact[] =
{
      12,    -7,    -5,  -208,  -208,    29,  -208,    48,    12,  -208,
    -208,     6,    50,  -208,  -208,  -208,    55,  -208,  -208,    48,
    -208,  1184,    19,  -208,  -208,    72,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,    23,  -208,    37,   306,  -208,    69,
      76,  -208,   -18,  -208,  1316,  1217,  -208,    64,  -208,  -208,
      23,  -208,  -208,  -208,  -208,  -208,    75,  -208,  1132,    36,
    1016,    79,    61,   442,    85,    87,   200,   623,    93,  -208,
      95,  1057,  1057,   104,  -208,  -208,  -208,  -208,  1016,  1057,
    -208,  -208,    69,   118,    70,  -208,   374,  -208,  -208,  -208,
    -208,   140,  -208,  -208,  -208,  -208,  -208,   134,   141,  -208,
    -208,   143,  -208,   161,   172,   175,  -208,    90,  -208,  1016,
    -208,   -34,   158,   197,   -22,   206,   164,   187,   171,   211,
     -24,  -208,  -208,  -208,  -208,   205,  -208,    14,   -21,  -208,
     226,   222,    69,    23,  -208,  -208,  -208,  -208,  -208,  -208,
      69,   107,  -208,   220,  -208,   118,    42,  -208,  -208,   212,
     223,  -208,   442,   242,   679,  1016,   135,  -208,   225,  1016,
    1016,  1016,  -208,  -208,   442,    49,    71,   218,   221,   228,
    -208,    88,   -30,   274,     0,  1016,  -208,  -208,  -208,  1016,
     735,  1250,   499,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    1016,  -208,  1016,  1016,  1016,  1016,  1016,  1016,  1016,  1016,
    1016,  1016,  1016,  1016,  1016,  1016,  1016,  1016,  1016,  1016,
    1016,  1016,    69,  -208,  -208,  -208,  -208,  -208,   791,  1165,
    -208,   205,    14,  -208,   239,   200,  -208,  -208,   442,  -208,
    -208,   227,  -208,  -208,  -208,   848,   101,   229,   904,  1016,
       2,  -208,  -208,   231,   232,   233,  -208,   226,   226,  1016,
    1016,  1098,  -208,  -208,  -208,  -208,  -208,   234,   235,  -208,
     147,  -208,  -208,  1283,   561,  -208,  -208,   181,  -208,  -208,
    -208,  -208,  -208,   -34,   -34,   158,   158,   158,   197,   197,
     197,   197,   -22,   -22,   206,   164,   187,   171,   211,   240,
    -208,  -208,  -208,   153,  -208,  -208,  -208,  1016,  -208,   960,
     243,  -208,  1016,   442,  -208,   165,   237,  -208,   226,    23,
     442,  -208,  -208,  -208,  -208,  -208,  -208,  1016,  -208,  -208,
    -208,   195,  -208,   791,  1016,  -208,   236,   442,   248,   246,
    -208,  -208,   281,  -208,  -208,  -208,  -208,  -208,  -208,  -208,
    -208,   258,  -208,   442,   253,   244,  -208,  -208,  1016,   442,
     254,   259,  -208,  1016,   442,   262,  -208,   442,  -208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,    40,   256,    -9,  -208,  -208,   320,  -208,   322,    43,
      67,  -208,   -14,     3,   152,   -41,  -208,   -73,   122,  -207,
      73,  -208,   208,   126,   121,   -74,   125,  -208,   304,  -208,
    -208,   -20,  -208,   -81,   196,   -63,  -208,  -148,  -208,  -208,
    -208,  -208,  -208,  -208,    52,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,   111,   178,  -208,  -208,  -208,   113,  -149,
    -208,  -208,   -16,   103,  -208,   -90,  -208,  -208,    74,    47,
     -37,    68,   149,   150,   148,   154,   157,  -208,   -57,   168,
    -208,   -65,  -208
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -136
static const yytype_int16 yytable[] =
{
     153,    53,   158,   148,   135,   177,   234,    44,   172,   171,
     254,   291,    41,   169,    57,    23,   247,   248,   217,   191,
     200,   201,     1,   210,   192,    53,    66,   217,    83,    17,
     137,    44,   218,   255,     2,    41,    41,   193,   194,   131,
       3,   218,   219,     4,   147,    16,    14,    23,    15,    41,
     129,   202,   203,    55,   211,   162,   163,    41,     1,   221,
      22,    39,   213,   170,    42,    21,   224,    10,   239,   165,
     214,   230,    54,    37,    18,    10,     3,    83,     3,     4,
      84,     4,    37,   246,   132,    39,    18,    42,    42,   143,
     237,   308,   144,   147,   243,   244,   245,   129,   140,   174,
      58,    42,   270,   271,   272,  -135,   173,   216,   175,    42,
     257,    24,    25,   223,   258,   261,   339,   268,    -5,   129,
     136,   166,   124,    -5,   129,    55,   152,   174,   174,    84,
      56,   138,   150,  -135,  -135,   151,   175,   175,   172,   185,
     186,   187,   188,    83,   252,    83,   289,   296,   154,   212,
     155,   234,   189,   268,   331,    83,   159,   301,   160,   312,
     313,    53,   302,   278,   279,   280,   281,    44,   225,   164,
     300,   226,    41,   261,   306,   173,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,    84,   178,    84,   238,   268,
     179,   239,   216,    26,  -133,    27,   180,    84,   317,    28,
      41,   318,   183,   184,   225,    29,    41,   325,    30,    83,
     181,    39,   135,    31,    42,    32,   317,   195,   196,   333,
      33,   182,   326,   147,   147,    35,   197,   198,   199,   206,
     332,   322,   323,    53,   275,   276,   277,   336,   208,    44,
     204,   205,   337,    15,    41,   338,   323,   209,   268,   140,
     349,   350,    42,   207,   342,   140,   212,   340,    42,   273,
     274,    84,   282,   283,   220,    55,   227,   228,   231,   229,
     347,   242,   249,   351,   253,   250,   352,   217,   355,   335,
     297,   356,   251,   303,   358,   309,   310,   311,   344,   330,
     341,   315,   316,    39,   334,   324,    42,   302,   147,    26,
      59,    27,   343,    60,   346,    28,   348,   353,    61,    62,
      63,    29,   156,   354,    30,    64,   357,    65,    19,    31,
      20,    32,    66,   263,   290,    67,    33,   321,    68,    69,
     222,    35,    70,    71,    72,   293,   295,   294,   133,   305,
     233,   329,   256,   307,   314,   284,   286,   285,   269,    73,
      74,    75,    76,   287,     0,    37,    77,   288,     0,    78,
       0,     0,     0,     0,    79,    80,    81,    26,    59,    27,
       0,    60,     0,    28,     0,     0,    61,    62,    63,    29,
       0,     0,    30,    64,     0,    65,     0,    31,     0,    32,
      66,     0,     0,    67,    33,     0,    68,    69,     0,    35,
      70,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,     0,     0,    37,   176,     0,     0,    78,     0,     0,
       0,     0,    79,    80,    81,    26,    59,    27,     0,    60,
       0,    28,     0,     0,    61,    62,    63,    29,     0,     0,
      30,    64,     0,    65,     0,    31,     0,    32,    66,     0,
       0,    67,    33,     0,    68,    69,     0,    35,    70,    71,
      72,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,     0,
       0,    37,    26,     0,    27,    78,     0,     0,    28,     0,
      79,    80,    81,     0,    29,     0,     0,    30,     0,     0,
       0,     0,    31,     0,    32,    66,     0,     0,     0,    33,
       0,     0,    69,     0,    35,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    74,    75,     0,     0,     0,   264,   265,
       0,     0,    78,     0,    26,     0,    27,    79,    80,    81,
      28,     0,     0,     0,     0,     0,    29,     0,     0,    30,
       0,     0,     0,     0,    31,     0,    32,    66,     0,     0,
       0,    33,     0,     0,    69,     0,    35,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    74,    75,     0,     0,     0,
     264,   320,     0,     0,    78,     0,    26,     0,    27,    79,
      80,    81,    28,     0,     0,     0,     0,     0,    29,     0,
       0,    30,     0,     0,     0,     0,    31,     0,    32,    66,
       0,     0,     0,    33,     0,     0,    69,     0,    35,     0,
      71,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    74,    75,   157,
       0,     0,    26,     0,    27,     0,    78,     0,    28,     0,
       0,    79,    80,    81,    29,     0,     0,    30,     0,     0,
       0,     0,    31,     0,    32,    66,     0,     0,     0,    33,
       0,     0,    69,     0,    35,     0,    71,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    15,    74,    75,   232,     0,     0,    26,     0,
      27,     0,    78,     0,    28,     0,     0,    79,    80,    81,
      29,     0,     0,    30,     0,     0,     0,     0,    31,     0,
      32,    66,     0,     0,     0,    33,     0,     0,    69,     0,
      35,     0,    71,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    74,
      75,     0,     0,     0,    26,     0,    27,     0,    78,   259,
      28,     0,     0,    79,    80,    81,    29,     0,     0,    30,
       0,     0,     0,     0,    31,     0,    32,    66,     0,     0,
       0,    33,     0,     0,    69,     0,    35,     0,    71,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,    74,    75,     0,     0,     0,
     264,    26,     0,    27,    78,     0,     0,    28,     0,    79,
      80,    81,     0,    29,     0,     0,    30,     0,     0,     0,
       0,    31,     0,    32,    66,     0,     0,     0,    33,     0,
       0,    69,     0,    35,     0,    71,    72,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    74,    75,   298,     0,     0,    26,     0,    27,
       0,    78,     0,    28,     0,     0,    79,    80,    81,    29,
       0,     0,    30,     0,     0,     0,     0,    31,     0,    32,
      66,     0,     0,     0,    33,     0,     0,    69,     0,    35,
       0,    71,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    15,    74,    75,
       0,     0,     0,    26,     0,    27,     0,    78,   304,    28,
       0,     0,    79,    80,    81,    29,     0,     0,    30,     0,
       0,     0,     0,    31,     0,    32,    66,     0,     0,     0,
      33,     0,     0,    69,     0,    35,     0,    71,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    15,    74,    75,     0,     0,     0,    26,
       0,    27,     0,    78,   327,    28,     0,     0,    79,    80,
      81,    29,     0,     0,    30,     0,     0,     0,     0,    31,
       0,    32,    66,     0,     0,     0,    33,     0,     0,    69,
       0,    35,     0,    71,    72,     0,     0,     0,     0,     0,
      26,     0,    27,     0,     0,     0,    28,     0,     0,    15,
      74,    75,    29,     0,     0,    30,     0,     0,     0,    78,
      31,     0,    32,    66,    79,    80,    81,    33,     0,     0,
      69,     0,    35,     0,    71,    72,     0,     0,     0,     0,
       0,    26,     0,    27,     0,     0,     0,    28,     0,     0,
      15,    74,    75,    29,     0,     0,    30,     0,     0,     0,
     161,    31,     0,    32,    66,    79,    80,    81,    33,     0,
       0,    69,     0,    35,     0,    26,     0,    27,     0,     0,
       0,    28,     0,     0,     0,     0,     0,    29,     0,     0,
      30,    15,    74,    75,     0,    31,     0,    32,     0,     0,
       0,   161,    33,     0,     0,     0,    79,    35,    26,     0,
      27,     0,     0,     0,    28,     0,     0,     0,     0,     0,
      29,     0,     0,    30,     0,    15,     0,    26,    31,    27,
      32,     0,     0,    28,     1,    33,   139,     0,     0,    29,
      35,     0,    30,     0,     0,     0,     0,    31,     0,    32,
       0,     0,     3,     0,    33,    34,     0,     0,    15,    35,
      26,     0,    27,     0,     0,     0,    28,     1,     0,   292,
       0,     0,    29,     0,     0,    30,     0,    36,     0,     0,
      31,     0,    32,    37,    38,     3,     0,    33,    34,     0,
       0,     0,    35,    26,     0,    27,     0,     0,     0,    28,
       1,     0,     0,     0,     0,    29,     0,     0,    30,     0,
      36,     0,     0,    31,     0,    32,    37,   134,     3,     0,
      33,    34,     0,     0,     0,    35,    26,     0,    27,     0,
       0,     0,    28,     1,     0,     0,     0,     0,    29,     0,
       0,    30,     0,    36,     0,     0,    31,     0,    32,    37,
     262,     3,     0,    33,    34,     0,     0,     0,    35,    26,
       0,    27,     0,     0,     0,    28,    22,     0,     0,     0,
       0,    29,     0,     0,    30,     0,    36,     0,     0,    31,
       0,    32,    37,   319,     3,     0,    33,     4,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36
};

static const yytype_int16 yycheck[] =
{
      63,    21,    67,    60,    45,    86,   154,    21,    82,    82,
      10,   218,    21,    78,    34,    12,   165,   166,    48,   109,
      42,    43,    10,    47,    58,    45,    26,    48,    37,     0,
      50,    45,    62,    33,    22,    44,    45,    71,    72,    57,
      28,    62,    63,    31,    60,     2,    53,    44,    53,    58,
      48,    73,    74,    53,    78,    71,    72,    66,    10,   132,
      10,    21,    48,    79,    21,    59,   140,     0,    66,    78,
      56,   152,    53,    59,     7,     8,    28,    86,    28,    31,
      37,    31,    59,   164,    44,    45,    19,    44,    45,    53,
     155,   240,    56,   109,   159,   160,   161,    48,    58,    57,
      63,    58,   192,   193,   194,    63,    57,   127,    66,    66,
     175,    56,    57,   133,   179,   180,   323,   182,    48,    48,
      56,    78,    53,    53,    48,    53,    65,    57,    57,    86,
      58,    56,    53,    63,    63,    56,    66,    66,   212,    49,
      50,    51,    52,   152,    56,   154,   211,   228,    63,    61,
      63,   299,    62,   218,   302,   164,    63,    56,    63,   249,
     250,   181,    61,   200,   201,   202,   203,   181,    61,    65,
     235,    64,   181,   238,   239,    57,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   152,    56,   154,    63,   264,
      66,    66,   222,     3,    63,     5,    63,   164,    61,     9,
     219,    64,    37,    38,    61,    15,   225,    64,    18,   228,
      59,   181,   263,    23,   181,    25,    61,    69,    70,    64,
      30,    59,   297,   249,   250,    35,    39,    40,    41,    75,
     303,    60,    61,   263,   197,   198,   199,   310,    77,   263,
      44,    45,   317,    53,   263,    60,    61,    46,   323,   219,
      16,    17,   219,    76,   327,   225,    61,   324,   225,   195,
     196,   228,   204,   205,    48,    53,    56,    65,    36,    56,
     343,    56,    64,   348,    10,    64,   349,    48,   353,   309,
      63,   354,    64,    64,   357,    64,    64,    64,    17,    56,
      64,    67,    67,   263,    67,    65,   263,    61,   324,     3,
       4,     5,    64,     7,    56,     9,    63,    63,    12,    13,
      14,    15,    66,    64,    18,    19,    64,    21,     8,    23,
       8,    25,    26,   181,   212,    29,    30,   264,    32,    33,
     132,    35,    36,    37,    38,   219,   225,   222,    44,   238,
     154,   299,   174,   240,   251,   206,   208,   207,   190,    53,
      54,    55,    56,   209,    -1,    59,    60,   210,    -1,    63,
      -1,    -1,    -1,    -1,    68,    69,    70,     3,     4,     5,
      -1,     7,    -1,     9,    -1,    -1,    12,    13,    14,    15,
      -1,    -1,    18,    19,    -1,    21,    -1,    23,    -1,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    33,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      56,    -1,    -1,    59,    60,    -1,    -1,    63,    -1,    -1,
      -1,    -1,    68,    69,    70,     3,     4,     5,    -1,     7,
      -1,     9,    -1,    -1,    12,    13,    14,    15,    -1,    -1,
      18,    19,    -1,    21,    -1,    23,    -1,    25,    26,    -1,
      -1,    29,    30,    -1,    32,    33,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    -1,
      -1,    59,     3,    -1,     5,    63,    -1,    -1,     9,    -1,
      68,    69,    70,    -1,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    63,    -1,     3,    -1,     5,    68,    69,    70,
       9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      59,    60,    -1,    -1,    63,    -1,     3,    -1,     5,    68,
      69,    70,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,
      -1,    -1,     3,    -1,     5,    -1,    63,    -1,     9,    -1,
      -1,    68,    69,    70,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    35,    -1,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    -1,    -1,     3,    -1,
       5,    -1,    63,    -1,     9,    -1,    -1,    68,    69,    70,
      15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      55,    -1,    -1,    -1,     3,    -1,     5,    -1,    63,    64,
       9,    -1,    -1,    68,    69,    70,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    35,    -1,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,
      59,     3,    -1,     5,    63,    -1,    -1,     9,    -1,    68,
      69,    70,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    -1,    -1,     3,    -1,     5,
      -1,    63,    -1,     9,    -1,    -1,    68,    69,    70,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,
      -1,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,    55,
      -1,    -1,    -1,     3,    -1,     5,    -1,    63,    64,     9,
      -1,    -1,    68,    69,    70,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    35,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    54,    55,    -1,    -1,    -1,     3,
      -1,     5,    -1,    63,    64,     9,    -1,    -1,    68,    69,
      70,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
       3,    -1,     5,    -1,    -1,    -1,     9,    -1,    -1,    53,
      54,    55,    15,    -1,    -1,    18,    -1,    -1,    -1,    63,
      23,    -1,    25,    26,    68,    69,    70,    30,    -1,    -1,
      33,    -1,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,
      -1,     3,    -1,     5,    -1,    -1,    -1,     9,    -1,    -1,
      53,    54,    55,    15,    -1,    -1,    18,    -1,    -1,    -1,
      63,    23,    -1,    25,    26,    68,    69,    70,    30,    -1,
      -1,    33,    -1,    35,    -1,     3,    -1,     5,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    -1,    -1,
      18,    53,    54,    55,    -1,    23,    -1,    25,    -1,    -1,
      -1,    63,    30,    -1,    -1,    -1,    68,    35,     3,    -1,
       5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    18,    -1,    53,    -1,     3,    23,     5,
      25,    -1,    -1,     9,    10,    30,    64,    -1,    -1,    15,
      35,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,
      -1,    -1,    28,    -1,    30,    31,    -1,    -1,    53,    35,
       3,    -1,     5,    -1,    -1,    -1,     9,    10,    -1,    64,
      -1,    -1,    15,    -1,    -1,    18,    -1,    53,    -1,    -1,
      23,    -1,    25,    59,    60,    28,    -1,    30,    31,    -1,
      -1,    -1,    35,     3,    -1,     5,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,    -1,
      53,    -1,    -1,    23,    -1,    25,    59,    60,    28,    -1,
      30,    31,    -1,    -1,    -1,    35,     3,    -1,     5,    -1,
      -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    18,    -1,    53,    -1,    -1,    23,    -1,    25,    59,
      60,    28,    -1,    30,    31,    -1,    -1,    -1,    35,     3,
      -1,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    -1,    53,    -1,    -1,    23,
      -1,    25,    59,    60,    28,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    22,    28,    31,    83,    84,    85,    86,    87,
      89,    90,    91,    92,    53,    53,    88,     0,    89,    85,
      87,    59,    10,    92,    56,    57,     3,     5,     9,    15,
      18,    23,    25,    30,    31,    35,    53,    59,    60,    80,
      81,    82,    88,    89,    91,    93,    94,    95,   100,   106,
     107,   108,   109,   110,    53,    53,    58,   110,    63,     4,
       7,    12,    13,    14,    19,    21,    26,    29,    32,    33,
      36,    37,    38,    53,    54,    55,    56,    60,    63,    68,
      69,    70,    80,    82,    88,   110,   111,   112,   113,   114,
     115,   116,   117,   119,   124,   125,   126,   127,   128,   129,
     130,   131,   133,   134,   135,   139,   140,   141,   142,   143,
     144,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   160,    53,    96,    97,   101,   104,    48,
     138,    57,    80,   107,    60,    94,    56,   110,    56,    64,
      80,   102,   103,    53,    56,    82,    88,   141,   157,   161,
      53,    56,    65,   114,    63,    63,    81,    56,   160,    63,
      63,    63,   141,   141,    65,    82,    88,   145,   146,   160,
     141,    96,   104,    57,    57,    66,    60,   112,    56,    66,
      63,    59,    59,    37,    38,    49,    50,    51,    52,    62,
     159,   144,    58,    71,    72,    69,    70,    39,    40,    41,
      42,    43,    73,    74,    44,    45,    75,    76,    77,    46,
      47,    78,    61,    48,    56,   105,   110,    48,    62,    63,
      48,    96,   101,   110,   104,    61,    64,    56,    65,    56,
     112,    36,    56,   113,   116,   120,   123,   160,    63,    66,
     136,   137,    56,   160,   160,   160,   112,   138,   138,    64,
      64,    64,    56,    10,    10,    33,   133,   160,   160,    64,
     132,   160,    60,    93,    59,    60,    98,    99,   160,   158,
     144,   144,   144,   147,   147,   148,   148,   148,   149,   149,
     149,   149,   150,   150,   151,   152,   153,   154,   155,   160,
      97,    98,    64,   102,   105,   103,   112,    63,    56,   121,
     160,    56,    61,    64,    64,   132,   160,   137,   138,    64,
      64,    64,   144,   144,   142,    67,    67,    61,    64,    60,
      60,    99,    60,    61,    65,    64,   160,    64,   122,   123,
      56,   116,   114,    64,    67,   110,   114,   160,    60,    98,
     157,    64,   114,    64,    17,   118,    56,   114,    63,    16,
      17,   160,   114,    63,    64,   160,   114,    64,   114
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
        case 18:

/* Line 1455 of yacc.c  */
#line 63 "pJava.y"
    {printf("Hello World\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2007 "y.tab.c"
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
#line 491 "pJava.y"


int main()
{
yyparse();
return 0;
}

