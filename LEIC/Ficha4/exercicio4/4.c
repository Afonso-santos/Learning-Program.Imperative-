/*Construa uma função que recebe, por parâmetro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal. Para homens, calcular o peso ideal usando a fórmula peso ideal = 72.7 * alt – 58. Para mulheres, aplicar a fórmula peso ideal = 62.1 x alt - 44.7.*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    float a,p ;
    char y[10];

    printf("Escreve a tua altura e seu sexo (Masc / Fem): ");
    scanf("%f , %s", &a ,y);

    if ((strcmp(y , "Masc"))==0) {

        p = 72.2*a -58 ;
        printf("O seu peso ideal é: %.2f",p);
    }

    else {
        p = 62.1*a -44.7 ;
        printf("O seu peso ideal é: %.2f",p);
    }
    return 0; 
}