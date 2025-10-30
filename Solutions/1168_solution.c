#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        char s[105];
        scanf("%s",s);
        int count=0;
        int sz = strlen(s);
        for (int i=0;i<sz;i++){
            if ((s[i]-'0')==0){
                count=count+6;
            }if ((s[i]-'0')==1){
                count=count+2;
            }if ((s[i]-'0')==2){
                count=count+5;
            }if ((s[i]-'0')==3){
                count=count+5;
            }if ((s[i]-'0')==4){
                count=count+4;
            }if ((s[i]-'0')==5){
                count=count+5;
            }if ((s[i]-'0')==6){
                count=count+6;
            }if ((s[i]-'0')==7){
                count=count+3;
            }if ((s[i]-'0')==8){
                count=count+7;
            }if ((s[i]-'0')==9){
                count=count+6;
            }
        }
        printf("%d leds\n",count);
        
    }
    return 0;
}
