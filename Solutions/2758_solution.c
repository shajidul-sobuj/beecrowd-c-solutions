#include <stdio.h>
int main()
{
	float a,b;
  double c,d;
	scanf("%f %f %lf %lf", &a,&b,&c,&d);
	printf("A = %f, B = %f\n",a,b);
	printf("C = %lf, D = %lf\n",c,d);
	printf("A = %0.1f, B = %0.1f\n",a,b);
	printf("C = %0.1lf, D = %0.1lf\n",c,d);
	printf("A = %0.2f, B = %0.2f\n",a,b);
	printf("C = %0.2lf, D = %0.2lf\n",c,d);
	printf("A = %0.3f, B = %0.3f\n",a,b);
	printf("C = %0.3lf, D = %0.3lf\n",c,d);
	printf("A = %0.3E, B = %0.3E\n",a,b);
	printf("C = %0.3E, D = %0.3E\n",c,d);
	printf("A = %0.0f, B = %0.0f\n",a,b);
	printf("C = %0.0lf, D = %0.0lf\n",c,d);
	return 0;

}
