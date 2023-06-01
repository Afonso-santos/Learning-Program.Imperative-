#include<stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void){
    int aux1;
    int comando;
    int elevadorPos=0,andarT=0 ;
    int NumComandos=0;


    if (scanf("%d %d %d",&elevadorPos,&andarT,&NumComandos)==3) {
        
        for(aux1=1;aux1 <=NumComandos; aux1++ ){

            if (scanf("%d",&comando)) {

                if (elevadorPos!=andarT ||elevadorPos!=0 ) {
                    
                    elevadorPos = elevadorPos + comando;
            
                }
            }
        }
        printf("%d\n",elevadorPos);
    }
    return 0;
}