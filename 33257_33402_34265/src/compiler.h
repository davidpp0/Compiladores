#include <stdio.h>
#include <string.h>
#include "tree.h"

void root(StmList *root);
void printStmList (StmList *root);
void printDecl (Decl *root);
void printFunc (Func *root);
void printIdList (IdList *root);
void printTipo (Tipo *root);
void printArgLista(ArgLista *root);
void printExpressao (Expressao *root);
void printOperacao (Operacao *root);

void traduzStmList (StmList *root);
void traduzDecl (Decl *root);
void traduzFunc (Func *root);
void traduzIdList (IdList *root);
void traduzTipo (Tipo *root);
void traduzArgLista(ArgLista *root);
void traduzExpressao (Expressao *root);
void traduzOperacao (Operacao *root);