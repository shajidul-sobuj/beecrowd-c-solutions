#include <stdio.h>

int main() {
	double i,n=2,j=1,k;
	int x,y;
	for (i=0; i<n; i=i+0.2) {
		for (j=1; j<4; j++) {
			k=j+i;
			if (i==0.0 || i==1.0 || i==2.0) {
			    x=i;
			    y=k;
				printf("I=%d J=%d\n",x,y);
			}
			else {
				printf("I=%0.1lf J=%0.1lf\n",i,k);
			}
		}
	}
	return 0;
}
