/* Recorrendo a um ciclo do tipo while, desenvolva um programa para calcular o factorial de um número n, onde n é dado pelo utilizador. */

#include <stdio.h>
#include <math.h>

int main(void)
{

    int x;
    int y=1;
    int z=1;
    printf("Fatorial do numeor: ");
    scanf("%d",&x);
    while (y<x) {
        y++;
        z=z*y;
        
    }
    printf("\nO fatorial é %d",z);
    return 0 ;
}