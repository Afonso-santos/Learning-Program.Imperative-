#include <stdlib.h>
#include <stdio.h>
#include <string.h> 



int main(void)
{

    char bloco[8],msm[1000],cryptomsm[1000];
    int blocoINT[8];
    int len_bloco,len_msm;
    int n, w=0;


    if (scanf("%s[^\n]",bloco)) {
        
    
        len_bloco=strlen(bloco);
    
        for (int x=0;x<len_bloco ; x++) {
    
            blocoINT[x]=bloco[x]-'0';
    
           // printf("%d",blocoINT[x]);
        }

        if (scanf("%s[^\n]",msm)) {
            len_msm=strlen(msm);

            for (int z=0; z<len_bloco; z++) {

                n = blocoINT[z] -1;
                
                for (w=0; n<len_msm ; w++) {
                    
                    cryptomsm[w]=msm[n] ;
                    printf("%c",cryptomsm[w]);
                    n+=len_bloco;   
                }
            }

        }
    
    }
    printf("\n");
    return 0;
}


