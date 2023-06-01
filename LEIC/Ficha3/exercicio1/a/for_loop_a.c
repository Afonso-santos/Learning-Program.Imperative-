/* Imprimir os números inteiros entre 1 e N, com N dado pelo utilizador*/

#include <stdio.h>
#include <math.h>


int main(void)
{
    int x,y ;
    printf("Escreve um numero: ");
    scanf("%d",&x);

    for(y = 0 ;y<=x ;y++ ){
        printf("%d\n",y);
    }
    return 0;


}