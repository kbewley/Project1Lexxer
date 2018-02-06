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
        switch (nameToken){
            case 1:
                printf("IF_STATEMENT TOKEN: %s \n" , yytext);
                break;
            case 2:
                printf("THEN_STATEMENT TOKEN: %s \n", yytext);
                break;
            case 3:
                printf("WHILE_STATEMENT TOKEN: %s \n", yytext);
                break;
            case 4:
                printf("WRITE_STATEMENT TOKEN: %s \n", yytext);
                break;
            case 5:
                printf("WRITELN_STATEMENT TOKEN: %s \n", yytext);
                break;
            case 6:
                printf("GREATER_COMPARISON TOKEN: %s \n", yytext);
                break;
            case 7:
                printf("GREATEREQ_COMPARISON TOKEN: %s \n", yytext);
                break;
            case 8:
                printf("LESS_COMPARISON TOKEN: %s \n", yytext);
                break;
            case 9:
                printf("LESSEQ_COMPARISON TOKEN: %s \n", yytext);
                break;
            case 10:
                printf("EQ_COMPARISON TOKEN: %s \n", yytext);
                break;
            case 11:
                printf("ADD_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 12:
                printf("SUB_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 13:
                printf("MULTIPLY_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 14:
                printf("DIVIDE_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 15:
                printf("EQUAL_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 16:
                printf("COMMA_OPERATOR TOKEN: %s \n", yytext);
                break;
            case 17:
                printf("INT_TYPE TOKEN: %s \n", yytext);
                break;
            case 18:
                printf("CHAR_TYPE TOKEN: %s \n", yytext);
                break;
            case 19:
                printf("IDENTIFIER TOKEN: %s \n", yytext);
                break;
            case 20:
                printf("INTEGER TOKEN: %s \n", yytext);
                break;
            case 21:
                printf("FLOAT TOKEN: %s \n", yytext);
                break;
            case 22:
                printf("LEFT_BRACE TOKEN: %s \n", yytext);
                break;
            case 23:
                printf("RIGHT_BRACE TOKEN: %s \n", yytext);
                break;
            case 24:
                printf("LEFT_PAR TOKEN: %s \n", yytext);
                break;
            case 25:
                printf("RIGHT_PAR TOKEN: %s \n", yytext);
                break;
            case 26:
                printf("NEXT_LINE TOKEN: %s \n", yytext);
                break;
            default:
                printf("UNRECOGNIZED TOKEN: %s \n", yytext);
                break;
        }
                
        nameToken = yylex();
                
                

        /* }
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
         */
		
	}
	return 0;
}
