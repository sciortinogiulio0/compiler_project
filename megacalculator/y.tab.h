/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    POW = 259,
    ROOT = 260,
    LOG = 261,
    COS = 262,
    SIN = 263,
    TAN = 264,
    FIB = 265,
    FACT = 266,
    BASE = 267,
    SUM = 268,
    PROD = 269,
    ABS = 270,
    MOD = 271,
    NEP = 272,
    PI = 273,
    SMALLER = 274,
    GREATER = 275,
    EQUAL = 276,
    DIFFERENT = 277,
    SMALLEREQUAL = 278,
    GREATEREQUAL = 279,
    RAND = 280,
    SIGMA = 281,
    ERA = 282,
    PRIME = 283,
    PRIMF = 284,
    GCD = 285,
    BC = 286,
    PN = 287,
    AVG = 288,
    CEIL = 289,
    FLOOR = 290,
    EXIT = 291,
    BIN = 292
  };
#endif
/* Tokens.  */
#define VALUE 258
#define POW 259
#define ROOT 260
#define LOG 261
#define COS 262
#define SIN 263
#define TAN 264
#define FIB 265
#define FACT 266
#define BASE 267
#define SUM 268
#define PROD 269
#define ABS 270
#define MOD 271
#define NEP 272
#define PI 273
#define SMALLER 274
#define GREATER 275
#define EQUAL 276
#define DIFFERENT 277
#define SMALLEREQUAL 278
#define GREATEREQUAL 279
#define RAND 280
#define SIGMA 281
#define ERA 282
#define PRIME 283
#define PRIMF 284
#define GCD 285
#define BC 286
#define PN 287
#define AVG 288
#define CEIL 289
#define FLOOR 290
#define EXIT 291
#define BIN 292

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "yacc.y"

	char* lex;
	float value;

#line 136 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
