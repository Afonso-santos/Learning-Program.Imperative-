/* Dado um numero N, escrever a tabuada dos N */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x;
    int y = 0;
    int z;
    printf("Escreva um numero para a tabuada: ");
    scanf("%d",&x);

    while (y<10) {
        y++;
        z = x*y;
        printf("\n%d x %d = %d",x,y,z);
    
    }
    return 0 ;
}