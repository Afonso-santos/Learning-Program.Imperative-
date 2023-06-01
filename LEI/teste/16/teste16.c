#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *strcat(char s1[],char s2[])
{   int i,j;
    if(s2==NULL){
        return *s1;
    }
    for(i=0; s1[i]!='\0';i++){
    }

    for(j=i;s2[i]!='\0';j++,i++){
        s1[j]=s2[i];
    }
    s1[j+1]='\0';
    return *s1;
}

int remRep(char x[])
{   char*aux;
    int j=0;
    for(int i=0,j=0;x[i]!='\0';i++,j++){
        if(x[i]!=x[i+1]){
            x[j]=x[i];
            j++;
        }
    }
    return j;
}


typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} * ABin;

int nivelV(ABin a, int n,int v[])
{   
    int i=0;
    if(a==NULL || n<1){
        return 0;
    }else if(n==1){
        v[0]=a->valor;
        return 1;

    }   
    i+=nivelV(a->esq,n-1,v+1);
    i+=nivelV(a->dir,n-1,v+1);

    return i;


}