#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int frq[2001]={0};
    for (int i=0;i<n;i++) {
        frq[a[i]]++;
    }
    for (int i=0;i<2001;i++) {
        if (frq[i]!=0) {
            printf("%d aparece %d vez(es)\n",i,frq[i]);
        }
    }
    return 0;
}
