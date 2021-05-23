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
    EXIT = 292,
    BIN = 293
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
#define EXIT 292
#define BIN 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 41 "yacc.y"

	char* lex;
	float value;

#line 138 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
