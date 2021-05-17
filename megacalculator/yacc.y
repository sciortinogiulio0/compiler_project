%{
	#include<stdio.h>
	#include<math.h>
	#include<string.h>
	#include<stdbool.h>
	#include<stdlib.h>
	
	int fibonacci(int n);
	int binomial(int n, int k);
    	char* Eratosthenes(int n);
    	int gcd(int m, int n);
    	char* primeFactors(int n);
    	char* primeNums(int n);
    	int sigma(int x, int n);
    	float avg (float x, float n);
    	int ceil (float n);
    	int floor (float n);
    	bool smaller(float a, float b);
    	bool greater(float a, float b);
    	bool equal(float a, float b);
    	int randint(int from, int to);
    	
    	void yyerror(char *s);
    	int yylex();
%}

%union {
	char* lex;
	float value;
}

%token <value> VALUE
%token POW
%token ROOT
%token LOG
%token COS
%token SIN
%token TAN
%token FIB
%token FACT
%token BASE
%token SUM
%token PROD
%token ABS
%token MOD
%token NEP
%token PI
%token SMALLER
%token GREATER
%token EQUAL
%token DIFFERENT
%token SMALLEREQUAL
%token GREATEREQUAL
%token RAND
%token SIGMA
%token ERA
%token PRIMF
%token GCD
%token BC
%token PN
%token AVG
%token CEIL
%token FLOOR
%token EXIT

%type <value> declaration

%left '+'
%left '-'
%left '*'
%left '/'
%left '^'
%left '!'
%left '('
%left ')'
%left ','

%start startProgram

%%

startProgram:	op '\n' 
		| startProgram op '\n'
		;
		
op:		declaration							{printf("%f", $1);}
		| declaration SMALLER declaration 				{printf("%s", smaller($1, $3) ? "true" : "false");}
		| declaration GREATER declaration				{printf("%s", greater($1, $3) ? "true" : "false");}
		| declaration EQUAL declaration				{printf("%s", equal($1, $3) ? "true" : "false");}
		| declaration DIFFERENT declaration				{printf("%s", equal($1, $3) ? "false" : "true");}
		| declaration SMALLEREQUAL declaration			{printf("%s", (smaller($1, $3) || equal($1, $3)) ? "true" : "false");}
		| declaration GREATEREQUAL declaration			{printf("%s", (greater($1, $3) || equal($1, $3)) ? "true" : "false");}
		| EXIT								{exit(0);}
		;

declaration:	'(' declaration ')' 			{$$ = $2;}
		| declaration '+' declaration		{$$ = $1 + $3;}
		| declaration '-' declaration		{$$ = $1 + $3;}
		| declaration '*' declaration		{$$ = $1 + $3;}
		| declaration '/' declaration		{$$ = $1 + $3;}
		| declaration '^' declaration		{$$ = pow($1, $3);}
		| declaration '!'			{$$ = fac($1);}
		| '-' declaration			{$$ =  - $2;}
		| VALUE				{$$ = $1;}
		;

%%
int yywrap()
{
	return 1;
}

#include "lex.yy.c"
void main()
{
    printf("\n\n\nDefinetely do not insert data (jk, do it)\n");
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
