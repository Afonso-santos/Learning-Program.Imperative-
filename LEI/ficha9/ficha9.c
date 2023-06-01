#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} * ABin;

ABin newABin (int r, ABin e, ABin d) 
{
    ABin a = malloc (sizeof(struct nodo));
    if (a!=NULL) {
        a->valor = r; a->esq = e; a->dir = d;
    }
    return a;
}

//1
//  a
// int altura (ABin a)
// {
//     int e=0;
//     int d=0;
//     if (a==NULL) {
//         return 0;
//     }
//     e+=altura(a->esq);
//     d+=altura(a->dir);

//     return 1+(e>d ? e:d);
// }
int max(int x,int y)
{

    return x>y ? x:y;
}


int altura (ABin a)
{
    int res =0;
    if (a!=NULL) {
        res=1+max(altura(a->esq),altura(a->dir));
    }
    return res;
}
//b
int nFolhas (ABin a) 
{   
    int res=0;
    if (a!=NULL) {
        
        if (a->esq ==NULL && a->dir == NULL) {
            return 1;

        }else {
            return 0;
        }
        
    }

    return nFolhas(a->esq)+nFolhas(a->dir);
}

// c
ABin maisEsquerda (ABin a) 
{
    ABin res;
    if (a==NULL) {
        return NULL;    
    }

    while (a->esq!=NULL) {
        
        a=a->esq;
        
    }
    return a;
}

//d 

void imprimeNivel (ABin a, int l)
{
    if (a!=NULL) {
        if (l==0) {

            printf("%d",a->valor);
        }else {
            imprimeNivel(a->dir, l-1);
            imprimeNivel(a->esq, l-1);
        }

        
    }else {
        printf("Nao funciona");
    }
}

// e

int procuraE (ABin a, int x)
{
    if (a!=NULL) {
        if (a->valor==x) {
            return 1;
        }else {
            
            procuraE(a->dir, x);
            procuraE(a->esq,  x);
        }
    }
    return 0;
}

// 2

// a

struct nodo *procura (ABin a, int x)
{   
    ABin res=NULL ;

    if (a!=NULL) {
        if (x==a->valor) {
            res=a;
        }else if (x<a->valor) {
            res =procura(a->esq,  x);
        }else {
            res= procura(a->dir,  x);
        }

    }
    return res;
}

// b 

int nivel (ABin a, int x)
{
    int res=-1;

    if (a!=NULL) {
        if (a->valor==x) {
            res=0;
        
        }else if (x<a->valor) {
            res=nivel(a->esq, x)+1;
        
        }else {
            res=nivel(a->dir,  x)+1;
        }

    }

    return  res;
}

//c

void imprimeAte (ABin a, int x)
{
    if (a==NULL) {
        printf("Nao funciona");
    }else {
        if (a->valor<x) {
            imprimeAte(a->esq,x);            
            printf("%d," ,a->valor);
            imprimeAte(a->dir,x);

        }else{
            imprimeAte(a->esq,x);
            

        }

    }

}