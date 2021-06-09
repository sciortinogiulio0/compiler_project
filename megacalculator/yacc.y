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
    	
    	bool greater(float a, float b);
    	bool equal(float a, float b);
    	int fac(int n);
    	void add_type(char *type, char *name);
    	int randint(int from, int to,int count);
	void add_variable(float val, char *name);
	float searchSymbol (char *name);
	
	struct Number {
	   int i;
	   float f;
	};

        struct symbolTable
        {
            char *name;
            struct Number v;
            char *type;
            struct symbolTable *next;

        };

        struct symbolTable *table;
	void printExpression(struct Number val, char type);
	bool smaller(struct Number a, struct Number b);
	char typeChecking(char type1, char type2);

	extern void *malloc();
	void yyerror(char *s);
	int yylex();

%}

%union {
	char* lex;
	struct Expr
        {
		struct Number v;
		char type;
	} expr;
	int intVal;
	float floatVal;
	
}

%token <intVal> INTEGER 
%token <floatVal> REAL
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

%token INTEGER
%token FLOAT
%token INT
%token STRING

%type <lex> type
%type <lex> string
%type <expr> expression
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

op:		expression				{printExpression($1.v,$1.type);}
		| type 					{printf("type: %s\n\n", $1);}
		//| type ID '=' expression        				{add_variable($4,$2); printf("Variable : %s %s\n\n", $1, $2); /*add_type($1,$2);*/}
    		| expression SMALLER expression 				{printf("%s", smaller($1.v, $3.v) ? "true" : "false");}
		/*| expression GREATER expression				{printf("%s", greater($1, $3) ? "true" : "false");}
		| expression EQUAL expression				{printf("%s", equal($1, $3) ? "true" : "false");}
		| expression DIFFERENT expression				{printf("%s", equal($1, $3) ? "false" : "true");}
		| expression SMALLEREQUAL expression			{printf("%s", (smaller($1, $3) || equal($1, $3)) ? "true" : "false");}
		| expression GREATEREQUAL expression			{printf("%s", (greater($1, $3) || equal($1, $3)) ? "true" : "false");}*/
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
	| REAL
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

expression:	'(' expression ')' 			{$$ = $2;}
		| expression '+' expression		{$$.type=typeChecking($1.type,$3.type);
								$$.v.f = $1.v.f+$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i+$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f+(float)$3.v.i;}
								$$.v.i = $1.v.i+$3.v.i;}
		| REAL					{$$.v.f = $1; $$.type = 'f';}
		| INTEGER				{$$.v.i = $1; $$.type = 'i';}
		| expression '-' expression		{$$.type=typeChecking($1.type,$3.type);
								$$.v.f = $1.v.f+$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i-$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f-(float)$3.v.i;}
								$$.v.i = $1.v.i-$3.v.i;}
		| expression '*' expression		{$$.type=typeChecking($1.type,$3.type);
								$$.v.f = $1.v.f*$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i*$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f*(float)$3.v.i;}
								$$.v.i = $1.v.i+$3.v.i;}
		| expression '/' expression		{$$.type=typeChecking($1.type,$3.type);
								$$.v.f = $1.v.f/$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i/$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f/(float)$3.v.i;}
								$$.v.i = $1.v.i+$3.v.i;}
		| expression '^' expression		{if(typeChecking($3.type,$3.type)=='f') printf("Wrong exponential input. Megacalculator only accepts ints");
							 else $$=pow((double)$1,(double)$1); $$.type=typeChecking($1.type,$3.type);}
		
		| expression '!'			{$$.type=typeChecking($1.type,$1.type); $$.v.i = fact($1.v.i);}
		/*| '-' expression			{$$.type=typeChecking($1.type,$3.type);
								$$.v.f = $1.v.f+$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i+$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f+(float)$3.v.i;}
								$$.v.i = $1.v.i+$3.v.i;}
    		/*| VALUE				{$$ = $1;}
    		| ID                            {$$ = searchSymbol($1);}
		| ID INC						{add_variable((searchSymbol($1)+1),$1); $$= searchSymbol($1);}
		| ID DEC						{ add_variable((searchSymbol($1)-1),$1); $$= searchSymbol($1);}
		| expression INC			 			{ $$ = $1 + 1;}
		| expression DEC			 			{ $$ = $1 - 1;}
		| FIB '(' expression ')'		{$$ = (int) fibonacci($3);}
		| SIGMA '(' expression ',' expression ')'		{$$ = (int) sigma($3,$5);}
		| GCD '(' expression ',' expression ')'		{$$ = gcd($3,$5);}
		| AVG '(' expression ',' expression ')'		{$$ = avg($3,$5);}
		| LOG '(' expression ')'				{$$ = log($3);}
		| CEIL '(' expression ')'				{$$ = ceil($3);}
		| FLOOR '(' expression ')'				{$$ = floor($3);}
		| ERA '(' expression ')'				{$$ = eratosthenes($3);}
		| BIN '(' expression ',' expression ')'		{$$ = (int) binomial($3,$5);}
		| RAND '(' expression ',' expression ',' expression ')' {$$ = (int) randint($3,$5,$7);}
		| PRIME '(' expression ')' {$$ = (int) primeNums($3);}
		| PRIMF '(' expression ')' {$$ = (int) primeFactors($3);}*/
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

bool smaller(struct Number a, struct Number b)
{
	bool ret = a.i < b.i;
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
          st->v.f = val;
      		return;
        }
    }

  /* variable not there, allocate a new entry and link it on the list */

	st = (struct symbolTable *) malloc(sizeof(struct symbolTable));
	st->next = table;

  /* have to copy the variable itself as well */

	st->name = (char *) malloc(strlen(name)+1);
	strcpy(st->name, name);
	st->v.f = val;
	table = st;
}

float searchSymbol(char *name)
{
  struct symbolTable *st = table;
    for(; st; st=st->next)
    {
        if(strcmp(st->name,name)==0)
            return st->v.f;
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
