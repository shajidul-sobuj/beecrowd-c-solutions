#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++) {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int j=0;j<n;j++) {
            scanf("%d",&a[j]);
        }
        for (int j=0;j<n-1;j++) {
            for (int k=j+1;k<n;k++) {
                if (a[j]>a[k]) {
                    int temp= a[j];
                    a[j]=a[k];
                    a[k]=temp;
                }
            }
        }
        printf("Case %d: %d\n",i,a[n/2]);
        
    }
    return 0;
}
