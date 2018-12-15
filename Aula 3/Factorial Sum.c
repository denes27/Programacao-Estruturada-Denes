#include <stdio.h>

long long fat(int x)
{
  if (x==0) return 1;
  if (x==1) return 1;
	else return x*fat(x-1);
}

int main(int argc, char *argv[]) {
	
	int x = 0 ,y = 0;
	
	while(scanf("%d %d",&x,&y) != EOF){
		printf("%lli\n", fat(x)+fat(y));
	}
	
	return 0;
	}
