/*  mariaramos302000@outlook.pt
----------------1
------a)

x= 12
y= 16

-----b) 
x=0
y= 

-----c)

A 65

B 66    2 50

z 122

--------d)

100  200


----------------------2
----------a)

3  5

--------b)

11 66

-------c)

_#_#_#_#_#_#_#_#_#_#

-------d)
1    == 1
01   == 2
11   == 3
001  == 4
101  == 5
011  == 6
111  == 7
0001 == 8
1001 == 9
0101 == 10
1101 == 11
0011 == 12
1011 == 13
0111 == 14
1111 == 15

------
*/

//---------3
// ------------------1
#include <stdio.h>

#include <math.h>


int quadrado(void) // quadrado
{
    int x,y,a;
    
    printf("Tamanho do quadrado: ");
    scanf("%d",&a);
    for(x=0;x<a;x++){
        for(y=0;y<a;y++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}

// -------------------2
int xadrez(void)
{
    int x,y,a ;
    printf("Tamanho do tabuleiro de xadrez: ");
    scanf("%d",&a);

    for (y=0;y<a;y++ ){
        for(x=0;x<a;x++){
            if((x%2 ==0 && y%2==0) || (x%2 != 0 && y%2!=0)){
                printf("#");
                
            }else{
                printf("_");
            }
        }
        printf("\n");
    }
    return 0 ;
}
//-----------3
int triangulo(void)
{
    int a,x,y,z,n;

    printf("\nTriângulo horizontal(0) vertical (1): ");
    scanf("%d",&a);

    printf("\nTamanho do triangulo: ");
    scanf("%d",&n);

    if(a==1){
        for(y=1;y<n*2;y++){
            for(x=1;x<=2*n-y;x++){
                if (x<=y) {
                    printf("#");
                }
            }
            printf("\n");
        }

    }else{// x y z 
        for(y=1;y<=n;y++){
            z=y-1;
            for(x=1;x<= n-z-1;x++){
                printf(" ");
            }
            for (x=1;x<= 2*z+1;x++) {
                printf("#");
            }
        printf("\n");
        }

    }
    return 0;
}


int circulo(void)
{
    int r,x,y;
    float a,b,c;

    printf("Quanto é o raio do circulo: ");
    scanf("%d",&r);

    for(y=0;y<=r*2+1;y++){

        for(x=0;x<=2*r+1;x++){
            
            a= r - x;
            b= r - y;
            c= sqrtf( a*a + b*b );

            if (c<=r) {
                printf("#");
            }else{
                printf(" ");
            }
        }
    printf("\n");
        
    }
    return 0;
}



int main(void)
{
    int x ;
    printf("\nQue pergunta queres? ");
    scanf("%d",&x);

    if      (x==1){
        quadrado();
   }else if (x==2) {
        xadrez();
   }else if (x==3) {
        triangulo();   
   }else if (x==4) {
        circulo();
   }
    return 0;
}