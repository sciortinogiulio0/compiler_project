%option noyywrap
%{
    #include<stdio.h>
    #include<string.h>
    void error(char *s);
%}

DIGIT	 [0-9]
INTEGER	 {DIGIT}+
REAL    {DIGIT}+(\.{DIGIT}+)

LETTER   [a-zA-Z]
ID       {LETTER}({LETTER}|{DIGIT})*

%%

[ ]			{}

{REAL} 		{yylval.floatVal= atof(yytext); return REAL;}
{INTEGER} 		{yylval.intVal = atoi(yytext); return INTEGER;}

FIB			{return FIB;}
SIGMA			{return SIGMA;}
LOGN			{return LOGN;}
AVG			{return AVG;}
CEIL			{return CEIL;}
FLOOR			{return FLOOR;}
ROOT			{return ROOT;}
RAND			{return RAND;}
BIN			{return BIN;}
GCD			{return GCD;}
PRIME			{return PRIME;}
PRIMF			{return PRIMF;}
ERA			{return ERA;}
PI			{return PI;}
ABS			{return ABS;}
\+\+ 						{return INC;}
\-\- 						{return DEC;}
\<			{return SMALLER;}
\>			{return GREATER;}
\=\=			{return EQUAL;}
\!\=			{return DIFFERENT;}
\<\=			{return SMALLEREQUAL;}
\>\=			{return GREATEREQUAL;}
FOR							{return FOR;}
WHILE						{return WHILE;}
IF							{return IF;}
ELSE						{return ELSE;}
OR							{return OR;}
AND							{return AND;}

EXIT|exit			{return EXIT;}

{ID}   	        {yylval.lex = strdup(yytext);return ID;}

"+"			{return '+';}
"-"			{return '-';}
"*"			{return '*';}
"/"			{return '/';}
"("			{return '(';}
")"			{return ')';}
"^"			{return '^';}
"!"			{return '!';}
","			{return ',';}
"="            		{return '=';}
\n			{return '\n';}


%%
void yyerror(char *s)
{
	printf("\nError: %s\n", s);
}
