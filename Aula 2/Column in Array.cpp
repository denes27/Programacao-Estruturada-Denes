#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 0, j = 0, coluna = 0;
	char operacao;
	double m[12][12], resultado;
	
	scanf("%d %c", &coluna, &operacao);
	
	for(i = 0; i<12 ; i++){
		for(j = 0; j<12; j++){
			scanf("%lf", &m[i][j]);
			//printf("elemento em %d %d: %lf \n", i, j, m[i][j]);
		    if(j == coluna){
				resultado += m[i][j]; 
				//printf("spmei este resultado\n");
			}
		}
	}
	
    if(operacao == 'S')
    
        printf("%.1lf\n", resultado);
        
    else if(operacao == 'M'){
    	
        resultado = resultado/12.0;
        printf("%.1lf\n", resultado);
        
    }
	
	return 0;
}
