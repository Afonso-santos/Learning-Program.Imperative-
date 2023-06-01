#include<stdlib.h>
#include <stdio.h>
#include <math.h>


int main(void){
    int nc=0,cartas,aux ;
    int x=0,y=0;
    

    if (scanf("%d",&nc)) {

        for (aux=0;aux<nc;aux++){

            if (scanf("%d",&cartas)) {
            
                 if     (cartas  % 4 == 0) {
                        x+=1;
            
                }else if (cartas % 4 == 1) {
                        y-=1;
            
                }else if (cartas % 4 == 2) {
                        y+=1;
            
                }else if (cartas %4  == 3)  {
                        x-=1;
                }
            }
        }
    }
    printf("%d %d\n",x,y);
    return 0;
}

