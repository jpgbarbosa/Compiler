
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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 232 "y.tab.c"

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1369

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  218
/* YYNRULES -- Number of states.  */
#define YYNSTATES  368

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,     2,     2,    73,    76,     2,
      64,    65,    59,    70,    62,    71,    58,    72,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    66,    57,
      74,    63,    75,    79,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    67,     2,    68,    77,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,    78,    61,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    36,    39,    42,
      45,    47,    49,    51,    55,    57,    60,    62,    65,    69,
      75,    77,    81,    86,    90,    94,    97,    99,   102,   104,
     106,   108,   111,   114,   116,   118,   120,   122,   124,   128,
     131,   133,   137,   139,   143,   145,   148,   152,   154,   158,
     161,   166,   170,   175,   179,   182,   184,   188,   191,   193,
     196,   198,   200,   204,   207,   212,   216,   219,   221,   225,
     228,   230,   233,   235,   237,   241,   243,   245,   248,   250,
     252,   254,   256,   258,   262,   267,   271,   273,   281,   287,
     294,   300,   301,   304,   305,   311,   319,   327,   334,   337,
     339,   341,   344,   346,   348,   350,   354,   358,   361,   365,
     368,   372,   375,   377,   381,   385,   389,   393,   395,   397,
     399,   403,   405,   407,   409,   411,   413,   418,   423,   428,
     432,   434,   436,   438,   440,   444,   446,   448,   452,   456,
     461,   466,   472,   477,   482,   486,   488,   491,   495,   497,
     500,   502,   504,   507,   510,   513,   516,   519,   521,   523,
     526,   528,   530,   532,   537,   542,   547,   549,   552,   555,
     557,   561,   565,   569,   571,   575,   579,   581,   585,   589,
     593,   595,   599,   603,   607,   611,   613,   617,   621,   623,
     627,   629,   633,   635,   639,   641,   645,   647,   651,   653,
     659,   661,   665,   667,   669,   671,   673,   675,   677
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      84,     0,    -1,    82,    -1,    82,   142,    -1,    83,    -1,
      90,    -1,     3,    -1,     9,    -1,     5,    -1,    31,    -1,
      23,    -1,    25,    -1,    18,    -1,    15,    -1,    36,    -1,
      85,    -1,    86,    88,    87,    -1,    86,    88,    -1,    86,
      87,    -1,    88,    87,    -1,    86,    -1,    88,    -1,    87,
      -1,    28,    90,    57,    -1,    91,    -1,    87,    91,    -1,
      89,    -1,    88,    89,    -1,    22,    90,    57,    -1,    22,
      90,    58,    59,    57,    -1,    54,    -1,    90,    58,    54,
      -1,    92,    60,    95,    61,    -1,    92,    60,    61,    -1,
      93,    10,    54,    -1,    10,    54,    -1,    94,    -1,    93,
      94,    -1,    29,    -1,    32,    -1,    96,    -1,    95,    96,
      -1,    97,    57,    -1,   102,    -1,   108,    -1,   110,    -1,
     111,    -1,    91,    -1,    93,    81,    98,    -1,    81,    98,
      -1,    99,    -1,    98,    62,    99,    -1,   106,    -1,   106,
      63,   100,    -1,   164,    -1,    60,    61,    -1,    60,   101,
      61,    -1,   100,    -1,   101,    62,   100,    -1,   101,    62,
      -1,    93,    81,   103,   107,    -1,    81,   103,   107,    -1,
     106,    64,   104,    65,    -1,   106,    64,    65,    -1,   103,
      49,    -1,   105,    -1,   104,    62,   105,    -1,    81,   106,
      -1,    54,    -1,   106,    49,    -1,   112,    -1,    57,    -1,
      93,   109,   112,    -1,   109,   112,    -1,    54,    64,   104,
      65,    -1,    54,    64,    65,    -1,    32,   112,    -1,   112,
      -1,    60,   113,    61,    -1,    60,    61,    -1,   114,    -1,
     113,   114,    -1,   115,    -1,   116,    -1,    81,    98,    57,
      -1,   117,    -1,   118,    -1,   119,    57,    -1,   120,    -1,
     123,    -1,   128,    -1,   112,    -1,    57,    -1,    54,    66,
     114,    -1,     7,   165,    66,   114,    -1,    13,    66,   114,
      -1,   164,    -1,    21,    64,   164,    65,   116,   121,   122,
      -1,    33,    64,   164,    65,   112,    -1,   121,    17,    64,
     164,    65,   116,    -1,    17,    64,   164,    65,   116,    -1,
      -1,    16,   116,    -1,    -1,    37,    64,   164,    65,   116,
      -1,    14,   116,    37,    64,   164,    65,    57,    -1,    19,
      64,   124,   125,   126,    65,   116,    -1,    19,    64,   124,
     125,    65,   116,    -1,   127,    57,    -1,   115,    -1,    57,
      -1,   164,    57,    -1,    57,    -1,   127,    -1,   119,    -1,
     127,    62,   119,    -1,     4,    54,    57,    -1,     4,    57,
      -1,    12,    54,    57,    -1,    12,    57,    -1,    30,   164,
      57,    -1,    30,    57,    -1,    90,    -1,    90,    58,   137,
      -1,    90,    58,    34,    -1,    90,    58,    10,    -1,    83,
      58,    10,    -1,   130,    -1,   137,    -1,   131,    -1,    64,
     164,    65,    -1,   132,    -1,    55,    -1,    56,    -1,   133,
      -1,   134,    -1,    90,    67,   164,    68,    -1,   131,    67,
     164,    68,    -1,   135,    64,   136,    65,    -1,   135,    64,
      65,    -1,   132,    -1,    34,    -1,    90,    -1,   164,    -1,
     136,    62,   164,    -1,   139,    -1,   138,    -1,   139,    60,
      61,    -1,   138,    60,    61,    -1,   139,    60,   101,    61,
      -1,   138,    60,    95,    61,    -1,    26,    82,    64,   136,
      65,    -1,    26,    82,    64,    65,    -1,    26,    82,   140,
     142,    -1,    26,    82,   140,    -1,   141,    -1,   140,   141,
      -1,    67,   164,    68,    -1,    49,    -1,   142,    49,    -1,
     129,    -1,   144,    -1,   143,    38,    -1,   143,    39,    -1,
      38,   145,    -1,    39,   145,    -1,   147,   148,    -1,   146,
      -1,   143,    -1,    69,   145,    -1,    70,    -1,    71,    -1,
     145,    -1,    64,   149,    65,   148,    -1,    64,   150,    65,
     148,    -1,    64,   164,    65,   146,    -1,    83,    -1,    83,
     142,    -1,    90,   142,    -1,   148,    -1,   151,    59,   148,
      -1,   151,    72,   148,    -1,   151,    73,   148,    -1,   151,
      -1,   152,    70,   151,    -1,   152,    71,   151,    -1,   152,
      -1,   153,    40,   152,    -1,   153,    41,   152,    -1,   153,
      42,   152,    -1,   153,    -1,   154,    74,   153,    -1,   154,
      75,   153,    -1,   154,    44,   153,    -1,   154,    43,   153,
      -1,   154,    -1,   155,    45,   154,    -1,   155,    46,   154,
      -1,   155,    -1,   156,    76,   155,    -1,   156,    -1,   157,
      77,   156,    -1,   157,    -1,   158,    78,   157,    -1,   158,
      -1,   159,    47,   158,    -1,   159,    -1,   160,    48,   159,
      -1,   160,    -1,   160,    79,   164,    66,   161,    -1,   161,
      -1,   145,   163,   162,    -1,    63,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,   162,    -1,   161,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    35,    35,    36,    40,    41,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    57,    61,    62,    63,    64,
      65,    66,    67,    71,    75,    76,    80,    81,    85,    86,
      90,    91,    95,    96,   100,   101,   105,   106,   110,   111,
     116,   117,   121,   122,   123,   124,   125,   126,   130,   131,
     135,   136,   140,   141,   145,   146,   147,   151,   152,   153,
     157,   158,   162,   163,   164,   168,   169,   173,   177,   178,
     182,   183,   187,   188,   192,   193,   197,   201,   205,   206,
     210,   211,   215,   216,   220,   224,   225,   226,   227,   228,
     229,   230,   234,   238,   239,   240,   244,   248,   249,   253,
     254,   255,   259,   260,   264,   265,   266,   267,   271,   272,
     273,   277,   278,   282,   286,   287,   291,   292,   293,   294,
     295,   296,   300,   301,   302,   303,   304,   305,   309,   310,
     314,   315,   319,   320,   321,   322,   326,   327,   331,   332,
     336,   337,   338,   342,   343,   347,   348,   349,   350,   351,
     352,   356,   357,   361,   362,   366,   367,   371,   375,   376,
     380,   381,   385,   386,   390,   391,   392,   393,   397,   398,
     402,   403,   407,   408,   409,   410,   414,   415,   419,   423,
     424,   425,   426,   430,   431,   432,   436,   437,   438,   439,
     443,   444,   445,   446,   447,   451,   452,   453,   457,   458,
     462,   463,   467,   468,   472,   473,   477,   478,   482,   483,
     487,   488,   492,   493,   494,   495,   496,   500,   504
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
  "INT", "JNULL", "LONG", "NEW", "OPERATOR", "PACKAGE", "PUBLIC", "RETURN",
  "SHORT", "STATIC", "SWITCH", "THIS", "VAR", "VOID", "WHILE", "OP_INC",
  "OP_DEC", "OP_SHL", "OP_SHR", "OP_SHRR", "OP_GREATER_EQUAL",
  "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT", "OP_AND", "OP_OR", "OP_DIM",
  "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB", "IDENTIFIER", "LITERAL",
  "BOOLLIT", "';'", "'.'", "'*'", "'{'", "'}'", "','", "'='", "'('", "')'",
  "':'", "'['", "']'", "'!'", "'+'", "'-'", "'/'", "'%'", "'<'", "'>'",
  "'&'", "'^'", "'|'", "'?'", "$accept", "TypeSpecifier", "TypeName",
  "PrimitiveType", "CompilationUnit", "ProgramFile", "PackageStatement",
  "TypeDeclarations", "ImportStatements", "ImportStatement",
  "QualifiedName", "TypeDeclaration", "ClassHeader", "Modifiers",
  "Modifier", "FieldDeclarations", "FieldDeclaration",
  "FieldVariableDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "MethodBody", "ConstructorDeclaration", "ConstructorDeclarator",
  "StaticInitializer", "NonStaticInitializer", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "EmptyStatement",
  "LabeledStatement", "ExpressionStatement", "SelectionStatement",
  "ElseIfStatement", "ElseStatement", "IterationStatement", "ForInit",
  "ForExpr", "ForIncr", "ExpressionStatements", "JumpStatement",
  "PrimaryExpression", "NotJustName", "ComplexPrimary",
  "ComplexPrimaryNoParenthesis", "ArrayAccess", "MethodCall",
  "MethodAccess", "ArgumentList", "NewAllocationExpression",
  "ClassAllocationExpression", "ArrayAllocationExpression", "DimExprs",
  "DimExpr", "Dims", "PostfixExpression", "RealPostfixExpression",
  "UnaryExpression", "LogicalUnaryExpression", "ArithmeticUnaryOperator",
  "CastExpression", "PrimitiveTypeExpression", "ClassTypeExpression",
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
     305,   306,   307,   308,   309,   310,   311,    59,    46,    42,
     123,   125,    44,    61,    40,    41,    58,    91,    93,    33,
      43,    45,    47,    37,    60,    62,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    81,    82,    82,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    84,    85,    85,    85,    85,
      85,    85,    85,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   101,   101,   101,
     102,   102,   103,   103,   103,   104,   104,   105,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   111,   112,   112,
     113,   113,   114,   114,   115,   116,   116,   116,   116,   116,
     116,   116,   117,   118,   118,   118,   119,   120,   120,   121,
     121,   121,   122,   122,   123,   123,   123,   123,   124,   124,
     124,   125,   125,   126,   127,   127,   128,   128,   128,   128,
     128,   128,   129,   129,   129,   129,   129,   129,   130,   130,
     131,   131,   132,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   135,   136,   136,   137,   137,   137,   137,   137,
     137,   138,   138,   139,   139,   140,   140,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   145,   145,   146,   146,
     147,   147,   148,   148,   148,   148,   149,   149,   150,   151,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   154,   154,   154,   154,   155,   155,   155,   156,   156,
     157,   157,   158,   158,   159,   159,   160,   160,   161,   161,
     162,   162,   163,   163,   163,   163,   163,   164,   165
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     2,     2,
       1,     1,     1,     3,     1,     2,     1,     2,     3,     5,
       1,     3,     4,     3,     3,     2,     1,     2,     1,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     3,     2,
       1,     3,     1,     3,     1,     2,     3,     1,     3,     2,
       4,     3,     4,     3,     2,     1,     3,     2,     1,     2,
       1,     1,     3,     2,     4,     3,     2,     1,     3,     2,
       1,     2,     1,     1,     3,     1,     1,     2,     1,     1,
       1,     1,     1,     3,     4,     3,     1,     7,     5,     6,
       5,     0,     2,     0,     5,     7,     7,     6,     2,     1,
       1,     2,     1,     1,     1,     3,     3,     2,     3,     2,
       3,     2,     1,     3,     3,     3,     3,     1,     1,     1,
       3,     1,     1,     1,     1,     1,     4,     4,     4,     3,
       1,     1,     1,     1,     3,     1,     1,     3,     3,     4,
       4,     5,     4,     4,     3,     1,     2,     3,     1,     2,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     4,     4,     4,     1,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    38,    39,     0,    15,    20,    22,
      21,    26,    24,     0,     0,    36,    35,    30,     0,     0,
       1,    18,    17,    25,    19,    27,     0,     0,    37,    28,
       0,    23,     0,    16,     6,     8,     7,    13,    12,    10,
      11,     9,    39,    14,    30,     0,    33,     0,     2,     4,
       5,    47,     0,     0,    40,     0,    43,    44,     0,    45,
      46,    77,    34,    31,     0,    76,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   141,     0,     0,
       0,    30,   132,   133,    92,    79,     0,     0,   170,   171,
       0,     4,   122,    91,     0,    80,    82,    83,    85,    86,
       0,    88,    89,    90,   160,   127,   129,   131,   134,   135,
       0,   128,   146,   145,   168,   161,   172,   167,     0,   179,
     183,   186,   190,   195,   198,   200,   202,   204,   206,   208,
     210,   217,    96,    68,    49,    50,     0,    52,   158,     3,
       0,     0,    32,    41,    42,    73,    29,    75,     0,     0,
      65,     0,   117,     0,   122,   172,   218,     0,     0,   119,
       0,     0,     0,     0,     0,   121,     0,     0,     0,     0,
     164,   165,     0,   176,   122,     0,     0,     0,   169,     0,
      52,     0,     0,     0,    78,    81,    87,     0,     0,     0,
       0,   162,   163,   213,   214,   215,   216,   212,     0,   166,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    64,    71,    61,    70,    69,     0,     0,   159,    48,
       0,    72,    67,     0,    74,   116,     0,   118,    95,     0,
     110,   109,   114,     0,     0,     0,     0,     0,   154,   155,
     120,     0,     0,     0,    93,   177,   178,     0,     0,   130,
      84,   126,   125,   124,   123,     0,     0,   139,     0,   143,
     148,     0,     0,   147,    57,     0,    54,   211,   180,   181,
     182,   184,   185,   187,   188,   189,   194,   193,   191,   192,
     196,   197,   199,   201,   203,   205,   207,     0,    51,    53,
      63,     0,    60,    66,    94,     0,   112,     0,     0,   108,
       0,     0,   152,     0,     0,   156,   153,     0,     0,   130,
     173,   174,   175,   136,   137,     0,   138,   150,    55,     0,
     149,    59,     0,    62,     0,     0,     0,   113,   111,   115,
     101,   151,   157,    98,   104,   144,    56,    58,   209,     0,
     107,     0,     0,   103,   105,   106,     0,     0,     0,    97,
       0,   102,     0,     0,     0,   100,     0,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    90,    48,   153,     6,     7,     8,     9,    10,    11,
     154,    12,    13,    14,    15,    53,    54,    55,   134,   135,
     274,   275,    56,   136,   149,   150,   137,   223,    57,    58,
      59,    60,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   353,   359,   102,   243,   307,   336,   244,   103,   104,
     105,   106,   107,   108,   109,   110,   268,   111,   112,   113,
     248,   249,   139,   114,   115,   116,   117,   118,   119,   175,
     176,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   198,   132,   157
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -216
static const yytype_int16 yypact[] =
{
     109,   -33,    -7,    -7,  -216,  -216,    85,  -216,    17,    32,
      17,  -216,  -216,    64,    91,  -216,  -216,  -216,   184,   186,
    -216,    32,    17,  -216,    32,  -216,  1179,    72,  -216,  -216,
      16,  -216,    89,    32,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,    68,  -216,   100,   315,  -216,    95,   120,  -216,
     118,  -216,  1315,  1213,  -216,   101,  -216,  -216,    68,  -216,
    -216,  -216,  -216,  -216,   123,  -216,   180,   -26,  1037,    97,
     130,   453,   138,   142,    48,   637,   154,  -216,   156,  1079,
    1079,   157,  -216,  -216,  -216,  -216,  1037,  1079,  -216,  -216,
      95,   136,    78,  -216,   384,  -216,  -216,  -216,  -216,  -216,
     174,  -216,  -216,  -216,  -216,  -216,   166,   171,  -216,  -216,
     182,  -216,   191,   193,   199,  -216,   216,  -216,  1037,  -216,
     -35,   179,   168,    55,   210,   181,   183,   206,   224,   -14,
    -216,  -216,  -216,  -216,   223,  -216,    51,    58,  -216,   238,
      95,    68,  -216,  -216,  -216,  -216,  -216,  -216,    95,    94,
    -216,   231,  -216,   136,    45,  -216,  -216,   225,   233,  -216,
     453,   256,   694,  1037,   104,  -216,   239,  1037,  1037,  1037,
    -216,  -216,   453,    76,   133,   232,   258,   260,  -216,    26,
      23,   288,    33,  1037,  -216,  -216,  -216,  1037,   751,  1247,
     511,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  1037,  -216,
    1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,
    1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,  1037,
      95,  -216,  -216,  -216,  -216,  -216,   808,  1155,  -216,   223,
      51,  -216,   272,    48,  -216,  -216,   453,  -216,  -216,   262,
    -216,  -216,  -216,   866,    82,   266,   923,  1037,    11,  -216,
    -216,   267,   270,   274,  -216,   238,   238,  1037,  1037,  1121,
    -216,  -216,  -216,  -216,  -216,   269,   275,  -216,   122,  -216,
    -216,  1281,   574,  -216,  -216,   200,  -216,  -216,  -216,  -216,
    -216,   -35,   -35,   179,   179,   179,   168,   168,   168,   168,
      55,    55,   210,   181,   183,   206,   224,   276,  -216,  -216,
    -216,   128,  -216,  -216,  -216,  1037,  -216,   980,   287,  -216,
    1037,   453,  -216,   139,   279,  -216,   238,    68,   453,  -216,
    -216,  -216,  -216,  -216,  -216,  1037,  -216,  -216,  -216,   211,
    -216,   808,  1037,  -216,   285,   453,   290,   296,  -216,  -216,
     342,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   303,
    -216,   453,   297,   259,  -216,  -216,  1037,   453,   298,  -216,
     299,  -216,  1037,   453,   300,  -216,   453,  -216
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,    -8,   289,   -12,  -216,  -216,  -216,   125,   358,    70,
       3,    -1,  -216,   -17,    -2,   178,   -49,  -216,   -64,   148,
    -215,   102,  -216,   237,   146,   145,   -80,   150,  -216,   329,
    -216,  -216,   -23,  -216,   -79,   220,   -71,  -216,  -216,  -155,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,    83,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,   137,   212,  -216,  -216,
    -216,   144,  -157,  -216,  -216,    99,   141,  -216,   -96,  -216,
    -216,    74,     7,    18,    69,   187,   189,   190,   194,   177,
    -216,   -67,   214,  -216,   -73,  -216
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -143
static const yytype_int16 yytable[] =
{
     161,   156,   166,    61,   143,    18,    19,   242,    23,    52,
     180,   299,    28,   177,    49,   185,   255,   256,    47,    65,
      23,    16,   199,    23,   200,    51,   179,     1,   151,    50,
      61,   152,    23,    91,   218,   145,    52,   201,   202,     2,
      49,    49,     1,   262,   140,    47,     4,    17,    92,     5,
      28,    34,    51,    35,    49,    50,    50,    36,   148,    74,
     138,     4,    49,    37,     5,   219,    38,   263,   232,    50,
      63,    39,   225,    40,   173,    64,   229,    50,   247,    41,
      25,   238,    91,   260,    43,    20,   226,    63,   220,   174,
     245,   316,    25,   254,   251,   252,   253,    92,   208,   209,
     221,    27,    17,   182,   278,   279,   280,   225,   222,  -142,
     265,    45,   183,   224,   266,   269,   347,   276,   231,     1,
       4,   226,   227,     5,    26,   138,    62,    -5,    45,   210,
     211,     2,    -5,    21,   181,    24,   182,     3,     4,   309,
     180,     5,  -142,    63,   310,   183,   297,    33,    91,   133,
      91,   158,   242,   276,   159,   339,   233,   304,   144,   234,
      91,   320,   321,    92,    66,    92,    61,   155,   246,   138,
     308,   247,    52,   269,   314,    92,    32,    49,   170,   171,
     146,    47,   138,    34,   325,    35,   178,   326,    51,    36,
     233,   182,    50,   333,   181,    37,   160,  -142,    38,   276,
     183,   325,   162,    39,   341,    40,   163,   224,   205,   206,
     207,    41,   283,   284,   285,    49,    43,   155,   167,   148,
     168,    49,   143,   172,    91,   148,   286,   287,   288,   289,
      50,   186,   334,   187,    17,  -140,    50,   191,   192,    92,
     340,    29,    30,    31,    32,   147,   188,   344,    61,   203,
     204,   189,   345,   190,    52,   212,   213,   214,   276,    49,
     215,   330,   331,    47,   350,   348,   193,   194,   195,   196,
      51,   217,   346,   331,    50,   357,   358,   281,   282,   197,
     355,   290,   291,   360,   216,   220,   361,   228,   235,   364,
     237,   236,   365,   239,   343,   367,   250,   257,   261,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,    34,    67,
      35,   225,    68,   258,    36,   259,   305,    69,    70,    71,
      37,   311,   317,    38,    72,   318,    73,   323,    39,   319,
      40,    74,   332,   324,   338,    75,    41,   342,    76,    77,
     349,    43,    78,    79,    80,   351,   155,   155,   310,   352,
     354,   356,   362,   164,   363,   366,    22,   271,   298,    81,
      82,    83,    84,   301,   329,    45,    85,   230,   303,    86,
     302,   141,   241,   313,    87,    88,    89,    34,    67,    35,
     337,    68,   315,    36,   264,   296,    69,    70,    71,    37,
     322,   292,    38,    72,   293,    73,   294,    39,     0,    40,
      74,   295,   277,     0,    75,    41,     0,    76,    77,     0,
      43,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,   155,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    84,     0,     0,    45,   184,     0,     0,    86,     0,
       0,     0,     0,    87,    88,    89,    34,    67,    35,     0,
      68,     0,    36,     0,     0,    69,    70,    71,    37,     0,
       0,    38,    72,     0,    73,     0,    39,     0,    40,    74,
       0,     0,     0,    75,    41,     0,    76,    77,     0,    43,
      78,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      84,     0,     0,    45,    34,     0,    35,    86,     0,     0,
      36,     0,    87,    88,    89,     0,    37,     0,     0,    38,
       0,     0,     0,     0,    39,     0,    40,    74,     0,     0,
       0,     0,    41,     0,     0,    77,     0,    43,     0,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    82,    83,     0,     0,
       0,   272,   273,     0,     0,    86,     0,    34,     0,    35,
      87,    88,    89,    36,     0,     0,     0,     0,     0,    37,
       0,     0,    38,     0,     0,     0,     0,    39,     0,    40,
      74,     0,     0,     0,     0,    41,     0,     0,    77,     0,
      43,     0,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    82,
      83,     0,     0,     0,   272,   328,     0,     0,    86,     0,
      34,     0,    35,    87,    88,    89,    36,     0,     0,     0,
       0,     0,    37,     0,     0,    38,     0,     0,     0,     0,
      39,     0,    40,    74,     0,     0,     0,     0,    41,     0,
       0,    77,     0,    43,     0,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    82,    83,   165,     0,     0,    34,     0,    35,
       0,    86,     0,    36,     0,     0,    87,    88,    89,    37,
       0,     0,    38,     0,     0,     0,     0,    39,     0,    40,
      74,     0,     0,     0,     0,    41,     0,     0,    77,     0,
      43,     0,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,    82,
      83,   240,     0,     0,    34,     0,    35,     0,    86,     0,
      36,     0,     0,    87,    88,    89,    37,     0,     0,    38,
       0,     0,     0,     0,    39,     0,    40,    74,     0,     0,
       0,     0,    41,     0,     0,    77,     0,    43,     0,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    82,    83,     0,     0,
       0,    34,     0,    35,     0,    86,   267,    36,     0,     0,
      87,    88,    89,    37,     0,     0,    38,     0,     0,     0,
       0,    39,     0,    40,    74,     0,     0,     0,     0,    41,
       0,     0,    77,     0,    43,     0,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    17,    82,    83,     0,     0,     0,   272,    34,
       0,    35,    86,     0,     0,    36,     0,    87,    88,    89,
       0,    37,     0,     0,    38,     0,     0,     0,     0,    39,
       0,    40,    74,     0,     0,     0,     0,    41,     0,     0,
      77,     0,    43,     0,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,    82,    83,   306,     0,     0,    34,     0,    35,     0,
      86,     0,    36,     0,     0,    87,    88,    89,    37,     0,
       0,    38,     0,     0,     0,     0,    39,     0,    40,    74,
       0,     0,     0,     0,    41,     0,     0,    77,     0,    43,
       0,    79,    80,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    82,    83,
       0,     0,     0,    34,     0,    35,     0,    86,   312,    36,
       0,     0,    87,    88,    89,    37,     0,     0,    38,     0,
       0,     0,     0,    39,     0,    40,    74,     0,     0,     0,
       0,    41,     0,     0,    77,     0,    43,     0,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,    82,    83,     0,     0,     0,
      34,     0,    35,     0,    86,   335,    36,     0,     0,    87,
      88,    89,    37,     0,     0,    38,     0,     0,     0,     0,
      39,     0,    40,    74,     0,     0,     0,     0,    41,     0,
       0,    77,     0,    43,     0,    79,    80,     0,     0,     0,
       0,     0,    34,     0,    35,     0,     0,     0,    36,     0,
       0,    17,    82,    83,    37,     0,     0,    38,     0,     0,
       0,    86,    39,     0,    40,    74,    87,    88,    89,     0,
      41,     0,     0,    77,     0,    43,     0,    79,    80,     0,
       0,     0,     0,     0,    34,     0,    35,     0,     0,     0,
      36,     0,     0,    17,    82,    83,    37,     0,     0,    38,
       0,     0,     0,   169,    39,     0,    40,    74,    87,    88,
      89,     0,    41,     0,     0,    77,     0,    43,    34,     0,
      35,     0,     0,     0,    36,     0,     0,     0,     0,     0,
      37,     0,     0,    38,     0,    17,    82,    83,    39,     0,
      40,     0,    34,     0,    35,   169,    41,     0,    36,     1,
      87,    43,     0,     0,    37,     0,     0,    38,     0,     0,
       0,     0,    39,     0,    40,     0,     0,     0,     4,    17,
      41,    42,     0,     0,     0,    43,    34,     0,    35,     0,
     300,     0,    36,     1,     0,     0,     0,     0,    37,     0,
       0,    38,     0,    44,     0,     0,    39,     0,    40,    45,
      46,     0,     4,     0,    41,    42,     0,     0,     0,    43,
      34,     0,    35,     0,     0,     0,    36,     1,     0,     0,
       0,     0,    37,     0,     0,    38,     0,    44,     0,     0,
      39,     0,    40,    45,   142,     0,     4,     0,    41,    42,
       0,     0,     0,    43,    34,     0,    35,     0,     0,     0,
      36,     1,     0,     0,     0,     0,    37,     0,     0,    38,
       0,    44,     0,     0,    39,     0,    40,    45,   270,     0,
       4,     0,    41,    42,     0,     0,     0,    43,    34,     0,
      35,     0,     0,     0,    36,    27,     0,     0,     0,     0,
      37,     0,     0,    38,     0,    44,     0,     0,    39,     0,
      40,    45,   327,     0,     4,     0,    41,     5,     0,     0,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
      71,    68,    75,    26,    53,     2,     3,   162,     9,    26,
      90,   226,    14,    86,    26,    94,   173,   174,    26,    42,
      21,    54,   118,    24,    59,    26,    90,    10,    54,    26,
      53,    57,    33,    45,    48,    58,    53,    72,    73,    22,
      52,    53,    10,    10,    52,    53,    29,    54,    45,    32,
      52,     3,    53,     5,    66,    52,    53,     9,    66,    26,
      49,    29,    74,    15,    32,    79,    18,    34,   148,    66,
      54,    23,    49,    25,    86,    59,   140,    74,    67,    31,
      10,   160,    94,    57,    36,     0,    63,    54,    62,    86,
     163,   248,    22,   172,   167,   168,   169,    94,    43,    44,
      49,    10,    54,    58,   200,   201,   202,    49,    57,    64,
     183,    60,    67,   136,   187,   188,   331,   190,   141,    10,
      29,    63,    64,    32,    60,    49,    54,    49,    60,    74,
      75,    22,    54,     8,    58,    10,    58,    28,    29,    57,
     220,    32,    64,    54,    62,    67,   219,    22,   160,    54,
     162,    54,   307,   226,    57,   310,    62,   236,    57,    65,
     172,   257,   258,   160,    64,   162,   189,    68,    64,    49,
     243,    67,   189,   246,   247,   172,    58,   189,    79,    80,
      57,   189,    49,     3,    62,     5,    87,    65,   189,     9,
      62,    58,   189,    65,    58,    15,    66,    64,    18,   272,
      67,    62,    64,    23,    65,    25,    64,   230,    40,    41,
      42,    31,   205,   206,   207,   227,    36,   118,    64,   227,
      64,   233,   271,    66,   236,   233,   208,   209,   210,   211,
     227,    57,   305,    67,    54,    64,   233,    38,    39,   236,
     311,    57,    58,    57,    58,    65,    64,   318,   271,    70,
      71,    60,   325,    60,   271,    45,    46,    76,   331,   271,
      77,    61,    62,   271,   335,   332,    50,    51,    52,    53,
     271,    47,    61,    62,   271,    16,    17,   203,   204,    63,
     351,   212,   213,   356,    78,    62,   357,    49,    57,   362,
      57,    66,   363,    37,   317,   366,    57,    65,    10,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,     3,     4,
       5,    49,     7,    65,     9,    65,    64,    12,    13,    14,
      15,    65,    65,    18,    19,    65,    21,    68,    23,    65,
      25,    26,    66,    68,    57,    30,    31,    68,    33,    34,
      65,    36,    37,    38,    39,    65,   257,   258,    62,    17,
      57,    64,    64,    74,    65,    65,     8,   189,   220,    54,
      55,    56,    57,   227,   272,    60,    61,   140,   233,    64,
     230,    52,   162,   246,    69,    70,    71,     3,     4,     5,
     307,     7,   248,     9,   182,   218,    12,    13,    14,    15,
     259,   214,    18,    19,   215,    21,   216,    23,    -1,    25,
      26,   217,   198,    -1,    30,    31,    -1,    33,    34,    -1,
      36,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   332,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,     3,     4,     5,    -1,
       7,    -1,     9,    -1,    -1,    12,    13,    14,    15,    -1,
      -1,    18,    19,    -1,    21,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    30,    31,    -1,    33,    34,    -1,    36,
      37,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    -1,    -1,    60,     3,    -1,     5,    64,    -1,    -1,
       9,    -1,    69,    70,    71,    -1,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,
      -1,    60,    61,    -1,    -1,    64,    -1,     3,    -1,     5,
      69,    70,    71,     9,    -1,    -1,    -1,    -1,    -1,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    -1,    -1,    -1,    60,    61,    -1,    -1,    64,    -1,
       3,    -1,     5,    69,    70,    71,     9,    -1,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    -1,    -1,     3,    -1,     5,
      -1,    64,    -1,     9,    -1,    -1,    69,    70,    71,    15,
      -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,
      36,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    -1,    -1,     3,    -1,     5,    -1,    64,    -1,
       9,    -1,    -1,    69,    70,    71,    15,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    -1,    36,    -1,    38,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,
      -1,     3,    -1,     5,    -1,    64,    65,     9,    -1,    -1,
      69,    70,    71,    15,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    -1,    36,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    56,    -1,    -1,    -1,    60,     3,
      -1,     5,    64,    -1,    -1,     9,    -1,    69,    70,    71,
      -1,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      54,    55,    56,    57,    -1,    -1,     3,    -1,     5,    -1,
      64,    -1,     9,    -1,    -1,    69,    70,    71,    15,    -1,
      -1,    18,    -1,    -1,    -1,    -1,    23,    -1,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    -1,    36,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      -1,    -1,    -1,     3,    -1,     5,    -1,    64,    65,     9,
      -1,    -1,    69,    70,    71,    15,    -1,    -1,    18,    -1,
      -1,    -1,    -1,    23,    -1,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    -1,    36,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    -1,    -1,    -1,
       3,    -1,     5,    -1,    64,    65,     9,    -1,    -1,    69,
      70,    71,    15,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    -1,    36,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,     3,    -1,     5,    -1,    -1,    -1,     9,    -1,
      -1,    54,    55,    56,    15,    -1,    -1,    18,    -1,    -1,
      -1,    64,    23,    -1,    25,    26,    69,    70,    71,    -1,
      31,    -1,    -1,    34,    -1,    36,    -1,    38,    39,    -1,
      -1,    -1,    -1,    -1,     3,    -1,     5,    -1,    -1,    -1,
       9,    -1,    -1,    54,    55,    56,    15,    -1,    -1,    18,
      -1,    -1,    -1,    64,    23,    -1,    25,    26,    69,    70,
      71,    -1,    31,    -1,    -1,    34,    -1,    36,     3,    -1,
       5,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    18,    -1,    54,    55,    56,    23,    -1,
      25,    -1,     3,    -1,     5,    64,    31,    -1,     9,    10,
      69,    36,    -1,    -1,    15,    -1,    -1,    18,    -1,    -1,
      -1,    -1,    23,    -1,    25,    -1,    -1,    -1,    29,    54,
      31,    32,    -1,    -1,    -1,    36,     3,    -1,     5,    -1,
      65,    -1,     9,    10,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    18,    -1,    54,    -1,    -1,    23,    -1,    25,    60,
      61,    -1,    29,    -1,    31,    32,    -1,    -1,    -1,    36,
       3,    -1,     5,    -1,    -1,    -1,     9,    10,    -1,    -1,
      -1,    -1,    15,    -1,    -1,    18,    -1,    54,    -1,    -1,
      23,    -1,    25,    60,    61,    -1,    29,    -1,    31,    32,
      -1,    -1,    -1,    36,     3,    -1,     5,    -1,    -1,    -1,
       9,    10,    -1,    -1,    -1,    -1,    15,    -1,    -1,    18,
      -1,    54,    -1,    -1,    23,    -1,    25,    60,    61,    -1,
      29,    -1,    31,    32,    -1,    -1,    -1,    36,     3,    -1,
       5,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    18,    -1,    54,    -1,    -1,    23,    -1,
      25,    60,    61,    -1,    29,    -1,    31,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    22,    28,    29,    32,    84,    85,    86,    87,
      88,    89,    91,    92,    93,    94,    54,    54,    90,    90,
       0,    87,    88,    91,    87,    89,    60,    10,    94,    57,
      58,    57,    58,    87,     3,     5,     9,    15,    18,    23,
      25,    31,    32,    36,    54,    60,    61,    81,    82,    83,
      90,    91,    93,    95,    96,    97,   102,   108,   109,   110,
     111,   112,    54,    54,    59,   112,    64,     4,     7,    12,
      13,    14,    19,    21,    26,    30,    33,    34,    37,    38,
      39,    54,    55,    56,    57,    61,    64,    69,    70,    71,
      81,    83,    90,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   123,   128,   129,   130,   131,   132,   133,   134,
     135,   137,   138,   139,   143,   144,   145,   146,   147,   148,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   164,    54,    98,    99,   103,   106,    49,   142,
      81,   109,    61,    96,    57,   112,    57,    65,    81,   104,
     105,    54,    57,    83,    90,   145,   161,   165,    54,    57,
      66,   116,    64,    64,    82,    57,   164,    64,    64,    64,
     145,   145,    66,    83,    90,   149,   150,   164,   145,    98,
     106,    58,    58,    67,    61,   114,    57,    67,    64,    60,
      60,    38,    39,    50,    51,    52,    53,    63,   163,   148,
      59,    72,    73,    70,    71,    40,    41,    42,    43,    44,
      74,    75,    45,    46,    76,    77,    78,    47,    48,    79,
      62,    49,    57,   107,   112,    49,    63,    64,    49,    98,
     103,   112,   106,    62,    65,    57,    66,    57,   114,    37,
      57,   115,   119,   124,   127,   164,    64,    67,   140,   141,
      57,   164,   164,   164,   114,   142,   142,    65,    65,    65,
      57,    10,    10,    34,   137,   164,   164,    65,   136,   164,
      61,    95,    60,    61,   100,   101,   164,   162,   148,   148,
     148,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   154,   155,   156,   157,   158,   159,   164,    99,   100,
      65,   104,   107,   105,   114,    64,    57,   125,   164,    57,
      62,    65,    65,   136,   164,   141,   142,    65,    65,    65,
     148,   148,   146,    68,    68,    62,    65,    61,    61,   101,
      61,    62,    66,    65,   164,    65,   126,   127,    57,   119,
     116,    65,    68,   112,   116,   164,    61,   100,   161,    65,
     116,    65,    17,   121,    57,   116,    64,    16,    17,   122,
     164,   116,    64,    65,   164,   116,    65,   116
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
      

/* Line 1455 of yacc.c  */
#line 2006 "y.tab.c"
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
#line 507 "pJava.y"


