
#include <stdio.h>
int main()
{
    int n;
    for (int i=1 ;i>0;i++ ){
        if (scanf("%d", &n) != 1){
            break;}
        float a,min=100000000.000;
        for (int i=1;i<=n;i++){
            scanf("%f",&a);
            if (a<min){
                min=a;
            }
        }
        printf("%0.2f\n",min);
    }
    return 0;
}
