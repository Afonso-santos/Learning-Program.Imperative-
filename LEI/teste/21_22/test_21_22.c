#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// LInt caminho(ABin a, int x)
// {   
//     LInt t;
//     if(a==NULL){
//         return NULL; 
//     }
//     if(a->valor==x){
//         LInt new =malloc(sizeof (struct LInt_nodo));
//         new->valor=x;
//         new->prox=NULL;
//     }
//     if(x<a->valor){
//         t = caminho(a->esq,x);

//     }else{
//         t=caminho(a->dir,x);
//     }
//     if(t==NULL){
//         return NULL;
//     }
//     LInt l=malloc(sizeof(struct LInt_nodo));
//     l->valor=x;
//     l->prox=t;


int nesimo(int a[], int N, int i)
{  
    int temp;
    for(int q=0;q<N;q++){
        for(int j=q;q<N-j;j++){

            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    return a[i-1];


}

typedef struct LInt_nodo {
int valor;
struct LInt_nodo *prox;
} *LInt;

LInt removeMaiores(LInt l, int x)
{
    LInt ant=NULL;
    LInt atual = l;

    while (atual!=NULL){
        if(atual->valor>x){
            if(ant==NULL){

                atual=atual->prox;
            
            }else{
                
                ant->prox=atual->prox;

            }
            LInt temp=atual;
            free(atual);
            atual=temp;      
        
        }else{
            ant=atual;
            atual=atual->prox;

        }



    }
    return ant;
}


typedef struct ABin_nodo {
int valor;
struct ABin_nodo *esq, *dir;
} *ABin;


LInt caminho(ABin a, int x)
{
    LInt t;
    if(a==NULL){
        return NULL;
    }
    if(a->valor==x){

        LInt new= malloc(sizeof(struct LInt_nodo));
        if(new==NULL){
            return NULL;
        }
        new->valor=a->valor;
        new->prox=NULL;
    }
    if(a->valor>x){
        t=caminho(a->esq,x);
    }else{
        t=caminho(a->dir, x);
    }
    if(t==NULL){
        return NULL;
    }
    LInt l= malloc(sizeof(struct LInt_nodo));
    if(l==NULL){
        return NULL;
    } 
    l->prox=t;
    l->valor=x;

    return l;
}


void inc(char s[]) 
{
    int len=strlen(s);
    int vai_um=1;

    for(int i=len-1;i>=0;i--){

        if((s[i]-'0' +vai_um)==10){
            vai_um=1;
            s[i]='0';

        }else{
            s[i]=s[i]+vai_um;
            vai_um=0;
        }

    }

}
int main() {
    char s[] = "199";

    printf("Antes: %s\n", s);
     inc(s);
    printf("Depois: %s\n", s);

    return 0;
}

int sacos(int p[], int N, int C)
{    
    if(p==NULL){
        return 0;
    }
    int num_sacos=0;
    for(int i=0; i<N;i++){
        for(int j=i+1;j<N-i+1;j++){

            if(p[i]+p[j]==C){
                num_sacos++;
                p[j]=0;

            }

        }

    }
}