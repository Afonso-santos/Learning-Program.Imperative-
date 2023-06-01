/* Ler as medidas a e b dos dois catetos de um triângulo rectângulo, e apresentar os seguintes resultados */
    /*  Hipotenusa, calculada com base no Teorema de Pitágoras.*/
    /* Perímetro, sabendo que Perímetro = a + b + hipotenusa.*/
    /* Área, sabendo que esta é metade do produto de um cateto pelo outro. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    float c1, c2, h, p, a;
    printf("medida do 1º e 2º cateto: ");
    scanf("%f %f", &c1,&c2);

    h = sqrt(pow(c1,2)+pow(c2,2)) ;
    p = c1 +c2 + h ;
    a = c1*c2 /2 ;

    printf("\nA Hipotenusa do triangulo é %.2f,\nO Perímetro do triangulo é %.2f,\nA área é %.2f",h,p,a);

    return 0;


}
            
/* gcc -o Hip_Per_Area exercicio1_h.c -lm */