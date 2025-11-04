#include <stdio.h>

int main()
{
    int n;
    int co2=0,co3=0,co4=0,co5=0;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<n;i++){
        if (a[i]%2==0) {
            co2++;
        }
        if (a[i]%3==0) {
            co3++;
        }
        if (a[i]%4==0) {
            co4++;
        }
        if (a[i]%5==0) {
            co5++;
        }
    }
    printf("%d Multiplo(s) de 2\n",co2);
    printf("%d Multiplo(s) de 3\n",co3);
    printf("%d Multiplo(s) de 4\n",co4);
    printf("%d Multiplo(s) de 5\n",co5);
    
    return 0;
}
