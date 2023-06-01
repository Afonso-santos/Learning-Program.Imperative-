#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct celula {
  char *palavra;
  int ocorr;
  struct celula *prox;
} *Palavras;

// 1
void libertaLista(Palavras p) {
  Palavras aux;
  while (p != NULL) {
    aux = p->prox;
    free(p->palavra);
    free(p);
    p = aux;
  }
}

// 2
int quantasP(Palavras l) {
  int cont = 0;
  while (l != NULL) {

    cont++;
    l = l->prox;
  }
  return cont;
}

// 3
void listaPal(Palavras l) {

  while (l != NULL) {
    printf("%d -- %s\n", l->ocorr, l->palavra);

    l = l->prox;
  }
}

// 4
char *ultima(Palavras l) {

  if (l == NULL) {
    return NULL;
  }

  while (l->prox != NULL) {
    l = l->prox;
  }

  return l->palavra;
}

// 5

Palavras acrescentaInicio(Palavras l, char *p) {
  Palavras new_word =
      malloc(sizeof(struct celula)); // reservar espaço da struct
  char *letras =
      malloc(sizeof(char) * (strlen(p) + 1)); // resevre espaço da string

  strcpy(letras, p);

  new_word->palavra = letras;
  new_word->ocorr = 1;
  new_word->prox = l;

  return new_word;
}

// 6

Palavras acrescentaFim(Palavras l, char *p) {
  Palavras new_word = malloc(sizeof(struct celula));
  char *letras = malloc(sizeof(char) * (strlen(p) + 1));

  strcpy(letras, p);

  new_word->ocorr = 1;
  new_word->palavra = letras;
  new_word->prox = NULL;

  if (l == NULL) {
    return new_word;
  }
  Palavras aux = l;

  while (aux->prox != NULL) {

    aux = aux->prox;
  }

  aux->prox = new_word;

  return l;
}

/*
Palavras acrescentaFim(Palavras l, char *p) {
  Palavras new_word = malloc(sizeof(struct celula));
  char *letras = malloc(sizeof(char) * (strlen(p) + 1));

    Palavras *lp;
    lp = &l;

    while(*lp != NULL){
        
        lp= &(*lp) -> prox
    }
    *lp=nova_pal

*/


Palavras acrescenta (Palavras l, char *p)
{

  Palavras aux=l;
  Palavras ant= NULL;
  while (aux!=NULL) {
    
    if (strcmp(l->palavra,p)==0) {
      aux->ocorr+=1;
      return l;
    }
    ant=aux;
    aux=aux->prox;
  }

  Palavras new_word=malloc(sizeof(struct celula));
  char *letras= malloc(sizeof(char)*(strlen(p)+1));

  strcpy(letras,p);

  new_word->ocorr=1;
  new_word->palavra=letras;

 if (l == NULL || strcmp(l->palavra, p) > 0) {

    new_word->prox = l;
    l = new_word; 

  } else {
    
    while (ant->prox != NULL && strcmp(ant->prox->palavra, p) < 0) {
      ant = ant->prox;
    }
    new_word->prox = ant->prox;
    ant->prox = new_word;
  }

  return l; 
}



struct celula * maisFreq (Palavras l) 
{
  if (l==NULL) {
    return l ;
  }
  Palavras maisFreq = l;
  Palavras aux =l;
  while (aux!=NULL) {
    if (aux->ocorr > maisFreq->ocorr ) {
      maisFreq=aux;
    }
    aux=aux->prox;
    

  }

  return maisFreq;
}