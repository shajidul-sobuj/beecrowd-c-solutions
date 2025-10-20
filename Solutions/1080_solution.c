#include <stdio.h>
int main()
{
    int n=100,hi=0,a,hip=0;
    for (int i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>hi){
            hi=a;
            hip=i;
        }
    }
    printf("%d\n%d\n",hi,hip);
    return 0;
}
