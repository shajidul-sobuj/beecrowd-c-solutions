#include <stdio.h>
int main()
{
    float x;
    scanf("%f",&x);
    int a;
    printf("NOTAS:\n");
    a=x/100;
    printf("%d nota(s) de R$ 100.00\n",a);
    x=x-(a*100);
    a=x/50;
    printf("%d nota(s) de R$ 50.00\n",a);
    x=x-(a*50);
    a=x/20;
    printf("%d nota(s) de R$ 20.00\n",a);
    x=x-(a*20);
    a=x/10;
    printf("%d nota(s) de R$ 10.00\n",a);
    x=x-(a*10);
    a=x/5;
    printf("%d nota(s) de R$ 5.00\n",a);
    x=x-(a*5);
    a=x/2;
    printf("%d nota(s) de R$ 2.00\n",a);
    printf("MOEDAS:\n");
    x=x-(a*2);
    a=x/1;
    printf("%d moeda(s) de R$ 1.00\n",a);
    float b;
    x=x-(a*1);
    b=x * 2;
    printf("%.0f moeda(s) de R$ 0.50\n",b);
    x=x-(b*0.5);
    b=x*4;
    printf("%.0f moeda(s) de R$ 0.25\n",b);
    x=x-(b*0.25);
    b=x*10;
    printf("%.0f moeda(s) de R$ 0.10\n",b);
    x=x-(b*0.10);
    b=x*20;
    printf("%.0f moeda(s) de R$ 0.05\n",b);
    x=x-(b*0.05);
    b=x*100;
    printf("%.0f moeda(s) de R$ 0.01\n",b);



    return 0;
}
