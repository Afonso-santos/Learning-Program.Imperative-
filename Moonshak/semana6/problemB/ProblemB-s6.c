#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Contratando Cozinheiros
O grande Passadini precisa de contratar mais cozinheiros para o seu restaurante. Os seus critérios de escolha são os seguintes:

Deve-se desconfiar dos cozinheiros demasiado magros! Provavelmente cozinham tão mal que nem lhes apetece comer.
Deve-se desconfiar dos cozinheiros demasiado gordos! Devem comer demasiado enquanto cozinham e por isso dão prejuízo!
Não se devem contratar cozinheiros demasiado baixos porque demoram mais tempo a chegar ao que está armazenado nas prateleiras mais altas.
Assim, para o grande Passadini, o peso ideal é 90 kgs. Ao contratar um cozinheiro, ele prefere que ele esteja o mais perto possível do peso ideal. Se dois cozinheiros tiverem o mesmo peso, ele prefere o mais alto. Se tiverem o mesmo peso e altura ele quer que sejam mostrados por ordem alfabética.

Input
O teu programa deve ler:

Uma linha com o número de cozinheiros
Uma linha por cada cozinheiro com a sua alcunha, o seu peso em kgs e a sua altura em cms, separados por espaços.
Output
O teu programa deve imprimir os cozinheiros ordenados segundo os critérios dados acima.
*/



typedef struct perfis
{   
    char Nome[20];
    int peso ;
    int altura;
}cozinheiro;

int organizador(const void* a, const void*b)
{
    const cozinheiro* c1 = (const cozinheiro*)a;
    const cozinheiro* c2 = (const cozinheiro*)b;

    int peso1 = abs(c1-> peso - 90);
    int peso2 = abs(c2-> peso - 90);

    if (peso1 != peso2) {
        return peso1 -peso2;
    
    }
    
    if(c1->altura != c2->altura){
        return c2->altura - c1->altura;
    }
    return strcmp(c1->Nome , c2->Nome); 
    
}

int main()
{   
    int i ;
    int Nlinhas;




    if (scanf("%d ",&Nlinhas)) {
        struct perfis tabela[Nlinhas];
        

        for (int i=0; i<Nlinhas ; i++) {
            
            if(scanf("%s %d %d" ,tabela[i].Nome, &tabela[i].peso,&tabela[i].altura )){

            }
        }
        qsort(tabela, Nlinhas, sizeof(cozinheiro), organizador);

        for(i =0 ; i<Nlinhas ; i++) {
            
            printf("%s %d %d\n",tabela[i].Nome, tabela[i].peso,tabela[i].altura);
        }
    
    }


}
/*
Sample Tests
Input 1
8
Australopiteco 85 190
Sapo 85 185
Mabeco 75 180
Mongol 65 180
Malota 65 160
Piolho 95 165
Catatua 95 175
Centopeia 100 175
Output 1
Australopiteco 85 190
Sapo 85 185
Catatua 95 175
Piolho 95 165
Centopeia 100 175
Mabeco 75 180
Mongol 65 180
Malota 65 160
Input 2
10
Tisico 95 175
Catatua 95 190
Centopeia 80 190
Formiga 90 175
Lambidinho 95 180
Troll 75 165
Carrapato 80 180
Marreco 80 170
Mongol 90 160
Manco 60 175
Output 2
Formiga 90 175
Mongol 90 160
Catatua 95 190
Lambidinho 95 180
Tisico 95 175
Centopeia 80 190
Carrapato 80 180
Marreco 80 170
Troll 75 165
Manco 60 175
Input 3
12
Perneta 90 190
Mabeco 65 175
Tiradentes 95 185
Fanhoso 75 160
Centopeia 75 190
Burro 95 180
Monxo 100 165
Troll 90 160
Piolho 80 165
Pirata 65 160
Marreco 65 190
Calhau 85 180
Output 3
Perneta 90 190
Troll 90 160
Tiradentes 95 185
Burro 95 180
Calhau 85 180
Monxo 100 165
Piolho 80 165
Centopeia 75 190
Fanhoso 75 160
Marreco 65 190
Mabeco 65 175
Pirata 65 160
Input 4
12
Piolho 80 180
Cobaia 85 160
Perneta 90 175
Iconoclasta 90 160
Mongol 100 160
Fuinha 70 175
Flibusteiro 65 190
Enguia 80 160
Malota 75 175
Tisico 65 190
Burro 80 190
Javardo 80 190
Output 4
Perneta 90 175
Iconoclasta 90 160
Cobaia 85 160
Burro 80 190
Javardo 80 190
Piolho 80 180
Enguia 80 160
Mongol 100 160
Malota 75 175
Fuinha 70 175
Flibusteiro 65 190
Tisico 65 190
Input 5
16
Piolho 80 165
Cobaia 80 175
Monxo 75 175
Flibusteiro 90 185
Patarata 75 170
Pirata 100 180
Marreco 90 165
Calhau 100 180
Hiena 95 165
Malota 95 165
Burro 85 165
Iconoclasta 75 185
Tiradentes 75 170
Manco 85 180
Toupeira 90 185
Enguia 90 165
Output 5
Flibusteiro 90 185
Toupeira 90 185
Enguia 90 165
Marreco 90 165
Manco 85 180
Burro 85 165
Hiena 95 165
Malota 95 165
Calhau 100 180
Pirata 100 180
Cobaia 80 175
Piolho 80 165
Iconoclasta 75 185
Monxo 75 175
Patarata 75 170
Tiradentes 75 170
*/