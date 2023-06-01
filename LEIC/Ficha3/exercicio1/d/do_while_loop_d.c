/* Dado um numero N, escrever a tabuada dos N */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int y =0;
    int z;
    printf("Escreva um numero para a tabuada: ");
    scanf("%d",&x);

    do {
        y++;
        z = x* y;
        printf("\n %d x %d = %d",x,y,z);
    }while (y<10);
    return 0;
}