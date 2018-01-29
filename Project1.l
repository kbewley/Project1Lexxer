%{
#include "Project1.h"
%}

%optionyylineno
DIGIT [0-9]


%%

"int"											return TYPE;
"char" 											return TYPE;
"+"												return OPERATOR;
"-"												return OPERATOR;
"*"												return OPERATOR;
"/"												return OPERATOR;
"="												return OPERATOR;
">"												return COMPARISON;
">="											return COMPARISON;
"<"												return COMPARISON;
"<="											return COMPARISON;
"=="											return COMPARISON;
"if"|"then"|"while"|"write"|"writeln" 			return STATEMENT;
[a-zA-Z][_a-zA-Z0-9]*							return IDENTIFIER;
{DIGIT}+										return INTEGER;
{DIGIT}+"."{DIGIT}*								return FLOAT;
";"												return NEXTLINE;
"{"                 							return LEFTBRACE;
"}"                								return RIGHTBRACE;
"("                								return LEFTPAR;
")"                								return RIGHTPAR;
[ \t\n] 										; 	
.												printf("Character not within the language\n");
%%

int yywrap(void)
{
return 1;
}




