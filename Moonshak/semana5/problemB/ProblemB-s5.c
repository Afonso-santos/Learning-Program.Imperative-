#include <stdio.h>
#include <string.h>

/*
Vigilância Eletrónica
O serviço de contra-espionagem precisa de perceber se alguns potenciais agentes se encontraram para trocar informações. Para isso eles possuem dados sobre cada um dos agentes e a hora em que entraram e sairam do mesmo local. Como os logs podem ser grandes, decidiram contratar-te para escreveres um programa para os ajudar a tratar os logs de um dia.

Input
O teu programa deve ler:

Uma linha com um número A que corresponde ao número de pessoas a vigiar
Uma linha com um número N que corresponde ao número de linhas que se seguem
N linhas contendo cada uma delas o código do agente (numerado de 1 até A), a hora de chegada C e a hora de partida P
Restrições
Podes assumir que:

1 < A <= 100
1 < N <= 5000
0 <= C <= 23
0 <= P <= 23
C <= P
Output
O teu programa deve imprimir uma linha por cada hora em que mais do que um suspeito tenha estado no mesmo local. Deves imprimir na mesma linha, separando por espaços:

A hora
os códigos dos agentes por ordem crescente
As linhas deverão ser ordenadas por hora.

*/
int main() 
{
  int Npessoas, Ncasos;
  int Nagente, chegada, partida;
  int tabela[24][101]={0};

  

    if (scanf("%d", &Npessoas)) {

        if (scanf("%d", &Ncasos)) {

           

            for (int i = 0; i < Ncasos; i++) {
                
                if(scanf("%d %d %d", &Nagente, &chegada, &partida)){
                    
                    for (int j = chegada; j <= partida; j++) {
                           
                        tabela[j][Nagente-1] = 1;
                    }
                }
            }

            for (int horas =0 ; horas<24; horas ++ ) {
                
                int contador=0;

                int agente[Npessoas]; 

                for (int pessoas=0; pessoas<Npessoas ; pessoas++) {

                    if (tabela[horas][pessoas]==1) {
                        
                        agente[contador]=pessoas+1;
                        contador++;
                    }
                
                }
                if (contador>1) {
                    printf("%d",horas);
                    for (int loop =0;loop<contador ; loop++) {
                        
                        printf(" %d",agente[loop]);
                    }
                    printf("\n");
                }
            
            }

        }    
    }
    return 0;
}   


/*
Sample Tests
Input 1
8
17
3 20 23
4 9 18
5 12 18
7 11 19
1 9 13
1 2 4
6 19 23
6 8 11
7 0 20
7 23 23
3 16 18
6 2 4
3 0 14
5 19 22
1 0 19
5 2 10
2 16 20
Output 1
0 1 3 7
1 1 3 7
2 1 3 5 6 7
3 1 3 5 6 7
4 1 3 5 6 7
5 1 3 5 7
6 1 3 5 7
7 1 3 5 7
8 1 3 5 6 7
9 1 3 4 5 6 7
10 1 3 4 5 6 7
11 1 3 4 6 7
12 1 3 4 5 7
13 1 3 4 5 7
14 1 3 4 5 7
15 1 4 5 7
16 1 2 3 4 5 7
17 1 2 3 4 5 7
18 1 2 3 4 5 7
19 1 2 5 6 7
20 2 3 5 6 7
21 3 5 6
22 3 5 6
23 3 6 7
Input 2
5
5
4 0 6
1 19 23
3 15 17
5 23 23
1 10 11
Output 2
23 1 5
Input 3
4
19
1 0 11
1 12 14
4 14 20
3 18 19
3 2 20
2 10 13
1 19 22
4 21 21
2 0 8
4 3 11
2 15 17
2 23 23
4 1 13
1 23 23
2 18 18
2 20 21
4 22 23
3 22 22
3 21 21
Output 3
0 1 2
1 1 2 4
2 1 2 3 4
3 1 2 3 4
4 1 2 3 4
5 1 2 3 4
6 1 2 3 4
7 1 2 3 4
8 1 2 3 4
9 1 3 4
10 1 2 3 4
11 1 2 3 4
12 1 2 3 4
13 1 2 3 4
14 1 3 4
15 2 3 4
16 2 3 4
17 2 3 4
18 2 3 4
19 1 3 4
20 1 2 3 4
21 1 2 3 4
22 1 3 4
23 1 2 4
Input 4
8
6
7 2 2
7 23 23
8 20 21
3 1 6
2 1 21
4 0 11
Output 4
1 2 3 4
2 2 3 4 7
3 2 3 4
4 2 3 4
5 2 3 4
6 2 3 4
7 2 4
8 2 4
9 2 4
10 2 4
11 2 4
20 2 8
21 2 8
Input 5
6
19
1 8 9
6 4 12
5 0 10
4 8 18
5 16 16
1 4 7
3 2 22
2 17 20
1 16 19
1 23 23
2 1 5
5 13 13
1 12 14
2 21 23
4 1 3
5 15 22
6 13 18
1 1 20
4 21 23
Output 5
1 1 2 4 5
2 1 2 3 4 5
3 1 2 3 4 5
4 1 2 3 5 6
5 1 2 3 5 6
6 1 3 5 6
7 1 3 5 6
8 1 3 4 5 6
9 1 3 4 5 6
10 1 3 4 5 6
11 1 3 4 6
12 1 3 4 6
13 1 3 4 5 6
14 1 3 4 6
15 1 3 4 5 6
16 1 3 4 5 6
17 1 2 3 4 5 6
18 1 2 3 4 5 6
19 1 2 3 5
20 1 2 3 5
21 2 3 4 5
22 2 3 4 5
23 1 2 4
*/





























