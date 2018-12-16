#include <stdio.h>
int main() {

     int count,i;
     int lista[2001] = {0};
     scanf("%d",&count);
     for (i = 0; i < count; i++){
        int numero;
        scanf("%d",&numero);
        lista[numero] += 1;
     }
     for (i = 0; i < 2000; i++){
        if (lista[i] > 0){
            printf("%d aparece %d vez(es)\n",i,lista[i]);
        }
     }
    return 0;
     }
