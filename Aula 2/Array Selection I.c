#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 0;
	double m[100];

	for(i = 0; i<100; i++){
		scanf("%lf", &m[i]);
	}
	
	for(i = 0; i<100; i++){
		if(m[i] <= 10)
		printf("A[%d] = %.1lf\n", i, m[i]);
	}

	return 0;
}
