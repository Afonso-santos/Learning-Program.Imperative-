#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int paresImpares(int v[],int N)
{   int cont_par=0;
    for(int i=0;i<N-1;i++){
        for(int j=i;j<N-i-1;j++){
            if(v[j]%2==0){
                cont_par++;
            }else{
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }

    }
    return cont_par-1;
}

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

void merge (LInt *r, LInt a, LInt b)
{   
    if(a==NULL && b==NULL){
        *r=NULL;
    }else if(a==NULL){
        *r=b;
    }else  if(b=NULL){
        *r=a;
    }else if(a->valor<b->valor){
        (*r)->valor=a->valor;
        a=a->prox;
        merge((*r)->prox,a,b);
    }else if(a->valor>b->valor){
        (*r)->valor=b->valor;
        b=b->prox;
        merge((*r)->prox,a,b);
    }

}

void latino (int N, int m[N][N])
{
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            m[y][x]=(y+x) % N +1;
        }
    }
}


typedef struct nodo {
int valor;
struct nodo *pai, *esq, *dir;
} *ABin;


ABin next (ABin a) 
{
    if(a==NULL){
        return NULL;
    }
    if(a->esq==NULL && a->dir==NULL ){
        if(a->pai!=NULL){
            a->dir=a->pai;
            next(a->pai);
        }else{
            

        }
    }
   
}





int main() {
    int v[] = {2, 5, 8, 3, 6, 4, 7, 1};
    int N = sizeof(v) / sizeof(v[0]);

    printf("Array original: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    int num_pares = paresImpares(v, N);

    printf("Array organizado: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    printf("Número de pares: %d\n", num_pares);

    return 0;
}