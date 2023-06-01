/* Dado um numero N, escrever a tabuada dos N */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x,y,z;
    printf("Diga um numero para fazer a tabuada: ");
    scanf("%d", &x);

    for (y=1; y<=10; y++) {
        z=y * x ;
        printf("\n%d x %d = %d",x,y,z);       
    }
    return 0;
}