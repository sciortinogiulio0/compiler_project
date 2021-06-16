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

//terminal symbols
%token <intVal> INTEGER
%token <floatVal> REAL
%token <lex> ID
%token POW
%token ROOT
%token LOGN
%token FIB
%token FACT
%token SUM
%token PROD
%token ABS
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
//end of terminal symbols

%type <expr> expression

//precedence rules
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

//starting symbol
%start startProgram

%%

/* here we defined the grammar productions*/

startProgram:	op '\n'
		| startProgram op '\n'
		;
							//When an expression is found by the compiler, it is printed out accordingly to the function printExpression
op:		expression				{printExpression($1.v,$1.type);}
		| ID '=' expression			{ add_variable($3.v,$1,$3.type);}
    		| expression SMALLER expression 				{printf("%s", smaller($1.v, $3.v) ? "true" : "false");}
		| expression GREATER expression				{printf("%s", greater($1.v, $3.v) ? "true" : "false");}
		| expression EQUAL expression				{printf("%s", equal($1.v, $3.v) ? "true" : "false");}
		| expression DIFFERENT expression				{printf("%s", equal($1.v, $3.v) ? "false" : "true");}
		| expression SMALLEREQUAL expression			{printf("%s", (smaller($1.v, $3.v) || equal($1.v, $3.v)) ? "true" : "false");}
		| expression GREATEREQUAL expression			{printf("%s", (greater($1.v, $3.v) || equal($1.v, $3.v)) ? "true" : "false");}
		| block
		| EXIT								{exit(0);}
		;

block:	WHILE '(' cond ')' op	'\n'						{ printf("While loop detected.\n"); }
		 | IF '(' cond ')' op '\n'					{ printf("IF clause detected.\n"); }
		 | IF '(' cond ')' op ELSE op '\n'				{ printf("IF..ELSE clause detected.\n");}
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

							//$$.type is a float. It carries a float value inside the Number structure
    		| PI                            	{$$.type='f';$$.v.f = M_PI;}
    		
    							//v is of type Number, and has as a value, the Number v in the struct SymbolTable associated to variable 
    							//recognized from the input (ID)
    		| ID                            	{$$.v = searchSymbol($1); $$.type=get_type($1);}
    							
							//$$.type is a float. It carries a float value inside the Number structure
		| REAL					{$$.v.f = $1; $$.type = 'f';}
							//$$.type is a int. It carries a integer value inside the Number structure
		| INTEGER				{$$.v.i = $1; $$.type = 'i';}
		
		//typeConsensus is used to "agree" on the type of the expression. See the declaration for further info
		| expression '+' expression		{$$.type=typeConsensus($1.type,$3.type);
								//the float value is updated whether result is float or int,
								//but only the type of the correct value will be printed out accordingly to $$.type
								//(see function printExpression() )
								$$.v.f = $1.v.f+$3.v.f;
								$$.v.i = $1.v.i+$3.v.i;
								//If only one input is an int, the result will be done performing a cast to float on the int value
								//A warning will be shown in this case (see function typeConsensus() )
								if($1.type=='i'){$$.v.f = (float) $1.v.i+$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f+(float)$3.v.i;}
								}
							// operations '-' and '*' work the same as '+'
		| expression '-' expression		{$$.type=typeConsensus($1.type,$3.type);
								$$.v.f = $1.v.f+$3.v.f;
								$$.v.i = $1.v.i-$3.v.i;
								if($1.type=='i'){$$.v.f = (float) $1.v.i-$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f-(float)$3.v.i;}}
								
		| expression '*' expression		{$$.type=typeConsensus($1.type,$3.type);
								$$.v.f = $1.v.f*$3.v.f;
								$$.v.i = $1.v.i*$3.v.i;
								if($1.type=='i'){$$.v.f = (float) $1.v.i*$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f*(float)$3.v.i;}}
								
							//also '/' works the same as '+' but performs a check on the second input to avoid segmentation fault
		| expression '/' expression		{$$.type=typeConsensus($1.type,$3.type);
								if($$.type=='i'&&$3.v.i!=0)
									{$$.v.i = $1.v.i/$3.v.i;}
								//only if both inputs are integer AND the second one is 0, an error is shown
								else if($$.type=='i'&&$3.v.i==0)
									{printf("Error: division by zero! ");
									//if the first input is != 0 the result is infinite, otherwise NaN
									if($1.v.i!=0){printf("Result is infinite! ");}$$.type='f'; $$.v.f=(float)$1.v.i/(float)$3.v.i;}
								$$.v.f = $1.v.f/$3.v.f;
								if($1.type=='i'){$$.v.f = (float) $1.v.i/$3.v.f;}
								if($3.type=='i'){$$.v.f = $1.v.f/(float)$3.v.i;}}
							
		| expression '^' expression		{if(typeConsensus($3.type,$3.type)=='f') printf("Wrong input. Megacalculator only accepts integers");
							 else $$.v.i=pow($1.v.i,$3.v.i); $$.v.f=pow($1.v.f,$3.v.i);$$.type=typeConsensus($1.type,$3.type);}
		
		| expression '!'			{if(typeConsensus($1.type,$1.type)=='f') printf("Wrong input. Factorial only accepts integers"); 
							else {$$.type=typeConsensus($1.type,$1.type); $$.v.i = (int) fac($1.v.i);$$.v.f = (int) fac($1.v.f);}}
		| '-' expression			{$$.type=typeConsensus($2.type,$2.type);$$.v.f = -$2.v.f;$$.v.i = -$2.v.i;}
		
		
		//the symbol ID is searched in the symbolTable and value is incremented
		| ID INC	{if(get_type($1) == 'i'){struct Number n; n.i=searchSymbol($1).i+1; add_variable(n,$1,get_type($1));}
                                    else if(get_type($1) == 'f'){struct Number n; n.f=searchSymbol($1).f+1; add_variable(n,$1,get_type($1));}
                                    struct Expr expr; expr.v=searchSymbol($1);expr.type=get_type($1); $$=expr;}
                                    
		| ID DEC	{if(get_type($1) == 'i'){struct Number n; n.i=searchSymbol($1).i-1; add_variable(n,$1,get_type($1));}
                                    else if(get_type($1) == 'f'){struct Number n; n.f=searchSymbol($1).f-1; add_variable(n,$1,get_type($1));}
                                    struct Expr expr; expr.v=searchSymbol($1);expr.type=get_type($1); $$=expr;}
                                    
		| expression INC			{$$.type =typeConsensus($1.type,$1.type);
                                                if($1.type == 'i'){ ($1.v.i + 1);}
                                                else if($1.type == 'f'){($1.v.f + 1);}}
		| expression DEC			{$$.type =typeConsensus($1.type,$1.type);
                                                if($1.type == 'i'){ ($1.v.i - 1);}
                                                else if($1.type == 'f'){($1.v.f - 1);}}
                                                
	 	//all function from next line on have the same basic principle. The only relevant difference from one another is in the type checking
		| ABS '(' expression ')'		{$$.type=typeConsensus($3.type,$3.type);$$.v.f = abs($3.v.f);$$.v.i = abs($3.v.i);}

		| FIB '(' expression ')'        {$$.type=typeConsensus($3.type,$3.type);
                                                if($3.type=='f') printf("Please insert an integer and not a float for the fibonacci \n"); 
                                                else $$.v.i = (int) fibonacci($3.v.i);}
		| SIGMA '(' expression ',' expression ')'		{$$.type=typeConsensus($3.type,$5.type);
                                                				if($$.type=='f') printf("Please insert an integer and not a float for the Sigma \n"); 
                                                				else $$.v.i = (int) sigma($3.v.i,$5.v.i);}
		| GCD '(' expression ',' expression ')'		{$$.type=typeConsensus($3.type,$5.type);
                                                				if($$.type=='f') printf("Please insert an integer and not a float for the GCD \n"); 
                                                				else $$.v.i = (int) gcd($3.v.i,$5.v.i);}
		| AVG '(' expression ',' expression ')'		{$$.type=typeConsensus($3.type,$5.type);
                                                				if($$.type=='f'){
                                                				if($3.type=='i'){$$.v.f = avg((float)$3.v.i,$5.v.f);}
                                                				else if($5.type=='i'){$$.v.f = avg($3.v.f,(float)$5.v.i);} 
                                                				else $$.v.f = avg($3.v.f,$5.v.f);}
                                                				else $$.v.i = (int) avg($3.v.i,$5.v.i);}
                                                				
		| LOGN '(' expression ')'				{$$.type='f'; if(typeConsensus($3.type,$3.type)=='i') {$$.v.f=logf((float)$3.v.i);} 
                					else{$$.v.f=sqrtf($3.v.f);} }
						                        
		| CEIL '(' expression ')'				{$$.type=$3.type; $$.v.f = ceil($3.v.f);$$.v.i = $3.v.i;}
		| FLOOR '(' expression ')'				{$$.type=$3.type; $$.v.f = floor($3.v.f);$$.v.i = $3.v.i;}
		
		| ERA '(' expression ')'				{$$.type=typeConsensus($3.type,$3.type);
                                                if($3.type=='f')printf("Please insert an integer and not a float for the erathostenes function \n");
                                               else  $$.v.i = (int) eratosthenes($3.v.i); }
		| BIN '(' expression ',' expression ')'		{$$.type=typeConsensus($3.type,$5.type);
                                                if($$.type=='f')printf("Please insert an integer and not a float for the binomial function \n");
                                               else  $$.v.i = (int) binomial($3.v.i,$5.v.i); }
                                               
		| RAND '(' expression ',' expression ',' expression ')' {$$.type=typeConsensus($3.type,$5.type);$$.type=typeConsensus($3.type,$7.type);
                                                if($$.type=='f')printf("Please insert an integer and not a float for the random function \n");
                                               else  $$.v.i = (int) randint($3.v.i,$5.v.i,$7.v.i); }
		
		| PRIME '(' expression ')' {$$.type=typeConsensus($3.type,$3.type);
                                                if($3.type=='f')printf("Please insert an integer and not a float for the prime numbers function \n");
                                               else  $$.v.i = (int) primeNums($3.v.i);}

		| PRIMF '(' expression ')'         {$$.type=typeConsensus($3.type,$3.type);
                                                      if($3.type=='f') printf("Please insert an integer and not a float for the prime factorization function"); 
                                                      else $$.v.i = (int) primeFactors($3.v.i);
                                                      }
                                                
                | ROOT '(' expression ')'		{$$.type='f'; if(typeConsensus($3.type,$3.type)=='i') {$$.v.f=sqrtf((float)$3.v.i);} 
                					else{$$.v.f=sqrtf($3.v.f);} }
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
