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
    double avg = 0;
    double sum=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (i>j) {
                sum=sum+M[i][j];
            }
        }
    }
    avg = sum / 66.0;

    if (T=='S') {
        printf("%0.1lf\n",sum);
    }else if (T=='M') {
        printf("%0.1lf\n",avg);
    }
    return 0;
}
