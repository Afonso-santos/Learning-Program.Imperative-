#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef LInt Stack;

typedef struct slist
{
    int valor;
    struct slist *prox;
} *LInt;

void initStack(Stack *s)
{
    *s = NULL;
}

int SisEmpty(Stack s)
{
    if (s == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int push(Stack *s, int x)
{
    Stack new;
    if (SisEmpty(*s))
    {
        new = malloc(sizeof(struct slist));
        if (new == NULL)
            return 1;
        new->valor = x;
        new->prox = NULL;
        return 0;
    }
    else
    {
        new = malloc(sizeof(struct slist));

        if (new == NULL)
            return 1;

        new->valor = x;
        new->prox = (*s);
        return 0;
    }
}

int pop(Stack *s, int *x)
{
    if ((*s) == NULL)
    {
        return 1;
    }
    else
    {

        *x = *s->valor;
        (*s) = (*s)->prox;

        return 0;
    }
}

int top(Stack s, int *x)
{
    if ((*s) == NULL)
    {
        return 1;
    }
    else
    {
        *x = (*s)->valor;
        return 0;
    }
}

//_--------------------------------------

typedef struct
{
    LInt inicio, fim;
} Queue;

void initQueue(Queue *q)
{
    q->inicio = NULL;
    q->fim = NULL;
}

int QisEmpty(Queue q)
{
    if (q.inicio == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// add no fim
int enqueue(Queue *q, int x)
{
    LInt new = malloc(sizeof(struct slist));
    if (new == NULL)
        return 1;
    new->valor = x;
    new->prox = NULL;

    if ((*q).inicio == NULL)
    {

        (*q).inicio = (*q).fim = new;
    }
    else
    {
        (*q).fim = new;

        return 0;
    }
}
// tira inicio
int dequeue(Queue *q, int *x)
{
    if (q->inicio == NULL)
    {
        return 1;
    }
    else
    {
        if (q->inicio == q->fim)
        {
            (*x) = q->inicio->valor;
            free(q->inicio);
            q->inicio = NULL;
            q->fim = NULL;
            return 0;
        }
        else
        {
            LInt aux = q->inicio;
            (*x) = aux->valor;
            free(q->inicio);
            q->inicio = aux->prox;

            return 0;
        }
    }
}

//----------------------------

typedef struct dlist
{
    int valor;
    struct dlist *ant, *prox;
} *DList;
typedef struct
{
    DList back, front;
} Deque;

void initDeque(Deque *q)
{
    q->back = NULL;
    q->front = NULL;
}

int DisEmpty(Deque q)
{
    if (q.front == q.back && q.front == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int pushBack(Deque *q, int x)
{
    DList new = malloc(sizeof(struct dlist));
    if (new == NULL)
        return 1;
    new->valor = x;
    new->ant = NULL;

    if (q->front == q->back && q->front == NULL)
    {

        new->prox = NULL;

        q = new;
        q->back = new;
        q->front = new;
        return 0;
    }
    else
    {
        q->back->ant = new;

        new->prox = q->back;
        q->back = new;
        return 0;
    }
    return 1;
}

int pushFront(Deque *q, int x)
{
    DList new = malloc(sizeof(struct dlist));
    if (new == NULL)
        return 1;

    new->valor = x;
    new->prox = NULL;

    if (q->front == q->back && q->front == NULL)
    {

        new->ant = NULL;
        q->back = new;
        q->front = new;
        return 0;
    }
    else
    {
        new->ant = q->front;
        q->front->prox = new;
        q->front = new;
        return 0;
    }
}

int popBack(Deque *q, int *x)
{
    if (q->front == NULL)
    {
        return 1;
    }
    else
    {
        (*x) = q->back->valor;
        DList aux = q->back;

        q->back = q->back->prox;
        free(aux);
        q->back->ant = NULL;
        return 0;
    }
}

int popFront(Deque *q, int *x)
{
    if (q->front == NULL)
    {
        return 1;
    }
    else
    {
        (*x) = q->front->valor;
        DList aux = q->front;

        q->front = q->front->ant;
        free(aux);
        q->front->prox = NULL;
        return 0;
    }
}

int popMAx(Deque *q, int *x)
{
    if (q->front == NULL)
    {
        return 1;
    }
    DList antL = NULL;
    DList maior = q->back;

    while (q->back != NULL)
    {
        if (q->back->valor > maior->valor)
        {
            maior = q->front;
            antL = q->back;
        }

        q->front = q->front->prox;
    }
    if (antL == NULL)
    {
        (*x) = maior->valor;
        free(maior);
    }
    else
    {
        (*x) = maior->valor;
        // DList aux= maior;
        antL->prox = maior->prox;
        maior->prox->ant = antL;
        free(maior);
    }
}
