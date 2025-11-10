
#include <stdio.h>

int main()
{
    for (int i=1; i>0; ) {
        float a,b;
        int x;
        for (int j=1;j>0;j++) {
            scanf("%f",&a);
            if (a>=0 && a<=10) {
                break;
            }else {
                printf("nota invalida\n");
                continue;
            }
        }
        for (int j=1;j>0;j++) {
            scanf("%f",&b);
            if (b>=0 && b<=10) {
                break;
            }else {
                printf("nota invalida\n");
                continue;
            }
        }
        float avg = (a+b)/2;
        printf("media = %.2f\n",avg);
        for (int j=1;j>0; ) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
            if (x==1) {
                break;
            } else if (x==2) {
                break;
            } else if (x!=1 && x!=2) {
                j++;
            }
        }
        if (x==1) {
            i++;
        }else if (x==2) {
            break;
        }
 
    }
    return 0;
}
