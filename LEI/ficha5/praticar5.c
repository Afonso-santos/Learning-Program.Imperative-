#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
int numero;
char nome[100];
int miniT [6];
float teste;
} Aluno;

int nota(Aluno a)
{
    float media_do_MT,miniteste_somado=0,nota_mini,nota_teste,nota_fim;

    for(int i=0;i<6;i++){

        miniteste_somado+=a.miniT[i];
    }
    media_do_MT=miniteste_somado/6;
    if(media_do_MT<0.50){
        return 0;
    }else{
        nota_mini=media_do_MT*0.20;

        nota_teste=a.teste*0.80;
        nota_fim=nota_teste+nota_mini;
        if(nota_fim>=9.5){
            return round(nota_fim);
        }else{
            return 0;
        }
    }
}

int procuraNum (int num, Aluno t[], int N)
{   
    int res=-1;
    int i;
    for(i=0;i<N  ;i++ ){

        if(t[i].numero==num){
            res=i;
        }

    }
    return res;
}

void ordenaPorNum (Aluno t [], int N) 
{   
    int i,j;
    for(i=0;i<N;i++){
        for(j=i;j<N-i;j++){

            if(t[j].numero>t[j+1].numero){
                Aluno temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
}

void criaIndPorNum(Aluno t [], int N, int ind[]) 
{
    for(int i=0;i<N;i++){
        ind[i]=i;

    }

    for(int i=0;i<N;i++){
        for(int j=0;j<N-i;j++){

            if(t[j].numero>t[j+1].numero){
                int temp=ind[j];
                ind[j]=ind[j+1];
                ind[j+1]=temp;
            }

        }
    }

}

void imprimeTurma (int ind[], Aluno t[], int N)
{
    ordenaPorNum(t , N);

    for (int i = 0; i < N; i++){

        print("%d, %s, {%d, %d, %d, %d, %d, %d}, %1.f",t[i].numero,t[i].nome,t[i].miniT[0],t[i].miniT[1],t[i].miniT[2],t[i].miniT[3],t[i].miniT[4],t[i].miniT[5], t[i].teste);
    }
    
}

void criaIndPorNome (Aluno t [], int N, int ind[])
{
    for (int i=0; i<N;i++){
        ind[i]=i;

    }  

    for(int i=0;i<N;i++){
        for(int j=i;j<N-i;j++){

            if(strcmp(t[j].nome,t[j+1].nome)<0){
                int temp=ind[j];
                ind[j]=ind[j+1];
                ind[j+1]=temp;
            }

        }
    }
}