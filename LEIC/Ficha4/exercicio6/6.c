/* Construa uma função que lê 10 valores inteiros e retorna o maior deles.  */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



int maior(int N)
{
    int x ,y;
    bool inicio =1;
        if (inicio == 1){
            N = y;
        }
        inicio =0;
    for (x=0;x<9;x++){
        scanf("%i",&y);
        if (y>=N){
            N=y ;
        }else {
        N=N;
        }
    }
    return N ;
}

int main(void )
{
    int a ;
    printf("Escreva 10 numeros: ");
    scanf("%d", &a);
    printf("O maior numero é %d",maior(a));
    return 0 ;
}




/* 
int maiorvalor(int N){
	int i, maior;
	bool inicio=1;
		if(inicio == 1){
		N=maior;
	}
	inicio=0;
for(i=0;i<9;i++){
	scanf("%i",&N);
	if(N>maior){
		maior=N;
	}
}

	return maior;
}

int main(int argc, char *argv[]) {
	int a=0;
	scanf("%i",&a);
	printf("O maior valor e: %d",maiorvalor(a));
	return 0;
}
*/