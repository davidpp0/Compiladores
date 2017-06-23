#include "compiler.h"
#include <string.h>

void root(StmList *root){
	printStmList(root);
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
		}
		if (root->stmList != NULL){
			printf("; ");
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
			printf("\n");
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
			printf("\n");
		}

	}else if (root->type == id_igual_exp){
		if (root->expressao != NULL){
			printf("%s = ",root->id);
			printExpressao(root->expressao);
			printf("\n");
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
			printf("then ");
			printStmList(root->stmList1);
			printf("\n");
		}

	}else if (root->type == if_exp_then_stmList_else_stmList){
		if (root->expressao != NULL){
			printf("if ");			
			printExpressao(root->expressao);
		}if (root->stmList1 != NULL){
			printf("then ");
			printStmList(root->stmList1);
		}if (root->stmList2 != NULL){
			printf("else ");
			printStmList(root->stmList2);
			printf("\n");
		}

	}else if (root->type == while_exp_do_stmList){
		if (root->expressao != NULL){
			printExpressao(root->expressao);
		}if (root->stmList1 != NULL){
			printStmList(root->stmList1);
		}

	}else if (root->type == print_){
		if(root->expressao!=NULL){
			printExpressao(root->expressao);
		}

	}else if (root->type == return_){
		if(root->expressao!=NULL){
			printf("return ");
			printExpressao(root->expressao);
			printf("\n");
		}
	}else if (root->type == input_id){
		printf("input (");
		printf("%s", root->id);
		printf(")");
		printf("\n");
	}else if (root->type == output_id){
		printf("output (");
		printf("%s", root->id);
		printf(")");
		printf("\n");
	}else if (root->type == break_){
		printf("break ");
		printf("\n");
	}else if (root->type == next_){
		printf("next ");
		printf("\n");
	}else if (root->type == def_id_type){
		if (root->tipo != NULL){
			printTipo(root->tipo);
		}
	}
}

void printFunc (Func *root){
	if (root->type == id_arglist_dpontos_tipo_stmList ){
		if (root->argLista != NULL){
			printArgLista(root->argLista);
		}if (root->tipo != NULL){
			printTipo(root->tipo);
		}if (root->stmList != NULL){
			printStmList(root->stmList);
		}

	}else if (root->type == id_pars_dpontos_tipo_stmList){
		if (root->tipo != NULL){
			printTipo(root->tipo);
		}if (root->stmList != NULL){
			printStmList(root->stmList);
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
		printf("%s ", root->id);

	}else if (root->type == id_virg_idlist){
		printf("%s, ",root->id);
		if (root->idList != NULL){
			printIdList(root->idList);						
		}

	}else if (root->type == num_){
		printf("%d ",root->num );

	}else if (root->type == num_idlist){
		printf("%d ", root->num);
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
	}else if (root->type == void_){
		printf("void ");
	}
}
    
void printArgLista(ArgLista *root){
	if (root->type == idlist_dpontos_tipo_argL){
		if (root->idList != NULL){
			printIdList(root->idList);
			printf(": ");
			printTipo(root->tipo);
			printf("\n");
		}

	}else if (root->type == idlist_dponstos_tipo_virg_args){
		if (root->idList != NULL){
			printIdList(root->idList);
			printf(": ");
			printTipo(root->tipo);
			printf(", ");
			printArgLista(root->argLista);
			printf("\n");
		}

	}else if (root->type == idlist_){
		if (root->idList != NULL){
			printIdList(root->idList);
			printf("\n");
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

