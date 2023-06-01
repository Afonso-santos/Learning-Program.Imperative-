#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define Max 3 
//--------------- Estatica ---------------------
typedef struct staticStack {
int sp;
int values [Max];
} STACK, *SStack;

int main()
{
    STACK s1; // Declarar um etsrutura alocamos espaço para o array neste caso de tamanho  3
    SStack sp1 = &s1; // apotanta para o 1 da stack
}

void SinitStack (SStack s){
    s->sp=0;

}

int SisEmpty (SStack s)
{
    if (s->sp!=0) {

        return 0;
    
    }
    return 1;
}

int Spush (SStack s, int x)
{
    if (s->sp < Max){

        s->values[s->sp]=x;
        s->sp+=1;
       
        return 0;

    }else {
        
        return 1;
    }
}

int Spop (SStack s, int *x) 
{
    if (s->sp >0) {

        s->sp -=1;
        int last_elem=s->values[s->sp];
        *x=last_elem;
        return 0 ;

    }else {
    
        return 1;
    }

}


int Stop (SStack s, int *x)
{
    if (s->sp >0) {

        *x = s->values[s->sp-1];
        return 0;
    }else {
    
        return 1;

    }
    
}
//-----------------------------

typedef struct staticQueue {
    int front;
    int length;
    int values [Max];
} SQUEUE, *SQueue;


void SinitQueue (SQueue q) 
{
    q->front=0;
    q->length=Max;
}

int SisEmptyQ (SQueue q) 
{
    if(q->front==0){

        return 1;
    }else {
    
        return 0;
    }
}

int Senqueue (SQueue q, int x) 
{
    if (q->length==Max) {
        return 1;
    }
    q->values[q->front]=x;
    q->length+=1;
    q->front=(q->front +1)%Max;
    return 0;

}

int Sdequeue (SQueue q, int *x)
{
    if (SisEmptyQ(q)) {
        return 1;    
    }
    *x=q->values[q->front];
    q->front=(q->front+1 )%Max;
    q->length-=1;

    return 0;

}

int Sfront (SQueue q, int *x)
{
    if (SisEmptyQ(q)) {

        return 1;
    }
    *x=q->values[q->front];    
    return 0;
}





//------------------------- Dinaminca
typedef struct dinStack {
int size; // guarda o tamanho do array values
int sp;
int *values;
} *DStack;


void DinitStack(DStack s)
{
    s->size= Max;
    s->sp =0;
    s->values =malloc(s->size * sizeof(int));

}

int DisEmpty (DStack s)
{
    if (s->sp ==0) {
        return 1;
    
    }else {
    return 0;
    }
}

int dupStack(DStack s)
{   
    int *t  =malloc(s->size *2* sizeof(int));
    // int * p = realloc(s->values ,s->size *2,sizeoff(int))
    // if (p == NULL), return1;
    // else s->values = p;
    //      s->size*=2:

    if (t == NULL) {
        return 1;
    
    }
    for (int i =0; i<s->sp ; i++) {

        t[i]= s->values[i];

        free(s->values);

        s->values=t;

        s->size *=2;
    }


return 0;
}

int Dpush (DStack s, int x)
{
    if (s->sp == s->size) {    
        int d= dupStack(s);
        if(d) return 1;
    }
    s->values[s->sp]=x;
    s->sp++;
        
    return 0;
}

int Dpop(DStack s, int *x)
{
    if (DisEmpty(s)) {
        return 1;
        
    }
    *x=s->values[s->sp];
    s->size--;
    return 0;

}

int Dtop (DStack s, int *x)
{
    if (DisEmpty(s)) {
        return 1;    
    }
    *x = s->values[s->sp-1]; 
    return 0;

}


//-------------------------
typedef struct dinQueue {
    int size; // guarda o tamanho do array values
    int front;
    int length;
    int *values;
} *DQueue;

void  DinitQueue(DQueue q)
{
    q->size=Max;
    q->front=0;
    q->length=0;
    q->values=malloc(q->size*sizeof(int));

}

int DisEmptyQ (DQueue q)
{
    if(q->front==0){
        return 1;
    }else {
        return 0;
    }


}


// corrigir isto 
int Denqueue (DQueue q, int x)
{
    if (DisEmptyQ(q)) {

        return 1;
    
    }
    if (q->length ==Max) {

        int *values   = malloc(sizeof(int)*q->size*2);
      

        for (int i=0; i<q->length  ; i++) {
            if (q->front==q->size) {

            values[i]=q->values[q->front];
            q->front=(q->front+1) % q->size;           
            
            }

        }
        q->front =0;
        q->size=q->size*2;
        free(q->values);
        q->values=values;
    }
   
    q->front=(q->front+q->length )% q->size;
    q->values[q->front]=x;
    q->length++;
   

    return 0;
}


int Ddequeue (DQueue q, int *x)
{
    if (DisEmptyQ(q)) {
        return 1;
    }
    *x=q->values[q->front];
    q->front=(q->front+1)% Max;
    q->length--;
    return 0;

}

int Dfront (DQueue q, int *x)
{
    if (DisEmptyQ(q)) {
        return 1;
    }
    *x= q->values[q->front];
    return 0;

}