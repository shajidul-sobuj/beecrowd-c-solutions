#include <stdio.h>

int main()
{
    char T;
    scanf(" %c",&T);
    int n=12;
    double M[n][n];
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            scanf("%lf",&M[i][j]);
        }
    } 
    double avg = 0;
    double sum=0;
    int co=0;
    for (int i=0;i<n;i++) {
        for (int j=0;j<n;j++) {
            if (((i+j)>n-1) && i>j) {
                sum=sum+M[i][j];
                co++;
            }
        }
    }
    avg = sum / 30.0;

    if (T=='S') {
        printf("%0.1lf\n",sum);
    }else if (T=='M') {
        printf("%0.1lf\n",avg);
    }


    return 0;
}
