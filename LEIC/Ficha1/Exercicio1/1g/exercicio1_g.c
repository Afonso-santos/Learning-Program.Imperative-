/* Ler as medidas a e b dos lados de um rectângulo, e calcular a sua área e o seu perímetro. Recorde que Area = a * b  e que Perímetro = 2 * (a + b) */


#include <stdio.h>

int main(void)
{
    float l, c, p, a;
    printf("Medida da largura: ");
    scanf("%f",&l);
    printf("Medida do comprimento: ");
    scanf("%f",&c);

    p = 2*(l+c);
    a = c*l ;
    
    printf("\nO perimetro é %.2f e a área é %.2f",p,a);
    
}
    