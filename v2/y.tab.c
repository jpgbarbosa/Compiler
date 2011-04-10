
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

#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


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
     ABSTRACT = 258,
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     BYVALUE = 262,
     CASE = 263,
     CAST = 264,
     CATCH = 265,
     CHAR = 266,
     CLASS = 267,
     CONST = 268,
     CONTINUE = 269,
     DEFAULT = 270,
     DO = 271,
     DOUBLE = 272,
     ELSE = 273,
     EXTENDS = 274,
     FINAL = 275,
     FINALLY = 276,
     FLOAT = 277,
     FOR = 278,
     FUTURE = 279,
     GENERIC = 280,
     GOTO = 281,
     IF = 282,
     IMPLEMENTS = 283,
     IMPORT = 284,
     INNER = 285,
     INSTANCEOF = 286,
     INT = 287,
     INTERFACE = 288,
     LONG = 289,
     NATIVE = 290,
     NEW = 291,
     JNULL = 292,
     OPERATOR = 293,
     OUTER = 294,
     PACKAGE = 295,
     PRIVATE = 296,
     PROTECTED = 297,
     PUBLIC = 298,
     REST = 299,
     RETURN = 300,
     SHORT = 301,
     STATIC = 302,
     SUPER = 303,
     SWITCH = 304,
     SYNCHRONIZED = 305,
     THIS = 306,
     THROW = 307,
     THROWS = 308,
     TRANSIENT = 309,
     TRY = 310,
     VAR = 311,
     VOID = 312,
     VOLATILE = 313,
     WHILE = 314,
     OP_INC = 315,
     OP_DEC = 316,
     OP_SHL = 317,
     OP_SHR = 318,
     OP_SHRR = 319,
     OP_GE = 320,
     OP_LE = 321,
     OP_EQ = 322,
     OP_NE = 323,
     OP_LAND = 324,
     OP_LOR = 325,
     OP_DIM = 326,
     ASS_MUL = 327,
     ASS_DIV = 328,
     ASS_MOD = 329,
     ASS_ADD = 330,
     ASS_SUB = 331,
     ASS_SHL = 332,
     ASS_SHR = 333,
     ASS_SHRR = 334,
     ASS_AND = 335,
     ASS_XOR = 336,
     ASS_OR = 337,
     IDENTIFIER = 338,
     LITERAL = 339,
     BOOLLIT = 340
   };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define BOOLEAN 259
#define BREAK 260
#define BYTE 261
#define BYVALUE 262
#define CASE 263
#define CAST 264
#define CATCH 265
#define CHAR 266
#define CLASS 267
#define CONST 268
#define CONTINUE 269
#define DEFAULT 270
#define DO 271
#define DOUBLE 272
#define ELSE 273
#define EXTENDS 274
#define FINAL 275
#define FINALLY 276
#define FLOAT 277
#define FOR 278
#define FUTURE 279
#define GENERIC 280
#define GOTO 281
#define IF 282
#define IMPLEMENTS 283
#define IMPORT 284
#define INNER 285
#define INSTANCEOF 286
#define INT 287
#define INTERFACE 288
#define LONG 289
#define NATIVE 290
#define NEW 291
#define JNULL 292
#define OPERATOR 293
#define OUTER 294
#define PACKAGE 295
#define PRIVATE 296
#define PROTECTED 297
#define PUBLIC 298
#define REST 299
#define RETURN 300
#define SHORT 301
#define STATIC 302
#define SUPER 303
#define SWITCH 304
#define SYNCHRONIZED 305
#define THIS 306
#define THROW 307
#define THROWS 308
#define TRANSIENT 309
#define TRY 310
#define VAR 311
#define VOID 312
#define VOLATILE 313
#define WHILE 314
#define OP_INC 315
#define OP_DEC 316
#define OP_SHL 317
#define OP_SHR 318
#define OP_SHRR 319
#define OP_GE 320
#define OP_LE 321
#define OP_EQ 322
#define OP_NE 323
#define OP_LAND 324
#define OP_LOR 325
#define OP_DIM 326
#define ASS_MUL 327
#define ASS_DIV 328
#define ASS_MOD 329
#define ASS_ADD 330
#define ASS_SUB 331
#define ASS_SHL 332
#define ASS_SHR 333
#define ASS_SHRR 334
#define ASS_AND 335
#define ASS_XOR 336
#define ASS_OR 337
#define IDENTIFIER 338
#define LITERAL 339
#define BOOLLIT 340




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 293 "y.tab.c"

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
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1015

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  108
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  185
/* YYNRULES -- Number of states.  */
#define YYNSTATES  288

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,     2,     2,     2,   100,   103,     2,
      92,    93,    98,    96,    90,    97,    86,    99,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   107,    89,
     101,    91,   102,   106,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,   105,    88,    94,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    39,
      41,    45,    50,    54,    58,    61,    63,    66,    68,    70,
      72,    74,    76,    78,    80,    83,    86,    88,    90,    92,
      94,    98,   101,   103,   107,   109,   113,   115,   120,   124,
     129,   133,   136,   138,   142,   145,   147,   150,   152,   154,
     157,   159,   163,   166,   168,   171,   173,   175,   179,   181,
     184,   186,   188,   190,   192,   194,   196,   199,   200,   207,
     213,   221,   229,   236,   239,   241,   243,   246,   248,   250,
     252,   256,   260,   263,   267,   270,   274,   277,   279,   283,
     287,   291,   293,   295,   297,   301,   303,   305,   307,   309,
     311,   315,   319,   324,   328,   330,   332,   334,   336,   338,
     342,   344,   347,   349,   351,   354,   357,   360,   363,   366,
     368,   370,   373,   375,   377,   379,   381,   383,   388,   393,
     398,   400,   403,   406,   408,   412,   416,   420,   422,   426,
     430,   432,   436,   440,   444,   448,   452,   454,   458,   462,
     464,   468,   470,   474,   476,   480,   482,   486,   488,   492,
     494,   500,   502,   506,   508,   510,   512,   514,   516,   518,
     520,   522,   524,   526,   528,   530
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     112,     0,    -1,   110,    -1,   110,   158,    -1,   111,    -1,
     115,    -1,     4,    -1,    11,    -1,     6,    -1,    46,    -1,
      32,    -1,    34,    -1,    22,    -1,    17,    -1,    57,    -1,
     113,    -1,   114,    -1,   116,    -1,   114,   116,    -1,    83,
      -1,   115,    86,    83,    -1,   117,    87,   120,    88,    -1,
     117,    87,    88,    -1,   118,    12,    83,    -1,    12,    83,
      -1,   119,    -1,   118,   119,    -1,     3,    -1,    20,    -1,
      43,    -1,    42,    -1,    41,    -1,    47,    -1,   121,    -1,
     120,   121,    -1,   122,    89,    -1,   126,    -1,   132,    -1,
     133,    -1,   116,    -1,   118,   109,   123,    -1,   109,   123,
      -1,   124,    -1,   123,    90,   124,    -1,   130,    -1,   130,
      91,   125,    -1,   180,    -1,   118,   109,   127,   131,    -1,
     109,   127,   131,    -1,   130,    92,   128,    93,    -1,   130,
      92,    93,    -1,   127,    71,    -1,   129,    -1,   128,    90,
     129,    -1,   109,   130,    -1,    83,    -1,   130,    71,    -1,
     134,    -1,    89,    -1,    47,   134,    -1,   134,    -1,    87,
     135,    88,    -1,    87,    88,    -1,   136,    -1,   135,   136,
      -1,   137,    -1,   138,    -1,   109,   123,    89,    -1,   139,
      -1,   140,    89,    -1,   142,    -1,   143,    -1,   148,    -1,
     134,    -1,    89,    -1,   180,    -1,    18,   138,    -1,    -1,
      27,    92,   180,    93,   138,   141,    -1,    59,    92,   180,
      93,   138,    -1,    16,   138,    59,    92,   180,    93,    89,
      -1,    23,    92,   144,   145,   146,    93,   138,    -1,    23,
      92,   144,   145,    93,   138,    -1,   147,    89,    -1,   137,
      -1,    89,    -1,   180,    89,    -1,    89,    -1,   147,    -1,
     140,    -1,   147,    90,   140,    -1,     5,    83,    89,    -1,
       5,    89,    -1,    14,    83,    89,    -1,    14,    89,    -1,
      45,   180,    89,    -1,    45,    89,    -1,   115,    -1,   115,
      86,    51,    -1,   115,    86,    12,    -1,   111,    86,    12,
      -1,   150,    -1,   156,    -1,   151,    -1,    92,   180,    93,
      -1,   152,    -1,    84,    -1,    85,    -1,   153,    -1,   154,
      -1,   150,    86,    83,    -1,   160,    86,    83,    -1,   155,
      92,   157,    93,    -1,   155,    92,    93,    -1,   152,    -1,
     156,    -1,   115,    -1,    51,    -1,   180,    -1,   157,    90,
     180,    -1,    71,    -1,   158,    71,    -1,   149,    -1,   160,
      -1,   159,    60,    -1,   159,    61,    -1,    60,   161,    -1,
      61,   161,    -1,   164,   165,    -1,   162,    -1,   159,    -1,
     163,   161,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,   161,    -1,    92,   166,    93,   165,    -1,    92,   167,
      93,   165,    -1,    92,   180,    93,   162,    -1,   111,    -1,
     111,   158,    -1,   115,   158,    -1,   165,    -1,   168,    98,
     165,    -1,   168,    99,   165,    -1,   168,   100,   165,    -1,
     168,    -1,   169,    96,   168,    -1,   169,    97,   168,    -1,
     169,    -1,   170,   101,   169,    -1,   170,   102,   169,    -1,
     170,    66,   169,    -1,   170,    65,   169,    -1,   170,    31,
     109,    -1,   170,    -1,   171,    67,   170,    -1,   171,    68,
     170,    -1,   171,    -1,   172,   103,   171,    -1,   172,    -1,
     173,   104,   172,    -1,   173,    -1,   174,   105,   173,    -1,
     174,    -1,   175,    69,   174,    -1,   175,    -1,   176,    70,
     175,    -1,   176,    -1,   176,   106,   180,   107,   177,    -1,
     177,    -1,   161,   179,   178,    -1,    91,    -1,    72,    -1,
      73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
     178,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    42,    46,    47,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    63,    67,    71,    72,    76,
      77,    81,    82,    86,    87,    91,    92,    96,    97,    98,
      99,   100,   101,   107,   108,   112,   113,   114,   115,   116,
     120,   121,   125,   126,   130,   131,   135,   141,   142,   146,
     147,   148,   152,   153,   157,   161,   162,   166,   167,   171,
     175,   179,   180,   184,   185,   189,   190,   194,   200,   201,
     202,   203,   204,   205,   209,   213,   217,   218,   222,   226,
     227,   228,   229,   233,   234,   235,   239,   240,   244,   248,
     249,   253,   254,   255,   256,   257,   258,   262,   263,   264,
     265,   266,   270,   271,   275,   276,   280,   281,   282,   283,
     287,   288,   292,   293,   297,   298,   299,   303,   307,   308,
     312,   313,   317,   318,   322,   323,   327,   328,   329,   330,
     334,   335,   339,   340,   344,   345,   349,   350,   351,   352,
     356,   357,   361,   365,   366,   367,   368,   372,   373,   374,
     378,   379,   380,   381,   382,   383,   387,   388,   389,   393,
     394,   398,   399,   403,   404,   408,   409,   413,   414,   418,
     419,   423,   424,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   443
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "BREAK", "BYTE",
  "BYVALUE", "CASE", "CAST", "CATCH", "CHAR", "CLASS", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS", "FINAL", "FINALLY",
  "FLOAT", "FOR", "FUTURE", "GENERIC", "GOTO", "IF", "IMPLEMENTS",
  "IMPORT", "INNER", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE",
  "NEW", "JNULL", "OPERATOR", "OUTER", "PACKAGE", "PRIVATE", "PROTECTED",
  "PUBLIC", "REST", "RETURN", "SHORT", "STATIC", "SUPER", "SWITCH",
  "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", "VAR",
  "VOID", "VOLATILE", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_SHRR", "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "OP_LAND", "OP_LOR",
  "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_MOD", "ASS_ADD", "ASS_SUB",
  "ASS_SHL", "ASS_SHR", "ASS_SHRR", "ASS_AND", "ASS_XOR", "ASS_OR",
  "IDENTIFIER", "LITERAL", "BOOLLIT", "'.'", "'{'", "'}'", "';'", "','",
  "'='", "'('", "')'", "'~'", "'!'", "'+'", "'-'", "'*'", "'/'", "'%'",
  "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "':'", "$accept",
  "TypeSpecifier", "TypeName", "PrimitiveType", "CompilationUnit",
  "ProgramFile", "TypeDeclarations", "QualifiedName", "TypeDeclaration",
  "ClassHeader", "Modifiers", "Modifier", "FieldDeclarations",
  "FieldDeclaration", "FieldVariableDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableInitializer", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "MethodBody", "StaticInitializer", "NonStaticInitializer", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "EmptyStatement",
  "ExpressionStatement", "ElseStatement", "SelectionStatement",
  "IterationStatement", "ForInit", "ForExpr", "ForIncr",
  "ExpressionStatements", "JumpStatement", "PrimaryExpression",
  "NotJustName", "ComplexPrimary", "ComplexPrimaryNoParenthesis",
  "FieldAccess", "MethodCall", "MethodAccess", "SpecialName",
  "ArgumentList", "Dims", "PostfixExpression", "RealPostfixExpression",
  "UnaryExpression", "LogicalUnaryExpression", "LogicalUnaryOperator",
  "ArithmeticUnaryOperator", "CastExpression", "PrimitiveTypeExpression",
  "ClassTypeExpression", "MultiplicativeExpression", "AdditiveExpression",
  "RelationalExpression", "EqualityExpression", "AndExpression",
  "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "AssignmentOperator",
  "Expression", 0
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
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,    46,   123,   125,    59,
      44,    61,    40,    41,   126,    33,    43,    45,    42,    47,
      37,    60,    62,    38,    94,   124,    63,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   108,   109,   109,   110,   110,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   112,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   119,   119,   120,   120,   121,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   126,   126,   127,
     127,   127,   128,   128,   129,   130,   130,   131,   131,   132,
     133,   134,   134,   135,   135,   136,   136,   137,   138,   138,
     138,   138,   138,   138,   139,   140,   141,   141,   142,   143,
     143,   143,   143,   144,   144,   144,   145,   145,   146,   147,
     147,   148,   148,   148,   148,   148,   148,   149,   149,   149,
     149,   149,   150,   150,   151,   151,   152,   152,   152,   152,
     153,   153,   154,   154,   155,   155,   155,   156,   157,   157,
     158,   158,   159,   159,   160,   160,   161,   161,   161,   161,
     162,   162,   163,   163,   164,   164,   165,   165,   165,   165,
     166,   166,   167,   168,   168,   168,   168,   169,   169,   169,
     170,   170,   170,   170,   170,   170,   171,   171,   171,   172,
     172,   173,   173,   174,   174,   175,   175,   176,   176,   177,
     177,   178,   178,   179,   179,   179,   179,   179,   179,   179,
     179,   179,   179,   179,   179,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     4,     3,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       3,     2,     1,     3,     1,     3,     1,     4,     3,     4,
       3,     2,     1,     3,     2,     1,     2,     1,     1,     2,
       1,     3,     2,     1,     2,     1,     1,     3,     1,     2,
       1,     1,     1,     1,     1,     1,     2,     0,     6,     5,
       7,     7,     6,     2,     1,     1,     2,     1,     1,     1,
       3,     3,     2,     3,     2,     3,     2,     1,     3,     3,
       3,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       3,     3,     4,     3,     1,     1,     1,     1,     1,     3,
       1,     2,     1,     1,     2,     2,     2,     2,     2,     1,
       1,     2,     1,     1,     1,     1,     1,     4,     4,     4,
       1,     2,     2,     1,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    27,     0,    28,    31,    30,    29,    32,     0,    15,
      16,    17,     0,     0,    25,    24,     1,    18,     0,     0,
      26,     6,     8,     7,    13,    12,    10,    11,     9,    32,
      14,    19,     0,    22,     0,     2,     4,     5,    39,     0,
       0,    33,     0,    36,    37,    38,    60,    23,    59,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,   106,
     107,    62,    74,     0,   132,   133,   134,   135,     0,     4,
      97,    73,     0,    63,    65,    66,    68,     0,    70,    71,
      72,   122,   101,   103,   105,   108,   109,     0,   102,   130,
     123,   136,   129,     0,     0,   143,   147,   150,   156,   159,
     161,   163,   165,   167,   169,   171,   185,    75,    55,    41,
      42,     0,    44,   120,     3,     0,     0,    21,    34,    35,
       0,    92,     0,    94,     0,    97,     0,     0,     0,    96,
       0,     0,     0,   126,   127,   140,    97,     0,     0,     0,
       0,    44,     0,     0,    61,    64,    69,     0,     0,   124,
     125,     0,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   173,     0,   131,   136,   128,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    58,    48,
      57,    56,     0,     0,   121,    20,    40,     0,    91,    93,
       0,    85,    84,    89,     0,     0,     0,    95,     0,     0,
     141,   142,     0,     0,   104,    67,   100,    99,    98,   110,
     113,     0,   118,   111,   172,   144,   145,   146,   148,   149,
     155,   154,   153,   151,   152,   157,   158,   160,   162,   164,
     166,   168,     0,    43,    45,    46,    50,     0,     0,    52,
      47,     0,    87,     0,     0,    83,     0,     0,     0,   104,
     137,   138,   139,     0,   112,     0,    54,     0,    49,     0,
       0,     0,    88,    86,    90,    77,    79,   119,   170,    53,
       0,    82,     0,     0,    78,    80,    81,    76
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    68,    35,   124,     8,     9,    10,   125,    38,    12,
      13,    14,    40,    41,    42,   109,   110,   244,    43,   111,
     248,   249,   112,   189,    44,    45,    71,    72,    73,    74,
      75,    76,    77,   284,    78,    79,   204,   253,   271,   205,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   221,
     114,    89,    90,    91,    92,    93,    94,    95,   137,   138,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   164,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -119
static const yytype_int16 yypact[] =
{
      45,  -119,   -63,  -119,  -119,  -119,  -119,  -119,    32,  -119,
      45,  -119,   -48,    48,  -119,  -119,  -119,  -119,   832,   -30,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,   -44,
    -119,  -119,   212,  -119,     0,   -36,  -119,    19,  -119,   932,
     884,  -119,    26,  -119,  -119,  -119,  -119,  -119,  -119,   -70,
      23,   330,    16,    64,   389,  -119,    66,   704,   704,  -119,
    -119,  -119,  -119,   763,  -119,  -119,  -119,  -119,     0,    51,
      -7,  -119,   271,  -119,  -119,  -119,  -119,    65,  -119,  -119,
    -119,  -119,    92,  -119,    88,  -119,  -119,    93,   101,    11,
     109,    90,  -119,   704,   763,  -119,    84,    43,    -3,    76,
      73,    94,    91,   128,   -40,  -119,  -119,  -119,  -119,   111,
    -119,     7,    22,  -119,   131,   116,     0,  -119,  -119,  -119,
     114,  -119,   115,  -119,    51,   -17,   146,   448,   763,  -119,
     117,   763,   763,  -119,  -119,   -31,    50,   118,   121,   122,
      62,   -54,   197,    -1,  -119,  -119,  -119,   127,   507,  -119,
    -119,   136,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
    -119,  -119,  -119,  -119,   763,  -119,  -119,  -119,   763,   763,
     763,   763,   763,    27,   763,   763,   763,   763,   763,   763,
     763,   763,   763,   763,   763,   763,     0,  -119,  -119,  -119,
    -119,  -119,   763,   736,  -119,  -119,   111,     7,  -119,  -119,
     129,  -119,  -119,  -119,   576,    98,   132,  -119,   134,   137,
     131,   131,   763,   763,   799,  -119,  -119,  -119,  -119,  -119,
    -119,   -23,  -119,  -119,  -119,  -119,  -119,  -119,    84,    84,
    -119,    43,    43,    43,    43,    -3,    -3,    76,    73,    94,
      91,   128,   124,  -119,  -119,  -119,  -119,     0,    14,  -119,
    -119,   763,  -119,   635,   133,  -119,   763,   330,   330,  -119,
    -119,  -119,  -119,   763,  -119,   763,   153,    27,  -119,   143,
     330,   144,   148,  -119,  -119,   222,  -119,  -119,  -119,  -119,
     152,  -119,   330,   330,  -119,  -119,  -119,  -119
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -119,   -14,  -119,   -18,  -119,  -119,  -119,   -16,    36,  -119,
      34,    -5,  -119,   202,  -119,   -58,    57,  -119,  -119,   138,
    -119,   -22,   -53,    53,  -119,  -119,   -11,  -119,   175,   125,
     -50,  -119,  -118,  -119,  -119,  -119,  -119,  -119,  -119,     2,
    -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,  -119,
      38,  -119,  -119,   -52,    42,  -119,  -119,   -67,  -119,  -119,
      18,   -27,    13,    68,    78,    79,    77,    80,  -119,     1,
     103,  -119,   -51
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -117
static const yytype_int16 yytable[] =
{
      36,   126,    37,   130,    34,   133,   134,    46,    20,   203,
     140,   217,   139,   120,    69,   141,    70,   191,    48,   121,
      15,    36,    36,    37,    37,   116,    34,   167,   173,    46,
     184,    21,    16,    22,    20,   113,    11,   192,    23,    18,
     113,   165,   166,    32,    24,   135,    17,   136,     1,    25,
     218,     1,    39,    47,    69,   142,    70,     2,   196,    26,
      19,    27,   174,   175,    -5,     3,   185,   263,     3,   143,
     264,   149,   150,    28,    39,  -116,    -5,   206,   187,   143,
     208,   209,   195,   108,    30,  -116,     4,     5,     6,     4,
       5,     6,     7,   191,    32,     7,   188,   222,   176,   177,
     190,   225,   226,   227,   267,   115,   122,   268,   127,    69,
      31,    70,   123,   192,   193,   119,   166,   166,   166,   166,
     166,   113,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   141,   242,   203,   143,   142,   274,   171,
     172,   245,  -116,   178,   179,   260,   261,   231,   232,   233,
     234,   215,   186,   254,   146,    36,   128,    37,   131,   230,
     166,   166,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   210,   211,    36,   180,    37,   147,   247,
    -114,   163,   168,   169,   170,   148,   190,   255,   256,   228,
     229,   235,   236,  -115,   266,   151,   182,   183,   181,   195,
     269,   186,   194,   198,   199,   200,   207,   275,   276,   216,
     219,   212,   277,   166,   213,   214,    21,    49,    22,   223,
     281,   251,   273,    23,   191,   257,    50,   258,    51,    24,
     259,   265,   286,   287,    25,    52,   280,   282,   256,    53,
     283,   285,   118,   243,    26,   279,    27,   145,   237,    36,
     250,    37,   202,   247,   197,   272,   262,    54,    28,   238,
     240,   239,     0,    55,   241,     0,   278,   224,     0,    30,
       0,    56,    57,    58,     0,    21,    49,    22,     0,     0,
       0,     0,    23,     0,     0,    50,     0,    51,    24,     0,
       0,     0,     0,    25,    52,    31,    59,    60,    53,    32,
      61,    62,     0,    26,    63,    27,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    54,    28,     0,     0,
       0,     0,    55,     0,     0,     0,     0,     0,    30,     0,
      56,    57,    58,     0,    21,    49,    22,     0,     0,     0,
       0,    23,     0,     0,    50,     0,    51,    24,     0,     0,
       0,     0,    25,    52,    31,    59,    60,    53,    32,   144,
      62,     0,    26,    63,    27,    64,    65,    66,    67,     0,
       0,     0,     0,     0,     0,    54,    28,     0,     0,     0,
       0,    55,     0,     0,     0,     0,     0,    30,     0,    56,
      57,    58,     0,    21,     0,    22,     0,     0,     0,     0,
      23,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,    25,     0,    31,    59,    60,     0,    32,     0,    62,
       0,    26,    63,    27,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      55,     0,     0,     0,     0,     0,    30,     0,     0,    57,
      58,     0,    21,     0,    22,     0,     0,     0,     0,    23,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
      25,     0,    31,    59,    60,     0,     0,     0,   129,     0,
      26,    63,    27,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,    55,
       0,     0,     0,     0,     0,    30,     0,     0,    57,    58,
       0,    21,     0,    22,     0,     0,     0,     0,    23,     0,
       0,     0,     0,     0,    24,     0,     0,     0,     0,    25,
       0,    31,    59,    60,     0,     0,     0,   201,     0,    26,
      63,    27,    64,    65,    66,    67,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,    55,     0,
       0,     0,     0,     0,    30,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      21,     0,    22,     0,     0,     0,     0,    23,     0,     0,
      31,    59,    60,    24,     0,     0,     0,     0,    25,    63,
     220,    64,    65,    66,    67,     0,     0,     0,    26,     0,
      27,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,    55,     0,     0,
       0,     0,     0,    30,     0,     0,    57,    58,     0,    21,
       0,    22,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,    25,     0,    31,
      59,    60,     0,     0,     0,   252,     0,    26,    63,    27,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,    30,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
      22,     0,     0,     0,     0,    23,     0,     0,    31,    59,
      60,    24,     0,     0,     0,     0,    25,    63,   270,    64,
      65,    66,    67,     0,     0,     0,    26,     0,    27,     0,
      21,     0,    22,     0,     0,     0,     0,    23,     0,     0,
      28,     0,     0,    24,     0,    55,     0,     0,    25,     0,
       0,    30,     0,     0,    57,    58,     0,    21,    26,    22,
      27,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      24,     0,    28,     0,     0,    25,     0,    31,    59,    60,
       0,     0,     0,    30,     0,    26,   132,    27,    64,    65,
      66,    67,     0,    21,     0,    22,     0,     0,     0,    28,
      23,     0,     0,     0,    55,     0,    24,     0,     0,    31,
      30,    25,     0,    57,    58,     0,     0,     0,     0,   246,
       0,    26,     0,    27,     0,     1,    21,     0,    22,     0,
       0,     0,     0,    23,     2,    28,    31,    59,    60,    24,
      55,     0,     3,     0,    25,    63,    30,    64,    65,    66,
      67,     0,     0,     0,    26,     0,    27,     0,     0,     0,
       0,     0,     0,     4,     5,     6,     0,     0,    28,    29,
       0,     0,    31,    59,    60,     0,     0,     1,    21,    30,
      22,   132,     0,    64,    65,    23,     2,     0,     0,     0,
       0,    24,     0,     0,     3,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    31,    26,     0,    27,    32,
      33,     0,     0,     0,     0,     4,     5,     6,     0,     0,
      28,    29,     0,     0,     0,     1,    21,     0,    22,     0,
       0,    30,     0,    23,    19,     0,     0,     0,     0,    24,
       0,     0,     3,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    27,    31,     0,     0,
       0,    32,   117,     4,     5,     6,     0,     0,    28,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    31
};

static const yytype_int16 yycheck[] =
{
      18,    51,    18,    54,    18,    57,    58,    18,    13,   127,
      68,    12,    63,    83,    32,    68,    32,    71,    29,    89,
      83,    39,    40,    39,    40,    39,    40,    94,    31,    40,
      70,     4,     0,     6,    39,    71,     0,    91,    11,    87,
      71,    93,    94,    87,    17,    63,    10,    63,     3,    22,
      51,     3,    18,    83,    72,    86,    72,    12,   116,    32,
      12,    34,    65,    66,    71,    20,   106,    90,    20,    86,
      93,    60,    61,    46,    40,    92,    83,   128,    71,    86,
     131,   132,    83,    83,    57,    92,    41,    42,    43,    41,
      42,    43,    47,    71,    87,    47,    89,   148,   101,   102,
     111,   168,   169,   170,    90,    86,    83,    93,    92,   127,
      83,   127,    89,    91,    92,    89,   168,   169,   170,   171,
     172,    71,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   186,   185,   253,    86,    86,   256,    96,
      97,   192,    92,    67,    68,   212,   213,   174,   175,   176,
     177,    89,    90,   204,    89,   173,    92,   173,    92,   173,
     212,   213,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,   135,   136,   193,   103,   193,    86,   193,
      92,    91,    98,    99,   100,    92,   197,    89,    90,   171,
     172,   178,   179,    92,   247,    86,   105,    69,   104,    83,
     251,    90,    71,    89,    89,    59,    89,   257,   258,    12,
      83,    93,   263,   265,    93,    93,     4,     5,     6,    83,
     270,    92,    89,    11,    71,    93,    14,    93,    16,    17,
      93,   107,   282,   283,    22,    23,    93,    93,    90,    27,
      18,    89,    40,   186,    32,   267,    34,    72,   180,   267,
     197,   267,   127,   267,   116,   253,   214,    45,    46,   181,
     183,   182,    -1,    51,   184,    -1,   265,   164,    -1,    57,
      -1,    59,    60,    61,    -1,     4,     5,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    14,    -1,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    83,    84,    85,    27,    87,
      88,    89,    -1,    32,    92,    34,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      59,    60,    61,    -1,     4,     5,     6,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    14,    -1,    16,    17,    -1,    -1,
      -1,    -1,    22,    23,    83,    84,    85,    27,    87,    88,
      89,    -1,    32,    92,    34,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    59,
      60,    61,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    83,    84,    85,    -1,    87,    -1,    89,
      -1,    32,    92,    34,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    -1,    83,    84,    85,    -1,    -1,    -1,    89,    -1,
      32,    92,    34,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    83,    84,    85,    -1,    -1,    -1,    89,    -1,    32,
      92,    34,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      83,    84,    85,    17,    -1,    -1,    -1,    -1,    22,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    32,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    83,
      84,    85,    -1,    -1,    -1,    89,    -1,    32,    92,    34,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
       6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    83,    84,
      85,    17,    -1,    -1,    -1,    -1,    22,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    32,    -1,    34,    -1,
       4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      46,    -1,    -1,    17,    -1,    51,    -1,    -1,    22,    -1,
      -1,    57,    -1,    -1,    60,    61,    -1,     4,    32,     6,
      34,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    46,    -1,    -1,    22,    -1,    83,    84,    85,
      -1,    -1,    -1,    57,    -1,    32,    92,    34,    94,    95,
      96,    97,    -1,     4,    -1,     6,    -1,    -1,    -1,    46,
      11,    -1,    -1,    -1,    51,    -1,    17,    -1,    -1,    83,
      57,    22,    -1,    60,    61,    -1,    -1,    -1,    -1,    93,
      -1,    32,    -1,    34,    -1,     3,     4,    -1,     6,    -1,
      -1,    -1,    -1,    11,    12,    46,    83,    84,    85,    17,
      51,    -1,    20,    -1,    22,    92,    57,    94,    95,    96,
      97,    -1,    -1,    -1,    32,    -1,    34,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    -1,    -1,    46,    47,
      -1,    -1,    83,    84,    85,    -1,    -1,     3,     4,    57,
       6,    92,    -1,    94,    95,    11,    12,    -1,    -1,    -1,
      -1,    17,    -1,    -1,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    32,    -1,    34,    87,
      88,    -1,    -1,    -1,    -1,    41,    42,    43,    -1,    -1,
      46,    47,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,
      -1,    57,    -1,    11,    12,    -1,    -1,    -1,    -1,    17,
      -1,    -1,    20,    -1,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    -1,    34,    83,    -1,    -1,
      -1,    87,    88,    41,    42,    43,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    12,    20,    41,    42,    43,    47,   112,   113,
     114,   116,   117,   118,   119,    83,     0,   116,    87,    12,
     119,     4,     6,    11,    17,    22,    32,    34,    46,    47,
      57,    83,    87,    88,   109,   110,   111,   115,   116,   118,
     120,   121,   122,   126,   132,   133,   134,    83,   134,     5,
      14,    16,    23,    27,    45,    51,    59,    60,    61,    84,
      85,    88,    89,    92,    94,    95,    96,    97,   109,   111,
     115,   134,   135,   136,   137,   138,   139,   140,   142,   143,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   159,
     160,   161,   162,   163,   164,   165,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   180,    83,   123,
     124,   127,   130,    71,   158,    86,   109,    88,   121,    89,
      83,    89,    83,    89,   111,   115,   138,    92,    92,    89,
     180,    92,    92,   161,   161,   111,   115,   166,   167,   180,
     123,   130,    86,    86,    88,   136,    89,    86,    92,    60,
      61,    86,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    91,   179,   161,   161,   165,    98,    99,
     100,    96,    97,    31,    65,    66,   101,   102,    67,    68,
     103,   104,   105,    69,    70,   106,    90,    71,    89,   131,
     134,    71,    91,    92,    71,    83,   123,   127,    89,    89,
      59,    89,   137,   140,   144,   147,   180,    89,   180,   180,
     158,   158,    93,    93,    93,    89,    12,    12,    51,    83,
      93,   157,   180,    83,   178,   165,   165,   165,   168,   168,
     109,   169,   169,   169,   169,   170,   170,   171,   172,   173,
     174,   175,   180,   124,   125,   180,    93,   109,   128,   129,
     131,    92,    89,   145,   180,    89,    90,    93,    93,    93,
     165,   165,   162,    90,    93,   107,   130,    90,    93,   180,
      93,   146,   147,    89,   140,   138,   138,   180,   177,   129,
      93,   138,    93,    18,   141,    89,   138,   138
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
        case 78:

/* Line 1455 of yacc.c  */
#line 222 "pJava.y"
    {printf("olaa\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1958 "y.tab.c"
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
#line 447 "pJava.y"


int main()
{
yyparse();
return 0;
}

