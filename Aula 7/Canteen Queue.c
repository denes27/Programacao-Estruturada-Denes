#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int selection_sort();

int main(){

    int teste,aux=0,quant, difere;
    int i, j, conta = 0;

        scanf("%d", &teste);

        while(teste != aux){

            quant = 0;
            conta = 0;

            scanf("%d", &quant);

                int vet_test[quant];
                int vet_compara[quant];

                for(i = 0; i< quant; i++)
                    scanf("%d", &vet_test[i]);

                for(i=0;i<quant;i++){
                    vet_compara[i] = vet_test[i];

                    }

                    selection_sort(vet_compara,quant);

                for(j=0;j<quant;j++){
                    if(vet_compara[j] != vet_test[j] )
                    conta++;

        }
        difere =quant - conta;

        printf("%d\n", difere);

    aux++;

        }


}

int selection_sort (int vet_compara[],int quant) {

int i, j, min, aux;

  for (i = 0; i < (quant - 1); i++) {

    min = i;
    for (j = i+1; j < quant; j++) {

      if (vet_compara[j] > vet_compara[min]) {
   min = j;
      }
    }

    if (i != min) {
      aux = vet_compara[i];
      vet_compara[i] = vet_compara[min];
      vet_compara[min] = aux;
    }
  }

}
