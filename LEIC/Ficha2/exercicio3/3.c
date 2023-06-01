/* Calcular, dados três números inteiros, a soma dos dois menores.  */
#include <stdio.h>

int main(void)
{
    int a, b, c, d ;
    printf("Escreve 3 numeros: ");
    scanf("%d %d %d",&a,&b, &c);

    if (a > b && a > c){

        d= b+c;
        printf("\nO soma dos 2 menores é:%d ",d);       
    }else if (b > a && b > c){
        d=a+c;
        printf("\nO soma dos 2 menores é:%d ",d);
    }else {
        d= b+a ;
        printf("\nO soma dos 2 menores é:%d ",d);
    }
    return 0;
}