#include <stdio.h>
int main()
{
    int n;

    for (int j=1;j>0;j++){
        scanf("%d",&n);
        if (n==0){
                break;
            }
        else if (n!=0){
            for (int i=1;i<=n;i++){
                if(i!=n){
                    printf("%d ",i);
                }else{
                    printf("%d",i);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
