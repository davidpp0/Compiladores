#include "compiler.h"
#include <string.h>

void root(StmList *root){}

void printStmList (StmList *root){
	if (root->type == decl_pontovirg ){
		if (root->decl != NULL){
			printDecl(root->decl);
		}

	}else if (root->type == decl_pontovirg_stmList){
		if (root->decl != NULL){
			printDecl(root->decl);
		}
		if (root->stmList != NULL){
			printStmList(root->stmList);
		}
	}
}
		
	
void printDecl (Decl *root){
	if (root->type == idlist_dpontos_tipo ){
		if (root->idList != NULL){
			printIdList(root->idList);
		}
		if (root->tipo != NULL){
			printTipo(root->tipo);
		}

	}else if (root->type == idlist_dpontos_tipo_igual_exp){
		if (root->idList != NULL){
			printIdList(root->idList);
		}if (root->tipo != NULL){
			printTipo(root->tipo);
		}if (root->expressao != NULL){
			printExpressao(root->expressao)
		}

	}else if (root->type == id_igual_exp){
		if (root->expressao != NULL){
			printExpressao(root->expressao)
		}

	}else if (root->type == funcao){
		if (root->func != NULL){
			printFunc(root->func)
		}

	}else if (root->type == if_exp_then_stmList){
		if (root->expressao != NULL){
			printExpressao(root->expressao)
		}if (root->stmList1 != NULL){
			printStmList(root->stmList1)
		}

	}else if (root->type == if_exp_then_stmList_else_stmList){
		if (root->expressao != NULL){
			printExpressao(root->expressao)
		}if (root->stmList1 != NULL){
			printStmList(root->stmList1)
		}if (root->stmList2 != NULL){
			printStmList(root->stmList2)
		}

	}else if (root->type == while_exp_do_stmList){
		if (root->expressao != NULL){
			printExpressao(root->expressao)
		}if (root->stmList1 != NULL){
			printStmList(root->stmList1)
		}

	}else if (root->type == print_){


	}else if (root->type == return_){

	}else if (root->type == input_id){

	}else if (root->type == output_id){

	}else if (root->type == break_){

	}else if (root->type == next_){

	}else if (root->type == def_id_type){
		if (root->tipo != NULL){
			printTipo(root->tipo)
		}
	}

}

void printFunc (Func *root){
	if (root->type == id_arglist_dpontos_tipo_stmList ){
		if (root->argLista != NULL){
			printArgLista(root->ArgLista)
		}if (root->tipo != NULL){
			printTipo(root->tipo)
		}if (root->stmList != NULL){
			printStmList(root->stmList)
		}

	}else if (root->type == id_pars_dpontos_tipo_stmList){
		if (root->tipo != NULL){
			printTipo(root->tipo)
		}if (root->stmList != NULL){
			printStmList(root->stmList)
		}

	}else if (root->type == id_pars){

	}else if (root->type == id_arglist){
		if (root->argLista != NULL){
			printArgLista(root->ArgLista)
	}
}

void printIdList (IdList *root){
	if (root->type == id_ ){

	}else if (root->type == id_virg_idlist){
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}else if (root->type == num_){

	}else if (root->type == num_idlist){
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}
}
void printTipo (Tipo *root){
	if (root->type == int_ ){

	}else if (root->type == float_){

	}else if (root->type == string_){

	}else if (root->type == bool_){

	}else if (root->type == void_){

	}
}
void printArgLista(ArgLista *root){
	if (root->type == idlist_dpontos_tipo ){
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}else if (root->type == idlist_dponstos_tipo_virg_args){
		if (root->idList != NULL){
			printIdList(root->idList);
		}if (root->argLista != NULL){
			printArgLista(root->ArgLista)
	}

	}else if (root->type == idlist_){
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}
}
void printExpressao (Expressao *root){
	if (root->type == idlist_dpontos_tipo ){
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}else if (root->type == id_){

	}else if (root->type == str_){

	}else if (root->type == exp_op_exp){
		if (root->expressao1 != NULL){
			printExpressao(root->expressao1)
		}if (root->operacao != NULL){
			printExpressao(root->operacao)
		}if (root->expressao2 != NULL){
			printExpressao(root->expressao2)
		}

	}else if (root->type == bool_lit){

	}else if (root->type == flt_){

	}else if (root->type == num_){

	}else if (root->type == func_){

	}

}
void printOperacao (Operacao *root){
	if (root->type == soma_){

	}else if (root->type == subtracao_){

	}else if (root->type == divisao_){

	}else if (root->type == multiplicacao_){

	}else if (root->type == mod_){

	}else if (root->type == potencia_){

	}else if (root->type == igual_){

	}else if (root->type == igual_igual){

	}else if (root->type == diferente_){

	}else if (root->type == menor_){

	}else if (root->type == maior_){

	}else if (root->type == menorIgual_){

	}else if (root->type == maiorIgual_){

	}else if (root->type == and_){

	}else if (root->type == or_){

	}else if (root->type == not_){

	}
}

