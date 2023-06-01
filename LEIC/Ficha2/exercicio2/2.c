/* Calcular o valor do maior de três números*/

#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Escreve 3 numeros: ");
    scanf("%d %d %d ", &a,&b,&c);

    if(a > b && a > c){
        printf("\nO numero maior é o: %d",a);
    }else if (b > a && b > c) {
        printf("\nO numero mairo é o: %d",b);  
    }else{
        printf("\nO numero maior é o:%d",c);
    }
    return 0;



}