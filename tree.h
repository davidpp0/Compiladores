#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum stmType{
	decl_pontovirg,
	decl_pontovirg_stmList
}stmType;

typedef enum declType{
	idlist_dpontos_tipo,
	idlist_dpontos_tipo_igual_exp,
	id_igual_exp,
	funcao,
	if_exp_then_stmList,
	if_exp_then_stmList_else_stmList,
	while_exp_do_stmList,
	print_,
	return_,
	input_id,
	output_id,
	break_,
	next_,
	def_id_type,
}declType;

typedef enum funcType{
	id_arglist_dpontos_tipo_stmList,
	id_pars_dpontos_tipo_stmList,
	id_pars,
	id_arglist,
}funcType;

typedef enum idlistType{
	id_,
	id_virg_idlist,
	num_,
	num_idlist,
}idlistType;

typedef enum tipoType{
	int_,
	float_,
	string_,
	bool_,
	void_,
}tipoType;

typedef enum argListaType{
	idlist_dpontos_tipo
	idlist_dponstos_tipo_virg_args
	idlist_
}arglista;

typedef enum expressaoType{
	id_
	str_
	exp_op_exp
	bool_lit
	flt_
	num_ 
	func_
}expressaoType;

typedef enum operacaoType{
	soma_
	subtracao_
	divisao_
	multiplicacao_
	mod_
	potencia_
	igual_
	igual_igual
	diferente_
	menor_
	maior_
	menorIgual_
	maiorIgual_
	and_
	or_
	not_
}operacaoType;

typedef struct StmList;
typedef struct Decl;
typedef struct Func;
typedef struct IdList;
typedef struct Tipo;
typedef struct ArgLista;
typedef struct Expressao;
typedef struct Operacao;

struct StmList
{
	stmType type;
	Decl *decl;
	StmList *stmList;
};

struct Decl
{
	declType type;
	IdList *idList;
	Tipo *tipo;
	Expressao *expressao;
	StmList *stmList1;
	StmList *stmList2;
	Func *func;
	char *id;
};

struct Func
{
	funcType type;
	char *id;
	ArgLista *argLista;
	Tipo *tipo;
	StmList *stmList;
};

struct IdList
{
	idlistType type;
	char *id;
	int num;
	IdList *idList;
};

struct Tipo
{
	tipoType type;
};

struct ArgLista
{
	argListaType type;
	IdList *idList;
	Tipo *tipo;
	ArgLista *argLista;

};

struct Expressao
{
	expressaoType type;
	char *id;
	Expressao *expressao1;
	Expressao *expressao2;
	Operacao *operacao;
	int num;
	Func *func;
	float flt;
	bool booleano;
	char *str;

};

struct Operacao
{
	operacaoType type;
};

StmList *newStmList( stmType type, Decl *decl, StmList *stmList);
Decl *newDecl(declType type, IdList *idList, Tipo *tipo, Expressao *expressao, StmList *stmList1, StmList *stmList2, Func *func, char *id);
Func *newFunc( funcType type, char *id, Tipo *tipo, ArgLista *argLista, StmList *stmList);
IdList *newIdList(idList type, char *id, int num, IdList *idList);
Tipo *newTipo(tipoType type);
ArgLista *newArgLista(argListaType type, IdList *idList, Tipo *tipo, ArgLista *argLista);
Expressao *newExpressao(expressaoType type, char *id, Expressao *expressao1, Expressao *expressao2, Operacao *operacao, int num, Func *func, float flt, bool booleano, char *str);
Operacao *newOperacao(operacaoType type);