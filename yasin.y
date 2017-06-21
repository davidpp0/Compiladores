%{
	#include <stdio.h>
	#include <math.h>
	#include <string.h>
	#include <stdlib.h>
	#include "compiler.c"

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
}

//IDENTIFICAR ESTRUTURAS DE DADOS
%token <id> ID
%token <str> STR
%token <val> NUM
%token <flt> FLT
%token <bool> BOOL_LITERAL
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

%type <stmlist> stmlist
%type <decl> decl
%type <func> func
%type <idlist> idlist
%type <tipo> tipo
%type <arglista> arglista
%type <operacao> operacao
%type <expressao> expressao

%%

//REGRAS DE SINTAXE

program: stmlist          {root($1);};                                                             
		

stmlist: decl PONTOVIRGULA                   {$$ = newStmList(decl_pontovirg,$1,NULL);};
	   | decl PONTOVIRGULA stmlist 			 {$$ = newStmList(decl_pontovirg_stmList,$1,$3);};

decl: idlist DOISPONTOS tipo 						   {$$ = newDecl(idlist_dpontos_tipo,$1,$3,NULL,NULL,NULL,NULL,NULL);};
	| idlist DOISPONTOS tipo IGUAL expressao   	       {$$ = newDecl(idlist_dpontos_tipo_igual_exp,$1,$3,$5,NULL,NULL,NULL,NULL);};
	| ID IGUAL expressao							   {$$ = newDecl(id_igual_exp,NULL,NULL,$3,NULL,NULL,NULL,$1);};
	| func											   {$$ = newDecl(funcao,NULL,NULL,NULL,NULL,NULL,$1,NULL);};
	| IF expressao THEN CHAVETAE stmlist CHAVETAD      {$$ = newDecl(if_exp_then_stmList,NULL,NULL,NULL,$2,$5,NULL,NULL);};    
	| IF expressao THEN CHAVETAE stmlist CHAVETAD ELSE CHAVETAE stmlist CHAVETAD      {$$ = newDecl(if_exp_then_stmList_else_stmList,NULL,NULL,NULL,$2,$5,$9,NULL);};
	| WHILE expressao DO CHAVETAE stmlist CHAVETAD     {$$ = newDecl(while_exp_do_stmList,NULL,NULL,$2,$5,NULL,NULL,NULL);};
	| PRINT PARE expressao PARD                        {$$ = newDecl(print_,NULL,NULL,$3,NULL,NULL,NULL,NULL);};
	| RETURN expressao                                 {$$ = newDecl(return_,NULL,NULL,$2,NULL,NULL,NULL,NULL);};
	| INPUT PARE ID PARD               				   {$$ = newDecl(input_id,NULL,NULL,NULL,NULL,NULL,NULL,$3);};
	| OUTPUT PARE ID PARD 							   {$$ = newDecl(output_id,NULL,NULL,NULL,NULL,NULL,NULL,$3);};
	| BREAK											   {$$ = newDecl(break_,NULL,NULL,NULL,NULL,NULL,NULL,NULL);};
	| NEXT											   {$$ = newDecl(next_,NULL,NULL,NULL,NULL,NULL,NULL,NULL);};
	| DEF ID tipo 									   {$$ = newDecl(def_id_type,NULL,$3,NULL,NULL,NULL,NULL,$2);};
	

func: ID PARE arglista PARD DOISPONTOS tipo CHAVETAE stmlist CHAVETAD   {$$ = newFunc(id_arglist_dpontos_tipo_stmList,$1,$6,$3,$8);};
	| ID PARE PARD DOISPONTOS tipo CHAVETAE stmlist CHAVETAD 			{$$ = newFunc(id_pars_dpontos_tipo_stmList,$1,$5,NULL,$7);};
	| ID PARE PARD 														{$$ = newFunc(id_pars,$1,NULL,NULL,NULL);};
	| ID PARE arglista PARD 											{$$ = newFunc(id_arglist,$1,NULL,$3,NULL);};


idlist: ID 								{$$ = newIdList(id_,$1,NULL,NULL);};
	  | ID VIRGULA idlist 				{$$ = newIdList(id_virg_idlist,$1,NULL,$3);};
	  | NUM 							{$$ = newIdList(num_,NULL,$1,NULL);};
	  | NUM idlist 						{$$ = newIdList(num_idlist,NULL,$1,$2);};
	  ;

tipo: INT                 				{$$ = newTipo(int_);};
	| FLOAT 							{$$ = newTipo(float_);};
	| STRING 							{$$ = newTipo(string_);};
	| BOOL 								{$$ = newTipo(bool_);}; 
	| VOID 								{$$ = newTipo(void_);};
	;

arglista: idlist DOISPONTOS tipo                      {$$ = newArgLista(idlist_dpontos_tipo,$1,$3,NULL);};
  	    | idlist DOISPONTOS tipo VIRGULA arglista 	  {$$ = newArgLista(idlist_dponstos_tipo_virg_args,$1,$3,$5);};	
  	    | idlist 									  {$$ = newArgLista(idlist_,$1,NULL,NULL);};
		;

expressao: ID  									{$$ = newExpressao(id_,$1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL);};
	 	 | STR 									{$$ = newExpressao(str_,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,$1);};
		 | expressao operacao expressao 		{$$ = newExpressao(exp_op_exp,NULL,$1,$3,$2,NULL,NULL,NULL,NULL,NULL);};	
		 | BOOL_LITERAL 						{$$ = newExpressao(bool_lit,NULL,NULL,NULL,NULL,NULL,NULL,NULL,$1,NULL);};
		 | FLT 									{$$ = newExpressao(flt_,$1,NULL,NULL,NULL,NULL,NULL,$1,NULL,NULL);};
		 | NUM 									{$$ = newExpressao(num_,$1,NULL,NULL,NULL,$1,NULL,NULL,NULL,NULL);};
		 | func 								{$$ = newExpressao(func_,$1,NULL,NULL,NULL,NULL,$1,NULL,NULL,NULL);};
		 ;
operacao: SOMA 									{$$ = newOperacao(soma_);};
		| SUBTRACAO 							{$$ = newOperacao(subtracao_);};
		| DIVISAO 								{$$ = newOperacao(divisao_);};
		| MULTIPLICACAO 						{$$ = newOperacao(multiplicacao_);};
		| MOD 									{$$ = newOperacao(mod_);};
		| POTENCIA 								{$$ = newOperacao(potencia_);};
		| IGUAL 								{$$ = newOperacao(igual_);};
		| IGUALIGUAL 							{$$ = newOperacao(igual_igual);};
		| DIFERENTE 							{$$ = newOperacao(diferente_);};
		| MENOR 								{$$ = newOperacao(menor_);};
		| MAIOR 							    {$$ = newOperacao(maior_);};		
		| MENORIGUAL 							{$$ = newOperacao(menorIgual_);};
		| MAIORIGUAL 							{$$ = newOperacao(maiorIgual_);};
		| AND 									{$$ = newOperacao(and_);};
		| OR 									{$$ = newOperacao(or_);};
		| NOT 									{$$ = newOperacao(not_);};
		;

%%

void yyerror(const char *msg){
	fprintf(stderr, "error: %s\n", msg);
}

int main(){
	return yyparse();
}