#include <stdio.h>

int main() {

	int n,b;
	scanf("%d",&n);
	long long int a[10000];
	
	for (int j=1; j<=n; j++) {
		scanf("%d",&b);
		for (int i=0; i<100; i++) {
			a[0]=0;
			a[1]=1;
			if (i>=2) {
				a[i]=(a[i-1]+a[i-2]);
			}
			if (i==b) {
			    printf("Fib(%d) = %lld\n",i,a[i]);
	    	}
		}
		
	}

	return 0;
}
