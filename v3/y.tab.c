
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
     SWITCH = 282,
     VOID = 283,
     WHILE = 284,
     OP_INC = 285,
     OP_DEC = 286,
     OP_SHL = 287,
     OP_SHR = 288,
     OP_GREATER_EQUAL = 289,
     OP_LESS_EQUAL = 290,
     OP_EQUAL = 291,
     OP_DIFFERENT = 292,
     OP_AND = 293,
     OP_OR = 294,
     OP_DIM = 295,
     ASS_MUL = 296,
     ASS_DIV = 297,
     ASS_ADD = 298,
     ASS_SUB = 299,
     ASS_XOR = 300,
     ASS_MOD = 301,
     ASS_SHL = 302,
     ASS_SHR = 303,
     ASS_AND = 304,
     ASS_OR = 305,
     IDENTIFIER = 306,
     LITERAL = 307
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
#define SWITCH 282
#define VOID 283
#define WHILE 284
#define OP_INC 285
#define OP_DEC 286
#define OP_SHL 287
#define OP_SHR 288
#define OP_GREATER_EQUAL 289
#define OP_LESS_EQUAL 290
#define OP_EQUAL 291
#define OP_DIFFERENT 292
#define OP_AND 293
#define OP_OR 294
#define OP_DIM 295
#define ASS_MUL 296
#define ASS_DIV 297
#define ASS_ADD 298
#define ASS_SUB 299
#define ASS_XOR 300
#define ASS_MOD 301
#define ASS_SHL 302
#define ASS_SHR 303
#define ASS_AND 304
#define ASS_OR 305
#define IDENTIFIER 306
#define LITERAL 307




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 224 "y.tab.c"

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1092

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNRULES -- Number of states.  */
#define YYNSTATES  322

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,     2,     2,    63,    56,     2,
      64,    65,    61,    60,    72,    59,    69,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    68,
      58,    53,    57,    76,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    74,     2,    75,    55,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    70,    54,    71,    66,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    35,    37,    39,
      42,    44,    47,    51,    57,    59,    63,    68,    72,    76,
      78,    81,    84,    86,    88,    90,    92,    97,   101,   103,
     107,   109,   113,   115,   118,   122,   124,   128,   131,   137,
     142,   147,   151,   154,   156,   160,   163,   165,   168,   170,
     172,   175,   177,   181,   184,   186,   189,   191,   193,   197,
     199,   202,   204,   206,   208,   210,   212,   216,   221,   225,
     231,   239,   245,   251,   259,   267,   274,   277,   279,   281,
     284,   286,   288,   290,   294,   298,   301,   305,   308,   312,
     315,   317,   321,   325,   329,   331,   333,   335,   339,   341,
     343,   345,   347,   352,   357,   362,   366,   368,   370,   372,
     376,   378,   382,   387,   392,   396,   398,   401,   405,   407,
     410,   412,   414,   417,   420,   423,   426,   429,   431,   433,
     436,   438,   440,   442,   447,   452,   457,   459,   462,   465,
     467,   471,   475,   479,   481,   485,   489,   491,   495,   499,
     501,   505,   509,   513,   517,   519,   523,   527,   529,   533,
     535,   539,   541,   545,   547,   551,   553,   557,   559,   565,
     567,   571,   573,   575,   577,   579,   581,   583,   585,   587,
     589,   591
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      81,     0,    -1,    79,    -1,    79,   129,    -1,    80,    -1,
      86,    -1,     3,    -1,     7,    -1,     5,    -1,    25,    -1,
      18,    -1,    20,    -1,    14,    -1,    12,    -1,    28,    -1,
      82,    -1,    84,    83,    -1,    83,    -1,    87,    -1,    83,
      87,    -1,    85,    -1,    84,    85,    -1,    17,    86,    68,
      -1,    17,    86,    69,    61,    68,    -1,    51,    -1,    86,
      69,    51,    -1,    88,    70,    89,    71,    -1,    88,    70,
      71,    -1,    23,     8,    51,    -1,    90,    -1,    89,    90,
      -1,    91,    68,    -1,    96,    -1,   102,    -1,   103,    -1,
      87,    -1,    23,    26,    78,    92,    -1,    26,    78,    92,
      -1,    93,    -1,    92,    72,    93,    -1,   100,    -1,   100,
      53,    94,    -1,   151,    -1,    70,    71,    -1,    70,    95,
      71,    -1,    94,    -1,    95,    72,    94,    -1,    95,    72,
      -1,    23,    26,    78,    97,   101,    -1,    26,    78,    97,
     101,    -1,   100,    64,    98,    65,    -1,   100,    64,    65,
      -1,    97,    40,    -1,    99,    -1,    98,    72,    99,    -1,
      78,   100,    -1,    51,    -1,   100,    40,    -1,   104,    -1,
      68,    -1,    26,   104,    -1,   104,    -1,    70,   105,    71,
      -1,    70,    71,    -1,   106,    -1,   105,   106,    -1,   107,
      -1,   108,    -1,    78,    92,    68,    -1,   109,    -1,   151,
      68,    -1,   110,    -1,   111,    -1,   116,    -1,   104,    -1,
      68,    -1,    51,    73,   106,    -1,     6,   152,    73,   106,
      -1,    10,    73,   106,    -1,    16,    64,   151,    65,   108,
      -1,    16,    64,   151,    65,   108,    13,   108,    -1,    27,
      64,   151,    65,   104,    -1,    29,    64,   151,    65,   108,
      -1,    11,   108,    29,    64,   151,    65,    68,    -1,    15,
      64,   112,   113,   114,    65,   108,    -1,    15,    64,   112,
     113,    65,   108,    -1,   115,    68,    -1,   107,    -1,    68,
      -1,   151,    68,    -1,    68,    -1,   115,    -1,   151,    -1,
     115,    72,   151,    -1,     4,    51,    68,    -1,     4,    68,
      -1,     9,    51,    68,    -1,     9,    68,    -1,    24,   151,
      68,    -1,    24,    68,    -1,    86,    -1,    86,    69,   125,
      -1,    86,    69,     8,    -1,    80,    69,     8,    -1,   118,
      -1,   125,    -1,   119,    -1,    64,   151,    65,    -1,   120,
      -1,    52,    -1,   121,    -1,   122,    -1,    86,    74,   151,
      75,    -1,   119,    74,   151,    75,    -1,   123,    64,   124,
      65,    -1,   123,    64,    65,    -1,   120,    -1,    86,    -1,
     151,    -1,   124,    72,   151,    -1,   126,    -1,   126,    70,
      71,    -1,   126,    70,    95,    71,    -1,    21,    79,   127,
     129,    -1,    21,    79,   127,    -1,   128,    -1,   127,   128,
      -1,    74,   151,    75,    -1,    40,    -1,   129,    40,    -1,
     117,    -1,   131,    -1,   130,    30,    -1,   130,    31,    -1,
      30,   132,    -1,    31,   132,    -1,   134,   135,    -1,   133,
      -1,   130,    -1,    67,   132,    -1,    60,    -1,    59,    -1,
     132,    -1,    64,   136,    65,   135,    -1,    64,   137,    65,
     135,    -1,    64,   151,    65,   133,    -1,    80,    -1,    80,
     129,    -1,    86,   129,    -1,   135,    -1,   138,    61,   135,
      -1,   138,    62,   135,    -1,   138,    63,   135,    -1,   138,
      -1,   139,    60,   138,    -1,   139,    59,   138,    -1,   139,
      -1,   140,    32,   139,    -1,   140,    33,   139,    -1,   140,
      -1,   141,    58,   140,    -1,   141,    57,   140,    -1,   141,
      35,   140,    -1,   141,    34,   140,    -1,   141,    -1,   142,
      36,   141,    -1,   142,    37,   141,    -1,   142,    -1,   143,
      56,   142,    -1,   143,    -1,   144,    55,   143,    -1,   144,
      -1,   145,    54,   144,    -1,   145,    -1,   146,    38,   145,
      -1,   146,    -1,   147,    39,   146,    -1,   147,    -1,   147,
      76,   151,    73,   148,    -1,   148,    -1,   132,   150,   149,
      -1,    53,    -1,    41,    -1,    42,    -1,    43,    -1,    44,
      -1,    45,    -1,    46,    -1,    47,    -1,    48,    -1,   149,
      -1,   148,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    53,    53,    54,    58,    59,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    75,    79,    80,    84,    85,
      89,    90,    94,    95,    99,   100,   104,   105,   109,   113,
     114,   118,   119,   120,   121,   122,   126,   127,   131,   132,
     136,   137,   141,   142,   143,   147,   148,   149,   153,   154,
     158,   159,   160,   164,   165,   169,   173,   174,   178,   179,
     183,   187,   191,   192,   196,   197,   201,   202,   206,   210,
     211,   212,   213,   214,   215,   216,   220,   221,   222,   226,
     227,   228,   232,   233,   234,   235,   239,   240,   241,   245,
     246,   250,   254,   255,   259,   260,   261,   262,   263,   264,
     268,   269,   270,   271,   272,   276,   277,   281,   282,   286,
     287,   288,   292,   293,   297,   298,   302,   303,   307,   308,
     312,   313,   314,   318,   319,   323,   324,   328,   332,   333,
     337,   338,   342,   343,   347,   348,   349,   350,   354,   355,
     359,   360,   364,   365,   366,   367,   371,   372,   376,   380,
     381,   382,   383,   387,   388,   389,   393,   394,   395,   399,
     400,   401,   402,   403,   407,   408,   409,   413,   414,   418,
     419,   423,   424,   428,   429,   433,   434,   438,   439,   443,
     444,   448,   449,   450,   451,   452,   453,   454,   455,   456,
     460,   464
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
  "PUBLIC", "RETURN", "SHORT", "STATIC", "SWITCH", "VOID", "WHILE",
  "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR", "OP_GREATER_EQUAL",
  "OP_LESS_EQUAL", "OP_EQUAL", "OP_DIFFERENT", "OP_AND", "OP_OR", "OP_DIM",
  "ASS_MUL", "ASS_DIV", "ASS_ADD", "ASS_SUB", "ASS_XOR", "ASS_MOD",
  "ASS_SHL", "ASS_SHR", "ASS_AND", "ASS_OR", "IDENTIFIER", "LITERAL",
  "'='", "'|'", "'^'", "'&'", "'>'", "'<'", "'-'", "'+'", "'*'", "'/'",
  "'%'", "'('", "')'", "'~'", "'!'", "';'", "'.'", "'{'", "'}'", "','",
  "':'", "'['", "']'", "'?'", "$accept", "TypeSpecifier", "TypeName",
  "PrimitiveType", "CompilationUnit", "ProgramFile", "TypeDeclarations",
  "ImportStatements", "ImportStatement", "QualifiedName",
  "TypeDeclaration", "ClassHeader", "FieldDeclarations",
  "FieldDeclaration", "FieldVariableDeclaration", "VariableDeclarators",
  "VariableDeclarator", "VariableInitializer", "ArrayInitializers",
  "MethodDeclaration", "MethodDeclarator", "ParameterList", "Parameter",
  "DeclaratorName", "MethodBody", "StaticInitializer",
  "NonStaticInitializer", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "LabeledStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "ForIncr", "Expressions", "JumpStatement", "PrimaryExpression",
  "NotJustName", "ComplexPrimary", "ComplexPrimaryNoParenthesis",
  "ArrayAccess", "MethodCall", "MethodAccess", "ArgumentList",
  "NewAllocationExpression", "ArrayAllocationExpression", "DimExprs",
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
     305,   306,   307,    61,   124,    94,    38,    62,    60,    45,
      43,    42,    47,    37,    40,    41,   126,    33,    59,    46,
     123,   125,    44,    58,    91,    93,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    89,
      89,    90,    90,    90,    90,    90,    91,    91,    92,    92,
      93,    93,    94,    94,    94,    95,    95,    95,    96,    96,
      97,    97,    97,    98,    98,    99,   100,   100,   101,   101,
     102,   103,   104,   104,   105,   105,   106,   106,   107,   108,
     108,   108,   108,   108,   108,   108,   109,   109,   109,   110,
     110,   110,   111,   111,   111,   111,   112,   112,   112,   113,
     113,   114,   115,   115,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   121,   121,   122,   122,   123,   123,   124,   124,
     125,   125,   125,   126,   126,   127,   127,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   132,   133,   133,
     134,   134,   135,   135,   135,   135,   136,   136,   137,   138,
     138,   138,   138,   139,   139,   139,   140,   140,   140,   141,
     141,   141,   141,   141,   142,   142,   142,   143,   143,   144,
     144,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   150,   150,   150,   150,   150,   150,   150,   150,   150,
     151,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     3,     5,     1,     3,     4,     3,     3,     1,
       2,     2,     1,     1,     1,     1,     4,     3,     1,     3,
       1,     3,     1,     2,     3,     1,     3,     2,     5,     4,
       4,     3,     2,     1,     3,     2,     1,     2,     1,     1,
       2,     1,     3,     2,     1,     2,     1,     1,     3,     1,
       2,     1,     1,     1,     1,     1,     3,     4,     3,     5,
       7,     5,     5,     7,     7,     6,     2,     1,     1,     2,
       1,     1,     1,     3,     3,     2,     3,     2,     3,     2,
       1,     3,     3,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     4,     4,     4,     3,     1,     1,     1,     3,
       1,     3,     4,     4,     3,     1,     2,     3,     1,     2,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     4,     4,     4,     1,     2,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,    15,    17,     0,    20,    18,     0,
      24,     0,     0,     1,    19,    16,    21,     0,    22,     0,
      28,     0,     0,     0,    27,    35,     0,    29,     0,    32,
      33,    34,    61,    25,     0,     0,     6,     8,     7,    13,
      12,    10,    11,     9,    14,     0,     2,     4,     5,    60,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    24,   109,   141,   140,     0,     0,    75,
      63,     0,     4,   100,    74,     0,    64,    66,    67,    69,
      71,    72,    73,   130,   104,   106,   108,   110,   111,     0,
     105,   120,   138,   131,   142,   137,     0,   149,   153,   156,
     159,   164,   167,   169,   171,   173,   175,   177,   179,   190,
       0,    26,    30,    31,    23,     0,    56,    37,    38,     0,
      40,   128,     3,     0,     0,    95,     0,   100,   142,   191,
       0,     0,    97,     0,     0,     0,     0,     0,    99,     0,
       0,     0,     0,   134,   135,     0,   146,   100,     0,     0,
       0,   139,     0,    40,     0,     0,     0,    62,    65,     0,
       0,     0,   132,   133,   182,   183,   184,   185,   186,   187,
     188,   189,   181,     0,   136,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    70,    36,     0,     0,    52,    59,
      49,    58,    57,     0,     0,   129,    94,     0,    96,    78,
       0,    88,    87,     0,     0,    92,     0,     0,   124,   125,
      98,     0,     0,     0,    76,   147,   148,     0,     0,   107,
      68,   103,   102,   101,     0,     0,   115,     0,   118,     0,
     121,    45,     0,    42,   180,   150,   151,   152,   155,   154,
     157,   158,   163,   162,   161,   160,   165,   166,   168,   170,
     172,   174,   176,     0,    48,    39,    41,    51,     0,     0,
      53,    77,     0,    90,     0,     0,    86,     0,     0,     0,
     126,   123,     0,     0,   107,   143,   144,   145,   112,   113,
     114,     0,    43,     0,   122,    47,     0,    55,    50,     0,
       0,     0,     0,    91,    89,    93,    79,   127,    81,    82,
     119,    44,    46,   178,    54,     0,    85,     0,     0,    83,
      84,    80
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    71,    46,   126,     3,     4,     5,     6,     7,   127,
       8,     9,    26,    27,    28,   117,   118,   241,   242,    29,
     119,   269,   270,   120,   200,    30,    31,    74,    75,    76,
      77,    78,    79,    80,    81,   213,   274,   302,   214,    82,
      83,    84,    85,    86,    87,    88,    89,   237,    90,    91,
     218,   219,   122,    92,    93,    94,    95,    96,    97,   148,
     149,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   173,   110,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -194
static const yytype_int16 yypact[] =
{
      36,    -7,    24,    65,  -194,    29,    36,  -194,  -194,     8,
    -194,    74,    40,  -194,  -194,    29,  -194,    -8,  -194,    48,
    -194,    11,    70,   290,  -194,  -194,     0,  -194,    26,  -194,
    -194,  -194,  -194,  -194,    39,   388,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,    68,    77,  -194,    62,  -194,
     -23,   947,   -18,    63,   566,    75,   117,   388,   668,   118,
     120,   998,   998,   123,  -194,  -194,  -194,   947,   998,  -194,
    -194,    68,   128,    49,  -194,   359,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,   126,   138,  -194,  -194,   141,
    -194,   122,   119,  -194,   216,  -194,   947,  -194,    66,    92,
     121,    46,   137,   145,   155,   157,   177,   -15,  -194,  -194,
     148,  -194,  -194,  -194,  -194,    68,  -194,   146,  -194,   -13,
      52,  -194,   179,   166,   152,  -194,   128,    61,  -194,  -194,
     149,   153,  -194,   566,   195,   719,   947,   156,  -194,   158,
     947,   947,   947,  -194,  -194,   566,   -11,    32,   164,   170,
     171,  -194,    25,   -10,   223,    17,   947,  -194,  -194,   947,
     821,   428,  -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,  -194,  -194,   947,  -194,   947,   947,   947,   947,   947,
     947,   947,   947,   947,   947,   947,   947,   947,   947,   947,
     947,   947,   947,   947,  -194,   146,   -13,    68,  -194,  -194,
    -194,  -194,  -194,   617,  1027,  -194,  -194,   566,  -194,  -194,
     173,  -194,  -194,   770,    54,  -194,   174,   947,    -5,  -194,
    -194,   178,   182,   184,  -194,   179,   179,   947,   947,   220,
    -194,  -194,  -194,  -194,   167,   169,  -194,   -25,  -194,   497,
    -194,  -194,   104,  -194,  -194,  -194,  -194,  -194,    66,    66,
      92,    92,   121,   121,   121,   121,    46,    46,   137,   145,
     155,   157,   177,   180,  -194,  -194,  -194,  -194,    68,    43,
    -194,  -194,   947,  -194,   884,   186,  -194,   947,   566,   190,
    -194,   179,   185,   566,  -194,  -194,  -194,  -194,  -194,  -194,
    -194,   947,  -194,   106,  -194,   617,   947,   212,  -194,   388,
     209,   566,   210,   205,  -194,  -194,   266,  -194,  -194,  -194,
    -194,  -194,  -194,  -194,  -194,   213,  -194,   566,   566,  -194,
    -194,  -194
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -194,   -19,   225,   -21,  -194,  -194,   277,  -194,   279,    -1,
      34,  -194,  -194,   260,  -194,   -51,    91,  -193,    50,  -194,
     175,  -194,     4,   -64,    95,  -194,  -194,    -9,  -194,   -66,
     172,   -50,  -194,  -194,  -194,  -194,  -194,  -194,    35,  -194,
    -194,  -194,  -194,  -194,  -194,  -194,  -194,  -194,   161,  -194,
    -194,    94,  -135,  -194,  -194,   -20,    84,  -194,   -90,  -194,
    -194,     1,    10,   -37,    12,   134,   135,   133,   140,   136,
    -194,   -46,   159,  -194,    53,  -194
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -118
static const yytype_int16 yytable[] =
{
      11,    47,    72,    45,   134,   129,   174,   153,    32,   158,
     266,   225,   226,    49,    47,    21,   115,    32,    22,    12,
     152,    48,    73,    21,   192,   232,    22,   198,   124,   121,
     202,   128,    12,   131,    48,   121,    47,    35,    57,    14,
     290,   143,   144,   203,    10,   125,   146,   291,   151,    14,
     132,    25,     2,     1,    72,   199,    48,    23,   154,     2,
      25,   193,    23,    24,   195,    13,   147,   209,    33,   217,
      23,   111,   121,    36,    73,    37,   128,    38,    17,   224,
     182,   183,    39,   281,    40,   245,   246,   247,    41,    -5,
      42,    20,   202,   230,   113,    43,  -117,   197,    44,    33,
      -5,   155,   312,   184,   185,   203,   156,   114,   298,    34,
     201,   139,    72,  -117,    72,   299,   204,   121,   155,   116,
     150,    10,   276,   156,    72,  -117,   277,   175,   176,   177,
     155,   123,    73,   153,    73,   156,   133,   285,   286,   135,
      23,   271,    18,    19,    73,   252,   253,   254,   255,   162,
     163,   178,   179,   180,   181,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   186,   187,   294,   295,   311,   295,   248,
     249,   136,   140,    47,   141,   268,    72,   201,   215,   216,
     250,   251,   161,   221,   222,   223,   145,   154,   256,   257,
     159,   188,  -116,    48,   297,   160,    73,   128,   128,   234,
     189,   190,   235,   238,   243,   191,   194,    33,   197,   205,
     206,   208,   207,    36,   210,    37,   220,    38,   306,   227,
     217,   231,    39,   309,    40,   228,   229,   272,    41,   278,
      42,    57,   288,   282,   289,    43,   263,   283,    44,   284,
     313,   316,   202,   296,   304,    23,   243,   164,   165,   166,
     167,   168,   169,   170,   171,   307,   275,   320,   321,   172,
     279,    10,    64,   308,   315,   317,   128,   277,    47,   318,
     268,   319,   137,    15,   142,    16,   112,    68,   265,   293,
     196,   264,   243,    36,    50,    37,    51,    38,    48,    52,
      53,    54,    39,   314,    40,    55,    56,   212,    41,   303,
      42,    57,   280,   287,    58,    43,   233,    59,    44,    60,
      61,    62,   258,   260,   259,   300,     0,   215,   262,     0,
     305,   261,   244,     0,     0,     0,     0,     0,     0,     0,
       0,    63,    64,     0,   310,     0,     0,     0,   243,    65,
      66,     0,     0,     0,    67,     0,     0,    68,    69,     0,
      23,    70,    36,    50,    37,    51,    38,     0,    52,    53,
      54,    39,     0,    40,    55,    56,     0,    41,     0,    42,
      57,     0,     0,    58,    43,     0,    59,    44,    60,    61,
      62,    36,     0,    37,     0,    38,     0,     0,     0,     0,
      39,     0,    40,     0,     0,     0,    41,     0,    42,     0,
      63,    64,     0,    43,     0,     0,    44,     0,    65,    66,
       0,     0,     0,    67,     0,     0,    68,    69,     0,    23,
     157,    36,     0,    37,     0,    38,     0,     0,     0,    10,
      39,     0,    40,     0,     0,     0,    41,     0,    42,    57,
       0,     0,     0,    43,     0,     0,    44,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      64,     0,     0,     0,     0,     0,     0,    65,    66,     0,
       0,     0,    67,     0,     0,    68,     0,     0,   239,   240,
      36,     0,    37,     0,    38,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,    41,     0,    42,    57,     0,
       0,     0,    43,     0,     0,    44,     0,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    64,
       0,     0,     0,     0,     0,     0,    65,    66,     0,     0,
       0,    67,     0,     0,    68,     0,     0,   239,   292,    36,
      50,    37,    51,    38,     0,    52,    53,    54,    39,     0,
      40,    55,    56,     0,    41,     0,    42,    57,     0,     0,
      58,    43,     0,    59,    44,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    64,     0,
      36,     0,    37,     0,    38,    65,    66,     0,     0,    39,
      67,    40,     0,    68,    69,    41,    23,    42,    57,     0,
       0,     0,    43,     0,     0,    44,     0,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    64,
       0,    36,     0,    37,     0,    38,    65,    66,     0,     0,
      39,    67,    40,     0,    68,     0,    41,   239,    42,    57,
       0,     0,     0,    43,     0,     0,    44,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      64,     0,    36,     0,    37,     0,    38,    65,    66,     0,
       0,    39,    67,    40,     0,    68,   138,    41,     0,    42,
      57,     0,     0,     0,    43,     0,     0,    44,     0,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    64,     0,    36,     0,    37,     0,    38,    65,    66,
       0,     0,    39,    67,    40,     0,    68,   211,    41,     0,
      42,    57,     0,     0,     0,    43,     0,     0,    44,     0,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    64,     0,    36,     0,    37,     0,    38,    65,
      66,     0,     0,    39,    67,    40,     0,    68,   273,    41,
       0,    42,    57,     0,     0,     0,    43,     0,     0,    44,
       0,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    64,     0,     0,     0,     0,     0,     0,
      65,    66,     0,     0,     0,    67,   236,    36,    68,    37,
       0,    38,     0,     0,     0,     0,    39,     0,    40,     0,
       0,     0,    41,     0,    42,    57,     0,     0,     0,    43,
       0,     0,    44,     0,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    64,     0,     0,     0,
       0,     0,     0,    65,    66,     0,     0,     0,    67,   301,
      36,    68,    37,     0,    38,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,    41,     0,    42,    57,     0,
       0,     0,    43,     0,     0,    44,     0,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    64,
       0,    36,     0,    37,     0,    38,    65,    66,     0,     0,
      39,    67,    40,     0,    68,     0,    41,     0,    42,    57,
       0,     0,     0,    43,     0,     0,    44,     0,    61,    62,
      36,     0,    37,     0,    38,     0,     0,     0,     0,    39,
       0,    40,     0,     0,     0,    41,     0,    42,     0,    10,
      64,     0,    43,     0,     0,    44,     0,    65,    66,     0,
       0,     0,   142,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267
};

static const yytype_int16 yycheck[] =
{
       1,    22,    23,    22,    54,    51,    96,    71,    17,    75,
     203,   146,   147,    22,    35,    23,    35,    26,    26,     8,
      71,    22,    23,    23,    39,     8,    26,    40,    51,    40,
      40,    51,     8,    51,    35,    40,    57,    26,    21,     5,
      65,    61,    62,    53,    51,    68,    67,    72,    68,    15,
      68,    17,    23,    17,    75,    68,    57,    70,    69,    23,
      26,    76,    70,    71,   115,     0,    67,   133,    51,    74,
      70,    71,    40,     3,    75,     5,    96,     7,    70,   145,
      34,    35,    12,   218,    14,   175,   176,   177,    18,    40,
      20,    51,    40,    68,    68,    25,    64,    72,    28,    51,
      51,    69,   295,    57,    58,    53,    74,    68,    65,    61,
     119,    58,   133,    64,   135,    72,    64,    40,    69,    51,
      67,    51,    68,    74,   145,    64,    72,    61,    62,    63,
      69,    69,   133,   197,   135,    74,    73,   227,   228,    64,
      70,   207,    68,    69,   145,   182,   183,   184,   185,    30,
      31,    59,    60,    32,    33,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,    36,    37,    71,    72,    71,    72,   178,
     179,    64,    64,   204,    64,   204,   207,   196,   135,   136,
     180,   181,    70,   140,   141,   142,    73,    69,   186,   187,
      74,    56,    64,   204,   268,    64,   207,   227,   228,   156,
      55,    54,   159,   160,   161,    38,    68,    51,    72,    40,
      68,    68,    73,     3,    29,     5,    68,     7,   278,    65,
      74,     8,    12,   283,    14,    65,    65,    64,    18,    65,
      20,    21,    75,    65,    75,    25,   193,    65,    28,    65,
     296,   301,    40,    73,    68,    70,   203,    41,    42,    43,
      44,    45,    46,    47,    48,    75,   213,   317,   318,    53,
     217,    51,    52,   282,    65,    65,   296,    72,   299,    13,
     299,    68,    57,     6,    64,     6,    26,    67,   197,   239,
     115,   196,   239,     3,     4,     5,     6,     7,   299,     9,
      10,    11,    12,   299,    14,    15,    16,   135,    18,   274,
      20,    21,   218,   229,    24,    25,   155,    27,    28,    29,
      30,    31,   188,   190,   189,   272,    -1,   274,   192,    -1,
     277,   191,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,   291,    -1,    -1,    -1,   295,    59,
      60,    -1,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,
      70,    71,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,
      51,    52,    -1,    25,    -1,    -1,    28,    -1,    59,    60,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,    70,
      71,     3,    -1,     5,    -1,     7,    -1,    -1,    -1,    51,
      12,    -1,    14,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    70,    71,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    70,    71,     3,
       4,     5,     6,     7,    -1,     9,    10,    11,    12,    -1,
      14,    15,    16,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    25,    -1,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,    -1,
       3,    -1,     5,    -1,     7,    59,    60,    -1,    -1,    12,
      64,    14,    -1,    67,    68,    18,    70,    20,    21,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,     3,    -1,     5,    -1,     7,    59,    60,    -1,    -1,
      12,    64,    14,    -1,    67,    -1,    18,    70,    20,    21,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      52,    -1,     3,    -1,     5,    -1,     7,    59,    60,    -1,
      -1,    12,    64,    14,    -1,    67,    68,    18,    -1,    20,
      21,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    52,    -1,     3,    -1,     5,    -1,     7,    59,    60,
      -1,    -1,    12,    64,    14,    -1,    67,    68,    18,    -1,
      20,    21,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,     3,    -1,     5,    -1,     7,    59,
      60,    -1,    -1,    12,    64,    14,    -1,    67,    68,    18,
      -1,    20,    21,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    64,    65,     3,    67,     5,
      -1,     7,    -1,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    -1,    25,
      -1,    -1,    28,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    64,    65,
       3,    67,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    52,
      -1,     3,    -1,     5,    -1,     7,    59,    60,    -1,    -1,
      12,    64,    14,    -1,    67,    -1,    18,    -1,    20,    21,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    30,    31,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    -1,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    20,    -1,    51,
      52,    -1,    25,    -1,    -1,    28,    -1,    59,    60,    -1,
      -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    17,    23,    81,    82,    83,    84,    85,    87,    88,
      51,    86,     8,     0,    87,    83,    85,    70,    68,    69,
      51,    23,    26,    70,    71,    87,    89,    90,    91,    96,
     102,   103,   104,    51,    61,    26,     3,     5,     7,    12,
      14,    18,    20,    25,    28,    78,    79,    80,    86,   104,
       4,     6,     9,    10,    11,    15,    16,    21,    24,    27,
      29,    30,    31,    51,    52,    59,    60,    64,    67,    68,
      71,    78,    80,    86,   104,   105,   106,   107,   108,   109,
     110,   111,   116,   117,   118,   119,   120,   121,   122,   123,
     125,   126,   130,   131,   132,   133,   134,   135,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     151,    71,    90,    68,    68,    78,    51,    92,    93,    97,
     100,    40,   129,    69,    51,    68,    80,    86,   132,   148,
     152,    51,    68,    73,   108,    64,    64,    79,    68,   151,
      64,    64,    64,   132,   132,    73,    80,    86,   136,   137,
     151,   132,    92,   100,    69,    69,    74,    71,   106,    74,
      64,    70,    30,    31,    41,    42,    43,    44,    45,    46,
      47,    48,    53,   150,   135,    61,    62,    63,    59,    60,
      32,    33,    34,    35,    57,    58,    36,    37,    56,    55,
      54,    38,    39,    76,    68,    92,    97,    72,    40,    68,
     101,   104,    40,    53,    64,    40,    68,    73,    68,   106,
      29,    68,   107,   112,   115,   151,   151,    74,   127,   128,
      68,   151,   151,   151,   106,   129,   129,    65,    65,    65,
      68,     8,     8,   125,   151,   151,    65,   124,   151,    70,
      71,    94,    95,   151,   149,   135,   135,   135,   138,   138,
     139,   139,   140,   140,   140,   140,   141,   141,   142,   143,
     144,   145,   146,   151,   101,    93,    94,    65,    78,    98,
      99,   106,    64,    68,   113,   151,    68,    72,    65,   151,
     128,   129,    65,    65,    65,   135,   135,   133,    75,    75,
      65,    72,    71,    95,    71,    72,    73,   100,    65,    72,
     151,    65,   114,   115,    68,   151,   108,    75,   104,   108,
     151,    71,    94,   148,    99,    65,   108,    65,    13,    68,
     108,   108
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
#line 1910 "y.tab.c"
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
#line 467 "pJava.y"


int main()
{
yyparse();
return 0;
}

