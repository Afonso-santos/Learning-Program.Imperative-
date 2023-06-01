#include<stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){

    int aux;
    int vi=0,vc=0,e=0;
    int Njogadas=0;
    char x,y;

    if (scanf("%d",&Njogadas)) {

        for (aux=1;aux<=Njogadas;aux++) {

            if (scanf(" %c%c",&x,&y)) {
                
                if ((x=='@'&& y=='+')||(x=='|'&& y=='*') || (x=='X'&&y=='-')) {
                    
                    vi+=1;

                }else if ((x=='@'&& y=='*') ||(x=='|'&& y=='-' )|| (x=='X'&&y=='+')) {

                    e+=1;

                }else if ((x=='X' && y=='*')||(x=='@'&&y=='-') || (x=='|'&&y=='+')) {

                    vc+=1;
                }
            }
        }
        printf("%d %d %d\n",vi,vc,e);
    }
    return 0;
}
