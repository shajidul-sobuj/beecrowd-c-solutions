#include <stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if (x>1 && x<20 && y>x && y<100000){
        for (int i=1;i<=y;i++){
            
                
                 if(i%x==0){
                    printf("%d",i);
                }else {
                    printf("%d ",i);
                }
                
            if (i%x==0){
                printf("\n");
            }
        }
    }
    return 0;
}
