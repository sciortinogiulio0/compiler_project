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
    	bool smaller(float a, float b);
    	bool greater(float a, float b);
    	bool equal(float a, float b);
    	int fac(int n);

    	int randint(int from, int to,int count);
      void add_variable(float val, char *name);
      float searchSymbol (char *name);

        struct symbolTable
        {
            char *name;
            float value;
            struct symbolTable *next;

        };

        struct symbolTable *table;

        extern void *malloc();
    	void yyerror(char *s);
    	int yylex();

#line 111 "y.tab.c"

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
    VALUE = 258,
    ID = 259,
    POW = 260,
    ROOT = 261,
    LOG = 262,
    COS = 263,
    SIN = 264,
    TAN = 265,
    FIB = 266,
    FACT = 267,
    BASE = 268,
    SUM = 269,
    PROD = 270,
    ABS = 271,
    MOD = 272,
    NEP = 273,
    PI = 274,
    SMALLER = 275,
    GREATER = 276,
    EQUAL = 277,
    DIFFERENT = 278,
    SMALLEREQUAL = 279,
    GREATEREQUAL = 280,
    RAND = 281,
    SIGMA = 282,
    ERA = 283,
    PRIME = 284,
    PRIMF = 285,
    GCD = 286,
    BC = 287,
    PN = 288,
    AVG = 289,
    CEIL = 290,
    FLOOR = 291,
    FOR = 292,
    WHILE = 293,
    IF = 294,
    ELSE = 295,
    OR = 296,
    INC = 297,
    DEC = 298,
    AND = 299,
    EXIT = 300,
    BIN = 301
  };
#endif
/* Tokens.  */
#define VALUE 258
#define ID 259
#define POW 260
#define ROOT 261
#define LOG 262
#define COS 263
#define SIN 264
#define TAN 265
#define FIB 266
#define FACT 267
#define BASE 268
#define SUM 269
#define PROD 270
#define ABS 271
#define MOD 272
#define NEP 273
#define PI 274
#define SMALLER 275
#define GREATER 276
#define EQUAL 277
#define DIFFERENT 278
#define SMALLEREQUAL 279
#define GREATEREQUAL 280
#define RAND 281
#define SIGMA 282
#define ERA 283
#define PRIME 284
#define PRIMF 285
#define GCD 286
#define BC 287
#define PN 288
#define AVG 289
#define CEIL 290
#define FLOOR 291
#define FOR 292
#define WHILE 293
#define IF 294
#define ELSE 295
#define OR 296
#define INC 297
#define DEC 298
#define AND 299
#define EXIT 300
#define BIN 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 42 "yacc.y"

	char* lex;
	float value;

#line 260 "y.tab.c"

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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   421

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  55
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  138

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    52,     2,     2,     2,     2,     2,     2,
      53,    54,    49,    47,    55,    48,     2,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    51,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   110,   110,   111,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   126,   127,   128,   131,   132,   135,
     138,   139,   142,   143,   146,   147,   148,   149,   150,   151,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VALUE", "ID", "POW", "ROOT", "LOG",
  "COS", "SIN", "TAN", "FIB", "FACT", "BASE", "SUM", "PROD", "ABS", "MOD",
  "NEP", "PI", "SMALLER", "GREATER", "EQUAL", "DIFFERENT", "SMALLEREQUAL",
  "GREATEREQUAL", "RAND", "SIGMA", "ERA", "PRIME", "PRIMF", "GCD", "BC",
  "PN", "AVG", "CEIL", "FLOOR", "FOR", "WHILE", "IF", "ELSE", "OR", "INC",
  "DEC", "AND", "EXIT", "BIN", "'+'", "'-'", "'*'", "'/'", "'^'", "'!'",
  "'('", "')'", "','", "'\\n'", "'='", "$accept", "startProgram", "op",
  "block", "cond", "scond", "nid", "logop", "relop", "declaration", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300,   301,    43,    45,    42,
      47,    94,    33,    40,    41,    44,    10,    61
};
# endif

#define YYPACT_NINF (-47)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     129,   -47,     4,   -46,   -28,    -5,     9,    10,    11,    14,
      15,    24,    26,    27,    30,    32,   -47,    35,   169,   169,
      89,    20,   -47,     7,   -47,   -47,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   169,    -1,    -1,
     169,    -3,   369,    56,   -47,    34,   -47,   169,   169,   169,
     169,   169,   169,   -47,   -47,   169,   169,   169,   169,   169,
     -47,   354,   198,   211,    23,    96,   224,   237,   250,   136,
     159,   263,   276,   -47,   -47,     6,   -35,   387,    37,   176,
     -47,   -47,   354,   354,   354,   354,   354,   354,   365,   369,
       1,   -41,    42,   -47,   -47,   169,   169,   -47,   -47,   -47,
     169,   169,   -47,   -47,   129,   -47,   -47,    -1,   -47,   -47,
     -47,   -47,   -47,   -47,    -1,   129,   169,   187,   289,   302,
     315,    41,   -47,   -47,   -32,   328,   169,   -47,   -47,   -47,
     -47,   129,   -47,   -47,   341,    45,   -47,   -47
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,     0,     0,     0,
       0,     0,    12,     4,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    37,     0,     1,     0,     2,     0,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
      36,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    21,    20,     0,    17,     0,     0,     0,
      30,     3,     6,     7,     8,     9,    10,    11,    31,    32,
      33,    34,    35,    48,    44,     0,     0,    51,    54,    55,
       0,     0,    49,    50,     0,    23,    22,     0,    27,    28,
      25,    24,    26,    29,     0,     0,     0,     0,     0,     0,
       0,     0,    18,    19,     0,     0,     0,    45,    46,    47,
      14,     0,    15,    52,     0,     0,    53,    16
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -47,   -47,   -20,   -47,   -38,   -47,     0,   -47,   -47,   -14
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    20,    21,    22,    75,    76,    77,   107,   114,    23
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    78,    73,    74,    42,    43,   105,    27,   131,   106,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   132,    28,    79,    47,    48,    49,
      50,    51,    52,    82,    83,    84,    85,    86,    87,    24,
      25,    88,    89,    90,    91,    92,    24,    25,    29,    53,
      54,    58,    59,    60,    55,    56,    57,    58,    59,    60,
     104,    26,    30,    31,    32,    53,    54,    33,    34,   122,
      55,    56,    57,    58,    59,    60,    46,    35,    95,    36,
      37,   117,   118,    38,   121,    39,   119,   120,    40,    44,
      81,   115,     1,     2,    60,   124,     3,   130,    53,    54,
       4,   137,   125,    55,    56,    57,    58,    59,    60,     0,
      80,   135,   134,     0,   123,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    12,    13,     0,    14,    15,     0,
       0,     0,     1,     2,    16,    17,     3,    18,    53,    54,
       4,     0,    19,    55,    56,    57,    58,    59,    60,     0,
       0,    96,     0,     0,     0,     5,     6,     7,     8,     9,
      10,     0,     0,    11,    12,    13,     0,    14,    15,     0,
       0,     0,     1,    41,    16,    17,     3,    18,    53,    54,
       4,     0,    19,    55,    56,    57,    58,    59,    60,     0,
       0,   100,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    53,    54,    11,    12,    13,    55,    56,    57,    58,
      59,    60,     0,     0,   101,    17,     0,    18,    53,    54,
       0,     0,    19,    55,    56,    57,    58,    59,    60,    53,
      54,   116,     0,     0,    55,    56,    57,    58,    59,    60,
      53,    54,   126,     0,     0,    55,    56,    57,    58,    59,
      60,     0,    93,    53,    54,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,    94,    53,    54,     0,     0,
       0,    55,    56,    57,    58,    59,    60,     0,    97,    53,
      54,     0,     0,     0,    55,    56,    57,    58,    59,    60,
       0,    98,    53,    54,     0,     0,     0,    55,    56,    57,
      58,    59,    60,     0,    99,    53,    54,     0,     0,     0,
      55,    56,    57,    58,    59,    60,     0,   102,    53,    54,
       0,     0,     0,    55,    56,    57,    58,    59,    60,     0,
     103,    53,    54,     0,     0,     0,    55,    56,    57,    58,
      59,    60,     0,   127,    53,    54,     0,     0,     0,    55,
      56,    57,    58,    59,    60,     0,   128,    53,    54,     0,
       0,     0,    55,    56,    57,    58,    59,    60,     0,   129,
      53,    54,     0,     0,     0,    55,    56,    57,    58,    59,
      60,     0,   133,    53,    54,     0,     0,     0,    55,    56,
      57,    58,    59,    60,     0,   136,    53,    54,     0,     0,
       0,    55,    56,    57,    58,    59,    60,   108,   109,   110,
     111,   112,   113,    56,    57,    58,    59,    60,    57,    58,
      59,    60
};

static const yytype_int16 yycheck[] =
{
      20,    39,     3,     4,    18,    19,    41,    53,    40,    44,
      51,    52,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    56,    53,    40,    20,    21,    22,
      23,    24,    25,    47,    48,    49,    50,    51,    52,    42,
      43,    55,    56,    57,    58,    59,    42,    43,    53,    42,
      43,    50,    51,    52,    47,    48,    49,    50,    51,    52,
      54,    57,    53,    53,    53,    42,    43,    53,    53,   107,
      47,    48,    49,    50,    51,    52,    56,    53,    55,    53,
      53,    95,    96,    53,   104,    53,   100,   101,    53,     0,
      56,    54,     3,     4,    52,   115,     7,    56,    42,    43,
      11,    56,   116,    47,    48,    49,    50,    51,    52,    -1,
      54,   131,   126,    -1,   114,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    -1,     3,     4,    45,    46,     7,    48,    42,    43,
      11,    -1,    53,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      -1,    -1,     3,     4,    45,    46,     7,    48,    42,    43,
      11,    -1,    53,    47,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    42,    43,    34,    35,    36,    47,    48,    49,    50,
      51,    52,    -1,    -1,    55,    46,    -1,    48,    42,    43,
      -1,    -1,    53,    47,    48,    49,    50,    51,    52,    42,
      43,    55,    -1,    -1,    47,    48,    49,    50,    51,    52,
      42,    43,    55,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    54,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    54,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    -1,    54,    42,
      43,    -1,    -1,    -1,    47,    48,    49,    50,    51,    52,
      -1,    54,    42,    43,    -1,    -1,    -1,    47,    48,    49,
      50,    51,    52,    -1,    54,    42,    43,    -1,    -1,    -1,
      47,    48,    49,    50,    51,    52,    -1,    54,    42,    43,
      -1,    -1,    -1,    47,    48,    49,    50,    51,    52,    -1,
      54,    42,    43,    -1,    -1,    -1,    47,    48,    49,    50,
      51,    52,    -1,    54,    42,    43,    -1,    -1,    -1,    47,
      48,    49,    50,    51,    52,    -1,    54,    42,    43,    -1,
      -1,    -1,    47,    48,    49,    50,    51,    52,    -1,    54,
      42,    43,    -1,    -1,    -1,    47,    48,    49,    50,    51,
      52,    -1,    54,    42,    43,    -1,    -1,    -1,    47,    48,
      49,    50,    51,    52,    -1,    54,    42,    43,    -1,    -1,
      -1,    47,    48,    49,    50,    51,    52,    20,    21,    22,
      23,    24,    25,    48,    49,    50,    51,    52,    49,    50,
      51,    52
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     7,    11,    26,    27,    28,    29,    30,
      31,    34,    35,    36,    38,    39,    45,    46,    48,    53,
      59,    60,    61,    67,    42,    43,    57,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,    53,
      53,     4,    67,    67,     0,    60,    56,    20,    21,    22,
      23,    24,    25,    42,    43,    47,    48,    49,    50,    51,
      52,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,     3,     4,    62,    63,    64,    62,    67,
      54,    56,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    54,    54,    55,    55,    54,    54,    54,
      55,    55,    54,    54,    54,    41,    44,    65,    20,    21,
      22,    23,    24,    25,    66,    54,    55,    67,    67,    67,
      67,    60,    62,    64,    60,    67,    55,    54,    54,    54,
      56,    40,    56,    54,    67,    60,    54,    56
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    62,    63,
      64,    64,    65,    65,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     6,     6,     8,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     2,     2,     1,     1,
       2,     2,     2,     2,     4,     6,     6,     6,     4,     4,
       4,     4,     6,     8,     4,     4
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
#line 114 "yacc.y"
                                                                                {printf("%f\n\n", (yyvsp[0].value));}
#line 1576 "y.tab.c"
    break;

  case 5:
#line 115 "yacc.y"
                                            {add_variable((yyvsp[0].value),(yyvsp[-2].lex)); printf("Variable : %s\n\n", (yyvsp[-2].lex));}
#line 1582 "y.tab.c"
    break;

  case 6:
#line 116 "yacc.y"
                                                        {printf("%s", smaller((yyvsp[-2].value), (yyvsp[0].value)) ? "true" : "false");}
#line 1588 "y.tab.c"
    break;

  case 7:
#line 117 "yacc.y"
                                                                                                {printf("%s", greater((yyvsp[-2].value), (yyvsp[0].value)) ? "true" : "false");}
#line 1594 "y.tab.c"
    break;

  case 8:
#line 118 "yacc.y"
                                                                                                {printf("%s", equal((yyvsp[-2].value), (yyvsp[0].value)) ? "true" : "false");}
#line 1600 "y.tab.c"
    break;

  case 9:
#line 119 "yacc.y"
                                                                                {printf("%s", equal((yyvsp[-2].value), (yyvsp[0].value)) ? "false" : "true");}
#line 1606 "y.tab.c"
    break;

  case 10:
#line 120 "yacc.y"
                                                                        {printf("%s", (smaller((yyvsp[-2].value), (yyvsp[0].value)) || equal((yyvsp[-2].value), (yyvsp[0].value))) ? "true" : "false");}
#line 1612 "y.tab.c"
    break;

  case 11:
#line 121 "yacc.y"
                                                                        {printf("%s", (greater((yyvsp[-2].value), (yyvsp[0].value)) || equal((yyvsp[-2].value), (yyvsp[0].value))) ? "true" : "false");}
#line 1618 "y.tab.c"
    break;

  case 13:
#line 123 "yacc.y"
                                                                                {exit(0);}
#line 1624 "y.tab.c"
    break;

  case 14:
#line 126 "yacc.y"
                                                                                { printf("While loop detected.\n"); }
#line 1630 "y.tab.c"
    break;

  case 15:
#line 127 "yacc.y"
                                                                                { printf("IF clause detected.\n"); }
#line 1636 "y.tab.c"
    break;

  case 16:
#line 128 "yacc.y"
                                                                        {printf("IF..ELSE clause detected.\n");}
#line 1642 "y.tab.c"
    break;

  case 30:
#line 154 "yacc.y"
                                                        {(yyval.value) = (yyvsp[-1].value);}
#line 1648 "y.tab.c"
    break;

  case 31:
#line 155 "yacc.y"
                                                        {(yyval.value) = (yyvsp[-2].value) + (yyvsp[0].value);}
#line 1654 "y.tab.c"
    break;

  case 32:
#line 156 "yacc.y"
                                                        {(yyval.value) = (yyvsp[-2].value) + (yyvsp[0].value);}
#line 1660 "y.tab.c"
    break;

  case 33:
#line 157 "yacc.y"
                                                        {(yyval.value) = (yyvsp[-2].value) + (yyvsp[0].value);}
#line 1666 "y.tab.c"
    break;

  case 34:
#line 158 "yacc.y"
                                                        {(yyval.value) = (yyvsp[-2].value) + (yyvsp[0].value);}
#line 1672 "y.tab.c"
    break;

  case 35:
#line 159 "yacc.y"
                                                        {(yyval.value) = pow((yyvsp[-2].value), (yyvsp[0].value));}
#line 1678 "y.tab.c"
    break;

  case 36:
#line 160 "yacc.y"
                                                                                                {(yyval.value) = (int) fac((yyvsp[-1].value));}
#line 1684 "y.tab.c"
    break;

  case 37:
#line 161 "yacc.y"
                                                                                                {(yyval.value) =  - (yyvsp[0].value);}
#line 1690 "y.tab.c"
    break;

  case 38:
#line 162 "yacc.y"
                                                                                                                {(yyval.value) = (yyvsp[0].value);}
#line 1696 "y.tab.c"
    break;

  case 39:
#line 163 "yacc.y"
                                    {(yyval.value) = searchSymbol((yyvsp[0].lex));}
#line 1702 "y.tab.c"
    break;

  case 40:
#line 164 "yacc.y"
                                                                        {add_variable((searchSymbol((yyvsp[-1].lex))+1),(yyvsp[-1].lex)); (yyval.value)= searchSymbol((yyvsp[-1].lex));}
#line 1708 "y.tab.c"
    break;

  case 41:
#line 165 "yacc.y"
                                                                        { add_variable((searchSymbol((yyvsp[-1].lex))-1),(yyvsp[-1].lex)); (yyval.value)= searchSymbol((yyvsp[-1].lex));}
#line 1714 "y.tab.c"
    break;

  case 42:
#line 166 "yacc.y"
                                                                                { (yyval.value) = (yyvsp[-1].value) + 1;}
#line 1720 "y.tab.c"
    break;

  case 43:
#line 167 "yacc.y"
                                                                                { (yyval.value) = (yyvsp[-1].value) - 1;}
#line 1726 "y.tab.c"
    break;

  case 44:
#line 168 "yacc.y"
                                                        {(yyval.value) = (int) fibonacci((yyvsp[-1].value));}
#line 1732 "y.tab.c"
    break;

  case 45:
#line 169 "yacc.y"
                                                                        {(yyval.value) = (int) sigma((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1738 "y.tab.c"
    break;

  case 46:
#line 170 "yacc.y"
                                                                        {(yyval.value) = gcd((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1744 "y.tab.c"
    break;

  case 47:
#line 171 "yacc.y"
                                                                        {(yyval.value) = avg((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1750 "y.tab.c"
    break;

  case 48:
#line 172 "yacc.y"
                                                                        {(yyval.value) = log((yyvsp[-1].value));}
#line 1756 "y.tab.c"
    break;

  case 49:
#line 173 "yacc.y"
                                                                        {(yyval.value) = ceil((yyvsp[-1].value));}
#line 1762 "y.tab.c"
    break;

  case 50:
#line 174 "yacc.y"
                                                                        {(yyval.value) = floor((yyvsp[-1].value));}
#line 1768 "y.tab.c"
    break;

  case 51:
#line 175 "yacc.y"
                                                                        {(yyval.value) = eratosthenes((yyvsp[-1].value));}
#line 1774 "y.tab.c"
    break;

  case 52:
#line 176 "yacc.y"
                                                                        {(yyval.value) = (int) binomial((yyvsp[-3].value),(yyvsp[-1].value));}
#line 1780 "y.tab.c"
    break;

  case 53:
#line 177 "yacc.y"
                                                                           {(yyval.value) = (int) randint((yyvsp[-5].value),(yyvsp[-3].value),(yyvsp[-1].value));}
#line 1786 "y.tab.c"
    break;

  case 54:
#line 178 "yacc.y"
                                            {(yyval.value) = (int) primeNums((yyvsp[-1].value));}
#line 1792 "y.tab.c"
    break;

  case 55:
#line 179 "yacc.y"
                                            {(yyval.value) = (int) primeFactors((yyvsp[-1].value));}
#line 1798 "y.tab.c"
    break;


#line 1802 "y.tab.c"

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
#line 182 "yacc.y"

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

bool smaller(float a, float b)
{
	bool ret = a < b;
	return ret;
}

bool greater(float a, float b)
{
	bool ret = a > b;
	return ret;
}

bool equal(float a, float b)
{
	bool ret = a == b;
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
      if(third!=n){
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
	return (x+n)/2;
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
      		printf("%f\n",(float) result);
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
         printf("input must be greater than 0");
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
                    printf("%f\n",(float) i);
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
        printf("%f\n", 2.0);
        n = n/2;
    }

    // n must be odd at this point.  So we can skip
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            printf("%f\n", (float) i);
            n = n/i;
        }
    }

    // This condition is to handle the case when n
    // is a prime number greater than 2
    if (n > 2)
        return n;
}

void add_variable(float val, char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
        {
          st->value = val;
      		return;
        }
    }

  /* variable not there, allocate a new entry and link it on the list */

	st = (struct symbolTable *) malloc(sizeof(struct symbolTable));
	st->next = table;

  /* have to copy the variable itself as well */

	st->name = (char *) malloc(strlen(name)+1);
	strcpy(st->name, name);
	st->value = val;
	table = st;
}

float searchSymbol(char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
            return st->value;
    }
    return 0;
}
