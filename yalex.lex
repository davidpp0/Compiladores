%{

#include "yasin.tab.h"
	
%}

%option noinput
%option nounput

%%

"="     { return IGUAL; }
"=="    { return IGUALIGUAL; }
"+"     { return SOMA; }
"-"     { return SUBTRACAO; }
"*"     { return MULTIPLICACAO; }
"/"     { return DIVISAO; }
"mod"   { return MOD; }
"^"     { return POTENCIA; }
"!="    { return DIFERENTE; }
"<"     { return MENOR; }
">"     { return MAIOR; }
"<="    { return MENORIGUAL; }
">="    { return MAIORIGUAL; }

"not"   { return NOT; }
"and"   { return AND; }
"or"    { return OR; }

"." 	{ return PONTO; }
"," 	{ return VIRGULA; }
":" 	{ return DOISPONTOS; }
";" 	{ return PONTOVIRGULA; }
"[" 	{ return PARECTE; }
"]" 	{ return PARECTD; }
"{"	 	{ return CHAVETAE; }
"}" 	{ return CHAVETAD; }
"(" 	{ return PARE; }
")" 	{ return PARD; }



"define" { return DEF; }
"int" 	 { return INT; }
"float"  { return FLOAT; }
"string" { return STRING; }
"bool"   { return BOOL; }
"void"   { return VOID; }
"if"	 { return IF; }
"then"   { return THEN; }
"else"   { return ELSE; }
"while"  { return WHILE; }
"do"     { return DO; }
"return" { return RETURN; }
"break"  { return BREAK; }
"next"   { return NEXT; }
"print"  { return PRINT; }
"input"  { return INPUT; }
"output" { return OUTPUT; }

"true" {
	yylval.boolean = 1;

	return BOOL_LITERAL;
}

"false" {
	yylval.boolean = 0;

	return BOOL_LITERAL;
}

[0-9]+   { yylval.val = atoi(yytext); return NUM; }
\".*\"    { yylval.str = strdup(yytext); return STR; }
[0-9]*\.[0-9]+([eE][\+\-]?[0-9]+)? 		{ yylval.flt = atof(yytext); return FLT; }
[a-zA-Z][a-zA-Z0-9]*       { yylval.id = strdup(yytext); return ID; }

%%