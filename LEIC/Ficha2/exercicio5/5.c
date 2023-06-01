/* 5.Ler um número inteiro e mostrar uma mensagem indicando se este número é par ou ímpar, e se é positivo ou negativo.*/


#include <stdio.h>
#include <math.h>

int main(void)
{
    float x ;
    printf("Escreva um numero: ");
    scanf("%f", &x);

    if(x>= 0 && fmod(x, 2)== 0){
        printf("\nO numero é par e positivo.");
    }else if (x < 0 && fmod(x,2)==0){
        printf("\nO numero é par e negativo.");
    }else if (x>= 0  && fmod(x,2)!= 0){
        printf("\nO numero é impar e positivo.");
    }else if (x<0 && fmod(x,2)!= 0){
        printf("\nO numero é impar negativo.");
    }
    return 0;
    
}