/* Imprimir no écran os 256 caracteres ASCII (nota: Utilize printf(“%c “,i) */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x =0;
    while(x<=256){
        x++;
        printf("\nCaracter ASCII:%c" ,x);

    }
    return 0;
}