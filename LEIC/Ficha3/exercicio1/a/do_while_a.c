/* Imprimir os números inteiros entre 1 e N, com N dado pelo utilizador*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int x, y;
    printf("Escreva um numero: ");
    scanf("%d",&x);

    do {
        printf("\n%d",y);
        y++;        
    }
    while(y<=x);
    return 0 ;

}
