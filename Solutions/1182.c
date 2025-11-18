#include <stdio.h>

int main()
{
    int L;
    scanf("%d",&L);
    char T;
    scanf(" %c",&T);
    int n=12;
    float M[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%f",&M[i][j]);
        }
    } 
    if (T=='S') {
        double sum=0;
        for (int i=0;i<n;i++) {
            sum=sum+M[i][L];
        }
        printf("%0.1lf\n",sum);
    }else if (T=='M') {
        double avg = 0;
        double sum=0;
        for (int i=0;i<n;i++) {
            sum=sum+M[i][L];
        }
        avg = sum / 12.0;
        printf("%0.1lf\n",avg);
    }
    return 0;
}
