/* Calcular a soma dos números inteiros entre 1 e N, com N dado pelo utilizador. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int y = 0;
    int z = 0;
    printf("Escreva um numero: ");
    scanf("%d", &x);

    do{
        y++;
        z=z+y;

    }
    while(y<x);
    printf("\nO somatorio é :%d",z);
    return 0;

}