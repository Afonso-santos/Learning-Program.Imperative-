/* Calcular a média aritmética das três notas de um aluno e mostrar, além do valor da média, uma mensagem de "Aprovado", caso a média seja igual ou superior a 9.5, ou a mensagem "Reprovado", caso contrário.  */

#include <stdio.h>

int main(void)
{
    float n1,n2 ,n3, me;
    printf("Escreva as suas notas");
    scanf("%f %f %f", &n1 ,&n2, &n3);

    me = (n1+n2+n3)/3;
    if (me >= 9.5){
        printf("\nAprovado");
    }else {
        printf("\nReprovado");
    }
    return 0;    
}