#include <stdio.h>
int main()
{
    float N;
    scanf("%f", &N);
    printf("NOTAS:\n");
    int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s;
    a = N/100;
    printf("%d nota(s) de R$ 100.00\n", a);
    b = N-(a*100);
    c = b/50;
    printf("%d nota(s) de R$ 50.00\n", c);
    d = b-(c*50);
    e = d/20;
    printf("%d nota(s) de R$ 20.00\n", e);
    f = d-(e*20);
    g = f/10;
    printf("%d nota(s) de R$ 10.00\n", g);
    h = f-(g*10);
    i = h/5;
    printf("%d nota(s) de R$ 5.00\n", i);
    j = h-(i*5);
    k = j/2;
    printf("%d nota(s) de R$ 2.00\n", k);
    printf("MOEDAS:\n");
    l = j-(k*2);
    m = l/1;
    printf("%d moeda(s) de R$ 1.00\n", m);
    n = l-(m*1);
    o = n*2;
    printf("%d moeda(s) de R$ 0.50\n", o);

    printf("%d", l);
    
    return 0;
}
