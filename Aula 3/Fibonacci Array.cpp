#include <stdio.h>


long int Fib(int n ){
	if(n==0 || n == 1){
		return n;
	}else{
		return Fib(n-1) + Fib(n-2);
	}
		
}

int main(int argc, char *argv[]) {
	
	int testes,i;
	long int resultado;
	
	scanf("%d", &testes);
	
	int v[testes];
	
	for(i = 0; i<testes; i++){
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i<testes; i++){
		resultado = Fib(v[i]);
		printf("Fib(%d) = %ld\n", v[i], resultado);
	}
	return 0;
	}
