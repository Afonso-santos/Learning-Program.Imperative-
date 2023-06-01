#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lligada {
int valor;                  // o q é o valor ? valor do apontador , conteudo 
struct lligada *prox;
} *LInt;


// 1

int length (LInt l)
{   
    int cont=0;
    while (l->prox != NULL) {
        cont++;
        l = l->prox;
    }
    
    
      
    return cont ;
}

// 2

void freeL (LInt l)
{
    LInt aux;
    while(l->prox!= NULL) {
        aux = l;
        free(l->prox);
        l= aux->prox;
    }

}

// 3

void imprimeL (LInt l)
{
   
    while (l->prox!= NULL) {
        
        printf("%d\n",l->valor);
        l=l->prox;
    }

}

// 4 

LInt reverseL (LInt l)
{
    LInt ant=NULL;
    LInt prox=NULL;
    LInt atual= l;
    while (atual !=NULL) {
        ant=atual;
        prox=atual->prox;
        atual->prox=ant;
        atual=prox;
    }
    return ant;

}


// 5 

void insertOrd (LInt *l, int x)
{   
    LInt new_line = malloc(sizeof(LInt));
    LInt atual= *l;
    LInt ant=NULL;

    while(atual!=NULL && atual->valor<x){
        
        ant = atual;
        atual=atual->prox; 

    }
    
    *l=new_line;
    new_line->prox=atual;

}

//6

int removeOneOrd (LInt *l, int x)
{
    LInt atual=*l;

    while (atual!=NULL && atual->valor!=x) {
        
        atual = atual->prox;

    }
    if (atual->valor==x) {
        
        atual=atual->prox;
        return 0;

    }
    return 1;
}

// 7

LInt merge (LInt *r, LInt a, LInt b) 
{
    LInt Res = *r;

    while (a!=NULL  && b!=NULL) {

       
        if (a->valor >= b->valor ) {
            
            Res->valor=b->valor;

            Res =Res->prox;
            b=b->prox;

        }else {
            
            Res->valor=a->valor;

            Res=Res->prox;
            a=a->prox;

        }

    }
    if (a!=NULL) {
        
        Res=b;


    }else {
        Res=a;
    }
    return Res;
}

// 8 

// void splitQS(LInt l, int x, LInt *mx, LInt *Mx) {
//     if(!l) return;
//     if(l->valor < x) {
//         (*mx) = l;
//         (*Mx) = NULL;
//         splitQS(l->prox, x, &((*mx)->prox), Mx);
//     }
//     else {
//         (*Mx) = l;
//         (*mx) = NULL;
//         splitQS(l->prox, x, mx, &((*Mx)->prox));
//     }
// }

void splitQS(LInt l, int x, LInt *mx, LInt *Mx)
{
    if (l!=NULL) {
        
        return;

    }
    if (l->valor < x) {
        *mx = l;
        *Mx= NULL;
        splitQS( l->prox, x, &((*mx)->prox), Mx );
    
    }else {
        (*Mx) = l;
        (*mx) =NULL;
        splitQS(l, x, &((*mx)->prox) , Mx);

    }


}
//9
void parteAmeio (LInt *l)
{   
    LInt aux= *l;
    int cont=0, meio;
    while (aux!=NULL) {
        cont++;
        aux=aux->prox;
    }
    LInt y = malloc(sizeof(LInt));
    meio= cont/2;
    for (int i=0; i<meio; i++) {
        
        y->prox= *l;
        *l=(*l)->prox;
    }

 
}

//10
int removeAll (LInt *l , int x)
{
    LInt aux=*l;
    int cont_remove=0;
    while (*l!=NULL) {
        if ((*l)->valor ==x) {
            cont_remove++;

            *l=(*l)->prox->prox;


        }else {
             (*l)=(*l)->prox;
        }

       
    }
    return cont_remove;
}

// 11 

int removeDups (LInt *l)
{   
    int cont_remove=0;
    while (*l!=NULL) {

        cont_remove+=removeAll(l, (*l)->valor);

        *l=(*l)->prox;
    }
    return cont_remove;
}

// 12                               duvidas

int removeMaiorL (LInt *l)
{
    int maior=(*l)->valor;
    LInt aux = *l, ant=NULL;
    while (aux!=NULL) {
        if (maior<(aux)->valor) {
            maior=(aux)->valor;

            ant=aux;

        }

        aux=aux->prox;
    }
    aux=*l;
    while (aux!=NULL) {
        if (aux->valor==maior) {
            *l=aux->prox;

        }else {
            
        }
    }   
    return -1;
}    
//13 

void init (LInt *l)
{

   LInt aux;

    while ((*l)->prox!=NULL){
      *l=(*l)->prox;
    }
    if ((*l)->prox ==NULL){
        free(*l);
        *l=NULL; 
    }else {
        aux=(*l)->prox;
        (*l)->prox=aux->prox;
        free(aux);
      
    }   
}

// 14

void appendL (LInt *l, int x)
{   
    
    LInt new_line = malloc(sizeof(LInt));
    new_line->valor=x;
    new_line->prox=NULL;

    if ((*l)==NULL){
        *l=new_line;
    }else{
        LInt aux=*l;
        while(aux!=NULL){
            aux=aux->prox;
        }
        aux->prox=new_line;
    }
}

//15

void concatL (LInt *a, LInt b)
{
    if (*a==NULL){
        *a=b;
    }else {
        LInt aux=*a;
        while (aux->prox!=NULL){
            aux=aux->prox;
        }
        aux->prox=b;
    }
    
}
// 16

LInt cloneL (LInt l){
    LInt new_line=NULL, last_node =NULL;
    while (l!=NULL){
        LInt new_node=malloc(sizeof(LInt));
        new_node->prox=NULL;
        new_node->valor=l->valor;

        if(new_line==NULL){
            new_line=new_node;
            last_node=new_node;
        }else{
            new_line->prox=new_node;
            last_node=new_node;

        }


        l=l->prox;
    }
    
    return new_line;
}

// 17                                   DUVIDAS

LInt cloneRev (LInt l)
{
    LInt new_line=NULL , last_node =NULL;
    while (l!=NULL){
        LInt new_node =malloc(sizeof(LInt));
        new_node->prox=NULL;
        new_node->valor =l->valor;

        
    }
    
}

// 18 

int maximo (LInt l)
{
    int maior=l->valor;
    LInt aux=l;
    while (aux!=NULL){
        if (aux->valor>maior){
            maior=aux->valor;
        }
        aux=aux->valor;
    }
    return maior;
}
// 19               DUVIDAS

int take (int n, LInt *l)
{   
    int comp=0;
    LInt aux;
    while(aux!=NULL && comp!=(n-1)){
        aux=aux->prox;
        comp++;          
    }
    if (aux==NULL){
        return comp;
    }
    LInt fri = aux->prox;
    aux->prox =NULL;
    free(fri);

    return comp;
}

// 20 

int drop (int n, LInt *l)
{
    int remove=0;
    LInt aux=*l;

    while (aux!=NULL && remove<n){
        LInt temp=aux;
        aux=aux->prox;
        free(temp);
        remove++;
    }
    if (aux==NULL){
        *l=NULL;
    }else{
        *l=aux;
    }
    return remove;
}

// 21 

LInt Nforward (LInt l, int N)
{   
    LInt aux=l;
    while (aux!=NULL && N!=0){
        

        aux=aux->valor;
        N--;
    }
    return aux;

}

// 22
int listToArray (LInt l, int v[], int N)
{   
    LInt aux=l;
    int num_add=0;
    while (aux!=NULL && num_add<N){
        v[num_add]=aux->valor;
        num_add++;
        aux=aux->prox;
    }
    return num_add;
}

// 23
LInt arrayToList(int v[], int N) 
{
    LInt new_list = NULL, ant = NULL;
    if (N == 0) {
        return NULL;
    }
    for (int i = 0; i < N; i++) {
        LInt new_node = malloc(sizeof(LInt));
        new_node->valor = v[i];
        new_node->prox = NULL;

        if (new_list == NULL) {
            new_list = new_node;
            ant = new_node;

        } else {
            ant->prox = new_node;
            ant = new_node;
        }
    }
    return new_list;
}

// 24
LInt somasAcL (LInt l)
{
    LInt aux=l,new_list=NULL , ant=NULL;
    int sum =0;

    while (aux!=NULL){
        sum+=aux->valor;

        LInt new =malloc(sizeof(LInt));
        new->valor=sum;
        new->prox=NULL;

        if (new_list==NULL){
            new_list=new;
            ant =new_list;

        }else{
            ant->prox=new;
            ant=new;

        }

        aux=aux->prox;
        
    }
    return new_list;
}






typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} *ABin;

// 28
ABin cloneAB (ABin a) 
{
    if(a==NULL) return NULL;
    ABin new= malloc(sizeof(struct nodo));
    if(new=NULL) return NULL;
    new->valor=a->valor;
    new->esq=cloneAB(a->esq);
    new->dir=cloneAB(a->dir);

    return new;
}

//41

ABin somasAcA (ABin a)
{
    if(a==NULL){
        return NULL;
    }
    ABin new=malloc(sizeof(struct nodo));
    new->esq=somasAcA(a->esq);
    new->dir=somasAcA(a->dir);

    if(new->esq==NULL && new->dir!=NULL){
        new->valor=a->valor + new->dir->valor;
    }else if(new->esq!=NULL && new->dir!=NULL){
        new->valor=a->valor +new->dir->valor+new->esq->valor;
    }else if (new->esq!=NULL && new->dir==NULL){
        new->valor= a->valor+a->esq->valor;

    }else if(new->esq==NULL && new->dir==NULL){
        new->valor=a->valor;
    }



    return new;
}

// 31

void inorderaux(ABin tree, LInt * list) 
{
    if(tree!=NULL){
        inorderaux(tree->esq, *list);

        LInt aux= malloc(sizeof(struct lligada));
        aux->valor=tree->valor;
        aux->prox=*list;
        *list=aux;
    }
}


void inorder (ABin tree , LInt *list)
{
     *list = NULL;
    inorderaux(tree,list);

}

//32

void posorderaux(ABin tree, LInt * list)
{
    LInt new=malloc(sizeof(struct lligada));
    new->valor=tree->valor;
    new->prox= *list;
    *list=new;

    posorderaux(tree->esq,*list);
    posorderaux(tree->dir, *list);
}

void preorder (ABin a, LInt *l)
{
    *l=NULL;
    posorderaux(a, l);
}



//35
int freeAB (ABin a)
{   
    int cont =0;
    if(a==NULL){
        return 0;
    }else{
        cont++;
        cont+=freeAB(a->esq);
        cont+=freeAB(a->dir);
        free(a);
    }
    return cont;
}

// 48

void removeMaiorA (ABin *a)
{
   if(a==NULL){
       return 0;
   } else if((*a)->dir==NULL){
        ABin aux=(*a)->esq;
        free(*a);
        *a=aux;
   }else{
       removeMaiorA(&((*a)->dir));
   }
}







typedef struct nodo {
int valor;
struct nodo *esq, *dir;
} *ABin;

// 38
LInt concat(LInt a, LInt b) {
    if(!a) return b;
    LInt temp = a;
    while(temp->prox) temp = temp->prox;
    temp->prox = b;
    return a;
}
LInt nivelL (ABin a, int n)
{
    if(a==NULL ||n<1){
        return NULL;

    }

    if(n==1) {
        LInt new= malloc(sizeof(struct nodo));
        if(new==NULL) return NULL;

        new->valor=a->valor;
        new->prox=NULL;
        return new;
    }else{
        return concat(nivelL(a->esq,(n-1)),nivelL(a->dir,(n-1)) );
    }
}
// 41

//44
int addOrd (ABin *a, int x)
{
    if(*a==NULL) return 0;

    while((*a)!=NULL){
        if((*a)->valor==x){
            return 1;

        }
        if((*a)->valor>x) (*a)=(*a)->esq;
        else (*a)=(*a)->dir;
    }
    ABin new =malloc(sizeof(struct nodo));
    if(new==NULL) return 0;
    new->valor=x;
    new->esq=new->dir=NULL;
     (*a)=new;   
    return 0;

}

// 50

void listToBTree (LInt l, ABin *a)
{   
    if(l==NULL) return NULL;
    ABin new=malloc(sizeof(struct nodo));
    if(new==NULL) return NULL;

    int meio =length(l)/2;
    LInt temp=l;
    LInt ant=NULL;
    for(int i=0;i<meio;i++){
        ant=temp;
        temp=temp->prox;

    }
    new->valor= temp->valor;
    new->esq=NULL;
    new->dir=NULL;
    if(ant!=NULL) ant->prox=NULL;
    
    if(l!=temp) listToBTree(l,(new->esq));
    if(temp->prox!=NULL) listToBTree(l,(new->dir));

}



//51

int todosMenores(ABin a, int x)
{
    int r=1;
    if(a!=NULL){
        if(a->valor<x){
            int c =todosMenores(a->esq,x) ;
            int d =todosMenores(a->dir,x);
            if(c==0 || d==0){
                r=0;
            }
        
        }else{
            r=0;
        }
    }
    return r;
}

int todosMaiores(ABin a , int x)
{
    int r=1;
    if(a!=NULL){
        if(a->valor>x){
            int c =todosMaiores(a->esq,x) ;
            int d =todosMaiores(a->dir,x);
            if(c==0 || d==0){
                r=0;
            }
        
        }else{
            r=0;
        }
    }
    return r;


}

int deProcura (ABin a)
{
    if(a==NULL){
        return 1;
    }else{
        int c =todosMenores(a->esq,a->valor) ;
        int d =todosMaiores(a->dir,a->valor);
        if(c==0 || d==0){
            return 0;
        }else{
            return deProcura(a->esq) && deProcura(a->dir);
        }
    }    

}