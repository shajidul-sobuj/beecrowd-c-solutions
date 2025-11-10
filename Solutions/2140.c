#include <stdio.h>

int main()
{
    int arr[6]={ 2, 5, 10, 20, 50, 100};
    for ( ; ; ) {
        int a,b;
        scanf("%d %d",&a,&b);
        int x=b-a;
        int count =0;
        if (a==b && a==0) {
            break;
        }else {
            for (int j=0;j<6-1;j++) {
                for (int k=j+1;k<6;k++) {
                    int y = arr[j] + arr[k];
                    if (x==y) {
                        count++;
                    }
                }
            }
        }
        if (count !=0) {
            printf("possible\n");
        }else {
            printf("impossible\n");
        }

    }
    return 0;
}
