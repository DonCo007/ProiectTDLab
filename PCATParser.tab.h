/* A Bison parser, made by GNU Bison 3.7.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PCATPARSER_TAB_H_INCLUDED
# define YY_YY_PCATPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    AND = 258,                     /* AND  */
    ARRAY = 259,                   /* ARRAY  */
    BEGIN = 260,                   /* BEGIN  */
    BY = 261,                      /* BY  */
    DIV = 262,                     /* DIV  */
    DO = 263,                      /* DO  */
    ELSE = 264,                    /* ELSE  */
    ELSEIF = 265,                  /* ELSEIF  */
    END = 266,                     /* END  */
    EXIT = 267,                    /* EXIT  */
    FOR = 268,                     /* FOR  */
    IF = 269,                      /* IF  */
    IS = 270,                      /* IS  */
    LOOP = 271,                    /* LOOP  */
    MOD = 272,                     /* MOD  */
    NOT = 273,                     /* NOT  */
    OF = 274,                      /* OF  */
    OR = 275,                      /* OR  */
    PROCEDURE = 276,               /* PROCEDURE  */
    PROGRAM = 277,                 /* PROGRAM  */
    READ = 278,                    /* READ  */
    RECORD = 279,                  /* RECORD  */
    RETURN = 280,                  /* RETURN  */
    THEN = 281,                    /* THEN  */
    TO = 282,                      /* TO  */
    TYPE = 283,                    /* TYPE  */
    VAR = 284,                     /* VAR  */
    WHILE = 285,                   /* WHILE  */
    WRITE = 286,                   /* WRITE  */
    DOT = 287,                     /* DOT  */
    MULT = 288,                    /* MULT  */
    ADD = 289,                     /* ADD  */
    SUBSTRACT = 290,               /* SUBSTRACT  */
    END_OF_INSTRUCTION = 291,      /* END_OF_INSTRUCTION  */
    LESS = 292,                    /* LESS  */
    GREATER = 293,                 /* GREATER  */
    ASSIGN = 294,                  /* ASSIGN  */
    LESSEQ = 295,                  /* LESSEQ  */
    GREATEREQ = 296,               /* GREATEREQ  */
    EQUAL = 297,                   /* EQUAL  */
    DIFF = 298,                    /* DIFF  */
    COLON = 299,                   /* COLON  */
    COMMA = 300,                   /* COMMA  */
    LPAREN = 301,                  /* LPAREN  */
    RPAREN = 302,                  /* RPAREN  */
    LSQBKT = 303,                  /* LSQBKT  */
    RSQBKT = 304,                  /* RSQBKT  */
    LBRKT = 305,                   /* LBRKT  */
    RBRKT = 306,                   /* RBRKT  */
    LSQBKTLESS = 307,              /* LSQBKTLESS  */
    GREATERRSQBKT = 308,           /* GREATERRSQBKT  */
    IDENTIFIER = 309,              /* IDENTIFIER  */
    INTEGER = 310,                 /* INTEGER  */
    REAL = 311,                    /* REAL  */
    ID = 312,                      /* ID  */
    STRING = 313                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PCATPARSER_TAB_H_INCLUDED  */
