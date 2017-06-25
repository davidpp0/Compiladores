#include <stdio.h>
#include <stdlib.h>
#define SIZE 997


typedef enum tipos{
  int_,
  func_,
  flt_,
  char_,
  string_, 
  void_,
  bool_,
}tipos;

typedef struct elementos
{
  int tam;
  char *nome;
  tipos tipo;
  tipos output;

}elementos;

typedef struct hashTable{ 
  int size;
  struct hashTable *antiga;
  struct hashTable *nova;
  elementos lista[SIZE];
}hashTable;



hashTable *newHashtable()
{
  hashTable *tabela = malloc(sizeof(hashTable));
  tabela->size =0;
  int i;
  for(i = 0; i < SIZE; i++)
    tabela->lista[i] = NULL; 

  return tabela;
}


int hash(char word[], int size)
{

    int h = 0;
    int i = 0;

    while (word[i] != '\0')
    {
        h += word[i];
        i++;
    }
    int c;
    if(size == 0)
      c = 0;
    else
      c = h % SIZE;
  return c;
}

int reHash(int hash){
  hash++;
  return hash;
}



void new_scope(hashTable *ht)
{
  hashTable *ht2 = newHashtable();
  int i;
  ht2->next = NULL; //apontador para a frente
  ht2->old = ht;  // apontador para tras
  ht->next = ht2; // apontador para a frente
}


void insereHashTable(hashTable *ht, char *nome, tipos tipo, tipos output){
  elementos *e = malloc(sizeof(elementos));
  e->nome= nome;
  e->tipo =tipo; 
  e->output = output;

  int pos = hash(nome,ht->size);
  while{
    if(hashTable->elementos[pos]!=NULL){
      pos = rehash(pos);
    }else{
      hashTable->elementos[pos]= e;
      break;
    }
  }
}


elementos procura(hashTable *ht, char *nome){
  int pos = hashTable(nome, ht->size);
  while(pos<SIZE){
    if (!srtcmp(nome, ht->elementos[pos])){
      pos = rehash(pos);
    }else{
      return ht->elementos[pos];
    }
  }
  return NULL;
}

void limpaHashTable(hashTable *ht){
  free(ht);
}

int main(){
  hashTable *h = newHashtable();
  insereHashTable(h, "joao", int_, NULL);
}