#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 0;
	int m[10];

	for(i = 0; i<10; i++){
		scanf("%d", &m[i]);
		if(m[i]<=0)
			m[i] = 1;
	}
	
	for(i = 0; i<10; i++){
		printf("X[%d] = %d\n", i, m[i]);
	}

	return 0;
}
