#include <stdio.h>

int count = 0;

long int Fib(int n ){
	count++;
	if(n==0 || n == 1){
		return n;
	}else{
		return Fib(n-1) + Fib(n-2);
	}
		
}

int main(int argc, char *argv[]) {
	
	int testes,x,y,i;
	long int resultado;
	
	scanf("%d", &testes);
	
	int v[testes];
	
	for(i = 0; i<testes; i++){
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i<testes; i++){
		count = 0;
		resultado = Fib(v[i]);
		printf("fib(%d) = %d calls = %ld\n", v[i], count-1, resultado);
	}
	return 0;
	}
