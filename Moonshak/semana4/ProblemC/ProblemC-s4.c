#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int comparacao(char c[],int N)
{   
    
    int flag =0;

    //printf("1-%s\n",c);
    
    for (int q=0; q <N; q++) {
        
        for (int p=q+1; p<N ; p++) {

            if(c[q]==c[p]){
                flag=1;
                break;
            }
        }
        if (flag==1) {

            break;
        }
    }
    return flag;
}



int main ()
{
    int Ncasos;
    char sms[1000];
    int bloco;
    int rep=-1;

    if (scanf("%d\n",&Ncasos)) {
        int resposta[Ncasos];

        for (int i=0; i<Ncasos; i++) {
            
            if (scanf("%d %s",&bloco,sms)) {
                //printf("%d\n",bloco);
                //printf("%s\n",sms);

                for (int j =0 ; sms[j +bloco-1]!='\0';j++) {
                  //  printf("aasdfgh\n");
                  
                    if (comparacao(sms+j, bloco)==0) {
                        //printf("aola");
                        //printf("ddd: %d",j);
                        rep =j;
                        break;                                               
                    }

                }
            }
            //printf("%d\n",rep);
            resposta[i]=rep;
            rep=-1;
            //printf("%d\n",resposta[i]);
            //printf("rep\n");
        
        }
        for (int loop = 0; loop < Ncasos; loop++){// so para dar print
          printf("%d\n", resposta[loop]);}
    }
    return 0;
}


    /*
    int Ncasos,bloco,len;
    char sms[1000];
    int rep;
    int i=0,j,pos=0 ;

    if (scanf("%d",&Ncasos)) {
        int respost[Ncasos];
        printf("ola\n");

        for (int i=0; i<Ncasos;  i++) {
            
            if (scanf("%d %s",&bloco, sms )) {
                printf("%s",sms);
                printf("%d",bloco);
                               
                for (j=0; i<strlen(sms); j++) {
                    

                  if (comparacao( sms+j,bloco )==0){
                        rep = j;
                                       
                  
                  }else {
                    rep =-1;
                  }
                }
                printf("%d",rep);
            }
        }
 
    }
}
*/