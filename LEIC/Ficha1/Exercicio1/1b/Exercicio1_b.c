/*Ler três números, e devolver a sua média aritmética. */

#include <stdio.h>

int main(void)
{
    int a,b,c,d;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("c: ");
    scanf("%d", &c);

    d=(a+b+c)/3 ;
    
    printf("A média aritmética = %d", d);
    return 0;
}