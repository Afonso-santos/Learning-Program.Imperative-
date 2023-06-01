#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} * ABin;

ABin newABin (int r, ABin e, ABin d) {
ABin a = malloc (sizeof(struct nodo));
if (a!=NULL) {
a->valor = r; a->esq = e; a->dir = d;
}
return a;
}

int max(int a , int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}

int altura (ABin a)
{
    if(a==NULL) return 0;

    int e= altura(a->esq);
    int d= altura(a->dir);
    
    return 1+max(e,d);
}

int nFolhas (ABin a)
{
    if(a==NULL){
        return 0;
    }
    if(a->esq==NULL && a->dir==NULL){
        return 1;
    }else{
        return 0;
    }

    return nFolhas(a->esq)+nFolhas(a->dir);
}

ABin maisEsquerda (ABin a)
{
    if(a==NULL){
        return NULL;
    }
    while(a->esq!=NULL){
        a=a->esq;
    }
    return a;
}

void imprimeNivel (ABin a, int l)
{
    if(a!=NULL){

        if(l==0){
            printf("%d",a->valor);
        }else{

            imprimeNivel(a->esq,l-1);
            imprimeNivel(a->dir,l-1);

        }
    }
}


int procuraE (ABin a, int x)
{
    if(a==NULL){
        return 0;
    
    }
    if(a->valor==x){
        return 1;
    }else{
        procuraE(a->esq,x);
        procuraE(a->dir,x);
    }
}

struct nodo *procura (ABin a, int x)
{
    if(a==NULL){
        return NULL;
    }
    if(a->valor==x){
        return a;
    }else if(a->valor<x){
        procura(a->dir,x);
    }else{
        procura(a->esq,x);
    }
}

int nivel (ABin a, int x)
{   
    int res=-1;
    int cont_nivel=0;
    while(a!=NULL){
        if(x<a->valor){
            a=a->esq;
            cont_nivel++;
        }else if(x>a->valor){
            a=a->dir;
            cont_nivel++;
        }else{  
            res=cont_nivel;
            break;
        }
    }
    
    return res;
}

void imprimeAte (ABin a, int x) 
{
    if(a==NULL){
        return a;
    }
    if(a->valor==x){
        printf("%d",a->valor);
    }else if(a->valor<x){
        imprimeAte(a->esq,x);
        printf("%d",a->valor);
        
    }
}