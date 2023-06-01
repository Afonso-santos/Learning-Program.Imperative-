/*Construa uma função que recebe um valor inteiro e verifica se o valor é par ou ímpar. A função deve retornar um valor booleano.*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int x;
    bool y =false;

    printf("Escreva um numero para ver se é par: ");
    scanf("%d",&x);

    if (x%2 == 0){
        printf("%d is true",x);
    }
    else{
        printf("%d is false",x);
    }
    return 0;
}