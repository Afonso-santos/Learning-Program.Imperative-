/* Imprimir os números inteiros entre 1 e N, com N dado pelo utilizador*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y ;
    printf("Escreva 1 numero: ");
    scanf("%d", &x);
    
    while (y<=x){
        printf("%d\n",y);
        y++;
    }
    return 0;

}