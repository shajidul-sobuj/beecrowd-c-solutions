#include <stdio.h>
 
int main() {
    
    int a,b,r;
    scanf("%d %d",&a,&b);
    a=(a*(a-1))/2;
    b=(b*(b+1))/2;
    r=b-a;
    
    printf("%d\n",r);
    
 
    return 0;
}
