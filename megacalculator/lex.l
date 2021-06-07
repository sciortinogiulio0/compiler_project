%option noyywrap
%{
    #include<stdio.h>
    #include<string.h>
    void error(char *s);
%}

DIGIT	 [0-9]
VALUE    {DIGIT}+(\.{DIGIT}+)?

LETTER   [a-zA-Z]
ID       {LETTER}({LETTER}|{DIGIT})*

%%

[ ]			{}

{VALUE} 		{yylval.value = atof(yytext); return VALUE;}

FIB			{return FIB;}
SIGMA			{return SIGMA;}
LOG			{return LOG;}
AVG			{return AVG;}
CEIL			{return CEIL;}
FLOOR			{return FLOOR;}
RAND			{return RAND;}
BIN			{return BIN;}
GCD			{return GCD;}
PRIME			{return PRIME;}
PRIMF			{return PRIMF;}
ERA			{return ERA;}
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

INT						{return INT;}
FLOAT							{return FLOAT;}
STRING							{return STRING;}

EXIT			{return EXIT;}

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
"="            {return '=';}
\n			{return '\n';}


%%
void yyerror(char *s)
{
	printf("\nError: %s\n", s);
}
