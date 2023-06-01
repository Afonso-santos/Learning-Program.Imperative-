/* Calcular a soma dos números inteiros entre 1 e N, com N dado pelo utilizador. */

#include <stdio.h>
#include <math.h>


int main(void)
{
    int x,y;
    int z= 0;
    printf("Escreva um numero: ");
    scanf("%d", &x);

    for(y=0 ; y <= x;y++ ) {
        z= z+y;
        
    }
    printf("\nO somatorio é:%d ",z);
    return 0 ;
}