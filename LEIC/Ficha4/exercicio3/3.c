/* Construa uma função que receba um valor inteiro e positivo e que calcula o seu factorial. */

#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int x, y,z=1;

    printf("Esreva um numero : ");
    scanf("%d", &x);

    for (y=1;y<=x ;y++) {
        z=y*z;
    }
    printf("O fatorial é : %d", z);
    return 0;

}