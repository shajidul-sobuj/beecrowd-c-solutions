#include <stdio.h>
 
int main() {
 
    float a,b,c,area,per;
    scanf("%f %f %f", &a,&b,&c);
    if (a<b+c && b<a+c && c<a+b){
        per = a+b+c;
        printf("Perimetro = %.1f\n",per);
    }else {
        area = ((a+b)/2)*c;
        printf("Area = %.1f\n",area);
    }
    
 
    return 0;
}
