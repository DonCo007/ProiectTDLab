// SimpleCLexer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include "symbols.h"
#include <errno.h>

extern FILE* yyin;
extern int yylex(void);

const char* lexUnits[] = { "AND",
							"ELSEIF",
							"MOD",
							"RECORD",
							"WRITE",
							"ARRAY",
							"END",
							"NOT",
							"RETURN",
							"BEGIN",
							"EXIT",
							"OF",
							"THEN",
							"BY",
							"FOR",
							"OR",
							"TO",
							"DIV",
							"IF",
							"PROCEDURE",
							"TYPE",
							"DO",
							"IS",
							"PROGRAM",
							"VAR",
							"ELSE",
							"LOOP",
                            "READ",
							"WHILE", 
							"END_OF_INSTRUCTION",
							"CONSTANT",
							"STRING_LITERAL",
							"DOT",
							"MULT",
							"ADD",
							"SUBSTRACT",
							"DIV",
							"LESS",
							"GREATER",
							"ASSIGN",
							"LESSEQ",
							"GREATEREQ",
							"EQUAL",
							"DIFF",
							"COLON",
							"COMMA",
							"LPAREN",
							"RPAREN",
							"LSQBKT",
							"LBRKT",
							"RBRKT",
							"LSQBKTLESS",
							"GREATERRSQBKT",
							"IDENTIFIER",
							"COMMBEG",
							"COMMEND"};

int main()
{
	int tokenValue = 0;
	yyin = fopen("input.csrc", "rt");
	if (yyin != NULL)
	{
		while ((tokenValue = yylex()) != END)
		{
			printf(" -> TOKEN ID: %d; Token Value: %s \n", tokenValue, lexUnits[tokenValue]);
		}
	}
	else
	{
		printf("Fisierul de intrare nu poate fi deschis. Erorare: %d", errno);
	}


}

