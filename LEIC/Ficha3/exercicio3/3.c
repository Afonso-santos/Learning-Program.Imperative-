/* Recorrendo ao tipo de estrutura cíclica que lhe parecer mais adequado, elabore um programa para calcular a soma de dois números, mas que após apresentar o resultado, permita ao utilizador repetir a operação. */

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x ,y,z;
    int a =1 ;
    while ( a == 1){
        printf("Soma 2 numeros: ");
        scanf("%d %d",&x,&y);

        z= x + y;
        printf("\n %d + %d = %d",x,y,z);
        printf("\nse quiser repetir (y=1/n=0)");
        scanf("%d", &a);
    
        

    }

}