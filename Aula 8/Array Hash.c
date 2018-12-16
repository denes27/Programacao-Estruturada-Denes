#include<stdio.h>
int main(){
	
    int x , i, j,n,l=0,soma=0;
    char k[1000];
    scanf("%d", &n);
    int resultados[n];
    for(i=0;i<n;i++){
        scanf("%d",&x);
        for(j=0;j<x;j++){
            fflush(stdin);
            scanf("%s", &k);
            while(k[l]!='\0'){
                soma=soma+k[l]-65+j+l;
                l++;

            }
            l=0;
        }
        resultados[i] = soma;
        soma=0;
	
    }
    
    for(i=0; i<n;i++){
    	printf("%d\n", resultados[i]);
	}
    return 0;
}
