#include <stdio.h>
int main()
{
    float x,y;
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        scanf("%f %f",&x,&y);
        if (x/y>=-1000000000.00 && x/y<=1000000000.00){
            printf("%0.1f\n",x/y);
        }else{
            printf("divisao impossivel\n");
        }

    }
    return 0;
}
