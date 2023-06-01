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
 
 
 // 1

int nota (Aluno a){
    
    float media_do_MT,miniteste_somado=0,nota_mini,nota_teste,nota_fim;
    int i;

    for ( i=0; i<6; i++) {
       miniteste_somado += a.miniT[i];

    }
    media_do_MT= miniteste_somado / 6;
    if (media_do_MT < 0.50) {
        return 0;

    }else {
    
        nota_mini=media_do_MT*0.20;

           
        
        nota_teste =a.teste* 0.80;
        nota_fim = nota_mini + nota_teste;
        if (nota_fim<9.5) {

            return 0;
        
        }else {
             return round(nota_fim);
        }
        
        //printf("%.2f\n",nota_fim);
       
    }



    return 0;
}



int procuraNum (int num, Aluno t[], int N){
    
    for (int i =0;  i <N ; i++) {
        if (num == t[i].numero) {

            return i;
        }
    }    
    return -1;
}

// void bubble_sort (int vetor[], int n) {
//     int k, j, aux;

//     for (k = 1; k < n; k++) {
        
//         for (j = 0; j < n - 1; j++) {
            

//             if (vetor[j] > vetor[j + 1]) {
//                 aux          = vetor[j];
//                 vetor[j]     = vetor[j + 1];
//                 vetor[j + 1] = aux;
//             }
//         }
//     }
// }


void ordenaPorNum (Aluno t [], int N)
{   
    Aluno aux;

    for (int i=1; i<N ; i++) {
        for (int j=0; j<N-1 ;j++ ) {
            if (t[j].numero > t[j+1].numero) {

               aux= t[j]; 
               t[j]=t[j+1];
               t[j+1]=aux;
            }
        }
    }
}

// 4

// void criaIndPorNum(Aluno t [], int N, int ind[])
// {   
//     ind = (ind*) malloc(N);
//     int aux;
//     for (int i =1; i<N ; i++) {
//         for (int j =0 ; j<N-1 ; j++) {
            
//             if (t[j].numero>ind[j]) {
//                 aux = t[j].numero;
//                 ind[j]= ind[j+1];
//                 ind[j+1]= aux;
//             }
//         }           
//     }
// } 