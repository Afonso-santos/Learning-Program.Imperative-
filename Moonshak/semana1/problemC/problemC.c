#include<stdlib.h>
#include <stdio.h>
#include <math.h>
int main(void)
{
    int s1,s2,s3;
    
    if (scanf("%d %d %d ",&s1,&s2,&s3)) {
        
        if (s1<=s2 && s2<=s3 ) {
            
            printf("%d %d %d\n",s1,s2,s3);
        
        }else if (s1<=s3 && s3 <=s2) {
        
            printf("%d %d %d\n",s1,s3,s2);
        
        }else if (s2<=s1 && s1<=s3) {
            
            printf("%d %d %d\n",s2,s1,s3);

        }else if (s2<=s3 && s3<=s1) {
            
            printf("%d %d %d\n",s2,s3,s1);

        }else if (s1>=s2 && s2>= s3) {
            
            printf("%d %d %d\n",s3,s2,s1);

        }else {
            printf("%d %d %d\n",s3,s1,s2);
        }
    }
    return 0;
}
