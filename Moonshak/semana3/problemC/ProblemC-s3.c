#include<stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>



int main()
{
    int Ncasos,Nanoes,altura;
    int big=0, anoesVisiveis=0;

    if (scanf(" %d",&Ncasos)) {
        int output[Ncasos];

        for (int x=0; x< Ncasos;x++ ) {
        
            if (scanf(" %d",&Nanoes)) {
                

                for (int y=0; y<Nanoes;y++) {

                    if (scanf(" %d",&altura)) {
                       
                        if (altura>big) {
                            
                            big=altura;

                            anoesVisiveis++;
                            
                        }

                    }
            
                }

            }
            output[x]=anoesVisiveis;
            big=0;
            anoesVisiveis=0;
        }
          
        for(int loop = 0; loop < Ncasos; loop++){
          printf("%d\n", output[loop]);} 
    
    }
    return 0;
}



















