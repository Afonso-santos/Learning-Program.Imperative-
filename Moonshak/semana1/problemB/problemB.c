
#include <stdio.h>

int main(void)
{
    int s1,s2,s3;
    
    if (scanf("%d %d %d",&s1 ,&s2,&s3)==3) {
    
        if ((s1>=s2 && s2>=s3) || (s1<=s2 && s2<=s3)) {
            
            printf("OK\n");
        
        }else {
        
            printf("NAO\n");
        }
    }    
    return 0;
}

//print no

