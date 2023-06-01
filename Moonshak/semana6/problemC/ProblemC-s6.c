#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Barafunda na Cozinha!
A vida de um chef de cozinha não é fácil! Sobretudo de um restaurante famoso! E quando os cozinheiros andam descontentes ainda pior.

Ajuda o grande Passadini a ordenar os pedidos. Primeiro os mais caros, depois os mais fáceis(A é o mais fácil e E o mais difícil), se for possível, por ordem de pedidos!

Input
O teu programa deve ler:

Uma linha com o número de pedidos N
N linhas contendo cada uma o nº do pedido, a dificuldade e o preço que é cobrado ao cliente.

Output
O teu programa deve imprimir os pedidos pela ordem dada acima.
*/

typedef struct Pedido{
    int  Num;
    char Level;
    int  preco;


}pedido;

int comparar(const void*a , const void*b)
{
    const pedido* p1 = (const pedido*)a;
    const pedido* p2 = (const pedido*)b;

    if (p1->preco != p2->preco) {

        return p2->preco - p1->preco ;   
    }

    int lvl1 = (p1-> Level -'A');
    int lvl2 = (p2-> Level -'A');

    if (lvl1!=lvl2) {
        
        return lvl1 - lvl2;
    }

    if (p1->Num != p2->Num ) {

        return p1-> Num - p2->Num;
    
    }
    return 0;
}


int main()
{
    int i;
    int Npedidos;

    if (scanf("%d ",&Npedidos)) {

        struct Pedido tickets[Npedidos];
        
        for (i=0; i<Npedidos ; i++) {
            
            if(scanf("%d %c %d",&tickets[i].Num,&tickets[i].Level,&tickets[i].preco)){


            }
        }

        qsort(tickets, Npedidos, sizeof(pedido), comparar);

        for (i =0; i<Npedidos; i++) {
            
            printf("%d %c %d\n",tickets[i].Num,tickets[i].Level,tickets[i].preco);
        }




    }    
    return 0;

}


/*
Sample Tests
Input 1
32
1 B 40
2 C 70
3 D 45
4 E 25
5 D 70
6 D 100
7 E 85
8 E 60
9 B 70
10 B 35
11 A 15
12 C 95
13 E 90
14 D 80
15 E 75
16 E 30
17 E 15
18 A 90
19 C 85
20 E 95
21 E 25
22 A 75
23 A 55
24 E 40
25 E 70
26 A 10
27 D 100
28 A 80
29 C 95
30 A 20
31 C 40
32 D 70
Output 1
6 D 100
27 D 100
12 C 95
29 C 95
20 E 95
18 A 90
13 E 90
19 C 85
7 E 85
28 A 80
14 D 80
22 A 75
15 E 75
9 B 70
2 C 70
5 D 70
32 D 70
25 E 70
8 E 60
23 A 55
3 D 45
1 B 40
31 C 40
24 E 40
10 B 35
16 E 30
4 E 25
21 E 25
30 A 20
11 A 15
17 E 15
26 A 10
Input 2
35
1 D 60
2 A 30
3 A 30
4 C 55
5 E 10
6 E 50
7 C 40
8 C 45
9 E 90
10 A 35
11 A 75
12 C 35
13 D 95
14 B 40
15 D 15
16 B 60
17 A 25
18 C 30
19 C 90
20 C 45
21 C 80
22 D 95
23 D 40
24 A 90
25 C 40
26 E 90
27 D 90
28 D 95
29 C 50
30 D 20
31 E 35
32 C 75
33 B 10
34 A 40
35 E 55
Output 2
13 D 95
22 D 95
28 D 95
24 A 90
19 C 90
27 D 90
9 E 90
26 E 90
21 C 80
11 A 75
32 C 75
16 B 60
1 D 60
4 C 55
35 E 55
29 C 50
6 E 50
8 C 45
20 C 45
34 A 40
14 B 40
7 C 40
25 C 40
23 D 40
10 A 35
12 C 35
31 E 35
2 A 30
3 A 30
18 C 30
17 A 25
30 D 20
15 D 15
33 B 10
5 E 10
Input 3
24
1 C 30
2 C 30
3 D 80
4 D 45
5 C 30
6 C 10
7 A 50
8 A 60
9 C 10
10 D 75
11 E 45
12 D 85
13 D 80
14 D 90
15 A 40
16 E 50
17 A 85
18 B 60
19 E 25
20 D 55
21 C 60
22 E 50
23 B 90
24 E 60
Output 3
23 B 90
14 D 90
17 A 85
12 D 85
3 D 80
13 D 80
10 D 75
8 A 60
18 B 60
21 C 60
24 E 60
20 D 55
7 A 50
16 E 50
22 E 50
4 D 45
11 E 45
15 A 40
1 C 30
2 C 30
5 C 30
19 E 25
6 C 10
9 C 10
Input 4
40
1 A 100
2 C 90
3 B 50
4 D 95
5 A 45
6 C 55
7 B 45
8 C 75
9 C 35
10 B 65
11 E 90
12 B 70
13 E 35
14 A 95
15 A 60
16 E 30
17 E 90
18 C 65
19 B 45
20 C 90
21 A 50
22 A 30
23 E 75
24 B 45
25 C 75
26 C 20
27 C 85
28 A 25
29 B 85
30 E 90
31 E 15
32 C 50
33 D 35
34 C 90
35 A 70
36 D 15
37 B 80
38 A 85
39 C 20
40 B 90
Output 4
1 A 100
14 A 95
4 D 95
40 B 90
2 C 90
20 C 90
34 C 90
11 E 90
17 E 90
30 E 90
38 A 85
29 B 85
27 C 85
37 B 80
8 C 75
25 C 75
23 E 75
35 A 70
12 B 70
10 B 65
18 C 65
15 A 60
6 C 55
21 A 50
3 B 50
32 C 50
5 A 45
7 B 45
19 B 45
24 B 45
9 C 35
33 D 35
13 E 35
22 A 30
16 E 30
28 A 25
26 C 20
39 C 20
36 D 15
31 E 15
Input 5
33
1 A 15
2 C 100
3 D 75
4 A 55
5 C 80
6 C 75
7 B 95
8 A 35
9 D 65
10 A 25
11 C 70
12 D 20
13 A 85
14 D 70
15 D 45
16 E 50
17 E 15
18 B 20
19 B 65
20 E 65
21 B 50
22 C 65
23 B 75
24 E 75
25 B 20
26 C 90
27 C 20
28 B 80
29 C 20
30 E 10
31 C 20
32 A 100
33 D 50
Output 5
32 A 100
2 C 100
7 B 95
26 C 90
13 A 85
28 B 80
5 C 80
23 B 75
6 C 75
3 D 75
24 E 75
11 C 70
14 D 70
19 B 65
22 C 65
9 D 65
20 E 65
4 A 55
21 B 50
33 D 50
16 E 50
15 D 45
8 A 35
10 A 25
18 B 20
25 B 20
27 C 20
29 C 20
31 C 20
12 D 20
1 A 15
17 E 15
30 E 10
*/