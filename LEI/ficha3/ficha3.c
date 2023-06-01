/*

------1
-----------a
1 1 4
2 2 6
3 3 8
4 4 10
5 5 12

-----------b

13

*/
#include <stdio.h>
#include <math.h>

void swapM(int *x ,int *y)
{
    int aux;
    aux= *x;
    *x=  *y;
    *y= aux;
    

}

// v é umalista e trocas os valores na posiçao i e j


void swap (int v[], int i, int j)
{    
     int aux;
     aux=v[i];

     v[i]=v[j];
     v[j]=aux;
     

}


int soma (int v[], int N)
{
     int x;
     int resultado=0;

     for (x=0; x<N; x++) {
          
          resultado+=v[x];
     }
     return resultado;
}



void inverteArray (int v[], int N)
{    int x;
     printf("Que função queres usar a funçao :1 ou 2");
     scanf("%d",&x);
     
     if (x==1) {
          
          int x ;

          for(x=0;N>x;x++,N--){
               
               swap(v, x, N);
               /*
               
               aux2    = v[x];
               v[x]    = v[aux1];
               v[aux1] = aux2;
               */
              
          }


     
     }else if (x==2) {
     
          int x ;
          for (x=0; x<N ; x++,N--) {
               swapM(&v[x],&v[N]);
          }


     }

}

int maximum (int v[], int N, int *m)
{
     int x, a;

     if (N<1) {
          return 0;
     }else {
          *m=v[0];
        for (x=0; x<N; x++) {
          if (*m<v[x]) {
               *m=v[x];
          }
        }  

     }
     return *m;
}


void quadrados (int q[], int N)
{
     q[0]=0;
     for (int x=0;x<(N-1); x++) {
          q[x+1]=(x+1)^2;
     
     }

}

void pascal (int v[], int N)
{    
     int x;
     int Preline[N-1];
     pascal(Preline, N-1);
     v[0]=1;
     v[N-1]=1;
     for(x=1;x<N-1;x++){
          v[x]=  Preline[x-1] + Preline[x] ;
          
     }

}

void desenhadopascal (int v[], int N)
{    
     int x;
     int Preline[N-1];
     pascal(Preline, N-1);
     v[0]=1;
     v[N-1]=1;
     
     for(x=1;x<N-1;x++){
          v[x]=  Preline[x-1] + Preline[x] ;
          
     }

}






int main(void)
{
    int x,c ;
    
    printf("\nQue pergunta queres? ");
    scanf("%d",&x);

    if      (x==1){
        int argument1 ;
        int argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%d" , &argument2 ) ;
        
        swapM(&argument1 , &argument2) ;
        printf ("%d %d\n",argument1,argument2 );
        
   }else if (x==2) {
        int argument1 ;
        int argument2 ;
        printf("\nDá um arrays :");
        //sca
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%d" , &argument2 ) ;
        
        //swap(&argument1 , &argument2) ;
        printf ("%d %d\n",argument1,argument2 );
/*
   }else if (x==3) {
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        mdc1(argument1 , argument2) ;

   }else if (x==4) {
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        mdc2(argument1 , argument2) ;
   }else if (x==5) {
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        mdc2(argument1 , argument2) ;

   }else if (x==5) {
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        mdc3(argument1 , argument2) ;
           
   }else if (x==6) {
        printf("\nAlinea : a(0) ou b(1) ");
        scanf("%d",&c);

        if (c == 0 ) {
            int argument1 ;
            printf ("\nArgument 1 :") ;
            scanf ("%d" , &argument1) ;

            fib1( argument1);

        }else {
            
            int argument1;
            printf("\nArgument 1:");
            scanf("%d", &argument1);

            fib2( argument1);


        }
*/   
   }

    return 0;
}