#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 0;
	double *m = (double *)malloc(100*(sizeof(double)));
	
	scanf("%lf", m);

	for(i = 1; i<100; i++){
		*(m+i) = *(m+i-1)/2;
	}
	
	for(i = 0; i<100; i++){
		printf("N[%d] = %.4lf\n", i, *(m+i));
	}

	return 0;
}
