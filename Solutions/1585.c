#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        int a,b;
        scanf("%d %d",&a,&b);
        int re=(a*b)/2;
        printf("%d cm2\n",re);
    }
    return 0;
}
