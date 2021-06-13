/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER = 258,
     REAL = 259,
     ID = 260,
     POW = 261,
     ROOT = 262,
     LOG = 263,
     COS = 264,
     SIN = 265,
     TAN = 266,
     FIB = 267,
     FACT = 268,
     BASE = 269,
     SUM = 270,
     PROD = 271,
     ABS = 272,
     MOD = 273,
     NEP = 274,
     PI = 275,
     SMALLER = 276,
     GREATER = 277,
     EQUAL = 278,
     DIFFERENT = 279,
     SMALLEREQUAL = 280,
     GREATEREQUAL = 281,
     RAND = 282,
     SIGMA = 283,
     ERA = 284,
     PRIME = 285,
     PRIMF = 286,
     GCD = 287,
     BC = 288,
     PN = 289,
     AVG = 290,
     CEIL = 291,
     FLOOR = 292,
     FOR = 293,
     WHILE = 294,
     IF = 295,
     ELSE = 296,
     OR = 297,
     INC = 298,
     DEC = 299,
     AND = 300,
     EXIT = 301,
     BIN = 302
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define ID 260
#define POW 261
#define ROOT 262
#define LOG 263
#define COS 264
#define SIN 265
#define TAN 266
#define FIB 267
#define FACT 268
#define BASE 269
#define SUM 270
#define PROD 271
#define ABS 272
#define MOD 273
#define NEP 274
#define PI 275
#define SMALLER 276
#define GREATER 277
#define EQUAL 278
#define DIFFERENT 279
#define SMALLEREQUAL 280
#define GREATEREQUAL 281
#define RAND 282
#define SIGMA 283
#define ERA 284
#define PRIME 285
#define PRIMF 286
#define GCD 287
#define BC 288
#define PN 289
#define AVG 290
#define CEIL 291
#define FLOOR 292
#define FOR 293
#define WHILE 294
#define IF 295
#define ELSE 296
#define OR 297
#define INC 298
#define DEC 299
#define AND 300
#define EXIT 301
#define BIN 302




/* Copy the first part of user declarations.  */
#line 1 "yacc.y"

	#include<stdio.h>
	#include<math.h>
	#include<string.h>
	#include<stdbool.h>
	#include<stdlib.h>
    	#include<ctype.h>

    	int yydebug=1;
	int fibonacci(int n);
	int binomial(int n, int k);
    	int eratosthenes(int n);
    	int gcd(int m, int n);
    	int primeFactors(int n);
    	int primeNums(int n);
    	int sigma(int x, int n);
    	float avg (float x, float n);
    	int fac(int n);
    	void add_type(char *type, char *name);
    	int randint(int from, int to,int count);
	
	struct Number {
	   int i;
	   float f;
	};

        struct symbolTable
        {
            char *name;
            struct Number v;
            char type;
            struct symbolTable *next;

        };

        struct symbolTable *table;
	void printExpression(struct Number val, char type);
	bool smaller(struct Number a, struct Number b);
	bool greater(struct Number a, struct Number b);
    	bool equal(struct Number a, struct Number b);
	void add_variable(struct Number val, char *name, char type);
	struct Number searchSymbol(char *name);
	char typeChecking(char type1, char type2);
	char get_type(char *varName);

	extern void *malloc();
	void yyerror(char *s);
	int yylex();



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 52 "yacc.y"
{
	char* lex;
	struct Expr
        {
		struct Number v;
		char type;
	} expr;
	int intVal;
	float floatVal;
	
}
/* Line 193 of yacc.c.  */
#line 253 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 266 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   411

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNRULES -- Number of states.  */
#define YYNSTATES  138

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,     2,     2,     2,     2,     2,
      54,    55,    50,    48,    56,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    52,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    10,    12,    16,    20,    24,    28,
      32,    36,    40,    42,    44,    51,    58,    67,    69,    73,
      77,    79,    81,    83,    85,    87,    89,    91,    93,    95,
      97,   101,   103,   107,   109,   111,   115,   119,   123,   127,
     130,   133,   138,   145,   152,   159,   164,   169,   174,   179,
     186,   195,   200,   205,   208,   211
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      60,     0,    -1,    61,    57,    -1,    60,    61,    57,    -1,
      68,    -1,     5,    58,    68,    -1,    68,    21,    68,    -1,
      68,    22,    68,    -1,    68,    23,    68,    -1,    68,    24,
      68,    -1,    68,    25,    68,    -1,    68,    26,    68,    -1,
      62,    -1,    46,    -1,    39,    54,    63,    55,    61,    57,
      -1,    40,    54,    63,    55,    61,    57,    -1,    40,    54,
      63,    55,    61,    41,    61,    57,    -1,    64,    -1,    64,
      66,    63,    -1,    65,    67,    65,    -1,     5,    -1,     4,
      -1,    45,    -1,    42,    -1,    24,    -1,    23,    -1,    25,
      -1,    21,    -1,    22,    -1,    26,    -1,    54,    68,    55,
      -1,     5,    -1,    68,    48,    68,    -1,     4,    -1,     3,
      -1,    68,    49,    68,    -1,    68,    50,    68,    -1,    68,
      51,    68,    -1,    68,    52,    68,    -1,    68,    53,    -1,
      49,    68,    -1,    12,    54,    68,    55,    -1,    28,    54,
      68,    56,    68,    55,    -1,    32,    54,    68,    56,    68,
      55,    -1,    35,    54,    68,    56,    68,    55,    -1,     8,
      54,    68,    55,    -1,    36,    54,    68,    55,    -1,    37,
      54,    68,    55,    -1,    29,    54,    68,    55,    -1,    47,
      54,    68,    56,    68,    55,    -1,    27,    54,    68,    56,
      68,    56,    68,    55,    -1,    30,    54,    68,    55,    -1,
      31,    54,    68,    55,    -1,     5,    43,    -1,    68,    43,
      -1,    68,    44,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   129,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   144,   145,   146,   149,   150,   153,
     156,   157,   160,   161,   164,   165,   166,   167,   168,   169,
     172,   173,   176,   181,   182,   183,   188,   193,   198,   201,
     203,   205,   208,   211,   214,   222,   226,   227,   229,   232,
     236,   240,   244,   250,   254,   257
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "ID", "POW", "ROOT",
  "LOG", "COS", "SIN", "TAN", "FIB", "FACT", "BASE", "SUM", "PROD", "ABS",
  "MOD", "NEP", "PI", "SMALLER", "GREATER", "EQUAL", "DIFFERENT",
  "SMALLEREQUAL", "GREATEREQUAL", "RAND", "SIGMA", "ERA", "PRIME", "PRIMF",
  "GCD", "BC", "PN", "AVG", "CEIL", "FLOOR", "FOR", "WHILE", "IF", "ELSE",
  "OR", "INC", "DEC", "AND", "EXIT", "BIN", "'+'", "'-'", "'*'", "'/'",
  "'^'", "'!'", "'('", "')'", "','", "'\\n'", "'='", "$accept",
  "startProgram", "op", "block", "cond", "scond", "nid", "logop", "relop",
  "expression", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,    43,    45,
      42,    47,    94,    33,    40,    41,    44,    10,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    62,    63,    63,    64,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     6,     6,     8,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     1,     1,     3,     3,     3,     3,     2,
       2,     4,     6,     6,     6,     4,     4,     4,     4,     6,
       8,     4,     4,     2,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    34,    33,    31,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,     0,
       0,     0,     0,    12,     4,    53,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,    40,     0,     1,     0,     2,     0,     0,     0,
       0,     0,     0,    54,    55,     0,     0,     0,     0,     0,
      39,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    20,     0,    17,     0,     0,     0,
      30,     3,     6,     7,     8,     9,    10,    11,    32,    35,
      36,    37,    38,    45,    41,     0,     0,    48,    51,    52,
       0,     0,    46,    47,     0,    23,    22,     0,    27,    28,
      25,    24,    26,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,     0,     0,     0,    42,    43,    44,
      14,     0,    15,    49,     0,     0,    50,    16
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    21,    22,    23,    75,    76,    77,   107,   114,    24
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int16 yypact[] =
{
     100,   -53,   -53,   -19,   -52,   -16,    -7,     7,     8,    12,
      13,    16,    17,    25,    28,    30,    39,   -53,    44,   140,
     140,    60,    -5,   -53,     5,   -53,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,    41,    41,
     140,    59,   358,   191,   -53,     2,   -53,   140,   140,   140,
     140,   140,   140,   -53,   -53,   140,   140,   140,   140,   140,
     -53,    72,   204,   217,   107,   130,   230,   243,   256,   147,
     158,   269,   282,   -53,   -53,    58,   -39,    52,    62,   169,
     -53,   -53,    72,    72,    72,    72,    72,    72,   354,   358,
     -43,    -2,    65,   -53,   -53,   140,   140,   -53,   -53,   -53,
     140,   140,   -53,   -53,   100,   -53,   -53,    41,   -53,   -53,
     -53,   -53,   -53,   -53,    41,   100,   140,   180,   295,   308,
     321,    69,   -53,   -53,   -34,   334,   140,   -53,   -53,   -53,
     -53,   100,   -53,   -53,   347,    76,   -53,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -53,   -21,   -53,   -38,   -53,    20,   -53,   -53,   -15
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      45,    78,    27,   105,    42,    43,   106,   131,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   132,    25,    79,    47,    48,    49,    50,
      51,    52,    82,    83,    84,    85,    86,    87,    28,    26,
      88,    89,    90,    91,    92,    73,    74,    29,    53,    54,
      59,    60,    46,    55,    56,    57,    58,    59,    60,    81,
      44,    30,    31,     1,     2,     3,    32,    33,     4,   122,
      34,    35,     5,   108,   109,   110,   111,   112,   113,    36,
     117,   118,    37,   121,    38,   119,   120,     6,     7,     8,
       9,    10,    11,    39,   124,    12,    13,    14,    40,    15,
      16,   125,    25,     1,     2,     3,    17,    18,     4,    19,
     135,   134,     5,   104,    20,    53,    54,   115,    60,     0,
      55,    56,    57,    58,    59,    60,   130,     6,     7,     8,
       9,    10,    11,   137,   123,    12,    13,    14,     0,    15,
      16,     0,     0,     1,     2,    41,    17,    18,     4,    19,
      53,    54,     5,     0,    20,    55,    56,    57,    58,    59,
      60,     0,     0,    95,     0,     0,     0,     6,     7,     8,
       9,    10,    11,    53,    54,    12,    13,    14,    55,    56,
      57,    58,    59,    60,     0,     0,    96,    18,     0,    19,
      53,    54,     0,     0,    20,    55,    56,    57,    58,    59,
      60,    53,    54,   100,     0,     0,    55,    56,    57,    58,
      59,    60,    53,    54,   101,     0,     0,    55,    56,    57,
      58,    59,    60,    53,    54,   116,     0,     0,    55,    56,
      57,    58,    59,    60,    53,    54,   126,     0,     0,    55,
      56,    57,    58,    59,    60,     0,    80,    53,    54,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,    93,
      53,    54,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,    94,    53,    54,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,    97,    53,    54,     0,     0,
       0,    55,    56,    57,    58,    59,    60,     0,    98,    53,
      54,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,    99,    53,    54,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,   102,    53,    54,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,   103,    53,    54,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
     127,    53,    54,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,   128,    53,    54,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,   129,    53,    54,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,   133,
      53,    54,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,   136,    56,    57,    58,    59,    60,    57,    58,
      59,    60
};

static const yytype_int16 yycheck[] =
{
      21,    39,    54,    42,    19,    20,    45,    41,    51,    52,
      53,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    57,    43,    40,    21,    22,    23,    24,
      25,    26,    47,    48,    49,    50,    51,    52,    54,    58,
      55,    56,    57,    58,    59,     4,     5,    54,    43,    44,
      52,    53,    57,    48,    49,    50,    51,    52,    53,    57,
       0,    54,    54,     3,     4,     5,    54,    54,     8,   107,
      54,    54,    12,    21,    22,    23,    24,    25,    26,    54,
      95,    96,    54,   104,    54,   100,   101,    27,    28,    29,
      30,    31,    32,    54,   115,    35,    36,    37,    54,    39,
      40,   116,    43,     3,     4,     5,    46,    47,     8,    49,
     131,   126,    12,    55,    54,    43,    44,    55,    53,    -1,
      48,    49,    50,    51,    52,    53,    57,    27,    28,    29,
      30,    31,    32,    57,   114,    35,    36,    37,    -1,    39,
      40,    -1,    -1,     3,     4,     5,    46,    47,     8,    49,
      43,    44,    12,    -1,    54,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    -1,    -1,    -1,    27,    28,    29,
      30,    31,    32,    43,    44,    35,    36,    37,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    47,    -1,    49,
      43,    44,    -1,    -1,    54,    48,    49,    50,    51,    52,
      53,    43,    44,    56,    -1,    -1,    48,    49,    50,    51,
      52,    53,    43,    44,    56,    -1,    -1,    48,    49,    50,
      51,    52,    53,    43,    44,    56,    -1,    -1,    48,    49,
      50,    51,    52,    53,    43,    44,    56,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    55,    43,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      43,    44,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    55,    43,    44,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    55,    43,    44,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    55,    43,
      44,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      -1,    55,    43,    44,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    55,    43,    44,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    55,    43,    44,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      55,    43,    44,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    55,    43,    44,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    55,    43,    44,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    55,
      43,    44,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    55,    49,    50,    51,    52,    53,    50,    51,
      52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     8,    12,    27,    28,    29,    30,
      31,    32,    35,    36,    37,    39,    40,    46,    47,    49,
      54,    60,    61,    62,    68,    43,    58,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    54,    54,    54,
      54,     5,    68,    68,     0,    61,    57,    21,    22,    23,
      24,    25,    26,    43,    44,    48,    49,    50,    51,    52,
      53,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,     4,     5,    63,    64,    65,    63,    68,
      55,    57,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    55,    55,    56,    56,    55,    55,    55,
      56,    56,    55,    55,    55,    42,    45,    66,    21,    22,
      23,    24,    25,    26,    67,    55,    56,    68,    68,    68,
      68,    61,    63,    65,    61,    68,    56,    55,    55,    55,
      57,    41,    57,    55,    68,    61,    55,    57
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 132 "yacc.y"
    {printExpression((yyvsp[(1) - (1)].expr).v,(yyvsp[(1) - (1)].expr).type);}
    break;

  case 5:
#line 133 "yacc.y"
    { add_variable((yyvsp[(3) - (3)].expr).v,(yyvsp[(1) - (3)].lex),(yyvsp[(3) - (3)].expr).type);}
    break;

  case 6:
#line 134 "yacc.y"
    {printf("%s", smaller((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) ? "true" : "false");}
    break;

  case 7:
#line 135 "yacc.y"
    {printf("%s", greater((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) ? "true" : "false");}
    break;

  case 8:
#line 136 "yacc.y"
    {printf("%s", equal((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) ? "true" : "false");}
    break;

  case 9:
#line 137 "yacc.y"
    {printf("%s", equal((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) ? "false" : "true");}
    break;

  case 10:
#line 138 "yacc.y"
    {printf("%s", (smaller((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) || equal((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v)) ? "true" : "false");}
    break;

  case 11:
#line 139 "yacc.y"
    {printf("%s", (greater((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v) || equal((yyvsp[(1) - (3)].expr).v, (yyvsp[(3) - (3)].expr).v)) ? "true" : "false");}
    break;

  case 13:
#line 141 "yacc.y"
    {exit(0);}
    break;

  case 14:
#line 144 "yacc.y"
    { printf("While loop detected.\n"); }
    break;

  case 15:
#line 145 "yacc.y"
    { printf("IF clause detected.\n"); }
    break;

  case 16:
#line 146 "yacc.y"
    { printf("IF..ELSE clause detected.\n");}
    break;

  case 30:
#line 172 "yacc.y"
    {(yyval.expr) = (yyvsp[(2) - (3)].expr);}
    break;

  case 31:
#line 173 "yacc.y"
    {(yyval.expr).v = searchSymbol((yyvsp[(1) - (1)].lex)); (yyval.expr).type=get_type((yyvsp[(1) - (1)].lex));}
    break;

  case 32:
#line 176 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(1) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type);
								(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f+(yyvsp[(3) - (3)].expr).v.f;
								if((yyvsp[(1) - (3)].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[(1) - (3)].expr).v.i+(yyvsp[(3) - (3)].expr).v.f;}
								if((yyvsp[(3) - (3)].expr).type=='i'){(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f+(float)(yyvsp[(3) - (3)].expr).v.i;}
								(yyval.expr).v.i = (yyvsp[(1) - (3)].expr).v.i+(yyvsp[(3) - (3)].expr).v.i;}
    break;

  case 33:
#line 181 "yacc.y"
    {(yyval.expr).v.f = (yyvsp[(1) - (1)].floatVal); (yyval.expr).type = 'f';}
    break;

  case 34:
#line 182 "yacc.y"
    {(yyval.expr).v.i = (yyvsp[(1) - (1)].intVal); (yyval.expr).type = 'i';}
    break;

  case 35:
#line 183 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(1) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type);
								(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f+(yyvsp[(3) - (3)].expr).v.f;
								if((yyvsp[(1) - (3)].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[(1) - (3)].expr).v.i-(yyvsp[(3) - (3)].expr).v.f;}
								if((yyvsp[(3) - (3)].expr).type=='i'){(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f-(float)(yyvsp[(3) - (3)].expr).v.i;}
								(yyval.expr).v.i = (yyvsp[(1) - (3)].expr).v.i-(yyvsp[(3) - (3)].expr).v.i;}
    break;

  case 36:
#line 188 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(1) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type);
								(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f*(yyvsp[(3) - (3)].expr).v.f;
								if((yyvsp[(1) - (3)].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[(1) - (3)].expr).v.i*(yyvsp[(3) - (3)].expr).v.f;}
								if((yyvsp[(3) - (3)].expr).type=='i'){(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f*(float)(yyvsp[(3) - (3)].expr).v.i;}
								(yyval.expr).v.i = (yyvsp[(1) - (3)].expr).v.i*(yyvsp[(3) - (3)].expr).v.i;}
    break;

  case 37:
#line 193 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(1) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type);
								(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f/(yyvsp[(3) - (3)].expr).v.f;
								if((yyvsp[(1) - (3)].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[(1) - (3)].expr).v.i/(yyvsp[(3) - (3)].expr).v.f;}
								if((yyvsp[(3) - (3)].expr).type=='i'){(yyval.expr).v.f = (yyvsp[(1) - (3)].expr).v.f/(float)(yyvsp[(3) - (3)].expr).v.i;}
								(yyval.expr).v.i = (yyvsp[(1) - (3)].expr).v.i/(yyvsp[(3) - (3)].expr).v.i;}
    break;

  case 38:
#line 198 "yacc.y"
    {if(typeChecking((yyvsp[(3) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type)=='f') printf("Wrong input. Megacalculator only accepts integers");
							 else (yyval.expr).v.i=pow((yyvsp[(1) - (3)].expr).v.i,(yyvsp[(3) - (3)].expr).v.i); (yyval.expr).v.f=pow((yyvsp[(1) - (3)].expr).v.f,(yyvsp[(3) - (3)].expr).v.i);(yyval.expr).type=typeChecking((yyvsp[(1) - (3)].expr).type,(yyvsp[(3) - (3)].expr).type);}
    break;

  case 39:
#line 201 "yacc.y"
    {if(typeChecking((yyvsp[(1) - (2)].expr).type,(yyvsp[(1) - (2)].expr).type)=='f') printf("Wrong input. Factorial only accepts integers"); 
							else {(yyval.expr).type=typeChecking((yyvsp[(1) - (2)].expr).type,(yyvsp[(1) - (2)].expr).type); (yyval.expr).v.i = (int) fac((yyvsp[(1) - (2)].expr).v.i);(yyval.expr).v.f = (int) fac((yyvsp[(1) - (2)].expr).v.f);}}
    break;

  case 40:
#line 203 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(2) - (2)].expr).type,(yyvsp[(2) - (2)].expr).type);(yyval.expr).v.f = -(yyvsp[(2) - (2)].expr).v.f;(yyval.expr).v.i = -(yyvsp[(2) - (2)].expr).v.i;}
    break;

  case 41:
#line 205 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (4)].expr).type,(yyvsp[(3) - (4)].expr).type);
                                                if((yyvsp[(3) - (4)].expr).type=='f') printf("Please insert an integer and not a float for the fibonacci \n"); 
                                                else (yyval.expr).v.i = (int) fibonacci((yyvsp[(3) - (4)].expr).v.i);}
    break;

  case 42:
#line 208 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (6)].expr).type,(yyvsp[(5) - (6)].expr).type);
                                                				if((yyval.expr).type=='f') printf("Please insert an integer and not a float for the fibonacci \n"); 
                                                				else (yyval.expr).v.i = (int) sigma((yyvsp[(3) - (6)].expr).v.i,(yyvsp[(5) - (6)].expr).v.i);}
    break;

  case 43:
#line 211 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (6)].expr).type,(yyvsp[(5) - (6)].expr).type);
                                                				if((yyval.expr).type=='f') printf("Please insert an integer and not a float for the fibonacci \n"); 
                                                				else (yyval.expr).v.i = (int) gcd((yyvsp[(3) - (6)].expr).v.i,(yyvsp[(5) - (6)].expr).v.i);}
    break;

  case 44:
#line 214 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (6)].expr).type,(yyvsp[(5) - (6)].expr).type);
                                                				if((yyval.expr).type=='f'){
                                                				if((yyvsp[(3) - (6)].expr).type=='i'){(yyval.expr).v.f = avg((float)(yyvsp[(3) - (6)].expr).v.i,(yyvsp[(5) - (6)].expr).v.f);}
                                                				else if((yyvsp[(5) - (6)].expr).type=='i'){(yyval.expr).v.f = avg((yyvsp[(3) - (6)].expr).v.f,(float)(yyvsp[(5) - (6)].expr).v.i);} 
                                                				else (yyval.expr).v.f = avg((yyvsp[(3) - (6)].expr).v.f,(yyvsp[(5) - (6)].expr).v.f);}
                                                				else (yyval.expr).v.i = (int) avg((yyvsp[(3) - (6)].expr).v.i,(yyvsp[(5) - (6)].expr).v.i);}
    break;

  case 45:
#line 222 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (4)].expr).type,(yyvsp[(3) - (4)].expr).type);
						                        if((yyvsp[(3) - (4)].expr).type=='i'){(yyval.expr).v.f = log((float) (yyvsp[(3) - (4)].expr).v.i);}
						                        else if((yyvsp[(3) - (4)].expr).type=='f') {(yyval.expr).v.f = log((yyvsp[(3) - (4)].expr).v.f);}}
    break;

  case 46:
#line 226 "yacc.y"
    {(yyval.expr).type=(yyvsp[(3) - (4)].expr).type; (yyval.expr).v.f = ceil((yyvsp[(3) - (4)].expr).v.f);(yyval.expr).v.i = (yyvsp[(3) - (4)].expr).v.i;}
    break;

  case 47:
#line 227 "yacc.y"
    {(yyval.expr).type=(yyvsp[(3) - (4)].expr).type; (yyval.expr).v.f = floor((yyvsp[(3) - (4)].expr).v.f);(yyval.expr).v.i = (yyvsp[(3) - (4)].expr).v.i;}
    break;

  case 48:
#line 229 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (4)].expr).type,(yyvsp[(3) - (4)].expr).type);
                                                if((yyvsp[(3) - (4)].expr).type=='f')printf("Please insert an integer and not a float for the erathostenes function \n");
                                               else  (yyval.expr).v.i = (int) eratosthenes((yyvsp[(3) - (4)].expr).v.i); }
    break;

  case 49:
#line 232 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (6)].expr).type,(yyvsp[(5) - (6)].expr).type);
                                                if((yyval.expr).type=='f')printf("Please insert an integer and not a float for the binomial function \n");
                                               else  (yyval.expr).v.i = (int) binomial((yyvsp[(3) - (6)].expr).v.i,(yyvsp[(5) - (6)].expr).v.i); }
    break;

  case 50:
#line 236 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (8)].expr).type,(yyvsp[(5) - (8)].expr).type);(yyval.expr).type=typeChecking((yyvsp[(3) - (8)].expr).type,(yyvsp[(7) - (8)].expr).type);
                                                if((yyval.expr).type=='f')printf("Please insert an integer and not a float for the prime factorization function \n");
                                               else  (yyval.expr).v.i = (int) randint((yyvsp[(3) - (8)].expr).v.i,(yyvsp[(5) - (8)].expr).v.i,(yyvsp[(7) - (8)].expr).v.i); }
    break;

  case 51:
#line 240 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (4)].expr).type,(yyvsp[(3) - (4)].expr).type);
                                                if((yyvsp[(3) - (4)].expr).type=='f')printf("Please insert an integer and not a float for the prime numbers function \n");
                                               else  (yyval.expr).v.i = (int) primeNums((yyvsp[(3) - (4)].expr).v.i);}
    break;

  case 52:
#line 244 "yacc.y"
    {(yyval.expr).type=typeChecking((yyvsp[(3) - (4)].expr).type,(yyvsp[(3) - (4)].expr).type);
                                                      if((yyvsp[(3) - (4)].expr).type=='f') printf("Please insert an integer and not a float for the prime factorization function"); 
                                                      else (yyval.expr).v.i = (int) primeFactors((yyvsp[(3) - (4)].expr).v.i);
                                                      }
    break;

  case 53:
#line 250 "yacc.y"
    {//add_variable((searchSymbol($1)),$1,searchSymbol($1).type); 
                                    if(searchSymbol(get_type((yyvsp[(1) - (2)].lex)) == 'i')){ ((yyvsp[(1) - (2)].lex).v.i += 1); }
                                    else if(searchSymbol(get_type((yyvsp[(1) - (2)].lex)) == 'f')){ ((yyvsp[(1) - (2)].lex).v.f += 1); } (yyval.expr).v= searchSymbol((yyvsp[(1) - (2)].lex));}
    break;

  case 54:
#line 254 "yacc.y"
    {(yyval.expr).type =typeChecking((yyvsp[(1) - (2)].expr).type,(yyvsp[(1) - (2)].expr).type);
                                                if((yyvsp[(1) - (2)].expr).type == 'i'){ ((yyvsp[(1) - (2)].expr).v.i + 1);}
                                                else if((yyvsp[(1) - (2)].expr).type == 'f'){((yyvsp[(1) - (2)].expr).v.f + 1);}}
    break;

  case 55:
#line 257 "yacc.y"
    {(yyval.expr).type =typeChecking((yyvsp[(1) - (2)].expr).type,(yyvsp[(1) - (2)].expr).type);
                                                if((yyvsp[(1) - (2)].expr).type == 'i'){ ((yyvsp[(1) - (2)].expr).v.i - 1);}
                                                else if((yyvsp[(1) - (2)].expr).type == 'f'){((yyvsp[(1) - (2)].expr).v.f - 1);}}
    break;


/* Line 1267 of yacc.c.  */
#line 1862 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 262 "yacc.y"

int yywrap()
{
	return 1;
}

#include "lex.yy.c"
void main()
{
    printf("\nInsert data in our megacalculator\n");
    yyparse();
}

bool smaller(struct Number a, struct Number b)
{
	
	bool ret = (float) a.i < (float)b.i;
	return ret;
}

bool greater(struct Number a, struct Number b)
{
	bool ret = (float)a.i > (float)b.i;
	return ret;
}

bool equal(struct Number a, struct Number b)
{
	bool ret = (float)a.i == (float)b.i;
	return ret;
}

int fac(int number)
{
   int factorial=1;
   int loop;

   for(loop = 1; loop<= number; loop++) {
      factorial = factorial * loop;
   }
   return factorial;
}

int fibonacci (int n)
{
   int first = 1;
   int second = 1;
   int third;
   int i;
   for(i=2;i<n;i++) {
      third=first+second;
      first=second;
      second=third;
      if(third!=n && i<n-1){
      	printf("%d\n",third);
      }
  }
  return third;
}

int sigma(int x, int n){
    int result=0;
    int i;

    if(x<1){
        printf("First input must be greater than 1");
        return 0;
    }

    if(n<0){
        printf("Second input must be greater or equal than 0");
        return 0;
    }

    for (i=1;i<=n;i++){
        if(n%i==0){
            result += pow(i,x);
        }
    }

    return result;
}

int gcd(int m, int n) {

    if(m<0){
        printf("First input must be greater or equal than 0");
        return 0;
    }

    if(n<0){
        printf("Second input must be greater or equal than 0");
        return 0;
    }
        if (m > n) {
            if ((m % n) == 0)
                return n;
            else
                return gcd(n, m % n);
        } else {
            if ((n % m) == 0)
                return m;
            else
                return gcd(m, n % m);
        }
}

float avg(float x, float n){
	return (x+n)/2.0;
}

int binomial(int n, int k) {

     if(n<k){
       printf("first input must be greater than the second one");
       return 0;
     }

      if(n<0){
       printf("first input must be greater or equal than 0");
       return 0;

     }
      if(k<0){
       printf("second input must be greater or equal than 0");
       return 0;
     }

    if (k > n - k)
    k = n - k;
    int b = 1;
    int i;
    int temp;
    for (i = 1, temp = n; i <= k; i++, temp--){
    b = b * temp / i;
    }
    return b;
}

int randint(int lower, int upper, int count) {
        int result = 0;
        int i;
    for (i = 0; i < count; i++) {
        int num = (rand() % (upper - lower + 1)) + lower;
        result = num;
        if(i<count-1){
      		printf("%d\n",result);
      }
    }
    return (int) result;
}
int primeNums(int n) {

     if(n<=0){
         printf("input must be greater than 0");
         return 0;
     }
        int count=0;
        if (n > 0) {
            int i;
            for (i = 0; i <= n; i++) {
                bool a = false;
                int j;
                for (j = 2; j <= i / 2; j++) {
                    if (i % j == 0) {
                        a = true;
                    }
                }
                if (!a && i != 1 && i != 0)
                    count++;
            }
        }
        return count;
    }

int eratosthenes(int n) {
 int i;
 int primes = primeNums(n);
 if(n<=0){
         printf("input must be greater than 0 ");
         return 0;
     }
        int count=0;
        if (n > 0) {
            for (i = 0; i <= n; i++) {
                bool a = false;
                int j;
                for (j = 2; j <= i / 2; j++) {
                    if (i % j == 0) {
                        a = true;
                    }
                }
                if (!a && i != 1 && i != 0 && count<primes-1){
                    printf("%d\n",i);
                    count++;
                    //printf("%d ",count);
                }
                else if (!a && i != 1 && i != 0){
                    return i;
        	 }
            }
        }

        return 0;
}

int primeFactors(int n)
{
    // Print the number of 2s that divide n
    while (n%2 == 0)
    {
        printf("%d\n", 2);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%d\n", i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        return n;
}

void add_variable(struct Number val, char *name, char type)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
        {
          st->v = val;
          st->type=type;
      		return;
        }
    }

  /* variable not there, allocate a new entry and link it on the list */

	st = (struct symbolTable *) malloc(sizeof(struct symbolTable));
	st->next = table;

  /* have to copy the variable itself as well */

	st->name = (char *) malloc(strlen(name)+1);
	strcpy(st->name, name);
	st->v = val;
	st->type=type;
	table = st;
}

struct Number searchSymbol(char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
            return st->v;
    }
    printf("Variable not found!\n");

}

void add_type(char *type, char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
        {
          //st->type = (char *) malloc(strlen(type)+1);
      		return;
        }
    }

}

void printExpression(struct Number val, char type){
	int zero=0;
	float zerof=0.0f;
	bool flag=false;
	if (type=='i'){
		//printf("i want to print a float\n");
		printf("%d\n",val.i);
	}else if(type=='f'){
		//printf("i want to print a integer\n");
		printf("%f\n",val.f);
	}else{
		printf("0\n");
		//printf("%d\n",val.i);
		//printf("%f\n",val.f);
	}
}

char typeChecking(char type1, char type2){
	if(type1==type2 && type2=='i'){
		return 'i';
	}
	if(type1==type2 && type2=='f'){
		return 'f';
	}
	else{
		return 'f';
	}
	return 'e';
}

char get_type(char *name){
    struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
        {
      		return st->type;
        }
    }
}

