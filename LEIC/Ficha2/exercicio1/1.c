/* Calcular o valor do maior de dois números inteiros fornecidos pelo utilizador */

#include <stdio.h>

int main(void)
{
    int x, y ;
    printf("Escreve 2 numeros: ");
    scanf("%d %d", &x,&y);

    if (x>y) {
        printf("\n%d é maior do que %d",x,y);
       }else {
        printf("\n%d é menor do que %d",x,y);
       }
    return 0;
}