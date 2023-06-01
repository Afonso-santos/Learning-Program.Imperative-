#include <stdio.h>
#include <math.h>

float multInt1 (int n, float m)
{
    int x ;
    float r;

    for(x=0; x<n;x++){
        r+=m;
    }
    printf("o valor do somatório é %.2f",r);
    return 0;
}

float multInt2 (int n, float m)
{
        int f=0,x=0,a=0;
        //printf("1| %d |%.0f \n",n,m);
        for(x=1;n>=1;x++){
            
            if (x % 2 != 0 && x!=3){
                a+=m;
                f+=1;
            }
            n= n / 2;
            m= m*2;
            f +=1; 
            //  printf("%d| %d | %.0f \n",x,n , m);
        }
        printf("\nNumero de operações com float é %d",f);
        printf("\nO produto é:%d",a);
    
        return 0;
}

int mdc1 ( int a, int b)
{
    int x;
    while (x !=0    ) {
        x = b%a;
        b = a;
        a = x;
    
    }   
    printf("m.d.c:%d ", b);
    return 0;
}

int mdc2(int a, int b)
{
    
    for (int x=0;a!=b;x++) {
    
        if (b<a) {
            a=a-b;       
        }else if (b>a) {
            b=b-a;
                    
        }
    }
    printf("m.d.c:%d",a);
    return 0;
}

int mdc3(int a, int b)
{
    for (int x=0; a!=b; x++) {
        int resto;
          
        if(a<b){
            while (resto !=0) {
                resto= b%a;
                b=a;
                a=resto;
            }
        }else {
            while (resto != 0) {
                resto= a%b;
                a=b;
                b=resto;
            }
        }
    
    }
    return 0;
}

int fib1(int n)
{
    if (n<2){
        return 1;

    }else {
        
        return fib1(n-1)+fib1(n-2);

    }
      

}





int fib2(int n)
{
    int c,x,a=1,b=0;

    for (x=0; x<n ;x++) {

        c=a+b;
        b=a;
        a=c;
    
    }
    printf("%d",b);


    return 0;
}














int main(void)
{
    int x,c ;
    
    printf("\nQue pergunta queres? ");
    scanf("%d",&x);

    if      (x==1){
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        multInt1(argument1 , argument2) ;
        
   }else if (x==2) {
        int argument1 ;
        float argument2 ;
        printf ("\nArgument 1 :") ;
        scanf ("%d" , &argument1) ;
        printf ("Argument 2 :") ;
        scanf ("%f" , &argument2 ) ;
        
        multInt2(argument1 , argument2) ;

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
   
   }

    return 0;
}