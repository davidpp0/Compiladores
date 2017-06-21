#include "tree.h"

StmList *newStmList( stmType type, Decl *decl, StmList *stmList){
	StmList *s = malloc(sizeof(struct StmList));
	s->type = type;
	s->decl = decl;
	s->stmList = stmList;
	return s;
}


Decl *newDecl(declType type, IdList *idList, Tipo *tipo, Expressao *expressao, StmList *stmList1, StmList *stmList2, Func *func, char *id){
	newDecl *s = malloc(sizeof(struct newDecl));
	s->type = type;
	s->idList = idList;
	s->tipo = tipo;
	s->expressao = expressao;
	s->stmList1 = stmList1;
	s->stmList2 = stmList2;
	s->func = func;
	s->id = id;
	return s;
}

Func *newFunc( funcType type, char *id, Tipo *tipo, ArgLista *argLista, StmList *stmList){
	newFunc *s = malloc(sizeof(struct newFunc));
	s->type = type;
	s->id = id;
	s->tipo = tipo;
	s->argLista = argLista;
	s->stmList = stmList;
	return s;
}

IdList *newIdList(idList type, char *id, int val, IdList *idList){
	newIdList *s = malloc(sizeof(struct newIdList));
	s->type = type;
	s->id = id;
	s->num = num;
	s->idList = idList;
	return s;
}

Tipo *newTipo(tipoType type){
	newTipo *s = malloc(sizeof(struct newTipo));
	s->type = type;
	return s;
}


ArgLista *newArgLista(argListaType type, IdList *idList, Tipo *tipo, ArgLista *argLista){
	newArgLista *s = malloc(sizeof(struct newArgLista));
	s->type = type;
	s->idList = idList;
	s->tipo = tipo;
	s->argLista = argLista;
	return s;
}

Expressao *newExpressao(expressaoType type, char *id, Expressao *expressao1, Expressao *expressao2, Operacao *operacao, int num, Func *func, double flt, int boolean, char *str){
	newExpressao *s = malloc(sizeof(struct newExpressao));
	s->type = type;
	s->id = id;
	s->expressao1 = expressao1;
	s->expressao2 = expressao2;
	s->operacao = operacao;
	s->num = num;
	s->func = func;
	s->flt = flt;
	s->booleano = booleano;
	s->str = str;
	return s;
}

Operacao *newOperacao(operacaoType type){
	newOperacao *s = malloc(sizeof(struct newOperacao));
	s->type = type;
	return s;
}