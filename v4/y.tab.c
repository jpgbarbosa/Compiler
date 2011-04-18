
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
#line 54 "pJava.y"

	int i;
	double d;
	char* id;
	is_TypeSpecifier* _typeSpecifier;
	is_Typename* _typeName;
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
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  124
/* YYNRULES -- Number of states.  */
#define YYNSTATES  243

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
      19,    21,    23,    25,    27,    31,    36,    40,    43,    45,
      48,    51,    53,    58,    62,    64,    68,    70,    74,    80,
      85,    90,    94,    96,   100,   103,   107,   110,   112,   115,
     117,   119,   123,   125,   128,   130,   132,   134,   136,   138,
     142,   147,   151,   157,   165,   171,   177,   185,   193,   200,
     203,   205,   207,   210,   212,   214,   216,   220,   224,   227,
     231,   234,   238,   241,   246,   250,   252,   256,   259,   262,
     265,   268,   270,   273,   275,   277,   279,   281,   286,   293,
     300,   302,   306,   310,   314,   318,   322,   326,   330,   332,
     336,   340,   344,   348,   352,   356,   360,   364,   368,   372,
     376,   378,   380,   384,   386,   391,   397,   401,   405,   409,
     413,   417,   421,   425,   429
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      81,     0,    -1,    79,    -1,    80,    -1,     3,    -1,     7,
      -1,     5,    -1,    25,    -1,    18,    -1,    20,    -1,    14,
      -1,    12,    -1,    29,    -1,    27,    -1,    27,    69,    70,
      -1,    82,    71,    83,    72,    -1,    23,     8,    52,    -1,
       8,    52,    -1,    84,    -1,    83,    84,    -1,    85,    73,
      -1,    88,    -1,    23,    26,    78,    86,    -1,    26,    78,
      86,    -1,    87,    -1,    86,    74,    87,    -1,    52,    -1,
      52,    54,   112,    -1,    23,    26,    78,    89,    92,    -1,
      26,    78,    89,    92,    -1,    52,    65,    90,    66,    -1,
      52,    65,    66,    -1,    91,    -1,    90,    74,    91,    -1,
      78,    52,    -1,    71,    93,    72,    -1,    71,    72,    -1,
      94,    -1,    93,    94,    -1,    95,    -1,    96,    -1,    78,
      86,    73,    -1,    97,    -1,   112,    73,    -1,    98,    -1,
      99,    -1,   104,    -1,    92,    -1,    73,    -1,    52,    75,
      94,    -1,     6,   113,    75,    94,    -1,    10,    75,    94,
      -1,    16,    65,   112,    66,    96,    -1,    16,    65,   112,
      66,    96,    13,    96,    -1,    28,    65,   112,    66,    92,
      -1,    30,    65,   112,    66,    96,    -1,    11,    96,    30,
      65,   112,    66,    73,    -1,    15,    65,   100,   101,   102,
      66,    96,    -1,    15,    65,   100,   101,    66,    96,    -1,
     103,    73,    -1,    95,    -1,    73,    -1,   112,    73,    -1,
      73,    -1,   103,    -1,   112,    -1,   103,    74,   112,    -1,
       4,    52,    73,    -1,     4,    73,    -1,     9,    52,    73,
      -1,     9,    73,    -1,    24,   112,    73,    -1,    24,    73,
      -1,    52,    65,   106,    66,    -1,    52,    65,    66,    -1,
     112,    -1,   106,    74,   112,    -1,    31,   108,    -1,    32,
     108,    -1,   108,    31,    -1,   108,    32,    -1,   108,    -1,
      68,   108,    -1,    53,    -1,   105,    -1,    52,    -1,   107,
      -1,    65,    80,    66,   107,    -1,    65,    80,    66,    65,
     114,    66,    -1,    65,    80,    66,    65,   113,    66,    -1,
     109,    -1,   110,    61,   110,    -1,   110,    60,   110,    -1,
     110,    63,   110,    -1,   110,    62,   110,    -1,   110,    64,
     110,    -1,   110,    33,   110,    -1,   110,    34,   110,    -1,
     110,    -1,   110,    59,   111,    -1,   110,    58,   111,    -1,
     110,    36,   111,    -1,   110,    35,   111,    -1,   110,    37,
     111,    -1,   110,    38,   111,    -1,   110,    57,   111,    -1,
     110,    56,   111,    -1,   110,    55,   111,    -1,   110,    39,
     111,    -1,   110,    40,   111,    -1,   113,    -1,   114,    -1,
      65,   112,    66,    -1,   111,    -1,    68,    65,   111,    66,
      -1,   111,    76,   112,    75,   112,    -1,    52,    54,   112,
      -1,    52,    42,   112,    -1,    52,    43,   112,    -1,    52,
      44,   112,    -1,    52,    45,   112,    -1,    52,    46,   112,
      -1,    52,    47,   112,    -1,    52,    48,   112,    -1,    52,
      49,   112,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    97,    97,   109,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   128,   132,   133,   137,   138,
     142,   143,   147,   148,   152,   153,   157,   158,   164,   165,
     169,   170,   174,   175,   179,   183,   184,   191,   192,   196,
     197,   201,   205,   206,   207,   208,   209,   210,   214,   218,
     219,   220,   224,   225,   226,   230,   231,   232,   233,   237,
     238,   239,   243,   244,   248,   252,   253,   257,   258,   259,
     260,   261,   262,   266,   267,   271,   272,   276,   277,   278,
     279,   280,   284,   288,   289,   290,   294,   295,   296,   297,
     301,   302,   303,   304,   305,   306,   307,   308,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     328,   329,   330,   335,   336,   337,   341,   342,   343,   344,
     345,   346,   347,   348,   349
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
  "'?'", "$accept", "TypeSpecifier", "TypeName", "PrimitiveType",
  "ProgramFile", "ClassHeader", "FieldDeclarations", "FieldDeclaration",
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
       0,    77,    78,    79,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    83,    83,
      84,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    89,    90,    90,    91,    92,    92,    93,    93,    94,
      94,    95,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    97,    98,    98,    98,    99,    99,    99,    99,   100,
     100,   100,   101,   101,   102,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   106,   106,   107,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   109,   109,
     110,   110,   110,   110,   110,   110,   110,   110,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     112,   112,   112,   113,   113,   113,   114,   114,   114,   114,
     114,   114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     1,     2,
       2,     1,     4,     3,     1,     3,     1,     3,     5,     4,
       4,     3,     1,     3,     2,     3,     2,     1,     2,     1,
       1,     3,     1,     2,     1,     1,     1,     1,     1,     3,
       4,     3,     5,     7,     5,     5,     7,     7,     6,     2,
       1,     1,     2,     1,     1,     1,     3,     3,     2,     3,
       2,     3,     2,     4,     3,     1,     3,     2,     2,     2,
       2,     1,     2,     1,     1,     1,     1,     4,     6,     6,
       1,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     1,     4,     5,     3,     3,     3,     3,
       3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    17,     0,     1,     0,    16,
       0,     0,     0,    18,     0,    21,     0,     4,     6,     5,
      11,    10,     8,     9,     7,    13,    12,     0,     2,     3,
      15,    19,    20,     0,     0,    26,    23,    24,     0,    22,
       0,    14,     0,     0,     0,     0,    29,    28,     0,     0,
      85,    83,     0,     0,    84,    86,    81,    90,    98,   113,
      27,   110,   111,    31,     0,     0,    32,    26,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
      36,    48,     0,    47,     0,    37,    39,    40,    42,    44,
      45,    46,     0,    85,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,    30,     0,     0,    68,     0,     0,     0,    70,
       0,     0,     0,     0,    72,     0,     0,     0,     0,     0,
      35,    38,    43,   117,   118,   119,   120,   121,   122,   123,
     124,   116,    74,     0,    75,     0,   112,     0,     0,    96,
      97,   102,   101,   103,   104,   108,   109,   107,   106,   105,
     100,    99,    92,    91,    94,    93,    95,     0,    33,    67,
       0,    69,    51,     0,    61,    60,     0,     0,    65,     0,
      71,     0,     0,    49,    41,    73,     0,     0,    87,   114,
       0,    50,     0,    63,     0,     0,    59,     0,     0,     0,
       0,    76,     0,     0,   115,     0,     0,     0,    64,    62,
      66,    52,    54,    55,    89,    88,     0,    58,     0,     0,
      56,    57,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    82,    28,    29,     3,     4,    12,    13,    14,    36,
      37,    15,    38,    65,    66,    83,    84,    85,    86,    87,
      88,    89,    90,   196,   214,   227,   197,    91,    54,   163,
      55,    56,    57,    58,    59,    92,    61,    62
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
      -2,   -19,     0,    39,   -23,   -71,    14,   -71,    68,   -71,
      24,   139,    -7,   -71,   -21,   -71,   139,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,    17,   -71,    44,   -71,   -71,
     -71,   -71,   -71,    44,    29,   -39,    26,   -71,    32,    26,
      32,   -71,   211,   112,    52,   179,   -71,   -71,   -30,   -30,
     312,   -71,   362,   -22,   -71,   -71,    13,   -71,   433,    31,
     -71,   -71,   -71,   -71,    56,   -42,   -71,    55,   -71,   -45,
     364,   -32,    36,   310,    47,    49,    45,    51,    57,   411,
     -71,   -71,    52,   -71,   209,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,    48,    58,   -71,   -71,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   353,    59,    62,   372,   -71,
     -71,   -71,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     211,   -71,   -71,   139,    60,   -71,   139,    54,    61,   -71,
     280,   105,    22,   211,   -71,    63,   211,   211,   280,     6,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -28,   -71,   381,   -71,   -30,    72,   193,
     193,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,     9,     9,   -71,   -71,   -71,    70,   -71,   -71,
     280,   -71,   -71,    78,   -71,   -71,   271,    19,   -71,    81,
     -71,    82,    83,   -71,   -71,   -71,   211,   410,   -71,   -71,
     211,   -71,   211,   -71,   370,    77,   -71,   211,   310,    32,
     310,   -71,    86,    92,   -71,    94,   310,    95,    89,   -71,
     -71,   154,   -71,   -71,   -71,   -71,    97,   -71,   310,   310,
     -71,   -71,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,    -6,   -71,   -48,   -71,   -71,   -71,   160,   -71,   -15,
     133,   -71,   146,   -71,    65,   -38,   -71,   -70,    38,   -64,
     -71,   -71,   -71,   -71,   -71,   -71,   -27,   -71,   -71,   -71,
      27,   -36,   -71,   -44,   390,   -41,   -67,   -11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      46,    60,    47,   137,   106,    27,     1,   134,     6,   141,
      33,   107,    94,    95,   151,    42,    10,   109,    39,    11,
     138,     2,    93,    51,   132,    17,    43,    18,   135,    19,
      93,    51,   133,     5,    20,   145,    21,    64,   205,     7,
      22,   139,    23,   108,   110,   111,   206,    24,     8,    25,
      16,    26,    32,    48,    49,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   164,    30,     9,   149,   169,   170,
     192,   127,   128,   129,    50,    51,    48,    49,   203,   204,
      44,   182,   183,   184,   185,   186,    34,    52,   106,   187,
      53,    10,   216,   217,    11,   194,    35,    50,    51,    41,
      44,   198,   199,    45,    67,   201,   202,   130,   131,    42,
      52,   140,   142,    53,   143,    17,   146,    18,   144,    19,
     211,   152,   147,   105,    20,   165,    21,    64,   166,   190,
      22,   109,    23,   189,   191,   193,   200,    24,   209,    25,
     222,    26,    17,   212,    18,   210,    19,   218,   219,   220,
     229,    20,   234,    21,   231,   215,   233,    22,   235,    23,
     236,   238,   237,   217,    24,   221,    25,   239,    26,   224,
     240,   225,    31,   198,   241,   242,   230,    68,    63,    40,
     195,   232,    17,    69,    18,    70,    19,   228,    71,    72,
      73,    20,   208,    21,    74,    75,   223,    22,   188,    23,
       0,     0,     0,    76,    24,     0,    25,    77,    26,    78,
      48,    49,    17,    69,    18,    70,    19,     0,    71,    72,
      73,    20,     0,    21,    74,    75,     0,    22,     0,    23,
       0,    79,    51,    76,    24,     0,    25,    77,    26,    78,
      48,    49,    48,    49,    52,     0,     0,    53,     0,     0,
      45,    80,    81,   125,   126,   127,   128,   129,     0,     0,
       0,    79,    51,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,     0,    52,    53,     0,    53,
      45,   150,    81,    17,    69,    18,    70,    19,     0,    71,
      72,    73,    20,     0,    21,    74,    75,     0,    22,     0,
      23,     0,    48,    49,    76,    24,     0,    25,    77,    26,
      78,    48,    49,     0,    69,     0,    70,     0,     0,    71,
      72,    73,     0,    50,    51,    74,    75,     0,     0,     0,
       0,     0,    79,    51,    76,     0,    52,     0,    77,    53,
      78,    48,    49,     0,   213,    52,     0,     0,    53,     0,
       0,    45,     0,    81,    96,    97,    98,    99,   100,   101,
     102,   103,    79,    51,     0,    17,   104,    18,     0,    19,
       0,     0,     0,     0,    20,    52,    21,   105,    53,     0,
      22,    45,    23,    81,    48,    49,     0,    24,     0,    25,
       0,    26,     0,    48,    49,    48,    49,     0,     0,     0,
       0,    48,    49,    48,    49,    50,    51,     0,     0,     0,
       0,     0,    48,    49,    50,    51,    93,    51,    52,   162,
       0,    53,    50,    51,    93,    51,     0,    52,     0,   136,
      53,     0,    53,    93,    51,    52,   226,   136,    53,     0,
     167,    48,    49,     0,     0,     0,   207,     0,     0,   167,
       0,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,     0,    50,    51,     0,   104,   112,   113,   114,   115,
     116,   117,   118,   119,     0,   136,   105,     0,    53,     0,
       0,     0,     0,     0,     0,     0,   148,     0,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   168,     0,
       0,     0,     0,     0,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181
};

static const yytype_int16 yycheck[] =
{
      38,    42,    40,    70,    52,    11,     8,    52,     8,    73,
      16,    52,    48,    49,    84,    54,    23,    53,    33,    26,
      52,    23,    52,    53,    66,     3,    65,     5,    73,     7,
      52,    53,    74,    52,    12,    76,    14,    43,    66,     0,
      18,    73,    20,    65,    31,    32,    74,    25,    71,    27,
      26,    29,    73,    31,    32,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,    72,    52,    82,   112,   113,
     140,    62,    63,    64,    52,    53,    31,    32,   148,    73,
      74,   125,   126,   127,   128,   129,    69,    65,   136,   130,
      68,    23,    73,    74,    26,    73,    52,    52,    53,    70,
      74,   142,   143,    71,    52,   146,   147,    76,    52,    54,
      65,    75,    65,    68,    65,     3,    65,     5,    73,     7,
     190,    73,    65,    65,    12,    66,    14,   133,    66,    75,
      18,   167,    20,    73,    73,    30,    73,    25,    66,    27,
     207,    29,     3,    65,     5,    75,     7,    66,    66,    66,
      73,    12,    66,    14,   218,   196,   220,    18,    66,    20,
      66,    66,   226,    74,    25,   206,    27,    13,    29,   210,
      73,   212,    12,   214,   238,   239,   217,    44,    66,    33,
     142,   219,     3,     4,     5,     6,     7,   214,     9,    10,
      11,    12,   165,    14,    15,    16,   207,    18,   133,    20,
      -1,    -1,    -1,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,     3,     4,     5,     6,     7,    -1,     9,    10,
      11,    12,    -1,    14,    15,    16,    -1,    18,    -1,    20,
      -1,    52,    53,    24,    25,    -1,    27,    28,    29,    30,
      31,    32,    31,    32,    65,    -1,    -1,    68,    -1,    -1,
      71,    72,    73,    60,    61,    62,    63,    64,    -1,    -1,
      -1,    52,    53,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    65,    -1,    65,    68,    -1,    68,
      71,    72,    73,     3,     4,     5,     6,     7,    -1,     9,
      10,    11,    12,    -1,    14,    15,    16,    -1,    18,    -1,
      20,    -1,    31,    32,    24,    25,    -1,    27,    28,    29,
      30,    31,    32,    -1,     4,    -1,     6,    -1,    -1,     9,
      10,    11,    -1,    52,    53,    15,    16,    -1,    -1,    -1,
      -1,    -1,    52,    53,    24,    -1,    65,    -1,    28,    68,
      30,    31,    32,    -1,    73,    65,    -1,    -1,    68,    -1,
      -1,    71,    -1,    73,    42,    43,    44,    45,    46,    47,
      48,    49,    52,    53,    -1,     3,    54,     5,    -1,     7,
      -1,    -1,    -1,    -1,    12,    65,    14,    65,    68,    -1,
      18,    71,    20,    73,    31,    32,    -1,    25,    -1,    27,
      -1,    29,    -1,    31,    32,    31,    32,    -1,    -1,    -1,
      -1,    31,    32,    31,    32,    52,    53,    -1,    -1,    -1,
      -1,    -1,    31,    32,    52,    53,    52,    53,    65,    66,
      -1,    68,    52,    53,    52,    53,    -1,    65,    -1,    65,
      68,    -1,    68,    52,    53,    65,    66,    65,    68,    -1,
      68,    31,    32,    -1,    -1,    -1,    65,    -1,    -1,    68,
      -1,    -1,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    52,    53,    -1,    54,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    65,    65,    -1,    68,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    75,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     8,    23,    81,    82,    52,     8,     0,    71,    52,
      23,    26,    83,    84,    85,    88,    26,     3,     5,     7,
      12,    14,    18,    20,    25,    27,    29,    78,    79,    80,
      72,    84,    73,    78,    69,    52,    86,    87,    89,    86,
      89,    70,    54,    65,    74,    71,    92,    92,    31,    32,
      52,    53,    65,    68,   105,   107,   108,   109,   110,   111,
     112,   113,   114,    66,    78,    90,    91,    52,    87,     4,
       6,     9,    10,    11,    15,    16,    24,    28,    30,    52,
      72,    73,    78,    92,    93,    94,    95,    96,    97,    98,
      99,   104,   112,    52,   108,   108,    42,    43,    44,    45,
      46,    47,    48,    49,    54,    65,    80,   112,    65,   108,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      76,    52,    66,    74,    52,    73,    65,   113,    52,    73,
      75,    96,    65,    65,    73,   112,    65,    65,    75,    86,
      72,    94,    73,   112,   112,   112,   112,   112,   112,   112,
     112,   112,    66,   106,   112,    66,    66,    68,   111,   110,
     110,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   110,   110,   110,   110,   110,   112,    91,    73,
      75,    73,    94,    30,    73,    95,   100,   103,   112,   112,
      73,   112,   112,    94,    73,    66,    74,    65,   107,    66,
      75,    94,    65,    73,   101,   112,    73,    74,    66,    66,
      66,   112,   113,   114,   112,   112,    66,   102,   103,    73,
     112,    96,    92,    96,    66,    66,    66,    96,    66,    13,
      73,    96,    96
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
        case 16:

/* Line 1455 of yacc.c  */
#line 132 "pJava.y"
    {(yyval._classHeader) = insert_ClassHeader((yyvsp[(3) - (3)].id));}
    break;

  case 17:

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

