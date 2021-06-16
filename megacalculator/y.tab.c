/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
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
    	int randint(int from, int to,int count);
	
	//The calculator handles this struct Number for the calculations
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
	char typeConsensus(char type1, char type2);
	char get_type(char *varName);

	extern void *malloc();
	void yyerror(char *s);
	int yylex();


#line 122 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INTEGER = 258,
    REAL = 259,
    ID = 260,
    POW = 261,
    ROOT = 262,
    LOGN = 263,
    FIB = 264,
    FACT = 265,
    SUM = 266,
    PROD = 267,
    ABS = 268,
    PI = 269,
    SMALLER = 270,
    GREATER = 271,
    EQUAL = 272,
    DIFFERENT = 273,
    SMALLEREQUAL = 274,
    GREATEREQUAL = 275,
    RAND = 276,
    SIGMA = 277,
    ERA = 278,
    PRIME = 279,
    PRIMF = 280,
    GCD = 281,
    AVG = 282,
    CEIL = 283,
    FLOOR = 284,
    FOR = 285,
    WHILE = 286,
    IF = 287,
    ELSE = 288,
    OR = 289,
    INC = 290,
    DEC = 291,
    AND = 292,
    EXIT = 293,
    BIN = 294
  };
#endif
/* Tokens.  */
#define INTEGER 258
#define REAL 259
#define ID 260
#define POW 261
#define ROOT 262
#define LOGN 263
#define FIB 264
#define FACT 265
#define SUM 266
#define PROD 267
#define ABS 268
#define PI 269
#define SMALLER 270
#define GREATER 271
#define EQUAL 272
#define DIFFERENT 273
#define SMALLEREQUAL 274
#define GREATEREQUAL 275
#define RAND 276
#define SIGMA 277
#define ERA 278
#define PRIME 279
#define PRIMF 280
#define GCD 281
#define AVG 282
#define CEIL 283
#define FLOOR 284
#define FOR 285
#define WHILE 286
#define IF 287
#define ELSE 288
#define OR 289
#define INC 290
#define DEC 291
#define AND 292
#define EXIT 293
#define BIN 294

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 53 "yacc.y"

	char* lex;
	struct Expr
        {
		struct Number v;
		char type;
	} expr;
	int intVal;
	float floatVal;

#line 263 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  148

#define YYUNDEFTOK  2
#define YYMAXUTOK   294


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      49,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,     2,     2,     2,     2,     2,
      46,    47,    42,    40,    48,    41,     2,    43,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    50,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   126,   126,   127,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   142,   143,   144,   147,   148,   151,
     154,   155,   158,   159,   162,   163,   164,   165,   166,   167,
     170,   173,   177,   180,   182,   185,   197,   203,   210,   222,
     225,   227,   231,   235,   239,   242,   247,   249,   252,   255,
     258,   265,   268,   269,   271,   274,   278,   282,   286,   291
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REAL", "ID", "POW", "ROOT",
  "LOGN", "FIB", "FACT", "SUM", "PROD", "ABS", "PI", "SMALLER", "GREATER",
  "EQUAL", "DIFFERENT", "SMALLEREQUAL", "GREATEREQUAL", "RAND", "SIGMA",
  "ERA", "PRIME", "PRIMF", "GCD", "AVG", "CEIL", "FLOOR", "FOR", "WHILE",
  "IF", "ELSE", "OR", "INC", "DEC", "AND", "EXIT", "BIN", "'+'", "'-'",
  "'*'", "'/'", "'^'", "'!'", "'('", "')'", "','", "'\\n'", "'='",
  "$accept", "startProgram", "op", "block", "cond", "scond", "nid",
  "logop", "relop", "expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
      43,    45,    42,    47,    94,    33,    40,    41,    44,    10,
      61
};
# endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     142,   -45,   -45,    17,   -35,   -19,     2,     5,   -45,    22,
      43,    45,    51,    53,    54,    58,    66,    67,    68,    73,
     -45,    74,    57,    57,   102,    28,   -45,    14,   -45,   -45,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    -2,    -2,    57,     6,   -36,   215,
     -45,    72,   -45,    57,    57,    57,    57,    57,    57,   -45,
     -45,    57,    57,    57,    57,    57,   -45,   117,   228,   241,
     254,   267,   149,   160,   280,   293,   306,   171,   182,   319,
     332,   -45,   -45,    16,    35,   430,    75,   193,   -45,   -45,
     117,   117,   117,   117,   117,   117,    94,   -36,    31,    50,
      87,   -45,   -45,   -45,   -45,    57,    57,   -45,   -45,   -45,
      57,    57,   -45,   -45,   142,   -45,   -45,    -2,   -45,   -45,
     -45,   -45,   -45,   -45,    -2,   142,    57,   204,   345,   358,
     371,    93,   -45,   -45,   -23,   384,    57,   -45,   -45,   -45,
     -45,   142,   -45,   -45,   397,    95,   -45,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    34,    33,    32,     0,     0,     0,     0,    31,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,     0,     0,     0,     0,    12,     4,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    32,    41,     0,
       1,     0,     2,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,    40,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    20,     0,    17,     0,     0,     0,    30,     3,
       6,     7,     8,     9,    10,    11,    35,    36,    37,    38,
      39,    59,    51,    47,    46,     0,     0,    54,    57,    58,
       0,     0,    52,    53,     0,    23,    22,     0,    27,    28,
      25,    24,    26,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,     0,     0,     0,    48,    49,    50,
      14,     0,    15,    55,     0,     0,    56,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -24,   -45,   -44,   -45,    30,   -45,   -45,   -18
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    24,    25,    26,    83,    84,    85,   117,   124,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      51,    86,    81,    82,    48,    49,    63,    64,    65,    66,
     141,    31,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   142,    32,    87,    53,
      54,    55,    56,    57,    58,    90,    91,    92,    93,    94,
      95,    28,    29,    96,    97,    98,    99,   100,    33,    59,
      60,    34,    28,    29,    61,    62,    63,    64,    65,    66,
       1,     2,    47,   114,     4,     5,     6,    30,    35,   115,
       7,     8,   116,   132,    64,    65,    66,    52,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   127,   128,    36,
     131,    37,   129,   130,    65,    66,    21,    38,    22,    39,
      40,   134,    50,    23,    41,     1,     2,     3,   135,     4,
       5,     6,    42,    43,    44,     7,     8,   145,   144,    45,
      46,    89,   125,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    66,    18,    19,    62,    63,    64,    65,    66,
      20,    21,   140,    22,   147,     1,     2,     3,    23,     4,
       5,     6,    59,    60,   133,     7,     8,    61,    62,    63,
      64,    65,    66,     9,    10,    11,    12,    13,    14,    15,
      16,    17,     0,    18,    19,     0,     0,     0,     0,     0,
      20,    21,     0,    22,    59,    60,     0,     0,    23,    61,
      62,    63,    64,    65,    66,    59,    60,   105,     0,     0,
      61,    62,    63,    64,    65,    66,    59,    60,   106,     0,
       0,    61,    62,    63,    64,    65,    66,    59,    60,   110,
       0,     0,    61,    62,    63,    64,    65,    66,    59,    60,
     111,     0,     0,    61,    62,    63,    64,    65,    66,    59,
      60,   126,     0,     0,    61,    62,    63,    64,    65,    66,
      59,    60,   136,     0,     0,    61,    62,    63,    64,    65,
      66,     0,    88,    59,    60,     0,     0,     0,    61,    62,
      63,    64,    65,    66,     0,   101,    59,    60,     0,     0,
       0,    61,    62,    63,    64,    65,    66,     0,   102,    59,
      60,     0,     0,     0,    61,    62,    63,    64,    65,    66,
       0,   103,    59,    60,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     0,   104,    59,    60,     0,     0,     0,
      61,    62,    63,    64,    65,    66,     0,   107,    59,    60,
       0,     0,     0,    61,    62,    63,    64,    65,    66,     0,
     108,    59,    60,     0,     0,     0,    61,    62,    63,    64,
      65,    66,     0,   109,    59,    60,     0,     0,     0,    61,
      62,    63,    64,    65,    66,     0,   112,    59,    60,     0,
       0,     0,    61,    62,    63,    64,    65,    66,     0,   113,
      59,    60,     0,     0,     0,    61,    62,    63,    64,    65,
      66,     0,   137,    59,    60,     0,     0,     0,    61,    62,
      63,    64,    65,    66,     0,   138,    59,    60,     0,     0,
       0,    61,    62,    63,    64,    65,    66,     0,   139,    59,
      60,     0,     0,     0,    61,    62,    63,    64,    65,    66,
       0,   143,    59,    60,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     0,   146,   118,   119,   120,   121,   122,
     123
};

static const yytype_int16 yycheck[] =
{
      24,    45,     4,     5,    22,    23,    42,    43,    44,    45,
      33,    46,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    49,    46,    46,    15,
      16,    17,    18,    19,    20,    53,    54,    55,    56,    57,
      58,    35,    36,    61,    62,    63,    64,    65,    46,    35,
      36,    46,    35,    36,    40,    41,    42,    43,    44,    45,
       3,     4,     5,    47,     7,     8,     9,    50,    46,    34,
      13,    14,    37,   117,    43,    44,    45,    49,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   105,   106,    46,
     114,    46,   110,   111,    44,    45,    39,    46,    41,    46,
      46,   125,     0,    46,    46,     3,     4,     5,   126,     7,
       8,     9,    46,    46,    46,    13,    14,   141,   136,    46,
      46,    49,    47,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    45,    31,    32,    41,    42,    43,    44,    45,
      38,    39,    49,    41,    49,     3,     4,     5,    46,     7,
       8,     9,    35,    36,   124,    13,    14,    40,    41,    42,
      43,    44,    45,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    35,    36,    -1,    -1,    46,    40,
      41,    42,    43,    44,    45,    35,    36,    48,    -1,    -1,
      40,    41,    42,    43,    44,    45,    35,    36,    48,    -1,
      -1,    40,    41,    42,    43,    44,    45,    35,    36,    48,
      -1,    -1,    40,    41,    42,    43,    44,    45,    35,    36,
      48,    -1,    -1,    40,    41,    42,    43,    44,    45,    35,
      36,    48,    -1,    -1,    40,    41,    42,    43,    44,    45,
      35,    36,    48,    -1,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    35,    36,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    35,
      36,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    35,    36,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    -1,    47,    35,    36,
      -1,    -1,    -1,    40,    41,    42,    43,    44,    45,    -1,
      47,    35,    36,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    -1,    47,    35,    36,    -1,    -1,    -1,    40,
      41,    42,    43,    44,    45,    -1,    47,    35,    36,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    -1,    47,
      35,    36,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    -1,    47,    35,    36,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    -1,    47,    35,    36,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    -1,    47,    35,
      36,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      -1,    47,    35,    36,    -1,    -1,    -1,    40,    41,    42,
      43,    44,    45,    -1,    47,    15,    16,    17,    18,    19,
      20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     7,     8,     9,    13,    14,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    31,    32,
      38,    39,    41,    46,    52,    53,    54,    60,    35,    36,
      50,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,     5,    60,    60,
       0,    53,    49,    15,    16,    17,    18,    19,    20,    35,
      36,    40,    41,    42,    43,    44,    45,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,     4,     5,    55,    56,    57,    55,    60,    47,    49,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    47,    47,    47,    47,    48,    48,    47,    47,    47,
      48,    48,    47,    47,    47,    34,    37,    58,    15,    16,
      17,    18,    19,    20,    59,    47,    48,    60,    60,    60,
      60,    53,    55,    57,    53,    60,    48,    47,    47,    47,
      49,    33,    49,    47,    60,    53,    47,    49
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    51,    52,    52,    53,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    54,    54,    54,    55,    55,    56,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    60,    60,    60,    60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     6,     6,     8,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     4,     4,     6,     6,
       6,     4,     4,     4,     4,     6,     8,     4,     4,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

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
#line 130 "yacc.y"
                                                        {printExpression((yyvsp[0].expr).v,(yyvsp[0].expr).type);}
#line 1587 "y.tab.c"
    break;

  case 5:
#line 131 "yacc.y"
                                                        { add_variable((yyvsp[0].expr).v,(yyvsp[-2].lex),(yyvsp[0].expr).type);}
#line 1593 "y.tab.c"
    break;

  case 6:
#line 132 "yacc.y"
                                                                                {printf("%s", smaller((yyvsp[-2].expr).v, (yyvsp[0].expr).v) ? "true" : "false");}
#line 1599 "y.tab.c"
    break;

  case 7:
#line 133 "yacc.y"
                                                                        {printf("%s", greater((yyvsp[-2].expr).v, (yyvsp[0].expr).v) ? "true" : "false");}
#line 1605 "y.tab.c"
    break;

  case 8:
#line 134 "yacc.y"
                                                                        {printf("%s", equal((yyvsp[-2].expr).v, (yyvsp[0].expr).v) ? "true" : "false");}
#line 1611 "y.tab.c"
    break;

  case 9:
#line 135 "yacc.y"
                                                                                {printf("%s", equal((yyvsp[-2].expr).v, (yyvsp[0].expr).v) ? "false" : "true");}
#line 1617 "y.tab.c"
    break;

  case 10:
#line 136 "yacc.y"
                                                                        {printf("%s", (smaller((yyvsp[-2].expr).v, (yyvsp[0].expr).v) || equal((yyvsp[-2].expr).v, (yyvsp[0].expr).v)) ? "true" : "false");}
#line 1623 "y.tab.c"
    break;

  case 11:
#line 137 "yacc.y"
                                                                        {printf("%s", (greater((yyvsp[-2].expr).v, (yyvsp[0].expr).v) || equal((yyvsp[-2].expr).v, (yyvsp[0].expr).v)) ? "true" : "false");}
#line 1629 "y.tab.c"
    break;

  case 13:
#line 139 "yacc.y"
                                                                                {exit(0);}
#line 1635 "y.tab.c"
    break;

  case 14:
#line 142 "yacc.y"
                                                                                { printf("While loop detected.\n"); }
#line 1641 "y.tab.c"
    break;

  case 15:
#line 143 "yacc.y"
                                                                                { printf("IF clause detected.\n"); }
#line 1647 "y.tab.c"
    break;

  case 16:
#line 144 "yacc.y"
                                                                                { printf("IF..ELSE clause detected.\n");}
#line 1653 "y.tab.c"
    break;

  case 30:
#line 170 "yacc.y"
                                                        {(yyval.expr) = (yyvsp[-1].expr);}
#line 1659 "y.tab.c"
    break;

  case 31:
#line 173 "yacc.y"
                                                        {(yyval.expr).type='f';(yyval.expr).v.f = M_PI;}
#line 1665 "y.tab.c"
    break;

  case 32:
#line 177 "yacc.y"
                                                        {(yyval.expr).v = searchSymbol((yyvsp[0].lex)); (yyval.expr).type=get_type((yyvsp[0].lex));}
#line 1671 "y.tab.c"
    break;

  case 33:
#line 180 "yacc.y"
                                                        {(yyval.expr).v.f = (yyvsp[0].floatVal); (yyval.expr).type = 'f';}
#line 1677 "y.tab.c"
    break;

  case 34:
#line 182 "yacc.y"
                                                        {(yyval.expr).v.i = (yyvsp[0].intVal); (yyval.expr).type = 'i';}
#line 1683 "y.tab.c"
    break;

  case 35:
#line 185 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[-2].expr).type,(yyvsp[0].expr).type);
								//the float value is updated whether result is float or int,
								//but only the type of the correct value will be printed out accordingly to $$.type
								//(see function printExpression() )
								(yyval.expr).v.f = (yyvsp[-2].expr).v.f+(yyvsp[0].expr).v.f;
								(yyval.expr).v.i = (yyvsp[-2].expr).v.i+(yyvsp[0].expr).v.i;
								//If only one input is an int, the result will be done performing a cast to float on the int value
								//A warning will be shown in this case (see function typeConsensus() )
								if((yyvsp[-2].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[-2].expr).v.i+(yyvsp[0].expr).v.f;}
								if((yyvsp[0].expr).type=='i'){(yyval.expr).v.f = (yyvsp[-2].expr).v.f+(float)(yyvsp[0].expr).v.i;}
								}
#line 1699 "y.tab.c"
    break;

  case 36:
#line 197 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[-2].expr).type,(yyvsp[0].expr).type);
								(yyval.expr).v.f = (yyvsp[-2].expr).v.f+(yyvsp[0].expr).v.f;
								(yyval.expr).v.i = (yyvsp[-2].expr).v.i-(yyvsp[0].expr).v.i;
								if((yyvsp[-2].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[-2].expr).v.i-(yyvsp[0].expr).v.f;}
								if((yyvsp[0].expr).type=='i'){(yyval.expr).v.f = (yyvsp[-2].expr).v.f-(float)(yyvsp[0].expr).v.i;}}
#line 1709 "y.tab.c"
    break;

  case 37:
#line 203 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[-2].expr).type,(yyvsp[0].expr).type);
								(yyval.expr).v.f = (yyvsp[-2].expr).v.f*(yyvsp[0].expr).v.f;
								(yyval.expr).v.i = (yyvsp[-2].expr).v.i*(yyvsp[0].expr).v.i;
								if((yyvsp[-2].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[-2].expr).v.i*(yyvsp[0].expr).v.f;}
								if((yyvsp[0].expr).type=='i'){(yyval.expr).v.f = (yyvsp[-2].expr).v.f*(float)(yyvsp[0].expr).v.i;}}
#line 1719 "y.tab.c"
    break;

  case 38:
#line 210 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[-2].expr).type,(yyvsp[0].expr).type);
								if((yyval.expr).type=='i'&&(yyvsp[0].expr).v.i!=0)
									{(yyval.expr).v.i = (yyvsp[-2].expr).v.i/(yyvsp[0].expr).v.i;}
								//only if both inputs are integer AND the second one is 0, an error is shown
								else if((yyval.expr).type=='i'&&(yyvsp[0].expr).v.i==0)
									{printf("Error: division by zero! ");
									//if the first input is != 0 the result is infinite, otherwise NaN
									if((yyvsp[-2].expr).v.i!=0){printf("Result is infinite! ");}(yyval.expr).type='f'; (yyval.expr).v.f=(float)(yyvsp[-2].expr).v.i/(float)(yyvsp[0].expr).v.i;}
								(yyval.expr).v.f = (yyvsp[-2].expr).v.f/(yyvsp[0].expr).v.f;
								if((yyvsp[-2].expr).type=='i'){(yyval.expr).v.f = (float) (yyvsp[-2].expr).v.i/(yyvsp[0].expr).v.f;}
								if((yyvsp[0].expr).type=='i'){(yyval.expr).v.f = (yyvsp[-2].expr).v.f/(float)(yyvsp[0].expr).v.i;}}
#line 1735 "y.tab.c"
    break;

  case 39:
#line 222 "yacc.y"
                                                        {if(typeConsensus((yyvsp[0].expr).type,(yyvsp[0].expr).type)=='f') printf("Wrong input. Megacalculator only accepts integers");
							 else (yyval.expr).v.i=pow((yyvsp[-2].expr).v.i,(yyvsp[0].expr).v.i); (yyval.expr).v.f=pow((yyvsp[-2].expr).v.f,(yyvsp[0].expr).v.i);(yyval.expr).type=typeConsensus((yyvsp[-2].expr).type,(yyvsp[0].expr).type);}
#line 1742 "y.tab.c"
    break;

  case 40:
#line 225 "yacc.y"
                                                        {if(typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type)=='f') printf("Wrong input. Factorial only accepts integers"); 
							else {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type); (yyval.expr).v.i = (int) fac((yyvsp[-1].expr).v.i);(yyval.expr).v.f = (int) fac((yyvsp[-1].expr).v.f);}}
#line 1749 "y.tab.c"
    break;

  case 41:
#line 227 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[0].expr).type,(yyvsp[0].expr).type);(yyval.expr).v.f = -(yyvsp[0].expr).v.f;(yyval.expr).v.i = -(yyvsp[0].expr).v.i;}
#line 1755 "y.tab.c"
    break;

  case 42:
#line 231 "yacc.y"
                                {if(get_type((yyvsp[-1].lex)) == 'i'){struct Number n; n.i=searchSymbol((yyvsp[-1].lex)).i+1; add_variable(n,(yyvsp[-1].lex),get_type((yyvsp[-1].lex)));}
                                    else if(get_type((yyvsp[-1].lex)) == 'f'){struct Number n; n.f=searchSymbol((yyvsp[-1].lex)).f+1; add_variable(n,(yyvsp[-1].lex),get_type((yyvsp[-1].lex)));}
                                    struct Expr expr; expr.v=searchSymbol((yyvsp[-1].lex));expr.type=get_type((yyvsp[-1].lex)); (yyval.expr)=expr;}
#line 1763 "y.tab.c"
    break;

  case 43:
#line 235 "yacc.y"
                                {if(get_type((yyvsp[-1].lex)) == 'i'){struct Number n; n.i=searchSymbol((yyvsp[-1].lex)).i-1; add_variable(n,(yyvsp[-1].lex),get_type((yyvsp[-1].lex)));}
                                    else if(get_type((yyvsp[-1].lex)) == 'f'){struct Number n; n.f=searchSymbol((yyvsp[-1].lex)).f-1; add_variable(n,(yyvsp[-1].lex),get_type((yyvsp[-1].lex)));}
                                    struct Expr expr; expr.v=searchSymbol((yyvsp[-1].lex));expr.type=get_type((yyvsp[-1].lex)); (yyval.expr)=expr;}
#line 1771 "y.tab.c"
    break;

  case 44:
#line 239 "yacc.y"
                                                        {(yyval.expr).type =typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                if((yyvsp[-1].expr).type == 'i'){ ((yyvsp[-1].expr).v.i + 1);}
                                                else if((yyvsp[-1].expr).type == 'f'){((yyvsp[-1].expr).v.f + 1);}}
#line 1779 "y.tab.c"
    break;

  case 45:
#line 242 "yacc.y"
                                                        {(yyval.expr).type =typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                if((yyvsp[-1].expr).type == 'i'){ ((yyvsp[-1].expr).v.i - 1);}
                                                else if((yyvsp[-1].expr).type == 'f'){((yyvsp[-1].expr).v.f - 1);}}
#line 1787 "y.tab.c"
    break;

  case 46:
#line 247 "yacc.y"
                                                        {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);(yyval.expr).v.f = abs((yyvsp[-1].expr).v.f);(yyval.expr).v.i = abs((yyvsp[-1].expr).v.i);}
#line 1793 "y.tab.c"
    break;

  case 47:
#line 249 "yacc.y"
                                                {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                if((yyvsp[-1].expr).type=='f') printf("Please insert an integer and not a float for the fibonacci \n"); 
                                                else (yyval.expr).v.i = (int) fibonacci((yyvsp[-1].expr).v.i);}
#line 1801 "y.tab.c"
    break;

  case 48:
#line 252 "yacc.y"
                                                                        {(yyval.expr).type=typeConsensus((yyvsp[-3].expr).type,(yyvsp[-1].expr).type);
                                                				if((yyval.expr).type=='f') printf("Please insert an integer and not a float for the Sigma \n"); 
                                                				else (yyval.expr).v.i = (int) sigma((yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.i);}
#line 1809 "y.tab.c"
    break;

  case 49:
#line 255 "yacc.y"
                                                                {(yyval.expr).type=typeConsensus((yyvsp[-3].expr).type,(yyvsp[-1].expr).type);
                                                				if((yyval.expr).type=='f') printf("Please insert an integer and not a float for the GCD \n"); 
                                                				else (yyval.expr).v.i = (int) gcd((yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.i);}
#line 1817 "y.tab.c"
    break;

  case 50:
#line 258 "yacc.y"
                                                                {(yyval.expr).type=typeConsensus((yyvsp[-3].expr).type,(yyvsp[-1].expr).type);
                                                				if((yyval.expr).type=='f'){
                                                				if((yyvsp[-3].expr).type=='i'){(yyval.expr).v.f = avg((float)(yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.f);}
                                                				else if((yyvsp[-1].expr).type=='i'){(yyval.expr).v.f = avg((yyvsp[-3].expr).v.f,(float)(yyvsp[-1].expr).v.i);} 
                                                				else (yyval.expr).v.f = avg((yyvsp[-3].expr).v.f,(yyvsp[-1].expr).v.f);}
                                                				else (yyval.expr).v.i = (int) avg((yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.i);}
#line 1828 "y.tab.c"
    break;

  case 51:
#line 265 "yacc.y"
                                                                        {(yyval.expr).type='f'; if(typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type)=='i') {(yyval.expr).v.f=logf((float)(yyvsp[-1].expr).v.i);} 
                					else{(yyval.expr).v.f=sqrtf((yyvsp[-1].expr).v.f);} }
#line 1835 "y.tab.c"
    break;

  case 52:
#line 268 "yacc.y"
                                                                        {(yyval.expr).type=(yyvsp[-1].expr).type; (yyval.expr).v.f = ceil((yyvsp[-1].expr).v.f);(yyval.expr).v.i = (yyvsp[-1].expr).v.i;}
#line 1841 "y.tab.c"
    break;

  case 53:
#line 269 "yacc.y"
                                                                        {(yyval.expr).type=(yyvsp[-1].expr).type; (yyval.expr).v.f = floor((yyvsp[-1].expr).v.f);(yyval.expr).v.i = (yyvsp[-1].expr).v.i;}
#line 1847 "y.tab.c"
    break;

  case 54:
#line 271 "yacc.y"
                                                                        {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                if((yyvsp[-1].expr).type=='f')printf("Please insert an integer and not a float for the erathostenes function \n");
                                               else  (yyval.expr).v.i = (int) eratosthenes((yyvsp[-1].expr).v.i); }
#line 1855 "y.tab.c"
    break;

  case 55:
#line 274 "yacc.y"
                                                                {(yyval.expr).type=typeConsensus((yyvsp[-3].expr).type,(yyvsp[-1].expr).type);
                                                if((yyval.expr).type=='f')printf("Please insert an integer and not a float for the binomial function \n");
                                               else  (yyval.expr).v.i = (int) binomial((yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.i); }
#line 1863 "y.tab.c"
    break;

  case 56:
#line 278 "yacc.y"
                                                                        {(yyval.expr).type=typeConsensus((yyvsp[-5].expr).type,(yyvsp[-3].expr).type);(yyval.expr).type=typeConsensus((yyvsp[-5].expr).type,(yyvsp[-1].expr).type);
                                                if((yyval.expr).type=='f')printf("Please insert an integer and not a float for the random function \n");
                                               else  (yyval.expr).v.i = (int) randint((yyvsp[-5].expr).v.i,(yyvsp[-3].expr).v.i,(yyvsp[-1].expr).v.i); }
#line 1871 "y.tab.c"
    break;

  case 57:
#line 282 "yacc.y"
                                           {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                if((yyvsp[-1].expr).type=='f')printf("Please insert an integer and not a float for the prime numbers function \n");
                                               else  (yyval.expr).v.i = (int) primeNums((yyvsp[-1].expr).v.i);}
#line 1879 "y.tab.c"
    break;

  case 58:
#line 286 "yacc.y"
                                                   {(yyval.expr).type=typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type);
                                                      if((yyvsp[-1].expr).type=='f') printf("Please insert an integer and not a float for the prime factorization function"); 
                                                      else (yyval.expr).v.i = (int) primeFactors((yyvsp[-1].expr).v.i);
                                                      }
#line 1888 "y.tab.c"
    break;

  case 59:
#line 291 "yacc.y"
                                                        {(yyval.expr).type='f'; if(typeConsensus((yyvsp[-1].expr).type,(yyvsp[-1].expr).type)=='i') {(yyval.expr).v.f=sqrtf((float)(yyvsp[-1].expr).v.i);} 
                					else{(yyval.expr).v.f=sqrtf((yyvsp[-1].expr).v.f);} }
#line 1895 "y.tab.c"
    break;


#line 1899 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 295 "yacc.y"

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
       printf("first input must be greater than the second one and greater than ");
       return 0;
     }

      if(n<0){
       printf("first input must be greater or equal than ");
       return 0;

     }
      if(k<0){
       printf("second input must be greater or equal than ");
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

//Adds a variable in the symbolTable
void add_variable(struct Number val, char *name, char type)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
    	//If variables with name is found, type and values are 
        if(strcmp(st->name,name)==0)
        {
          st->v = val;
          st->type=type;
      		return;
        }
    }

  //If variable is not there, allocates a new entry and link it on the list

	st = (struct symbolTable *) malloc(sizeof(struct symbolTable));
	st->next = table;

  // have to copy the variable itself as well

	st->name = (char *) malloc(strlen(name)+1);
	strcpy(st->name, name);
	st->v = val;
	st->type=type;
	table = st;
}

//This functions returns the Number associated to the variable with name
struct Number searchSymbol(char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
            return st->v;
    }
    //If variable is not there, an error message is printed
    printf("Error: Variable not found!\n");

}

//This functions allows us to print a variable according to its type
void printExpression(struct Number val, char type){
	int zero=0;
	float zerof=0.0f;

    // if the type of the variable is an int an int will be printed
	if (type=='i'){
		printf("%d\n",val.i);

     // if the type of the variable is a float a float will be printed
	}else if(type=='f'){
		printf("%f\n",val.f);

    //print 0 otherwise
	}else{
		printf("0\n");
		
	}
}

//this function is used to find the type of the result of an operation
char typeConsensus(char type1, char type2){
	//when inputs are of type int, result will be int
	if(type1==type2 && type2=='i'){
		return 'i';
	}
	//same with float
	if(type1==type2 && type2=='f'){
		return 'f';
	}
	//if types are different, a choice has to be made. We decided to return a float with a warning message
	//So when a user writes ,for example, 7+3.0, result will be treated as a float (and a proper warning is printed)
	else if(type1!=type2 && (type1=='f'||type1=='i')&&(type2=='f'||type2=='i')){
		printf("\nWarning: you are operating with two different types. Result will be cast to float.\n\n");
		return 'f';
	}
	//if it's not possible to find a consensus, then 'e' is returned (stands for error)
	//this happens when the type of an input is not defined
	return 'e';
}

//returns the type associated to a variable (looks in the symbolTable)
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
