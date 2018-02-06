%{
#include "Project1.h"
%}

%optionyylineno
DIGIT [0-9]


%%

"int"											return INT_TYPE;
"char" 											return CHAR_TYPE;
"+"												return ADD_OPERATOR;
"-"												return SUB_OPERATOR;
"*"												return MULTIPLY_OPERATOR;
"/"												return DIVIDE_OPERATOR;
"="												return EQUALS_OPERATOR;
","												return COMMA_OPERATOR;
">"												return GREATER_COMPARISON;
">="											return GREATEREQ_COMPARISON;
"<"												return LESS_COMPARISON;
"<="											return LESSEQ_COMPARISON;
"=="											return EQ_COMPARISON;
"if"											return IF_STATEMENT;
"then"											return THEN_STATEMENT;
"while"											return WHILE_STATEMENT;
"write"											return WRITE_STATEMENT;
"writeln" 										return WRITELN_STATEMENT;
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




