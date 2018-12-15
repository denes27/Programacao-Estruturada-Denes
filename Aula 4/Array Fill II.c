#include <stdio.h>
#include <stdlib.h>

int main()
{

 //double distancia, combustivel;
 int *x = (int *)malloc(1000 * sizeof(int));
 int y,i,j,count = 0;

 scanf("%d", &y);

 for(i = 0; i<1000;i++){
 	
 		*(x+i) = count;
 		printf("N[%d] = %d\n", i, *(x+count));
 		count++;
 		if(count == y)
 			count = 0;
 }

 

 return 0;
}
