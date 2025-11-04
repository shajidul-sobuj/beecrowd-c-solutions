#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++) {
        int el;
        int counter=0;
        scanf("%d",&el);
        for (int j=2;j<el;j++) {
            if (el%j==0) {
                counter++;
                break;
            }
        }
        if (counter!=0){
            printf("%d nao eh primo\n",el);
        }else {
            printf("%d eh primo\n",el);
        }
    }
    return 0;
}
