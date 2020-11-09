%{
#include<stdio.h>
%}
%token AND
%token ARRAY
%token BEGIN
%token BY
%token DIV
%token DO
%token ELSE
%token ELSEIF
%token END
%token EXIT
%token FOR
%token IF
%token IS
%token LOOP
%token MOD
%token NOT
%token OF
%token OR
%token PROCEDURE
%token PROGRAM
%token READ
%token RECORD
%token RETURN
%token THEN
%token TO
%token TYPE
%token VAR
%token WHILE
%token WRITE
%token DOT
%token MULT
%token ADD
%token SUBSTRACT
%token END_OF_INSTRUCTION
%token LESS
%token GREATER
%token ASSIGN
%token LESSEQ
%token GREATEREQ
%token EQUAL
%token DIFF
%token COLON
%token COMMA
%token LPAREN
%token RPAREN
%token LSQBKT
%token RSQBKT
%token LBRKT
%token RBRKT
%token LSQBKTLESS
%token GREATERRSQBKT
%token IDENTIFIER
%token INTEGER
%token REAL
%token ID
%token STRING

%start program
	
%%

program
	: PROGRAM IS body END_OF_INSTRUCTION
	;

body
	: declaration BEGIN statement END
	;

declaration
	: VAR  var_decl 
	| TYPE type_decl 
	| PROCEDURE procedure_decl
	;

type_decl
	: typename IS type END_OF_INSTRUCTION
	;

typename
	: id_list
	;

type
	: ARRAY OF typename
	| RECORD component component END
	;

component
	: id_list COLON typename END_OF_INSTRUCTION
	;

var_decl
	: id_list COLON typename ASSIGN expression END_OF_INSTRUCTION
	| var_decl id_list COLON typename ASSIGN expression END_OF_INSTRUCTION
	;

id_list
	: ID
	| id_list COMMA ID
	;

procedure_decl
	: id_list formal_params LSQBKT COLON typename RSQBKT IS body END_OF_INSTRUCTION
	;

formal_params
	: LPAREN fp_section END_OF_INSTRUCTION fp_section RPAREN
	| LPAREN RPAREN
	;

fp_section
	: id_list COMMA ID COLON typename
	;

lvalue
	: id_list
	| lvalue LSQBKT expression RSQBKT
	| lvalue DOT id_list
	;

expression
	: number
	| lvalue
	| LPAREN expression RPAREN
	| unary_op expression
	| expression binary_op expression
	| id_list actual_params
	| id_list record_inits
	| id_list array_inits
	;

unary_op
	: NOT
	| ADD | SUBSTRACT
	;

binary_op
	: OR | AND
	| ADD | SUBSTRACT | MULT | DIV | MOD
	| LESS | GREATER | EQUAL | GREATEREQ | LESSEQ | DIFF
	;

number
	: INTEGER | REAL
	;

actual_params
	: LPAREN expression COMMA expression RPAREN
	| LPAREN RPAREN
	;

record_inits
	: LBRKT id_list ASSIGN expression END_OF_INSTRUCTION id_list ASSIGN expression RBRKT
	;

array_inits
	: LSQBKTLESS array_init COMMA array_init GREATERRSQBKT
	;

array_init
	: LSQBKT expression OF RSQBKT expression
	;

statement
	: id_list actual_params
	| lvalue ASSIGN expression END_OF_INSTRUCTION
	| READ LPAREN lvalue COMMA lvalue RPAREN END_OF_INSTRUCTION
	| WRITE write_params END_OF_INSTRUCTION
	| WHILE expression DO statement END  END_OF_INSTRUCTION
	| LOOP statement END END_OF_INSTRUCTION
	| FOR id_list ASSIGN expression TO expression BY expression
	  DO statement END END_OF_INSTRUCTION
	| EXIT END_OF_INSTRUCTION
	| RETURN expression
	| IF expression THEN statement
	  ELSEIF expression THEN statement
	  ELSE statement END END_OF_INSTRUCTION
	;

write_params
	: LPAREN write_expr COMMA write_expr RPAREN
	| LPAREN RPAREN
	;

write_expr
	: STRING
	| expression
	;
%%
