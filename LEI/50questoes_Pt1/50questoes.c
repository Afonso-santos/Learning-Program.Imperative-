#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1
int q1() {
  int numero;
  int N_maior = 0;

  scanf("%d", &numero);
  while (numero != 0) {

    if (numero > N_maior) {

      N_maior = numero;
    }
    scanf("%d", &numero);
  }
  return N_maior;
}

// 2
int q2() {
  int media;
  int numero = 0;
  int numero_Total = 0;
  int numero_casos = 0;

  scanf("%d", &numero);
  while (numero != 0) {
    numero_Total += numero;
    numero_casos++;
    scanf("%d", &numero);
  }
  media = numero_Total / numero_casos;
  return media;
}

// 3
int q3() {
  int P_maior = 0, S_maior = 0;
  int numero;

  scanf("%d", &numero);
  while (numero != 0) {

    if (numero > P_maior) {

      S_maior = P_maior;
      P_maior = numero;
    }
    scanf("%d", &numero);
  }
  return S_maior;
}

// 4  -------bitsUm
int q4(unsigned int n) {
  int N_um = 0;
  int resto;

  while (n > 0) {

    if (n % 2 == 1) {
      N_um++;
    }

    n = n / 2;
  }
  return N_um;
}

// 5---------trailingZ
int q5(unsigned int n) {
  int N_zero = 0;

  while (n > 0) {

    if (n % 2 == 0) {

      N_zero++;
    }
    n = n / 2;
  }
  return N_zero;
}
// 6 ------- qDig

int q6(unsigned int n) {
  int x;
  for (x = 0; n > 0; x++) {

    n = n / 10;
  }

  return x;
}
// 7 ----- strcat

char *strdog(char s1[], char s2[]) {
  int x, y;

  for (x = 0; s1[x] != '\0'; x++) {
  }
  // printf("%d",x);
  s1[x] = ' ';
  x += 1;
  for (y = 0; s2[y] != '\0'; y++, x++) {
    s1[x] = s2[y];
  }
  s1[x] = '\0';
  return s1;
}

// 8 ------ strcpy

char *strspy(char *dest, char source[]) {
  int x;
  for (x = 0; source[x] != '\0'; x++) {
    dest[x] = source[x];
  }

  return dest;
}

// 9 ----------- strcmp
int strcnp(char s1[], char s2[]) {
  int r;
  int x = 0;

  for (x = 0; s1[x] != '\0' && s2[x] != '\0'; x++) {

    if (s1[x] != s2[x]) {

      r = s1[x] - s2[x];

    } else {

      r = 0;
    }
  }
  return r;
}

// 10 ---------------- strstr

// char *strstring(char s1[], char s2[]){
//   int i,j,k;
//   if (s2[0] == '\0') return s1;

//   for(i=0; s1[i] != '\0'; i++){

//     for(j=i,k=0; s2[k] != '\0' && s1[j] == s2[k]; j++,k++);
    
//     if(k == strlen(s2)) return s1+i;
//   }
//   return NULL;
// }


char *strstring(char s1[], char s2[]) {
  int x, y, k;

  for (x = 0; s1[x] != '\0'; x++) {

    for (y = x, k = 0; s1[y] == s2[k] && s2[k] != '\0'; y++, k++) {
    }
    if (k == strlen(s2)) {
      return s1 + x;
    }
  }
  return NULL;
}


// 11 ------- strrev
char strrev(char s[]) {
  char aux;
  int x, len;
  len = strlen(s) - 1;

  for (x = 0; s[x] != '\0' && s[x] != s[len]; x++, len--) {
    aux = s[x];
    s[x] = s[len];
    s[len] = aux;
  }
  return *s;
}

// 12  -------------
char strnoV(char s[]) {
  int x;
  int pos = 0;

  for (x = 0; x < strlen(s); x++) {
    if (s[x] != 'a' && s[x] != 'e' && s[x] != 'i' && s[x] != 'o' &&
        s[x] != 'u' && s[x] != 'A' && s[x] != 'E' && s[x] != 'I' &&
        s[x] != 'O' && s[x] != 'U') {

      s[pos] = s[x];
      pos++;
    }
  }
  s[pos] = '\0';
  return *s;

}
//  13
void truncW(char t[], int n) {
  int len = strlen(t);
  char aux[len];
  // char *aux=calloc(len,sizeof(char));
  int acc = 0;
  int pos = 0;
  int aux1 = 0;

  for (int i = 0; t[i] != '\0'; i++) {

    if (t[i] != ' ' && acc < n) {

      t[pos] = t[i];
      pos++;
      acc++;

    } else if (t[i] == ' ') {

      t[pos] = t[i];
      pos++;
      acc = 0;
    }
  }
  t[pos] = '\0';
  printf("%s\n", t);
}

// 14

char charMaisfreq(char s[]) {
  int frequencia = 0;
  int M_frequencia = 0;
  int posicao;

  for (int x = 0; s[x] != '\0'; x++) {

    for (int y = x; s[y] != '\0'; y++) {

      if (s[x] == s[y]) {

        frequencia++;
      }
    }

    if (frequencia > M_frequencia) {
      M_frequencia = frequencia;
      posicao = x;
    }
    frequencia = 0;
  }
  return s[posicao];




  // 15
}
int iguaisConsecutivos(char s[]) {
  char letra=s[0];
  int  Nchar=0;
  int cont=0;
  int len=strlen(s);

  for (int i =0; s[i]!='\0';i++){
    if (letra==s[i]) {
      cont++;
    
    }else {
      letra=s[i];
      if (cont>Nchar) {
          Nchar=cont;
          cont=0;
      }
    }

  }
  return Nchar;
}

// 16
/*
int difConsecutivos (char s[])
{
  int i;
  for ( i =0; s[i]!='\0'; i++) {

    for (int j =i ; s[j]!='\0'; j++) {
      if (){

      }
    
    }
  }
}
*/

// 17  maiorPrefixo 
int maiorPrefixo (char s1 [], char s2 [])
{
  int i ,j;
  for (i=0,j=0; s1[i]!='\0' || s2[i]!='\0'; i++,j++) {
    if (s1[i]!=s2[i]) {
      
      break;
    
    }

  }
  return j ;
}
// 18 maiorSufixo
  int maiorSufixo (char s1 [], char s2 [])
  { 
    int i,j,k=-1;
    for (i=0; s1[i]; i++) {  }
    for (j=0;s2[j];j++){}
    while(s1[i--]==s2[j--]){
      k++;
    }
    return k;
  }


// 19  sufPref 

int sufPref (char s1[], char s2[])
{ 
  int i,j=0,rep=0;
  for (i=0 ; s1[i]!='\0'; i++) {
    if (s1[i]==s2[j++]) {
      rep++;
    }else {
      rep=0;
      j=0;
    }
  }
  return rep;
}
// 20  contaPal 
int contaPal (char s[])
{
  int contPal=0; 

  for (int i=0; s[i]!='\0'; i++) {
    if (s[i]==' ' ||s[i]=='\n') {
      contPal++;
    }
  }

  return contPal;
}

// 21 contaVogais 
int contaVogais (char s[])
{
  int contaVogais=0;

  for (int i=0; s[i]!='\0'; i++) {

    if (s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' ||
        s[i]=='A' ||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {

      contaVogais++;
      //printf("%c",s[i]);
    }
  
  
  }
  return contaVogais;
}

// 22 contida

int contida (char a[], char b[])
{
  for (int i=0; a[i]!='\0'; i++) {
    
    if (strchr(b, a[i])==NULL) {
      return 0;
    }
  
  }
  return 1;
}
// 23 palindorome 
int palindorome (char s[])
{
  int i,j ;
  
  for (i=0, j=strlen(s)-1; i < j;i++,j--) {
    
    if (s[j]!=s[i]) {
      return 0;
    
    }
  
  }
  return 1;
}
// 24 remRep 
int remRep (char x[])
{
  int i, j;
  for (i=0,j=0; x[i]!='\0'; i++) {
    if (x[i]!=x[i+1]) {
      x[j]=x[i];
      j++;
    
    }
  }
  return j;
}
// 25 limpaEspacos
int limpaEspacos(char t[]){
    int i, j;
    for(i = 0, j = 0; t[i] != '\0'; i++){
        if(t[i] != ' ' || (t[i] == ' ' && t[i+1] != ' ')){
        t[j] = t[i];
        j++;
        }
    }
    t[j] = '\0';
    return j-1;
}


// 26

void insere(int v[], int N, int x) 
{
  for (int i=0; i <N ; ) {
    
    if (v[i]>x && i==N-1) {

      v[N]=x;
    }
    if (x<v[i]) {

      for (int j =N-1 ; j>=1; j--) {
        
        v[j+1]=v[j];
      }
    
    }
  }


}



//27   merge
void merge (int r [], int a[], int b[], int na, int nb)
{
  int nr = na + nb; 
  int posA=0 ,posB=0;
  for (int i=0 ; i<nr ; i++) {
    
    if ((a[posA] < b[posB] && posA<na) ||posB>=nb) {
      
      r[i]=a[posA];
      posA++;

    }else {
      
      r[i]=b[posB];
      posB++;
    }
  }
}



// 28

int crescente (int a[], int i, int j)
{
  for(int k=i; i<j ;k++){

    if (a[i]<a[i+1]) {
        return 0;
    }
  }
  return 1;
}

// 29

int retiraNeg (int v[], int N)
{ 
  int pos;
  for (int i=0, pos =0; i<N ; i++,pos++) {
    
    if (v[i]>=0) {
      v[pos]=v[i];
      pos++;
    }

  }
  return pos;
}

//30 menosFreq;

int Verifica(int *v , int i, int N)
{

  for (int j=0; j<N ; j++) {
    
    if (v[j]==i) {
      return j;
    }

    
  }
  return -1;
}
 


int menosFreq (int v[], int N)
{
  int tabela_num[N];
  int tabela_ocorrencias[ N ];
  int pos =0;

  for (int i =0; i<N; i++) {
    int index = Verifica(tabela_num ,v[i], N);
    if (index !=-1) {
      tabela_ocorrencias[index]=+1;


    }else {
    
      tabela_num[pos]=v[i];
      tabela_ocorrencias[pos]++;

      pos++;

    }


  }
  int min = tabela_ocorrencias[0];
  int min_index =0;

  for (int k=0; k<N; k++) {

    if (min>tabela_ocorrencias[k]) {
     min = tabela_ocorrencias[k];
     min_index=k;
      
    }
       
  }
return tabela_ocorrencias[min_index] ;
}

// 31 

int maisFreq (int v[], int N){
    int i, j, maior = 0, freq = 0, aux = 0;
    for(i = 0; i < N; i++){
        for(j = i; j < N; j++){
        if(v[i] == v[j]){
            aux++;
        }
        }
        if(aux > freq){
        freq = aux;
        maior = v[i];
        }
        aux = 0;
    }
    return maior;
}

// 32
int maxCresc (int v[], int N)
{
  int max=0, aux=0;

  for (int i =0; i<N; i++) {
    aux=1;  
    
    for (int j = i ;i<N ; j++) {
      
      if (v[i]<=v[j]) {

        aux++;

      }else {
        break;
      }
    }

    if (aux>=max) {
      max=aux;
      
    
    }

  }

  return max;
}


int main() {
  int N_pergunta;
  int numeros;
  int Argumento1;
  char string1[200], string2[200];

  printf("Q pergunta queres:\n");
  scanf("%d", &N_pergunta);

  switch (N_pergunta) {
  case 1:

    printf("Escreva um numero\n");
    printf("%d\n", q1());

  case 2:

    printf("Escreva um numero\n");
    printf("%d", q2());

  case 3:
    printf("Escreva um numero\n");
    printf("%d", q3());

  case 4:

    printf("Escreva um numero\n");
    scanf("%d", &Argumento1);
    printf("%d", q4(Argumento1));

  case 5:

    printf("Escreva um numero\n");
    scanf("%d", &Argumento1);
    printf("%d", q5(Argumento1));

  case 6:

    printf("Escreva um numero\n");
    scanf("%d", &Argumento1);
    printf("%d", q6(Argumento1));

  case 7:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    strdog(string1, string2);
    printf("%s", string1);
    break;

  case 8:

    printf("Escreva uma string \n");
    scanf("%s", string1);
    strspy(string2, string1);
    printf("%s", string2);

  case 9:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%d", strcnp(string1, string2));
    break;

  case 10:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%s", strstring(string1, string2));
    break;
  case 11:

    printf("Escreva uma string\n");
    scanf("%s", string1);
    strrev(string1);
    printf("%s", string1);

  case 12:

    printf("Escreva uma string\n");
    scanf("%s", string1);
    strnoV(string1);
    printf("%s", string1);

  case 13:

    printf("dar take de :\n");
    scanf("%d", &Argumento1);
    printf("Escreva uma string\n");

    fgets(string1, 200, stdin);

    truncW(string1, Argumento1);

    break;
  case 14:

    printf("Escreva uma string\n");
    scanf("%s", string1);
    printf("%c", charMaisfreq(string1));

  case 15:

    printf("Escreva um string:\n");
    scanf("%s", string1);
    printf("%d", iguaisConsecutivos(string1));

  case 16:

    printf("Escreva um string:\n");
    scanf("%s", string1);
    //printf("%d", difConsecutivos(string1));


  case 17:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%d", maiorPrefixo(string1, string2));

  case 18:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%d", maiorSufixo(string1, string2));

  case 19:

    printf("Escreva uma string\n");
    scanf(" %s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%d", sufPref(string1, string2));


  case 20:

    printf("Escreva um string:\n");
    if(fgets(string1,200 , stdin)){}
    printf("%d", contaVogais(string1));
    return 0;

  case 21:

    printf("Escreva um string:\n");
    if(fgets(string1,200 , stdin)){}
    printf("%d",contaVogais(string1));
    return 0;
  
  case 22:

    printf("Escreva uma string\n");
    scanf("%s", string1);
    printf("Escreva uma string\n");
    scanf("%s", string2);
    printf("%d", contida(string1, string2));

  case 23:

    printf("Escreva uma string\n");
    scanf("%s", string1);

    printf("%d",palindorome(string1));
  
  case 24:

    printf("Escreva uma string\n");
    scanf("%s", string1);

    printf("%d",remRep(string1));
    break;

  case 25:

    printf("Escreva uma string\n");
    fgets(string1,200, stdin);

    printf("%d",limpaEspacos(string1));
    break;

  case 26:

    printf("Escreva uma string\n");
    

      


  }

}