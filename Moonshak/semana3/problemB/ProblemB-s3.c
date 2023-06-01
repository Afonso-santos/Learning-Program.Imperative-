#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


int main()
{
    int Nc,x=1,y=1;
    char caracter;
    
    int teclado[3][3]={{7,8,9},
                       {4,5,6},
                       {1,2,3}};

    if (scanf("%d\n",&Nc)) { //ele n lia o \n logo é preciso identifa-lo´
        int output[Nc];
         
        for (int q=0; q<Nc; q++) {
            
            if (scanf("%c",&caracter)) {
                
                for (int k=0;caracter!= '\n';k++) {
                    
                    if       (caracter == 'C' && y>0) {
                        
                        y-=1;

                    }else if (caracter == 'B'&& y<2) {

                        y+=1;
                    
                    }else if (caracter == 'D' && x<2) {
                        
                        x+=1;

                    }else if (caracter == 'E' && x>0) {
                        x-=1;
                    }

                    if (scanf("%c",&caracter)) { }
                }
                output[q]= teclado[y][x];
            }
        }
        for(int loop = 0; loop < Nc; loop++){
            printf("%d", output[loop]);}
        printf("\n");
    
        
    }
    return 0;   
}










  