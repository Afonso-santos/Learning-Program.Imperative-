/*Dada  uma  determinada  hora  do  dia,  em  horas,  minutos  e  segundos,  indicar  quantos segundos decorreram desde o início do dia (sem efetuar validações). */

#include <stdio.h>

int main(void)
{
    int hora, minutos, segundos,seg ;
    printf("hora: ");
    scanf("%d", &hora);
    printf("min: ");
    scanf("%d",&minutos);
    printf("segundos: ");
    scanf("%d", &segundos );

    seg = minutos * 60;
    seg += hora *360 ;
    seg += segundos;
    
    printf("Em segundos: %d\n", seg);
    return 0;
}