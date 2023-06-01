/* Imprimir no écran os 256 caracteres ASCII (nota: Utilize printf(“%c “,i) */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x=0;
    do {
    x++;
    printf("\nO caracter ASCII:%c ",x);
    }while (x<=256);
    return 0 ;

}