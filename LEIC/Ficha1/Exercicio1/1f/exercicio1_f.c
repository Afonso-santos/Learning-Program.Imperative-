/*Ler  uma  distância  em  milhas  e  convertê-la  para  quilómetros,  sabendo  que  uma  milha equivale a 1,609 km. */

#include <stdio.h>

int main(void)
{
    float km, mi;
    printf("distancia em milhas: ");
    scanf("%f",&mi);

    km = 1.609*mi;

    printf("\n %.2f mi == %.2f km",mi,km);

    return 0;


}