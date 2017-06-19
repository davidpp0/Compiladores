%{
	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>

	int yylex(void);				
	void yyerror(const char *);		
%}

%error-verbose  

%union{
	int val;
    double flt;
    char *str;
    char *id;
    int boolean;
}

//IDENTIFICAR ESTRUTURAS DE DADOS
%token ID STR NUM FLT BOOL_LITERAL
%token PRINT
%token PONTO VIRGULA DOISPONTOS
%token DEF IF THEN ELSE WHILE DO RETURN BREAK NEXT
%token INT FLOAT BOOL VOID STRING
%token INPUT OUTPUT
%token PARE PARD CHAVETAE CHAVETAD PARECTE PARECTD

%left PONTOVIRGULA
%left SOMA SUBTRACAO
%left  MULTIPLICACAO DIVISAO MOD 
%left OR
%left AND
%left NOT

%right POTENCIA
%right IGUAL

%nonassoc IGUALIGUAL MENOR MAIOR MENORIGUAL MAIORIGUAL DIFERENTE

%%

//REGRAS DE SINTAXE

program: stmlist
		;

stmlist: decl PONTOVIRGULA
	   | decl PONTOVIRGULA stmlist 
	   ;

decl: idlist DOISPONTOS tipo 
	| idlist DOISPONTOS tipo IGUAL expressao 
	| ID IGUAL expressao
	| func
	| IF expressao THEN CHAVETAE stmlist CHAVETAD
	| IF expressao THEN CHAVETAE stmlist CHAVETAD ELSE CHAVETAE stmlist CHAVETAD
	| WHILE expressao DO CHAVETAE stmlist CHAVETAD
	| PRINT PARE expressao PARD 
	| RETURN expressao 
	| INPUT PARE ID PARD 
	| OUTPUT PARE ID PARD 
	| BREAK
	| NEXT
	| DEF ID tipo
	;

func: ID PARE arglista PARD DOISPONTOS tipo CHAVETAE stmlist CHAVETAD
	| ID PARE PARD DOISPONTOS tipo CHAVETAE stmlist CHAVETAD
	| ID PARE PARD
	| ID PARE arglista PARD
	;

idlist: ID
	  | ID VIRGULA idlist
	  | NUM
	  | NUM idlist
	  ;

tipo: INT
	| FLOAT
	| STRING
	| BOOL
	| VOID
	;

arglista: idlist DOISPONTOS tipo
  	    | idlist DOISPONTOS tipo VIRGULA arglista
  	    | idlist
		;

expressao: ID
	 	 | STR
		 | expressao operacao expressao
		 | BOOL_LITERAL
		 | FLT
		 | NUM
		 | func
		 ;
operacao: SOMA
		| SUBTRACAO
		| DIVISAO
		| MULTIPLICACAO
		| MOD
		| POTENCIA
		| IGUAL
		| IGUALIGUAL
		| DIFERENTE
		| MENOR
		| MAIOR
		| MENORIGUAL
		| MAIORIGUAL
		| AND
		| OR
		| NOT
		;

%%

void yyerror(const char *msg){
	fprintf(stderr, "error: %s\n", msg);
}

int main(){
	return yyparse();
}