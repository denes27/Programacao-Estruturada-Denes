#include <stdio.h>

int count = 0;

int euclides(int x, int y)
{
  if (y==0)
{
    return x;
}
  else
{
    return euclides(y,x % y); 
}
}

int main(int argc, char *argv[]) {
	
	int testes,x,y,i,j;
	long int resultado;
	
	scanf("%d", &testes);
	
	int m[testes][2];

	for(i = 0; i<testes; i++){
		scanf("%d", &m[i][0]);
		scanf("%d", &m[i][1]);
	}
	
	for(i = 0; i<testes; i++){
		printf("%d\n", euclides(m[i][0],m[i][1]));
	}
	return 0;
	}
