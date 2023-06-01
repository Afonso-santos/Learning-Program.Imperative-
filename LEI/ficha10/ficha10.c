#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} * ABin;

//1

//--a

ABin removeMenor (ABin *a)
{
    if (*a == NULL){
        return NULL;
    }else if((*a)->esq == NULL){
        ABin aux = *a;
        *a = (*a)->dir;
        return aux;
    }else{
        return removeMenor(&((*a)->esq));
    }
}
//--b
removeRaiz (ABin *a)
{   
    ABin menor=removeMenor(&((*a)->dir));
    ABin aux_e = (*a)->esq;ABin aux_d=(*a)->dir;
    free(*a);

    if(menor==NULL){
        *a = aux_e;
    }else{
        menor->esq = aux_e;
        menor->dir = aux_d;
        *a = menor;
    }
}
    // if((*a)->esq ==NULL && (*a)->dir == NULL){
    //     free(*a);
    //     *a = NULL;

    // }else if((*a)->esq==NULL){
    //     ABin aux = *a;
    //     *a = (*a)->dir;
    //     free(aux);
    // }else if((*a)->dir==NULL){
    //     ABin aux = *a;
    //     *a = (*a)->esq;
    //     free(aux);
    // }




//--c

int removeElem (ABin *a, int x)
{
    if(*a == NULL){
        return 1;
    
    }else if((*a)->valor == x){
        removeRaiz(a);
        return 0;
    }else if((*a)->valor > x){
        return removeElem(&((*a)->esq),x);
    }else{  
        return removeElem(&((*a)->dir),x);
    }

}


void promoveMenor (ABin *a)
{
    

}
