#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pesquisa (int a[], int N, int x)
{
    int res=-1;
    for(int i=0; i<N && res ==-1;i++){

        if(a[i]==x){
            res=i;
            
        }

    }
    return res ;
}

typedef struct LInt_nodo {
int valor;
struct LInt_nodo *prox;
} *LInt;

void roda (LInt *l)
{   
    LInt atual=*l;
    LInt ant=NULL;
    LInt aux=*l;

    if(l==NULL ){
        return NULL;
    }
    while(atual->prox!=NULL){

        ant=atual;
        atual=atual->prox;
    }
    atual->prox=aux;
    ant->prox=NULL;

}

typedef struct ABin_nodo {
int valor;
struct ABin_nodo *esq, *dir;
} *ABin;

ABin apaga(ABin a)
{
    if(a==NULL){
        return a;
    }
    if(a->esq!=NULL){
        a->esq=apaga(a->esq);
    }else{
        LInt aux=a->dir;
        free(a);
        a=a->dir;

    }

}




int apaga_n (ABin a, int n)
{   
    int cont=0;
    for(int loop=0; a!=NULL && loop<n;n++){
        apaga(a);   
        cont++;
    }
    return cont ;
}

//_--------------------------------------------------------

void checksum (char s[])

{   
    int len=strlen(s);
    int soma=0;
    int cont_digit=0;
    int Digit=0;
    int sum_Digit=0;

    for(int i=strlen(s)-1; i>=0;i--){
        int num=s[i]- '0';
        
        if(cont_digit % 2){
            Digit = num*2;
            sum_Digit+=Digit%10 +Digit/10;
            
            cont_digit++;
        }else{
            
            soma+=num;
            cont_digit++;
        }
    }

    int aux=(sum_Digit +soma)%10;
    aux=(10-aux)%10;

    s[len]=aux +'0';
    s[len+1]='\0';


}
