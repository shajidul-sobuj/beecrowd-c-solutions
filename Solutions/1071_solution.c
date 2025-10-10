#include <stdio.h>
#include <math.h>
int main()
{
    int X,Y, sum=0;
    scanf("%d %d", &X, &Y);
    int i,b;
    if (X>Y){
        b = Y+1;
    
        for (i=b; i<X; i++){
            if (i%2!=0){
                sum = sum + i;
            }
        }printf("%d\n", sum);
    }else{
        b = X+1;
    
        for (i=b; i<Y; i++){
            if (i%2!=0){
                sum = sum + i;
            }
        }printf("%d\n", sum);
    }
    return 0;
}
