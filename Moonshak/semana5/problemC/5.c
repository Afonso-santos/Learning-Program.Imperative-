#include <stdio.h>
#include <string.h>
#include <limits.h>

/*

Baixas na Cozinha
O grande Passadini é o chefe despótico da cozinha do Michelanix. Ele chefia uma grande equipa mas é tão mau que os cozinheiros e ajudantes de cozinha estão fartos de o aturar. Ele tem tão mau humor e trata-os tão mal que eles andam sempre a tentar baldar-se ao trabalho.

Para os obrigar a trabalhar mais, o grande Passadini decidiu despedir o cozinheiro que faltou mais vezes ao trabalho

Input
O teu programa deve ler:

Uma linha com o número de dias N;
N linhas contendo cada uma as alcunhas, escolhidas pelo chefe, para os funcionários que trabalharam nesse dia, separadas por espaços.
Sabes que há no máximo 40 pessoas na cozinha. Cada linha contém menos do que 1000 caracteres. Cada nome tem no máximo 20 caracteres.

Output
O teu programa deve imprimir o nome do funcionário que faltou mais vezes.
*/
#define MAXSIZE 1000

int Verifica(char t[][21], char *s)
{
    for (int i = 0; i < 41; i++) {
        if (strcmp(t[i], s) == 0) {
            return i;
        }
    }
    return -1;
}

int minimum(int tc[], int pos)
{
    int min = 100;
    int min_index = 0;

    for (int loop = 1; loop < pos; loop++) {
        if (tc[loop] < min) {
            min = tc[loop];
            min_index = loop;
        }
    }

    return min_index;
}

int main() 
{
    char linha[1000];
    char *palavra;
    int Nlinhas, pos = 0;
    char tabela_nomes[40][21] = {0};
    int tabela_contador[41] = {0};
        
    if (scanf("%d", &Nlinhas)) {

        for (int m = 0; m <= Nlinhas; m++) {
        

            if (fgets(linha, 1000, stdin)) {

                palavra = strtok(linha, " ");

                while (palavra != NULL) {

                    int index = Verifica(tabela_nomes, palavra);

                    if (index != -1) {

                        tabela_contador[index]++;

                    } else  {

                        strcpy(tabela_nomes[pos], palavra);

                        tabela_contador[pos]++;

                        pos++;

                    }

                    palavra = strtok(NULL, " \n");

                }
            }
        }
        //printf("df");
        printf("%s\n", tabela_nomes[minimum(tabela_contador, pos)]);
    }
    return 0;
}







/*


*/