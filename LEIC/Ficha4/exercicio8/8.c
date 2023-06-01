/* Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de uma série S, onde S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N. */

#include <stdio.h>
#include <math.h>

int main (void)
{
    int x ,y ;
    float z;

    printf("O valor da sucessão S = 1 + ½ + 1/3 + ¼ + 1/5 + 1/N quando o n é: ");
    scanf("%d",&x);

    for (y=1;y<=x  ;y++) {
        z += 1/(float)y;
    }   
    printf("o valor da sucessão é:%.2f" ,z );
    return 0;
}   