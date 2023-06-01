
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strstrrr(char s1[],char s2[])
{   
    int i,j=0,k=0;
    for(int i=0;s1[i]!='\0';i++){
       for(j=i,k=0; s1[j]==s2[k];j++,k++){
       }
       if(k==strlen(s2)){
        return s1+i;
       }
    }
    return NULL;
}

void truncW(char t[], int n)
{
    for(int i =0; t[])
}