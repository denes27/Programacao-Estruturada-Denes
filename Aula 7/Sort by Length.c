#include <stdio.h>
#include <string.h>

int main(){
	
    int i,j,k,testes,linha,posicao,contador;
    char str[50];   
    scanf("%d",&testes);
    getchar();
    char strings[50][50];
    
    for(i=0;i<testes;i++){
    	
        fgets(str,sizeof(str),stdin);
        int tamanho = strlen(str);
        j=0,linha = 0,posicao = 0,contador=0;
        
        while(j<tamanho){
            if(str[j] != ' ' && str[j] != '\n'){
            	
                strings[linha][posicao] = str[j];
                posicao++;
            } else {
            	
                strings[linha][posicao] = '\0';
                linha++;
                posicao = 0;
                contador++;
            }
            j++;
        }
    char aux[50];
    
    for (k = 1; k < contador; k++) {
        for (j = 0; j < contador - 1; j++) {
        	
            if (strlen(strings[j]) < strlen(strings[j + 1])) {
                strcpy(aux,strings[j]);
                strcpy(strings[j],strings[j+1]);
                strcpy(strings[j+1],aux);
            }
        }
    }
        for(j=0;j<contador;j++){
        	
            if(j != contador-1)
                printf("%s ",strings[j]);
            else
                printf("%s",strings[j]);
        }
        printf("\n");
    }
}
