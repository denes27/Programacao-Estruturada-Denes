#include <stdio.h>
#include <stdlib.h>

int main()
{

 //double distancia, combustivel;
double *x = (double *)malloc(2 * sizeof(double));

 scanf("%lf %lf", x, x+1);

 printf("%.3lf km/l\n", *(x) / *(x+1));

 return 0;
}
