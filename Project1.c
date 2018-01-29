#include <stdio.h>
#include "Project1.h"

extern int yylex();
extern int yylineo;
extern char* yytext;

int main(void)
{
	int nameToken, valueToken;
	nameToken = yylex();
	while(nameToken){
		if (nameToken == 1){
			printf("Statement Token: %s \n", yytext);
		}
		else if (nameToken == 2){
			printf("Comparison Token: %s \n", yytext);
		}
		else if (nameToken == 3){
			printf("Operator Token: %s \n", yytext);
		}
		else if (nameToken == 4){
			printf("Type Token: %s \n", yytext);
		}
		else if (nameToken == 5){
			printf("Identifier Token: %s \n", yytext);
		}
		else if (nameToken == 6){
			printf("Integer Token: %s \n", yytext);
		}
		else if (nameToken == 7){
			printf("Float  Token: %s\n ", yytext);
		}
		else if (nameToken == 8){
			printf("Left Brace Token: %s\n ", yytext);
		}
		else if (nameToken == 9){
			printf("Right Brace Token: %s\n ", yytext);
		}
		else if (nameToken == 10){
			printf("Left Parenthesis Token: %s\n ", yytext);
		}
		else if (nameToken == 11){
			printf("Right Parenthesis Token: %s\n ", yytext);
		}
		else if (nameToken == 12){
			printf("Next line Token: %s\n ", yytext);
		}
		else{
			printf("Unrecogonized Token: %s \n", yytext);
		}
		nameToken = yylex();
	}
	return 0;
}