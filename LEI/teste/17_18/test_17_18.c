#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lligada {
int valor;                  // o q é o valor ? valor do apontador , conteudo 
struct lligada *prox;
} *LInt;

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} *ABin;
//1
int retiraNeg (int v[], int N)
{   
    int i=0;
    for(int j=0; j<N;j++){
        if(v[j]>0){
            v[i]=v[j];
            i++;
        }
    }

    for(int m=0;m<i;m++){
        printf("%d,",v[m]);
    }
    return i;
}

//2


//3

int maximo (LInt l)
{
    int max=l->valor;
    LInt aux=l;

    while(aux!=NULL) {
        if (aux->valor>max){
            max=aux->valor;
        }
        aux=aux->prox;
    }
    return max;
}

// 4
int removeAll (LInt *l, int x)
{
    //LInt atual= *l;
    LInt ant=NULL;
    int delete_room=0;

    while ((*l)!=NULL){


        if((*l)->valor==x){

            if(ant==NULL){
                (*l)=(*l)->prox;
                delete_room++;
                
                //atual = *l;
            }else{
                ant->prox=(*l)->prox;
                delete_room++;
                //(*l) = (*l)->prox;
            }

        }else{
            ant=(*l);
            l=&((*l)->prox);
        }
    }
    return delete_room;
}
/*
int removeAll(LInt *l, int x) {
    int rem = 0;
    LInt prev = NULL;
    while(*l) {
        if((*l)->valor == x) {
            if(!prev) (*l) = (*l)->prox;
            else prev->prox = (*l)->prox;
            rem++;
        }slist
        else {
            prev = (*l);
            l = &((*l)->prox);
        }
    }
    return rem;
}
*/

// 5
LInt arrayToList (int v[], int N)
{
    if(N==0){
        return NULL;
    }
    LInt new=(LInt) malloc(sizeof(LInt));
    new->valor=*v;
    new->prox=arrayToList(v+1,N-1);

    return new;
}



//6

int minheapOK(ABin a) {
    if (a == NULL) {
        return 1;
    }

    if (a->esq != NULL && a->esq->valor < a->valor) {
        return 0; 
    }

    if (a->dir != NULL && a->dir->valor < a->valor) {
        return 0; 
    }

    
    return minheapOK(a->esq) && minheapOK(a->dir);
}






int main()
{
    int array[]={1,-2,3,-4,5};
    int a=5;

    printf("\n%d",retiraNeg(array,a));

    return 0;
}
