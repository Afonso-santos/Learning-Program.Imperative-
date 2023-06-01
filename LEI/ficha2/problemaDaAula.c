#include<stdlib.h>
#include <stdio.h>

int divisaoInteira(int dividendo, int divisor){
    int x;
    for (x=0;dividendo > divisor;x++) {
        
        dividendo-=divisor ;
    
    }
    printf("%d",x);

    return 0;
}

int main()
{
    int dividendo,divisor;
    printf("dividendo = ");
    scanf("%d",&dividendo);
    printf("divisor = ");
    scanf("%d",&divisor);

    divisaoInteira(dividendo, divisor);
}
