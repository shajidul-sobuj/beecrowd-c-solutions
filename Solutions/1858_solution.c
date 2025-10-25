#include <stdio.h>
int main()
{
   int n,min=100;
   scanf("%d",&n);
   int a[n];
   for (int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
   for (int i=0;i<n;i++){
    if (a[i]<min){
        min=a[i];
    }
   }
   for (int i=0;i<n;i++){
    if (min==a[i]){
        printf("%d\n",i+1);
        break;
    }
    }
   
    return 0;
}
