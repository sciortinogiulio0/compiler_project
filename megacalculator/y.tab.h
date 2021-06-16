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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 53 "yacc.y"
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
#line 138 "y.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

