/*Dado o número de minutos decorridos desde o início do dia, calcular as horas e  minutos correntes (sem efetuar validações). */

#include <stdio.h>

int main(void)
{
    int min, hora;
    printf("minuto: ");
    scanf("%d", &min);

    hora=min/ 60 ;
    min =(min % 60)*10;

    printf("\nhoras: %d:%d",hora,min);
    
}