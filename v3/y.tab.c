
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 226 "y.tab.c"

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
#define YYLAST   581

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  146
/* YYNRULES -- Number of states.  */
#define YYNSTATES  273

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
       0,     0,     3,     5,     8,    11,    15,    17,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    42,    46,
      49,    51,    54,    57,    59,    64,    68,    70,    74,    76,
      80,    82,    85,    89,    91,    95,   100,   104,   106,   110,
     113,   115,   118,   122,   128,   133,   138,   142,   145,   147,
     151,   154,   156,   159,   163,   166,   168,   171,   173,   175,
     179,   181,   184,   186,   188,   190,   192,   194,   198,   203,
     207,   215,   221,   227,   233,   241,   249,   256,   259,   261,
     263,   266,   268,   270,   272,   276,   280,   283,   287,   290,
     294,   297,   302,   306,   308,   312,   315,   318,   321,   324,
     326,   329,   332,   335,   337,   339,   341,   343,   348,   350,
     355,   362,   369,   371,   375,   379,   383,   387,   391,   395,
     399,   401,   405,   409,   413,   417,   421,   425,   429,   433,
     437,   441,   445,   447,   449,   453,   455,   461,   465,   469,
     473,   477,   481,   485,   489,   493,   497
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      82,     0,    -1,    80,    -1,    80,    79,    -1,    69,    70,
      -1,    79,    69,    70,    -1,    81,    -1,     3,    -1,     7,
      -1,     5,    -1,    25,    -1,    18,    -1,    20,    -1,    14,
      -1,    12,    -1,    29,    -1,    27,    -1,    83,    71,    84,
      72,    -1,    23,     8,    52,    -1,     8,    52,    -1,    85,
      -1,    84,    85,    -1,    86,    73,    -1,    95,    -1,    23,
      26,    78,    87,    -1,    26,    78,    87,    -1,    88,    -1,
      87,    74,    88,    -1,    99,    -1,    99,    54,    89,    -1,
     121,    -1,    71,    72,    -1,    71,    92,    72,    -1,    91,
      -1,    91,    71,    72,    -1,    91,    71,    92,    72,    -1,
      21,    80,    93,    -1,    89,    -1,    92,    74,    89,    -1,
      92,    74,    -1,    94,    -1,    93,    94,    -1,    69,   119,
      70,    -1,    23,    26,    78,    96,   100,    -1,    26,    78,
      96,   100,    -1,    99,    65,    97,    66,    -1,    99,    65,
      66,    -1,    96,    41,    -1,    98,    -1,    97,    74,    98,
      -1,    78,    99,    -1,    52,    -1,    99,    41,    -1,    71,
     101,    72,    -1,    71,    72,    -1,   102,    -1,   101,   102,
      -1,   103,    -1,   104,    -1,    78,    87,    73,    -1,   105,
      -1,   121,    73,    -1,   106,    -1,   107,    -1,   112,    -1,
     100,    -1,    73,    -1,    52,    75,   102,    -1,     6,   122,
      75,   102,    -1,    10,    75,   102,    -1,    16,    65,   121,
      66,   104,    13,   104,    -1,    16,    65,   121,    66,   104,
      -1,    28,    65,   121,    66,   100,    -1,    30,    65,   121,
      66,   104,    -1,    11,   104,    30,    65,   121,    66,    73,
      -1,    15,    65,   108,   109,   110,    66,   104,    -1,    15,
      65,   108,   109,    66,   104,    -1,   111,    73,    -1,   103,
      -1,    73,    -1,   121,    73,    -1,    73,    -1,   111,    -1,
     121,    -1,   111,    74,   121,    -1,     4,    52,    73,    -1,
       4,    73,    -1,     9,    52,    73,    -1,     9,    73,    -1,
      24,   121,    73,    -1,    24,    73,    -1,    52,    65,   114,
      66,    -1,    52,    65,    66,    -1,   121,    -1,   114,    74,
     121,    -1,    31,   116,    -1,    32,   116,    -1,   116,    31,
      -1,   116,    32,    -1,   116,    -1,    68,    52,    -1,    68,
     113,    -1,    68,   117,    -1,    53,    -1,   113,    -1,    52,
      -1,   117,    -1,    52,    69,   119,    70,    -1,   115,    -1,
      65,    81,    66,   115,    -1,    65,    81,    66,    65,   123,
      66,    -1,    65,    81,    66,    65,   122,    66,    -1,   118,
      -1,   119,    61,   119,    -1,   119,    60,   119,    -1,   119,
      63,   119,    -1,   119,    62,   119,    -1,   119,    64,   119,
      -1,   119,    33,   119,    -1,   119,    34,   119,    -1,   119,
      -1,   119,    59,   120,    -1,   119,    58,   120,    -1,   119,
      36,   120,    -1,   119,    35,   120,    -1,   119,    37,   120,
      -1,   119,    38,   120,    -1,   119,    57,   120,    -1,   119,
      56,   120,    -1,   119,    55,   120,    -1,   119,    39,   120,
      -1,   119,    40,   120,    -1,   122,    -1,   123,    -1,    65,
     121,    66,    -1,   120,    -1,   120,    76,   121,    75,   121,
      -1,    52,    54,   121,    -1,    52,    54,    90,    -1,    52,
      42,   121,    -1,    52,    43,   121,    -1,    52,    44,   121,
      -1,    52,    45,   121,    -1,    52,    46,   121,    -1,    52,
      47,   121,    -1,    52,    48,   121,    -1,    52,    49,   121,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    54,    54,    55,    59,    60,    72,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    90,    94,    95,
      99,   100,   104,   105,   109,   110,   114,   115,   119,   120,
     124,   125,   126,   130,   131,   132,   136,   140,   141,   142,
     146,   147,   151,   157,   158,   162,   163,   164,   168,   169,
     173,   177,   178,   182,   183,   188,   189,   193,   194,   198,
     202,   203,   204,   205,   206,   207,   208,   212,   213,   214,
     218,   219,   220,   224,   225,   226,   227,   231,   232,   233,
     237,   238,   242,   246,   247,   251,   252,   253,   254,   255,
     256,   260,   261,   265,   266,   270,   271,   272,   273,   274,
     275,   277,   278,   283,   284,   285,   286,   290,   295,   296,
     297,   298,   302,   303,   304,   305,   306,   307,   308,   309,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   329,   330,   331,   336,   337,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350
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
  "'?'", "$accept", "TypeSpecifier", "TypeDimExprs", "TypeName",
  "PrimitiveType", "ProgramFile", "ClassHeader", "FieldDeclarations",
  "FieldDeclaration", "AttrDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableInitializer", "NewAllocationExpression",
  "ArrayAllocationExpression", "ArrayInitializers", "DimExprs", "DimExpr",
  "MethodDeclaration", "MethodDeclarator", "ParameterList", "Parameter",
  "DeclaratorName", "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "ForIncr", "Expressions", "JumpStatement", "MethodCall", "ArgumentList",
  "UnaryExpression", "BasicElement", "ArrayAccess", "CastExpression",
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
       0,    77,    78,    78,    79,    79,    80,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    89,    90,    90,    90,    91,    92,    92,    92,
      93,    93,    94,    95,    95,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   103,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     106,   106,   106,   107,   107,   107,   107,   108,   108,   108,
     109,   109,   110,   111,   111,   112,   112,   112,   112,   112,
     112,   113,   113,   114,   114,   115,   115,   115,   115,   115,
     115,   115,   115,   116,   116,   116,   116,   117,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   122,   122,   123,   123,   123,
     123,   123,   123,   123,   123,   123,   123
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     2,
       1,     2,     2,     1,     4,     3,     1,     3,     1,     3,
       1,     2,     3,     1,     3,     4,     3,     1,     3,     2,
       1,     2,     3,     5,     4,     4,     3,     2,     1,     3,
       2,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     1,     1,     1,     1,     1,     3,     4,     3,
       7,     5,     5,     5,     7,     7,     6,     2,     1,     1,
       2,     1,     1,     1,     3,     3,     2,     3,     2,     3,
       2,     4,     3,     1,     3,     2,     2,     2,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     4,     1,     4,
       6,     6,     1,     3,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     3,     1,     5,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    19,     0,     1,     0,    18,
       0,     0,     0,    20,     0,    23,     0,     7,     9,     8,
      14,    13,    11,    12,    10,    16,    15,     0,     2,     6,
      17,    21,    22,     0,    51,    25,    26,     0,    28,     0,
       3,    24,     0,     0,    47,     0,    44,    52,     0,     0,
       4,     0,    43,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,   103,     0,
       0,    54,    66,     0,    65,     0,    55,    57,    58,    60,
      62,    63,    64,   104,   108,    99,   106,   112,   120,   135,
       0,   132,   133,   105,     0,    29,    30,    46,     0,     0,
      48,     5,     0,    86,   105,     0,     0,     0,    88,     0,
       0,     0,     0,    90,     0,     0,     0,    95,    96,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   100,   101,   102,     0,    53,    56,    97,
      98,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      61,    31,    37,     0,    50,    45,     0,    85,     0,    87,
      69,     0,    79,    78,     0,     0,    83,     0,    89,     0,
       0,   139,   140,   141,   142,   143,   144,   145,   146,     0,
     138,    33,   137,    92,     0,    93,     0,    67,     0,   134,
      59,   118,   119,   124,   123,   125,   126,   130,   131,   129,
     128,   127,   122,   121,   114,   113,   116,   115,   117,     0,
      32,    39,    49,    68,     0,    81,     0,     0,    77,     0,
       0,     0,     0,     0,     0,    91,     0,   107,     0,   109,
       0,    38,     0,     0,     0,    82,    80,    84,    71,    72,
      73,     0,    36,    40,    34,     0,    94,     0,     0,   136,
       0,    76,     0,     0,     0,    41,    35,   111,   110,    74,
      75,    70,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    73,    40,    28,    29,     3,     4,    12,    13,    14,
      35,    36,   162,   190,   191,   163,   252,   253,    15,    37,
      99,   100,    38,    74,    75,    76,    77,    78,    79,    80,
      81,   174,   226,   244,   175,    82,    83,   194,    84,    85,
      86,    87,    88,    89,    90,    91,    92
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -123
static const yytype_int16 yypact[] =
{
       7,    16,    20,    54,     1,  -123,    36,  -123,    30,  -123,
      67,   541,   -12,  -123,    76,  -123,   541,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,  -123,  -123,    98,    58,  -123,
    -123,  -123,  -123,    98,  -123,    82,  -123,   -24,   -14,    84,
      88,    82,   -24,    98,  -123,    80,  -123,  -123,   385,   336,
    -123,    91,  -123,  -123,   -10,   -23,   410,   -11,    95,   314,
     107,   111,    71,   114,   116,   -31,   -31,   446,  -123,   366,
     117,  -123,  -123,    98,  -123,   202,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,  -123,     6,  -123,  -123,   470,   106,
     113,  -123,  -123,   493,   357,  -123,  -123,  -123,    98,   -48,
    -123,  -123,   123,  -123,     2,   541,   112,   124,  -123,   232,
     159,   284,   415,  -123,   125,   415,   415,  -123,  -123,   415,
     415,   415,   415,   415,   415,   415,   415,    94,    -7,   410,
     232,   133,   134,     2,  -123,  -123,    57,  -123,  -123,  -123,
    -123,   410,   410,   410,   410,   410,   410,   410,   410,   410,
     410,   410,   410,   410,   410,   410,   410,   410,   410,   415,
    -123,  -123,  -123,   -17,   160,  -123,   541,  -123,   232,  -123,
    -123,   137,  -123,  -123,    90,    61,  -123,   144,  -123,   149,
     153,  -123,  -123,  -123,  -123,  -123,  -123,  -123,  -123,   541,
    -123,   150,  -123,  -123,    40,  -123,   104,  -123,   417,  -123,
    -123,    56,    56,  -123,  -123,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123,  -123,   129,   129,  -123,  -123,  -123,   148,
    -123,   385,  -123,  -123,   415,  -123,   392,   151,  -123,   415,
     314,   154,   314,   171,   368,  -123,   415,  -123,   434,  -123,
     415,  -123,   162,   314,   179,   175,  -123,  -123,   238,  -123,
    -123,   410,   171,  -123,  -123,    25,  -123,   187,   192,  -123,
     193,  -123,   314,   314,   343,  -123,  -123,  -123,  -123,  -123,
    -123,  -123,  -123
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -123,    -6,  -123,    79,   -56,  -123,  -123,  -123,   253,  -123,
     -21,   226,   -44,  -123,  -123,    37,  -123,    24,  -123,   239,
    -123,   115,   -34,   -36,  -123,   -67,   166,   -59,  -123,  -123,
    -123,  -123,  -123,  -123,    52,  -123,   209,  -123,    85,    75,
     210,  -123,  -122,   428,   -46,   -53,    44
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     110,    46,    96,   106,    95,    27,    52,   196,   138,    54,
      33,    10,    41,   131,    11,     1,   114,    44,   165,   201,
     202,   104,    68,   132,    65,    66,   166,    47,     6,   102,
       2,    47,   214,   215,   216,   217,   218,   139,   140,    54,
      48,   107,   170,    98,    48,    93,    68,    45,    96,   131,
     103,    49,   136,    10,     7,   220,    11,   221,    69,   193,
      30,    70,   108,   197,   164,   176,   177,   128,     5,   179,
     180,   129,     8,   181,   182,   183,   184,   185,   186,   187,
     188,   192,   195,    17,    55,    18,    56,    19,     9,    57,
      58,    59,    20,    16,    21,    60,    61,   266,    22,   221,
      23,   223,    65,    66,    62,    24,   235,    25,    63,    26,
      64,    65,    66,   219,   236,   189,   154,   155,   156,   157,
     158,    65,    66,    93,    68,    65,    66,    39,   227,   264,
     200,    43,    67,    68,   228,   229,    69,   141,   142,    70,
     117,   118,    93,    68,   113,    69,    93,    68,    70,    32,
      34,    45,    71,    72,    50,    69,    43,    51,    70,    69,
      98,   101,    70,   225,   154,   155,   156,   157,   158,   133,
     109,   248,   111,   250,   237,    96,   112,   241,   242,   115,
     176,   116,   159,   247,   261,   257,   160,   168,    96,   171,
     256,   156,   157,   158,   259,   249,   167,   169,   178,   198,
     199,    47,   224,   270,   271,    17,    55,    18,    56,    19,
     230,    57,    58,    59,    20,   231,    21,    60,    61,   232,
      22,   234,    23,   240,   246,    45,    62,    24,   260,    25,
      63,    26,    64,    65,    66,    17,    55,    18,    56,    19,
     251,    57,    58,    59,    20,   262,    21,    60,    61,   229,
      22,   263,    23,   267,    67,    68,    62,    24,   268,    25,
      63,    26,    64,    65,    66,    31,   269,    69,   233,    53,
      70,   255,    42,    45,   137,    72,   265,   173,   245,   134,
     135,   222,   258,   239,    67,    68,     0,    17,     0,    18,
       0,    19,     0,     0,     0,     0,    20,    69,    21,     0,
      70,     0,    22,    45,    23,    72,     0,     0,     0,    24,
       0,    25,     0,    26,     0,    65,    66,     0,    55,     0,
      56,     0,     0,    57,    58,    59,     0,     0,     0,    60,
      61,     0,     0,     0,     0,     0,    93,    68,    62,    17,
       0,    18,    63,    19,    64,    65,    66,     0,    20,    69,
      21,     0,    70,     0,    22,     0,    23,   172,     0,     0,
       0,    24,     0,    25,     0,    26,    67,    68,     0,    17,
       0,    18,     0,    19,     0,     0,   141,   142,    20,    69,
      21,     0,    70,     0,    22,    45,    23,    72,    65,    66,
       0,    24,     0,    25,     0,    26,     0,    65,    66,    65,
      66,     0,    97,   154,   155,   156,   157,   158,     0,    93,
      68,     0,     0,   272,     0,     0,    65,    66,    93,    68,
      93,    68,    69,    65,    66,    70,     0,     0,    94,   161,
       0,    69,     0,    69,    70,     0,    70,    93,    68,    94,
     254,    65,    66,     0,    93,    68,    65,    66,    65,    66,
      69,     0,     0,    70,     0,     0,    94,    69,   243,     0,
      70,     0,   104,    68,     0,    65,    66,    93,    68,   104,
      68,     0,     0,     0,     0,   105,     0,     0,    70,     0,
      69,     0,   238,    70,     0,    70,    93,    68,   119,   120,
     121,   122,   123,   124,   125,   126,     0,     0,     0,   105,
     127,     0,    70,   141,   142,   143,   144,   145,   146,   147,
     148,   128,     0,     0,     0,   129,     0,     0,     0,     0,
       0,   130,     0,     0,     0,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   119,   120,   121,   122,   123,
     124,   125,   126,     0,    17,     0,    18,   127,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,   128,    22,
       0,    23,   129,     0,     0,     0,    24,     0,    25,     0,
      26,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213
};

static const yytype_int16 yycheck[] =
{
      59,    37,    48,    56,    48,    11,    42,   129,    75,    43,
      16,    23,    33,    69,    26,     8,    62,    41,    66,   141,
     142,    52,    53,    69,    31,    32,    74,    41,     8,    52,
      23,    41,   154,   155,   156,   157,   158,    31,    32,    73,
      54,    52,   109,    49,    54,    52,    53,    71,    94,   105,
      73,    65,    73,    23,     0,    72,    26,    74,    65,    66,
      72,    68,    73,   130,    98,   111,   112,    65,    52,   115,
     116,    69,    71,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,     3,     4,     5,     6,     7,    52,     9,
      10,    11,    12,    26,    14,    15,    16,    72,    18,    74,
      20,   168,    31,    32,    24,    25,    66,    27,    28,    29,
      30,    31,    32,   159,    74,    21,    60,    61,    62,    63,
      64,    31,    32,    52,    53,    31,    32,    69,   174,   251,
      73,    74,    52,    53,    73,    74,    65,    33,    34,    68,
      65,    66,    52,    53,    73,    65,    52,    53,    68,    73,
      52,    71,    72,    73,    70,    65,    74,    69,    68,    65,
     166,    70,    68,    73,    60,    61,    62,    63,    64,    52,
      75,   230,    65,   232,    70,   221,    65,   221,   224,    65,
     226,    65,    76,   229,   243,   238,    73,    75,   234,    30,
     236,    62,    63,    64,   240,   231,    73,    73,    73,    66,
      66,    41,    65,   262,   263,     3,     4,     5,     6,     7,
      66,     9,    10,    11,    12,    66,    14,    15,    16,    66,
      18,    71,    20,    75,    73,    71,    24,    25,    66,    27,
      28,    29,    30,    31,    32,     3,     4,     5,     6,     7,
      69,     9,    10,    11,    12,    66,    14,    15,    16,    74,
      18,    13,    20,    66,    52,    53,    24,    25,    66,    27,
      28,    29,    30,    31,    32,    12,    73,    65,   189,    43,
      68,   234,    33,    71,    72,    73,   252,   111,   226,    70,
      70,   166,   238,   198,    52,    53,    -1,     3,    -1,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    65,    14,    -1,
      68,    -1,    18,    71,    20,    73,    -1,    -1,    -1,    25,
      -1,    27,    -1,    29,    -1,    31,    32,    -1,     4,    -1,
       6,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    52,    53,    24,     3,
      -1,     5,    28,     7,    30,    31,    32,    -1,    12,    65,
      14,    -1,    68,    -1,    18,    -1,    20,    73,    -1,    -1,
      -1,    25,    -1,    27,    -1,    29,    52,    53,    -1,     3,
      -1,     5,    -1,     7,    -1,    -1,    33,    34,    12,    65,
      14,    -1,    68,    -1,    18,    71,    20,    73,    31,    32,
      -1,    25,    -1,    27,    -1,    29,    -1,    31,    32,    31,
      32,    -1,    66,    60,    61,    62,    63,    64,    -1,    52,
      53,    -1,    -1,    70,    -1,    -1,    31,    32,    52,    53,
      52,    53,    65,    31,    32,    68,    -1,    -1,    71,    72,
      -1,    65,    -1,    65,    68,    -1,    68,    52,    53,    71,
      72,    31,    32,    -1,    52,    53,    31,    32,    31,    32,
      65,    -1,    -1,    68,    -1,    -1,    71,    65,    66,    -1,
      68,    -1,    52,    53,    -1,    31,    32,    52,    53,    52,
      53,    -1,    -1,    -1,    -1,    65,    -1,    -1,    68,    -1,
      65,    -1,    65,    68,    -1,    68,    52,    53,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    -1,    -1,    65,
      54,    -1,    68,    33,    34,    35,    36,    37,    38,    39,
      40,    65,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,     3,    -1,     5,    54,     7,    -1,
      -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    65,    18,
      -1,    20,    69,    -1,    -1,    -1,    25,    -1,    27,    -1,
      29,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    23,    82,    83,    52,     8,     0,    71,    52,
      23,    26,    84,    85,    86,    95,    26,     3,     5,     7,
      12,    14,    18,    20,    25,    27,    29,    78,    80,    81,
      72,    85,    73,    78,    52,    87,    88,    96,    99,    69,
      79,    87,    96,    74,    41,    71,   100,    41,    54,    65,
      70,    69,   100,    88,    99,     4,     6,     9,    10,    11,
      15,    16,    24,    28,    30,    31,    32,    52,    53,    65,
      68,    72,    73,    78,   100,   101,   102,   103,   104,   105,
     106,   107,   112,   113,   115,   116,   117,   118,   119,   120,
     121,   122,   123,    52,    71,    89,   121,    66,    78,    97,
      98,    70,    52,    73,    52,    65,   122,    52,    73,    75,
     104,    65,    65,    73,   121,    65,    65,   116,   116,    42,
      43,    44,    45,    46,    47,    48,    49,    54,    65,    69,
      75,    81,   121,    52,   113,   117,    87,    72,   102,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    76,
      73,    72,    89,    92,    99,    66,    74,    73,    75,    73,
     102,    30,    73,   103,   108,   111,   121,   121,    73,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,    21,
      90,    91,   121,    66,   114,   121,   119,   102,    66,    66,
      73,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   119,   119,   119,   119,   119,   121,
      72,    74,    98,   102,    65,    73,   109,   121,    73,    74,
      66,    66,    66,    80,    71,    66,    74,    70,    65,   115,
      75,    89,   121,    66,   110,   111,    73,   121,   104,   100,
     104,    69,    93,    94,    72,    92,   121,   122,   123,   121,
      66,   104,    66,    13,   119,    94,    72,    66,    66,    73,
     104,   104,    70
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
        case 70:

/* Line 1455 of yacc.c  */
#line 218 "pJava.y"
    {printf("ELSE IF\n");}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 219 "pJava.y"
    {printf("IF\n");}
    break;



/* Line 1455 of yacc.c  */
#line 1762 "y.tab.c"
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
#line 354 "pJava.y"


int main()
{
yyparse();
return 0;
}

