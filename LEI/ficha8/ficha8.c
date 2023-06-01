#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct slist {
int valor;
struct slist * prox;
} * LInt;

LInt newLInt (int x, LInt xs) {
    LInt r = malloc (sizeof(struct slist));
    if (r!=NULL) {
    r->valor = x; r->prox = xs;
    }
    return r;
}

typedef LInt Stack;

typedef struct {
LInt inicio,fim;
} Queue;

void initStack (Stack *s)
{
    *s=NULL;
}

int SisEmpty (Stack s)
{
    if(s==NULL){
        return 1;
    }else {
        return 0;
    }
}

int push (Stack *s, int x) 
{   
    LInt new = newLInt(x,*s);
    if(new==NULL){
        return 1;
    }
    *s=new;
    return 0;
}

int pop (Stack *s, int *x)
{
    if(SisEmpty(*s)){
        return 1;
    }
    *x=(*s)->valor;

    LInt aux = (*s)->prox;
    free(*s);
    *s=aux;
    return 0;
}

int top (Stack s, int *x)
{
    if(SisEmpty(s)){
        return 1;
    }
    *x=s->valor;
    return 0;

}


//
typedef struct {
LInt inicio,fim;
} Queue;
//2

void initQueue (Queue *q)
{
    q->inicio=NULL;
    q->fim=NULL;

}

int QisEmpty (Queue q)
{
    if ( q.inicio==NULL){
        return 1;
    }else {
        return 0;
    }
}

int enqueue (Queue *q, int x) // lista vazia
{
    LInt new = newLInt(x,NULL);
    if(new==NULL){
        return 1;
    }
    if(QisEmpty(*q)){
        q->inicio=new;
        q->fim=new;
        return 0;
    }


    q->fim->prox=new;
    q->fim=new;
    return 0;
}

int dequeue (Queue *q, int *x) // lista  1 elemento
{
    if (QisEmpty(*q)){
        return 1;
    }
    *x=q->inicio->valor;

    LInt aux = q->inicio->prox;
    
    free(q->inicio);
    q->inicio=aux;

    if (q->inicio==NULL){
        q->fim=NULL;
    }
    
    return 0;

}

int front (Queue q, int *x)
{
    if (QisEmpty(q)){
        return 1;
    }
    *x=q.inicio->valor;
    return 0;
}

//
typedef LInt QueueC;
// 3 

void initQueueC (QueueC *q)
{
    *q=NULL;
}

int QCisEmpty (QueueC q)
{
    if (q==NULL){
        return 1;
    }else {
        return 0;
    }    
}

int enqueueC (QueueC *q, int x)
{
    LInt new =newLInt(x,NULL);
    if(new==NULL){
        return 1;
    }
    if(QCisEmpty(*q)){ // se caso a *q for vazia
        *q=new;
        (*q)->prox=*q;
        return 0 ;
    }
    new->prox=(*q)->prox;
    (*q)->prox=new;
    return 0;
}











//
typedef struct dlist {
int valor;
struct dlist *ant, *prox;
} *DList;

typedef struct {
DList back, front;
} Deque;