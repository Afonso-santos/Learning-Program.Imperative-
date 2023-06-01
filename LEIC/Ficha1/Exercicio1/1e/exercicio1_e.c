/*Ler  uma  temperatura  em  graus  Celsius  e  convertê-la para  graus  Fahrenheit,  com  base  na seguinte fórmula de conversão: */
/* F = 1,8 * C + 32 */
/* Onde F é a temperatura em graus Fahreneit, e C é a temperatura em graus Celsius. */
#include <stdio.h>

int main(void)
{
    float C , F ;
    printf("Temperatura em Celsius: ");
    scanf("%f",&C);

    F = C * 1.8;
    F += 32 ;

    printf("\n %.2f Cº == %.2f Fº",C,F);
    return 0 ;
}