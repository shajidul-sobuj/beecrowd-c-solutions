#include <stdio.h>
int main()
{
    int n;
    for (int i=1 ;i>0;i++ ){
        scanf("%d",&n);
        if (n==0){
            break;
        }
        int a,b,c1=0,c2=0;
        for (int i=1;i<=n;i++) {
            scanf("%d %d",&a,&b);
            if (a>b){
                c1++;
            }else if (b>a){
                c2++;
            }else if (a==b) {
                continue;
            }
        }
        printf("%d %d\n",c1,c2);
    }
    return 0;
}
