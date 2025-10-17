#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n[1000];
    int x,t;
    scanf("%d",&t);
    if (t>=2 && t<=50){
        for (int i=0;i<1000;i++){
            for (int j=0;j<t;j++){
                if (i%t==j){
                    printf("N[%d] = %d\n",i,j);
                }
                
                
            }
        continue;
        }
    }
    return 0;
}
