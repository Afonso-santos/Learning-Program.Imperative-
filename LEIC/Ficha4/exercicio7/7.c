/*Construa uma função que recebe, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valo*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include <stdbool.h>

int main (void)
{
    int x,y,z=0;

    printf("Descobra os divisores do numero: ");
    scanf("%d",&x);

    for (y=1;y<=x;y++) {
        if((x % y) ==0){
            z+=1;
        }
        
    }
    printf("O numero de divisores é :%d",z);
    return 0;
}