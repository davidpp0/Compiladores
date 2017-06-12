%{
	#include <stdio.h>

	int yylex(void);				//main
	void yyerror(const char *);		//funcao que retorna erros
%}

%error-verbose  //mostra erros

union{
	char *letter;
}

//IDENTIFICAR ESTRUTURAS DE DADOS

%token char *letter
%token IGUAL
%token IGUALIGUAL
%token SOMA
%token SUBTRACAO
%token MULTIPLICACAO
%token DIVISAO
%token MOD
%token POTENCIA
%token DIFERENTE
%token MENOR
%token MAIOR
%token MENORIGUAL
%token MAIORIGUAL
%token AND
%token OR
%token NOT

%token PONTO
%token VIRGULA
%token DOISPONTOS
%token PONTOVIRGULA
%token PARECTE
%token PARECTD
%token CHAVETAE
%token CHAVETAD
%token PARE
%token PARD
%token CLICA

%token DEFINE 
%token INT
%token FLOAT
%token STRING
%token BOOL
%token VOID
%token IF
%token THEN
%token ELSE
%token WHILE
%token DO
%token RETURN 
%token BREAK
%token NEXT


%%
//REGRAS DE SINTAXE





%%

void yyerror(const char *msg){
	fprintf(stderr, "error: %s\n", msg); //print dos erros
}

int main(){
	return yyparse();   //chama funcao de parse para criar arvore
}