#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int a;
    for (int i=1;i>0;){
        scanf("%d",&a);
        if (a>x){
            break;
        }
    }
    int sum=0,count=0;
    for (int i=x;i;i++){
        sum=sum+i;
        count++;
        if (sum>a){
            break;
        }
    }
    printf("%d\n",count);
    return 0;
}
