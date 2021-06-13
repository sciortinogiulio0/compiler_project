/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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
/* Line 1529 of yacc.c.  */
#line 155 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

