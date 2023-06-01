/*
Nome : afonso Dionísio Santos
Dn_soldado1tn_soldado1 : 23/fevereiro/2023

*/

#include <stdio.h>
// print no fim ,, otimizção dos ;; while ..


int main()
{
    int N_Biscoitos_Soldado;
    int ciclos=5;
    int posicao=0;
    int NmaiorBiscoitos=0;
        
    for (int pos =1; pos<=ciclos; pos++) {

        if (scanf("%d",&N_Biscoitos_Soldado)) {
                        
            if (N_Biscoitos_Soldado > NmaiorBiscoitos) {

                NmaiorBiscoitos=N_Biscoitos_Soldado;

                posicao++;
            }
        }
    }
    printf("%d",posicao);
    return 0;
}


/*  1-tentativa
int main(void) 
{
  int s1, s2, s3, s4, s5, v = 0;

  if (scanf("%d %d %d %d %d", &s1, &s2, &s3, &s4, &s5)) {

    if (s1 >= s2 && s1 >= s3 && s1 >= s4 && s1 >= s5) { //

      printf("1\n");
    } else if (s2 >= s3 && s2 >= s4 && s2 >= s5) {

      printf("2\n");
    } else if (s3 >= s4 && s3 >= s4) {

      printf("3\n");
    } else if (s4 >= s5) {

      printf("4\n");
    } else {

      printf("5\n");
    }
  }

  return 0;
}
*/