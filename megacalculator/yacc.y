%{
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
    	void add_type(char *type, char *name);
    	int randint(int from, int to,int count);
	void add_variable(float val, char *name);
	float searchSymbol (char *name);

        struct symbolTable
        {
            char *name;
            float value;
            char *type;
            struct symbolTable *next;

        };

        struct symbolTable *table;

	extern void *malloc();
	void yyerror(char *s);
	int yylex();

%}

%union {
	char* lex;
	float value;
}

%token <value> VALUE
%token <lex> ID
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
%token PRIME
%token PRIMF
%token GCD
%token BC
%token PN
%token AVG
%token CEIL
%token FLOOR
%token FOR
%token WHILE
%token IF
%token ELSE
%token OR
%token INC
%token DEC
%token AND
%token EXIT
%token BIN

%token FLOAT
%token INT
%token STRING

%type <lex> type
%type <lex> string
%type <value> declaration
%nonassoc INT FLOAT STRING
%nonassoc ID
%right INC DEC
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

op:		declaration							{printf("%f\n\n", $1);}
		| type {printf("type: %s\n\n", $1);}
		| type ID '=' declaration        				{add_variable($4,$2); printf("Variable : %s %s\n\n", $1, $2); add_type($1,$2);}
    		| declaration SMALLER declaration 				{printf("%s", smaller($1, $3) ? "true" : "false");}
		| declaration GREATER declaration				{printf("%s", greater($1, $3) ? "true" : "false");}
		| declaration EQUAL declaration				{printf("%s", equal($1, $3) ? "true" : "false");}
		| declaration DIFFERENT declaration				{printf("%s", equal($1, $3) ? "false" : "true");}
		| declaration SMALLEREQUAL declaration			{printf("%s", (smaller($1, $3) || equal($1, $3)) ? "true" : "false");}
		| declaration GREATEREQUAL declaration			{printf("%s", (greater($1, $3) || equal($1, $3)) ? "true" : "false");}
		| block
		| EXIT								{exit(0);}
		;

block:	WHILE '(' cond ')' op	'\n'						{ printf("While loop detected.\n"); }
		 | IF '(' cond ')' op '\n'					{ printf("IF clause detected.\n"); }
		 | IF '(' cond ')' op ELSE op '\n'				{ printf("IF..ELSE clause detected.\n");}
		 ;

type: 	INT {$$ = (char *) "int";}
	| FLOAT {$$ = (char *) "float";}
	| STRING {$$ = (char *) "string";}
	;

cond: scond
	| scond logop cond
	;

scond: nid relop nid
	;

nid: ID
	| VALUE
	;

logop: AND
	| OR
	;

relop: DIFFERENT
	| EQUAL
    	| SMALLEREQUAL
	| SMALLER
	| GREATER
	| GREATEREQUAL
	;

var: declaration
	| string
	;

string:	'*' ID '*' {$$=$2;}
		;

declaration:	'(' declaration ')' 			{$$ = $2;}
		| declaration '+' declaration		{$$ = $1 + $3;}
		| declaration '-' declaration		{$$ = $1 + $3;}
		| declaration '*' declaration		{$$ = $1 + $3;}
		| declaration '/' declaration		{$$ = $1 + $3;}
		| declaration '^' declaration		{$$ = pow($1, $3);}
		| declaration '!'								{$$ = (int) fac($1);}
		| '-' declaration								{$$ =  - $2;}
    		| VALUE				{$$ = $1;}
    		| ID                            {$$ = searchSymbol($1);}
		| ID INC						{add_variable((searchSymbol($1)+1),$1); $$= searchSymbol($1);}
		| ID DEC						{ add_variable((searchSymbol($1)-1),$1); $$= searchSymbol($1);}
		| declaration INC			 			{ $$ = $1 + 1;}
		| declaration DEC			 			{ $$ = $1 - 1;}
		| FIB '(' declaration ')'		{$$ = (int) fibonacci($3);}
		| SIGMA '(' declaration ',' declaration ')'		{$$ = (int) sigma($3,$5);}
		| GCD '(' declaration ',' declaration ')'		{$$ = gcd($3,$5);}
		| AVG '(' declaration ',' declaration ')'		{$$ = avg($3,$5);}
		| LOG '(' declaration ')'				{$$ = log($3);}
		| CEIL '(' declaration ')'				{$$ = ceil($3);}
		| FLOOR '(' declaration ')'				{$$ = floor($3);}
		| ERA '(' declaration ')'				{$$ = eratosthenes($3);}
		| BIN '(' declaration ',' declaration ')'		{$$ = (int) binomial($3,$5);}
		| RAND '(' declaration ',' declaration ',' declaration ')' {$$ = (int) randint($3,$5,$7);}
		| PRIME '(' declaration ')' {$$ = (int) primeNums($3);}
		| PRIMF '(' declaration ')' {$$ = (int) primeFactors($3);}
		;

%%
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

void add_type(char *type, char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
        {
          st->type = (char *) malloc(strlen(type)+1);
      		return;
        }
    }

}
