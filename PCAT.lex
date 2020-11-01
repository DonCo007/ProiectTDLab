D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

%{
#include <stdio.h>
#include "symbols.h"

void count();
%}

%%

"(*"			{ count(); return(COMMBEG); }
"*)"			{ count(); return(COMMEND); }
"AND"		    { count(); return(AND); }
"ELSEIF"	    { count(); return(ELSEIF); }
"MOD"			{ count(); return(MOD); }
"RECORD"		{ count(); return(RECORD); }
"WRITE"			{ count(); return(WRITE); }
"ARRAY"			{ count(); return(ARRAY); }
"END"		    { count(); return(END); }
"NOT"			{ count(); return(NOT); }
"RETURN"		{ count(); return(RETURN); }
"BEGIN"			{ count(); return(BEGIN); }
"EXIT"	        { count(); return(EXIT); }
"OF"			{ count(); return(OF); }
"THEN"		    { count(); return(THEN); }
"BY"	        { count(); return(BY); }
"FOR"			{ count(); return(FOR); }
"OR"		    { count(); return(OR); }
"TO"			{ count(); return(TO); }
"DIV"			{ count(); return(DIV); }
"IF"		    { count(); return(IF); }
"PROCEDURE"	    { count(); return(PROCEDURE); }
"TYPE"		    { count(); return(TYPE); }
"DO"			{ count(); return(DO); }
"IS"	        { count(); return(IS); }
"PROGRAM"	    { count(); return(PROGRAM); }
"VAR"		    { count(); return(VAR); }
"ELSE"			{ count(); return(ELSE); }
"LOOP"			{ count(); return(LOOP); }
"READ"		    { count(); return(READ); }
"WHILE"	        { count(); return(WHILE); }


"."			{ count(); return(DOT); }
"*"			{ count(); return(MULT); }
"+"			{ count(); return(ADD); }
"-"			{ count(); return(SUBSTRACT); }
"/"			{ count(); return(DIV); }
";"			{ count(); return (END_OF_INSTRUCTION);}

"<"			{ count();  return(LESS); }
">"			{ count();  return(GREATER); }
":="		{ count();	return(ASSIGN); }
"<="		{ count();  return(LESSEQ); }
">="		{ count();	return(GREATEREQ); }
"="			{ count();	return(EQUAL); }
"<>"		{ count();	return(DIFF); }
":"			{ count();	return(COLON); }
","			{ count();	return(COMMA); }
"("			{ count();	return(LPAREN); }
")"			{ count();	return(RPAREN); }
"["			{ count();	return(LSQBKT); }
"]"			{ count();	return(RSQBKT); }
"{"			{ count();	return(LBRKT); }
"}"			{ count();	return(RBRKT); }
"[<"		{ count();	return(LSQBKTLESS); }
">]"		{ count();	return(GREATERRSQBKT); }


{L}({L}|{D})*		{ count(); return(check_type()); }
0{D}+{IS}?		    { count(); return(CONSTANT); }
{D}+{IS}?		    { count(); return(CONSTANT); }
{D}+{E}{FS}?		{ count(); return(CONSTANT); }
{D}*"."{D}+({E})?{FS}?	{ count(); return(CONSTANT); }
{D}+"."{D}*({E})?{FS}?	{ count(); return(CONSTANT); }

L?\"(\\.|[^\\"])*\"	{ count(); return(STRING_LITERAL); }




[ \t\v\n\f]		{ count(); }
.			{ /* ignore bad characters */ }

%%

yywrap()
{
	return(1);
}


comment()
{
	char c, c1;

loop:
	while ((c = input()) != '*' && c != 0)
		putchar(c);

	if ((c1 = input()) != '/' && c != 0)
	{
		unput(c1);
		goto loop;
	}

	if (c != 0)
		putchar(c1);
}


int column = 0;

void count()
{
	int i;

	for (i = 0; yytext[i] != '\0'; i++)
		if (yytext[i] == '\n')
			column = 0;
		else if (yytext[i] == '\t')
			column += 8 - (column % 8);
		else
			column++;

	ECHO;
}


int check_type()
{

	return(IDENTIFIER);
}