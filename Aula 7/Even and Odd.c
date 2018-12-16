#include <stdio.h>
#include <stdlib.h>

int ascendente(void const *a, void const *b )
{
    return (*(int*)a - *(int*)b );
}

int descendente(void const *a, void const *b )
{
    return (*(int*)b - *(int*)a );
}

int main(void) {
  int *PAR, *IMPAR;
  int n, num;

  scanf("%d", &n);

  PAR = malloc(sizeof(int)*n);
  IMPAR = malloc(sizeof(int)*n);

  int qtdP = 0;
  int qtdI = 0;

  for (int i = 0; i < n; i++) {
      scanf("%d", &num);
        if(num % 2 == 0){
            PAR[qtdP] = num;
            qtdP++;
        }else{
            IMPAR[qtdI] = num;
            qtdI++;
        }
  }

  qsort(PAR, qtdP, sizeof(int), ascendente);
  qsort(IMPAR, qtdI, sizeof(int), descendente);

  for (int i = 0; i < qtdP; i++) {
       printf("%d\n", PAR[i]);
  }

  for (int i = 0; i < qtdI; i++) {
       printf("%d\n", IMPAR[i]);
  }

  return 0;
}

