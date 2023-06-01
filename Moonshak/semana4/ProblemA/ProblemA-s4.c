#include <stdio.h>
#include <string.h>

int main ()
{   
    int Ncasos;
    int Npalavras=0;
    int Nvogais=0;
    int Nconsoantes=0;
    char letra[1000];
    int len;


    // usar get char se n levo no pelo
    if (scanf("%d\n",&Ncasos)) {
        int resposta[Ncasos];
        for (int x =0; x < Ncasos; x++) {
            if(fgets(letra,1000,stdin)){
                len = strlen(letra);
                letra[len-1]=' ';
                letra[len]='\0';

                    for (int y =0;letra[y]!='\0'; y++) {
                        //printf("FOR\n");
                            if ( Nvogais > 1 || Nconsoantes> 1){   
                                if (letra[y]==' ') {
                                    Nvogais=0;
                                    Nconsoantes=0;
                                }
                                            
                                

                            } else if (letra[y]== ' ' && ( Nvogais <=1 && Nconsoantes<=1)) {
                                
                                //printf("2\n");
                                Npalavras+=1;
                                Nconsoantes=0;
                                Nvogais=0;
                                //printf("%d\n",Npalavras);

                            }else if (letra[y]== 'A' || letra[y]== 'E' || letra[y]== 'I' || letra[y]== 'O' ||
                                letra[y]== 'U' || letra[y]== 'Y') {
                                //printf("YAG\n");
                                Nvogais+=1;
                                Nconsoantes=0;
                                //printf("YAG %d\n",Nvogais);
                            
                            
                            
                            }else if (letra[y]!= 'A' && letra[y]!= 'E' &&letra[y]!= 'I' &&letra[y]!= 'O' &&
                                letra[y]!= 'U' &&letra[y]!= 'Y' && letra[y]!='\n') {
                                
                                //printf("3\n");
                                Nconsoantes+=1;
                                Nvogais=0;
                            //printf("hay %d\n",Nconsoantes);
                            }  
                    
                    }
            }    
           // printf("%d\n",Npalavras);
            resposta[x]=Npalavras;
            Npalavras=0;
            Nvogais=Nconsoantes=0;
        }
        for(int loop = 0; loop < Ncasos; loop++){
          printf("%d\n", resposta[loop]);}
    }



    return 0;
}



















































/*
    if (scanf("%d",&Ncasos)) {
        int resposta[Ncasos];

        while (getchar() == '\n') {
        
            for (int x = 0; x<Ncasos ; x++) {
                
                if (fgets(letra, 1000,stdin)) {

                   // while (Nvogais<2 && Nconsoantes<2) {
                    
                        for (int y=0; y<strlen(letra); y++) {

                            if (letra[y]== 'A' || letra[y]== 'E' || letra[y]== 'I' || letra[y]== 'O' ||
                                letra[y]== 'U' || letra[y]== 'Y') {
                                printf("1\n");
                                Nvogais+=1;
                                Nconsoantes=0;
                            
                            }else if (letra[y]== ' '&&( Nvogais <2 || Nconsoantes<2)) {
                                
                                printf("2\n");
                                Npalavras+=1;
                                Nconsoantes=0;
                                Nvogais=0;
                            
                            }else if (letra[y]!= 'A' ||letra[y]!= 'E' ||letra[y]!= 'I' ||letra[y]!= 'O' &&
                                letra[y]!= 'U' ||letra[y]!= 'Y' && letra[y]!='\0') {
                                
                                printf("3\n");
                                Nconsoantes+=1;
                                Nvogais=0;

                            }

                        
                        }
                        resposta[x]=Npalavras;
                        Nconsoantes=0;
                        Nvogais=0;

                }
            }
        }
        for (int loop =0; loop<Ncasos; loop++) {
            printf("%dteste\n",resposta[loop]);
        
        }
    }


    return 0;
}
*/
/*
    if (fgets(&Ncasos, 1, stdin)) {
        //NcasosINT= Ncasos - '0';

        int respostas [NcasosINT];
        printf("%d", Ncasos);
        for (int x = 0; x < Ncasos; x++) {

            if (fgets(letra,1000, stdin)) {
                printf("%s",letra);

                for (int y=0;letra[y]!='\n' ; y++) {


                    while (Nvogais < 2 && Nconsoantes <2 ) {
                    
                    
                        if (letra[y]== 'A' && letra[y]== 'E' && letra[y]== 'I' && letra[y]== 'O' &&
                            letra[y]== 'U' && letra[y]== 'Y') {

                            Nvogais+=1;
                            Nconsoantes=0;

                        }else if (letra[y]==' ') {

                            Nvogais=0;
                            Nconsoantes=0;
                            Npalavras++;

                        
                        }else {
                            Nvogais =0;
                            Nconsoantes+=1;

                        }
                    }
                
                }
                respostas[x]=Npalavras;
            }
        }
        for (int loop =0;loop <Ncasos; loop++) {
            printf("%d\n",respostas[loop]);
        
        }

    }

}




*/















/*


                while (Nvogais<2 && Nconsoantes<2) {
                


                    if (letra=='A' && letra=='E' && letra=='I' &&letra=='O'&&
                        letra=='U' &&letra=='Y' ) {
                        
                        Nvogais+=1;
                        Nconsoantes=0;

                    }else if (letra==' ') {

                        Npalavras+=1;
                        Nvogais=0;
                        Nconsoantes=0;
                    
                    }else {

                        Nvogais=0;
                        Nconsoantes+=1;
                    
                    }



                    }
                }
                if (scanf("%c",&letra)) { }
            
            respostas[x]=Npalavras;   
        }
        for (int loop=0; loop<Ncasos; loop++) {

            printf("%d\n",respostas[loop]);
        }
    }
    return 0;

















    if(scanf("%d",&Ncasos)){

        int resultado[Ncasos];

        for (int x =0; x < Ncasos; x++) {
            
            if(scanf("%c",&letra)){

                while (letra!='\n') {
                                    
                    while (Nvogais<2 ||Nconsoantes<2) {
                    
                    
                        if (letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'||letra=='Y') {
                            
                            Nvogais+=1;
                            Nconsoantes=0;

                        }else if (letra==' ' ) {
                            Npalavras+=1;
                            Nvogais=0;
                            Nconsoantes=0;
                        
                        }else{

                            Nvogais=0;
                            Nconsoantes+=1;
                        }
                    }
                }
                
            if(scanf("%c",&letra)){};
           }

        resultado[x]=Npalavras;
        Npalavras=0;
        }
       for(int loop = 0; loop < Ncasos; loop++)
        printf("%d ", resultado[loop]);


    }
    return 0;
    */
