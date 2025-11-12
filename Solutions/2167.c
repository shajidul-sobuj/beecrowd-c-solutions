#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int tr=0;
    for (int i=0;i<n-1;i++) {
        if (a[i]>a[i+1]) {
            printf("%d\n",i+2);
            tr++;
            break;
        }
    }
    if (!tr) {
        printf("0\n");
    }
    return 0;
}









