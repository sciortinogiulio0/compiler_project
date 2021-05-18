%option noyywrap
%{
    #include<stdio.h>
    #include<string.h>
    void error(char *s);
%}

DIGIT	 [0-9]
VALUE    {DIGIT}+(\.{DIGIT}+)?

%%

"+"			{return '+';}
"-"			{return '-';}
"*"			{return '*';}
"/"			{return '/';}
"("			{return '(';}
")"			{return ')';}
"^"			{return '^';}
"!"			{return '!';}
\n			{return '\n';}

[ ]			{}

{VALUE} 		{yylval.value = atof(yytext); return VALUE;}

\<			{return SMALLER;}
\>			{return GREATER;}
\=\=			{return EQUAL;}
\!\=			{return DIFFERENT;}
\<\=			{return SMALLEREQUAL;}
\>\=			{return GREATEREQUAL;}

EXIT			{return EXIT;}

%%
void yyerror(char *s)
{
	printf("\nError: %s\n", s);
}
