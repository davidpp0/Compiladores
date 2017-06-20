
void root(StmList *root){}

void printStmList (StmList *root){
	if (root->type == decl_pontovirg ){

	}else if (root->type == decl_pontovirg_stmList){

	}
}
		
	
void printDecl (Decl *root){
	if (root->type == idlist_dpontos_tipo ){

	}else if (root->type == idlist_dpontos_tipo_igual_exp){

	}else if (root->type == id_igual_exp){

	}else if (root->type == funcao){

	}else if (root->type == if_exp_then_stmList){

	}else if (root->type == if_exp_then_stmList_else_stmList){

	}else if (root->type == while_exp_do_stmList){

	}else if (root->type == print_){

	}else if (root->type == return_){

	}else if (root->type == input_id){

	}else if (root->type == output_id){

	}else if (root->type == break_){

	}else if (root->type == next_){

	}else if (root->type == def_id_type){

	}

}

void printFunc (Func *root){
	if (root->type == id_arglist_dpontos_tipo_stmList ){

	}else if (root->type == id_pars_dpontos_tipo_stmList){

	}else if (root->type == id_pars){

	}else if (root->type == id_arglist){

	}
}

void printIdList (IdList *root){
	if (root->type == id_ ){

	}else if (root->type == id_virg_idlist){

	}else if (root->type == num_){

	}else if (root->type == num_idlist){

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

	}else if (root->type == idlist_dponstos_tipo_virg_args){

	}else if (root->type == idlist_){

	}
}
void printExpressao (Expressao *root){
	if (root->type == idlist_dpontos_tipo ){

	}else if (root->type == id_){

	}else if (root->type == str_){

	}else if (root->type == exp_op_exp){

	}else if (root->type == bool_lit){

	}else if (root->type == flt_){

	}else if (root->type == num_){

	}else if (root->type == func_){

	}

}
void printOperacao (Operacao *root){
	if (root->type == idlist_dpontos_tipo ){

	}else if (root->type == soma_){

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

