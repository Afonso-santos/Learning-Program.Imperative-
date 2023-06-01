#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main() {
  int Ncasos, len;
  char msm[1000];
  char rep = ' ';

  if (scanf("%d", &Ncasos)) { // scan do N de casos
    char resultado[Ncasos];

    for (int x = 0; x < Ncasos; x++) {

      if (scanf("%s", msm)) { // scan da string


        len = strlen(msm); // tamanho da string

        for (int y = 0; y < len; y++) {
          
          for (int i =y+1; i < (len); i++) {

            if (msm[y]==msm[i]) { // vejo se há aprencça do char na string
              rep = msm[y];
              
              break;
            }
          }
        }
        
        resultado[x] = rep;
      }
    }


    for (int loop = 0; loop < Ncasos; loop++) // so para dar print
      printf("%c", resultado[loop]);
  }
  printf("\n");

  return 0;
}
// adcionar numas letras 