/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_YASIN_TAB_H_INCLUDED
# define YY_YY_YASIN_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    STR = 259,
    NUM = 260,
    FLT = 261,
    BOOL_LITERAL = 262,
    PRINT = 263,
    PONTO = 264,
    VIRGULA = 265,
    DOISPONTOS = 266,
    DEF = 267,
    IF = 268,
    THEN = 269,
    ELSE = 270,
    WHILE = 271,
    DO = 272,
    RETURN = 273,
    BREAK = 274,
    NEXT = 275,
    INT = 276,
    FLOAT = 277,
    BOOL = 278,
    VOID = 279,
    STRING = 280,
    INPUT = 281,
    OUTPUT = 282,
    PARE = 283,
    PARD = 284,
    CHAVETAE = 285,
    CHAVETAD = 286,
    PARECTE = 287,
    PARECTD = 288,
    PONTOVIRGULA = 289,
    SOMA = 290,
    SUBTRACAO = 291,
    MULTIPLICACAO = 292,
    DIVISAO = 293,
    MOD = 294,
    OR = 295,
    AND = 296,
    NOT = 297,
    POTENCIA = 298,
    IGUAL = 299,
    IGUALIGUAL = 300,
    MENOR = 301,
    MAIOR = 302,
    MENORIGUAL = 303,
    MAIORIGUAL = 304,
    DIFERENTE = 305
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 14 "yasin.y" /* yacc.c:1909  */

	int val;
    double flt;
    char *str;
    char *id;
    int boolean;
    struct StmList *stmList;
    struct StmList *stmList1;
    struct StmList *stmList2;
    struct Decl *decl;
    struct Func *func;
    struct IdList *idList;
    struct ArgLista *argLista;
    struct Tipo *tipo;
    struct Operacao *operacao;
    struct Expressao *expressao;
    struct Expressao *expressao1;
    struct Expressao *expressao2;

#line 125 "yasin.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YASIN_TAB_H_INCLUDED  */
