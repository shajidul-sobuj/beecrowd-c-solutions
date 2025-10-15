#include <stdio.h>
 
int main() {
 
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    if (a>0 && b>0 && c>0){
        if (a>=b && a>=c){
            if (a>=b+c){
                printf("NAO FORMA TRIANGULO\n");
            }else if ((a*a)==((b*b)+(c*c))){
                printf("TRIANGULO RETANGULO\n");
            }else if ((a*a)>((b*b)+(c*c))){
                printf("TRIANGULO OBTUSANGULO\n");
            }else if ((a*a)<((b*b)+(c*c))){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if (b>=a && b>=c){
            if (b>=a+c){
                printf("NAO FORMA TRIANGULO\n");
            }else if ((b*b)==((a*a)+(c*c))){
                printf("TRIANGULO RETANGULO\n");
            }else if ((b*b)>((a*a)+(c*c))){
                printf("TRIANGULO OBTUSANGULO\n");
            }else if ((b*b)<((a*a)+(c*c))){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
        else if (c>=a && c>=b){
            if (c>=b+a){
                printf("NAO FORMA TRIANGULO\n");
            }else if ((c*c)==((b*b)+(a*a))){
                printf("TRIANGULO RETANGULO\n");
            }else if ((c*c)>((b*b)+(a*a))){
                printf("TRIANGULO OBTUSANGULO\n");
            }else if ((c*c)<((b*b)+(a*a))){
                printf("TRIANGULO ACUTANGULO\n");
            }
        }
    }
    if (a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }else if ((a==b && b!=c)||(a==c && c!=b)||(b==c && c!=a)){
        printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}
