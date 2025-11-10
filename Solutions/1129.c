#include <stdio.h>

int main()
{
    for ( ; ;) {
        int n;
        scanf("%d",&n);
        if (n==0) {
            break;
        } else {
            for (int i=1;i<=n;i++) {
                int ar[5];
                for (int j=0;j<5;j++) {
                    scanf("%d",&ar[j]);
                }
                int count=0;
                int idx;
                for (int j=0;j<5;j++) {
                    if (ar[j]<=127) {
                        idx=j;
                        count++;
                    }
                }
                if (count!=1) {
                    printf("*\n");
                }else {
                    if (idx==0) {
                        printf("A\n");
                    }else if (idx==1) {
                        printf("B\n");
                    }else if (idx==2) {
                        printf("C\n");
                    }else if (idx==3) {
                        printf("D\n");
                    }else if (idx==4) {
                        printf("E\n");
                    }
                }
            }
        }
        
    }
    return 0; 
}
