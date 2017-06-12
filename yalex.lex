%{
	#include "yasin.tab.h"
	
%}

%option noinput
%option nounput

%%  //tokens
//EXPRESSOES BINARIAS
"="	return IGUAL;
"==" return IGUALIGUAL;
"+" return SOMA;
"-" return SUBTRACAO;
"*" return MULTIPLICACAO;
"/" return DIVISAO;
"mod" return MOD;
"^" return POTENCIA;
"!=" return DIFERENTE;
"<" return MENOR;
">" return MAIOR;
"<=" return MENORIGUAL;
">=" return MAIORIGUAL;
"and" return AND;
"or" return OR;

"!" return NOT;

//simbolos
"." return PONTO;
"," return VIRGULA;
":" return DOISPONTOS;
";" return PONTOVIRGULA;
"[" return PARECTE;
"]" return PARECTD;
"{" return CHAVETAE;
"}" return CHAVETAD;
"(" return PARE;
")" return PARD;
\" return CLICA;

//PALAVRAS RESERVADAS
"define" return DEFINE;
"int" return INT;
"float" return FLOAT;
"string" return STRING;
"bool" return BOOL;
"void" return VOID;
"if" return IF;
"then" return THEN;
"else" return ELSE;
"while" return WHILE;
"do" return DO;
"return" return RETURN;
"break" return BREAK;
"next" return NEXT;

[a-z]{
	yylval.letra = strdup(yytext);  /*coloca o valor na stack do Bison*/
	return LETRA;		/*Retorna o tipo do token*/
}
[ \n\t]


%%
int yywrap(){
	return 1;
}
