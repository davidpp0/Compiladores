#include "compiler.h"
#include <string.h>

FILE *w_file;
int flagprint = 0;
int flagexpressao = 0;
int flagexpressao1 = 0;
int flagexpressao2 = 0;
int flagid = 0;
int flagscan = 0;
int potencia = 0;
int booldef = 0;
Tipo *tipoant = NULL;
Tipo *tipoid = NULL;

void root(StmList *root){
	printStmList(root);
	w_file = fopen("yac.c", "w");
	if (w_file == NULL)
	{
    printf("Error opening file!\n");
    exit(1);
	}
	fprintf(w_file, "#include <stdio.h>\n");
	if (potencia == 1) {
		fprintf(w_file, "#include <math.h>\n");
	}
	if (booldef == 1) {
		fprintf(w_file, "#include <stdbool.h>\n");
	}
	traduzStmList(root);
}

void printStmList (StmList *root){

	if (root->type == decl_pontovirg ){
		if (root->decl != NULL){
			printDecl(root->decl);
			printf(";\n");
		}

	}else if (root->type == decl_pontovirg_stmList){
		if (root->decl != NULL){
			printDecl(root->decl);
			printf(";\n");

		}
		if (root->stmList != NULL){
			
			printStmList(root->stmList);
			printf("\n");
		}
	}
}
		
	
void printDecl (Decl *root){
	if (root->type == idlist_dpontos_tipo ){
		if (root->idList != NULL){
			printIdList(root->idList);
		}
		if (root->tipo != NULL){
			printf(": ");
			printTipo(root->tipo);
			
		}

	}else if (root->type == idlist_dpontos_tipo_igual_exp){
		if (root->idList != NULL){
			printIdList(root->idList);
		}if (root->tipo != NULL){
			printf(": ");
			printTipo(root->tipo);
		}if (root->expressao != NULL){
			printf("= ");
			printExpressao(root->expressao);
		}

	}else if (root->type == id_igual_exp){
		if (root->expressao != NULL){
			printf("%s = ",root->id);
			printExpressao(root->expressao);
		
		}

	}else if (root->type == funcao){
		if (root->func != NULL){
			printFunc(root->func);
		}

	}else if (root->type == if_exp_then_stmList){
		if (root->expressao != NULL){
			printf("if ");
			printExpressao(root->expressao);
		}if (root->stmList1 != NULL){
			printf("then {\n");
			printStmList(root->stmList1);
			printf("}");
		}

	}else if (root->type == if_exp_then_stmList_else_stmList){
		if (root->expressao != NULL){
			printf("if ");			
			printExpressao(root->expressao);
		}if (root->stmList1 != NULL){
			printf("then {\n");
			printStmList(root->stmList1);
			printf("}\n");
		}if (root->stmList2 != NULL){
			printf("else {\n");
			printStmList(root->stmList2);
			printf("}");
		}

	}else if (root->type == while_exp_do_stmList){
		if (root->expressao != NULL){
			printf("while ");
			printExpressao(root->expressao);
			printf(" do {\n");
		}if (root->stmList1 != NULL){
			printStmList(root->stmList1);
			printf("}");
		}

	}else if (root->type == print_){
		if(root->expressao!=NULL){
			printf("print (");
			printExpressao(root->expressao);
			printf(")");
		}

	}else if (root->type == return_){
		if(root->expressao!=NULL){
			printf("return ");
			printExpressao(root->expressao);
			
		}
	}else if (root->type == input_id){
		printf("input (");
		printf("%s", root->id);
		printf(")");
	}else if (root->type == output_id){
		printf("output (");
		printf("%s", root->id);
		printf(")");
	}else if (root->type == break_){
		printf("break ");
	}else if (root->type == next_){
		printf("next ");
		
	}else if (root->type == def_id_type){
		if (root->tipo != NULL){
			printTipo(root->tipo);
		}
	}
}

void printFunc (Func *root){
	if (root->type == id_arglist_dpontos_tipo_stmList ){
		if (root->argLista != NULL){
			printf("%s",root->id );
			printf("(");
			printArgLista(root->argLista);
			printf(")");
		}if (root->tipo != NULL){
			printf(" : ");
			printTipo(root->tipo);
			if (tipoant == NULL) {
				tipoant = root->tipo;
			}
			printf("{\n" );
		}if (root->stmList != NULL){
			printStmList(root->stmList);
			printf("}");
		}

	}else if (root->type == id_pars_dpontos_tipo_stmList){
		if (root->tipo != NULL){
			printf("%s",root->id);
			printf("() : ");
			printTipo(root->tipo);
			if (tipoant == NULL) {
				tipoant = root->tipo;
			}
			printf("{\n" );
		}if (root->stmList != NULL){
			printStmList(root->stmList);
			printf("}");
		}

	}else if (root->type == id_pars){
		printf("%s() ", root->id);
	}else if (root->type == id_arglist){
		printf("%s(",root->id );
		if (root->argLista != NULL){
			printArgLista(root->argLista);
			printf(") ");
		}
	}
}

void printIdList(IdList *root){
	if (root->type == id_){
		printf("%s", root->id);

	}else if (root->type == id_virg_idlist){
		printf("%s,",root->id);
		if (root->idList != NULL){
			printIdList(root->idList);						
		}

	}else if (root->type == num_){
		printf("%d",root->num );

	}else if (root->type == num_idlist){
		printf("%d", root->num);
		if (root->idList != NULL){
			printIdList(root->idList);
		}

	}
}

void printTipo (Tipo *root){
	if (root->type == int_ ){
		printf("int ");
	}else if (root->type == float_){
		printf("float ");
	}else if (root->type == string_){
		printf("string ");
	}else if (root->type == bool_){
		printf("bool ");
		booldef = 1;
	}else if (root->type == void_){
		printf("void ");
	}
}
    
void printArgLista(ArgLista *root){
	if (root->type == idlist_dpontos_tipo_argL){
		if (root->idList != NULL){
			printIdList(root->idList);
			printf(" : ");
			printTipo(root->tipo);
			
		}

	}else if (root->type == idlist_dponstos_tipo_virg_args){
		if (root->idList != NULL){
			printIdList(root->idList);
			printf(" : ");
			printTipo(root->tipo);
			printf(", ");
			printArgLista(root->argLista);
			
		}

	}else if (root->type == idlist_){
		if (root->idList != NULL){
			printIdList(root->idList);
			
		}

	}
}
void printExpressao (Expressao *root){

	if (root->type == id_exp){
		printf("%s ",root->id);		
	}else if (root->type == str_){
		printf("%s ", root->str );
	}else if (root->type == exp_op_exp){
		if (root->expressao1 != NULL){
			printExpressao(root->expressao1);
		}if (root->operacao != NULL){
			printOperacao(root->operacao);
		}if (root->expressao2 != NULL){
			printExpressao(root->expressao2);
		}

	}else if (root->type == bool_lit){
		printf("%d ", root->booleano);
	}else if (root->type == flt_){
		printf("%f ", root->flt );
	}else if (root->type == num_exp){
		printf("%d ", root->num );
	}else if (root->type == func_){
		printFunc(root->func);
	}

}
void printOperacao (Operacao *root){
	if (root->type == soma_){
		printf("+ ");
	}else if (root->type == subtracao_){
		printf("- ");
	}else if (root->type == divisao_){
		printf("/ ");
	}else if (root->type == multiplicacao_){
		printf("* ");
	}else if (root->type == mod_){
		printf("mod ");
	}else if (root->type == potencia_){
		printf("^ ");
		potencia = 1;
	}else if (root->type == igual_){
		printf("= ");
	}else if (root->type == igual_igual){
		printf("== ");
	}else if (root->type == diferente_){
		printf("!= ");
	}else if (root->type == menor_){
		printf("< ");
	}else if (root->type == maior_){
		printf("> ");
	}else if (root->type == menorIgual_){
		printf("<= ");
	}else if (root->type == maiorIgual_){
		printf(">= ");
	}else if (root->type == and_){
		printf("and ");
	}else if (root->type == or_){
		printf("or ");
	}else if (root->type == not_){
		printf("not ");
	}
}


/////////////////////////////////////////// TRADUCAO /////////////////////////////////////////////////////////////////

void traduzStmList (StmList *root){
	if (root->type == decl_pontovirg ){
		if (root->decl != NULL){
			traduzDecl(root->decl);
			fprintf(w_file, "\n");
		}

	}else if (root->type == decl_pontovirg_stmList){
		if (root->decl != NULL){
			traduzDecl(root->decl);
			fprintf(w_file, "\n");

		}
		if (root->stmList != NULL){
			
			traduzStmList(root->stmList);
			fprintf(w_file, "\n");
		}
	}
}
		
	
void traduzDecl (Decl *root){
	if (root->type == idlist_dpontos_tipo ){
		if (root->tipo != NULL){
			traduzTipo(root->tipo);
			tipoid = root->tipo;
		}
		if (root->idList != NULL){
			traduzIdList(root->idList);
			fprintf(w_file, ";");
			
		}

	}else if (root->type == idlist_dpontos_tipo_igual_exp){
		if (root->tipo != NULL){
			traduzTipo(root->tipo);
			tipoid = root->tipo;
			if (root->idList->type==id_virg_idlist){
				flagid = 1;
			}
			
		}if (root->idList != NULL){
			traduzIdList(root->idList);
		}if (root->expressao != NULL){
			fprintf(w_file, "= ");
			traduzExpressao(root->expressao);
			fprintf(w_file, ";");

		}

	}else if (root->type == id_igual_exp){
		if (root->expressao != NULL){
			fprintf(w_file,"%s = ",root->id);
			traduzExpressao(root->expressao);
			fprintf(w_file, ";");
		
		}

	}else if (root->type == funcao){
		if (root->func != NULL){
			traduzFunc(root->func);
		}

	}else if (root->type == if_exp_then_stmList){
		if (root->expressao != NULL){
			fprintf(w_file,"if( ");
			traduzExpressao(root->expressao);
			fprintf(w_file, ")");
			fprintf(w_file, "{");
		}if (root->stmList1 != NULL){
			fprintf(w_file, "\n");
			traduzStmList(root->stmList1);
			fprintf(w_file, "\n");
			fprintf(w_file,"}\n");
		}

	}else if (root->type == if_exp_then_stmList_else_stmList){
		if (root->expressao != NULL){
			if (root->expressao->type==func_) {
				flagexpressao = 1;
			}
			fprintf(w_file,"if(");			
			traduzExpressao(root->expressao);
			fprintf(w_file, ")");
			fprintf(w_file,"{\n");
		}if (root->stmList1 != NULL){
			traduzStmList(root->stmList1);
			fprintf(w_file,"}\n");
		}if (root->stmList2 != NULL){
			fprintf(w_file,"else {\n");
			traduzStmList(root->stmList2);
			fprintf(w_file,"}\n");
		}

	}else if (root->type == while_exp_do_stmList){
		if (root->expressao != NULL){
			if (root->expressao->type==func_) {
				flagexpressao = 1;
			}
			fprintf(w_file,"while( ");
			traduzExpressao(root->expressao);
			fprintf(w_file, " )");
			fprintf(w_file, "{\n");
		}if (root->stmList1 != NULL){
			traduzStmList(root->stmList1);
			fprintf(w_file, "\n" );
			fprintf(w_file,"}\n");
		}

	}else if (root->type == print_){
		if(root->expressao!=NULL){
			if (root->expressao->type==func_){
				flagprint = 1;
			}
			if (root->expressao->type==id_exp) {
				flagprint = 1;
			}
			
			fprintf(w_file,"printf(");
			traduzExpressao(root->expressao);
			fprintf(w_file,");");
		}

	}else if (root->type == return_){
		if(root->expressao!=NULL){
			fprintf(w_file,"return ");
			traduzExpressao(root->expressao);
			fprintf(w_file, ";");
			
		}
	}else if (root->type == input_id){
		fprintf(w_file,"scanf (");
		if (tipoid != NULL) {
			if (tipoid->type==int_){
				fprintf(w_file, "\"%%d\", &%s ",root->id);
			}
			if(tipoid->type==float_ || tipoid->type==string_ || tipoid->type==bool_ || tipoid->type==void_) {
				fprintf(w_file, "\"%%s\", &%s ",root->id);
			}
		}
		else {
			fprintf(w_file,"%s", root->id);
		}
		fprintf(w_file,");");
		
	}else if (root->type == output_id){
		fprintf(w_file,"output (");
		fprintf(w_file,"%s", root->id);
		fprintf(w_file,");");
	}else if (root->type == break_){
		fprintf(w_file,"break;");
	}else if (root->type == next_){
		fprintf(w_file,"next;");
		
	}else if (root->type == def_id_type){
		if (root->tipo != NULL){
			traduzTipo(root->tipo);
		}
	}
}

void traduzFunc (Func *root){
	if (root->type == id_arglist_dpontos_tipo_stmList ){
		if (root->tipo != NULL){
			traduzTipo(root->tipo);
			
		}if (root->argLista != NULL){
			fprintf(w_file,"%s",root->id );
			fprintf(w_file,"(");
			traduzArgLista(root->argLista);
			fprintf(w_file,") {\n");
		}if (root->stmList != NULL){
			traduzStmList(root->stmList);
			fprintf(w_file,"}");
		}

	}else if (root->type == id_pars_dpontos_tipo_stmList){
		if (root->tipo != NULL){
			traduzTipo(root->tipo);
			
			fprintf(w_file,"%s",root->id);
			fprintf(w_file,"() ");
			fprintf(w_file,"{\n" );
		}if (root->stmList != NULL){
			traduzStmList(root->stmList);
			fprintf(w_file,"}");
		}

	}else if (root->type == id_pars){
		if (flagexpressao == 1 || flagexpressao1 == 1 || flagexpressao2 == 1) {
			fprintf(w_file,"%s() ", root->id);
			flagexpressao = 0;
			flagexpressao1 = 0;
			flagexpressao2 = 0;
		}
		else if (flagprint == 1) {
			if (tipoant != NULL && tipoant->type == int_) {
				fprintf(w_file,"\"%%d\\n\", %s()",root->id );
			}
			if (tipoant != NULL && (tipoant->type == float_ || tipoant->type == string_ || tipoant->type==bool_ || tipoant->type==void_)) {
				fprintf(w_file,"\"%%s\\n\", %s()",root->id );
			}
			flagprint = 0;
		}
		else {
			fprintf(w_file,"%s() ", root->id);
			fprintf(w_file,";");
		}
	}else if (root->type == id_arglist){
		if (flagexpressao == 1 || flagexpressao1 == 1 || flagexpressao2 == 1) {
			fprintf(w_file,"%s(",root->id );
			if (root->argLista != NULL){
				traduzArgLista(root->argLista);
				fprintf(w_file,")");
			}
			flagexpressao = 0;
			flagexpressao1 = 0;
			flagexpressao2 = 0;
		}
		else if (flagprint == 1) {
			if (tipoant != NULL && tipoant->type == int_) {
				fprintf(w_file,"\"%%d\\n\", %s(",root->id );
			}
			if (tipoant != NULL && (tipoant->type == float_ || tipoant->type == string_ || tipoant->type==bool_ || tipoant->type==void_)) {
				fprintf(w_file,"\"%%s\\n\", %s(",root->id );
			}
			if (root->argLista != NULL){
				traduzArgLista(root->argLista);
				fprintf(w_file,")");
			}
			flagprint = 0;
		}
		else {
			fprintf(w_file,"%s(",root->id );
			if (root->argLista != NULL){
				traduzArgLista(root->argLista);
				fprintf(w_file,");");
			}
		}
	}
}
void traduzIdList(IdList *root){
	if (root->type == id_){
		fprintf(w_file, "%s", root->id );

	}else if (root->type == id_virg_idlist){
			fprintf(w_file,"%s,",root->id);
			if (root->idList != NULL){
				traduzIdList(root->idList);						
			}
		
	}else if (root->type == num_){
		fprintf(w_file,"%d",root->num );

	}else if (root->type == num_idlist){
		fprintf(w_file,"%d", root->num);
		if (root->idList != NULL){
			traduzIdList(root->idList);
		}

	}
}

void traduzTipo (Tipo *root){
	if (root->type == int_ ){
		fprintf(w_file, "int ");
	}else if (root->type == float_){
		fprintf(w_file, "float ");
	}else if (root->type == string_){
		fprintf(w_file, "char *");
	}else if (root->type == bool_){
		fprintf(w_file, "bool ");
	}else if (root->type == void_){
		fprintf(w_file, "int ");
	}
}
    
void traduzArgLista(ArgLista *root){
	if (root->type == idlist_dpontos_tipo_argL){
		if (root->idList != NULL){
			traduzTipo(root->tipo);
			traduzIdList(root->idList);
			
			
		}

	}else if (root->type == idlist_dponstos_tipo_virg_args){
		if (root->idList != NULL){
			traduzTipo(root->tipo);
			traduzIdList(root->idList);
			fprintf(w_file, ", ");
			traduzArgLista(root->argLista);
			
		}

	}else if (root->type == idlist_){
		if (root->idList != NULL){
			traduzIdList(root->idList);
			
		}

	}
}
void traduzExpressao (Expressao *root){

	if (root->type == id_exp){
		if (flagprint == 1) {
			if (tipoid != NULL && tipoid->type == int_) {
				fprintf(w_file,"\"%%d\", %s",root->id );
			}
			else if (tipoid != NULL && (tipoid->type == float_ || tipoid->type == string_ || tipoid->type==bool_ || tipoid->type==void_)) {
				fprintf(w_file,"\"%%s\", %s",root->id );
			}
		}
		else {
			fprintf(w_file, "%s ",root->id);	
		}
	}else if (root->type == str_){
		fprintf(w_file, "%s ", root->str );
	}else if (root->type == exp_op_exp){
		if (root->operacao->type==potencia_) {
			if (root->operacao != NULL) {
				traduzOperacao(root->operacao);
			}
			if (root->expressao1 != NULL){
				traduzExpressao(root->expressao1);
			}
			fprintf(w_file, ",");
			if (root->expressao2 != NULL){
				traduzExpressao(root->expressao2);
			}
			fprintf(w_file, ")");
		}
		else {
			if (root->expressao1 != NULL){
				if (root->expressao1->type==func_){
					flagexpressao1 = 1;
				}
				traduzExpressao(root->expressao1);
			}if (root->operacao != NULL){
				traduzOperacao(root->operacao);
			}if (root->expressao2 != NULL){
				if (root->expressao2->type==func_){
					flagexpressao2 = 1;
				}
				traduzExpressao(root->expressao2);
			}
		}
	}else if (root->type == bool_lit){
		fprintf(w_file, "%d ", root->booleano);
	}else if (root->type == flt_){
		fprintf(w_file, "%f ", root->flt );
	}else if (root->type == num_exp){
		fprintf(w_file, "%d ", root->num );
	}else if (root->type == func_){
		traduzFunc(root->func);
	}

}
void traduzOperacao (Operacao *root){
	if (root->type == soma_){
		fprintf(w_file, " + ");
	}else if (root->type == subtracao_){
		fprintf(w_file, " - ");
	}else if (root->type == divisao_){
		fprintf(w_file, " / ");
	}else if (root->type == multiplicacao_){
		fprintf(w_file, " * ");
	}else if (root->type == mod_){
		fprintf(w_file, " %% ");
	}else if (root->type == potencia_){
		fprintf(w_file, " pow (");
	}else if (root->type == igual_){
		fprintf(w_file, " = ");
	}else if (root->type == igual_igual){
		fprintf(w_file, " == ");
	}else if (root->type == diferente_){
		fprintf(w_file, " != ");
	}else if (root->type == menor_){
		fprintf(w_file, " < ");
	}else if (root->type == maior_){
		fprintf(w_file, " > ");
	}else if (root->type == menorIgual_){
		fprintf(w_file, " <= ");
	}else if (root->type == maiorIgual_){
		fprintf(w_file, " >= ");
	}else if (root->type == and_){
		fprintf(w_file, " && ");
	}else if (root->type == or_){
		fprintf(w_file, " | ");
	}else if (root->type == not_){
		fprintf(w_file, "!");
	}
}

