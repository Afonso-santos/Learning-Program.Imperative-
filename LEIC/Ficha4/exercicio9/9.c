/*Escreva uma função que recebe por parâmetro um valor inteiro e positivo N e retorna o valor de uma série S, onde S = 1 + 1/1! + ½! + 1/3! + 1/N! */


#include <stdio.h>

long factorial(int n)
{
    int c;
    long result = 1;

    for (c = 1; c <= n; c++){
        result = result * c;
    }

    return result;
}

int main (void)
{
    int x, y,a,b;
    float z;

    printf("O somatorio desta sucessao, S = 1 + 1/1! + ½! + 1/3! + 1/N! quando o N é: ");
    scanf("%d",&x);

    for (y=1;y<=x;y++) {
        for(a=1;a<=y;a++){
            b+= 1.0/ factorial(a);
        }
           
    }
    printf("O ressultado é %.2f",z);
    return 0;
}