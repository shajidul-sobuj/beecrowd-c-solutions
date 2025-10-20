#include <stdio.h>
int main()
{
    float n1,n2,n3,n4,avg,n;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    printf("Media: %0.1f\n",avg);
    if (avg >= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (avg < 5.0){
        printf("Aluno reprovado.\n");
    }
    if (avg>=5.0 && avg <7.0){
        printf("Aluno em exame.\n");
        scanf("%f",&n);
        printf("Nota do exame: %0.1f\n",n);
        float avg2 = (avg + n)/2;
        if (avg2>=5.0){
            printf("Aluno aprovado.\n");
        }else if(avg2<5.0){
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %0.1f\n",avg2);
    }
    return 0;
}
