#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i = 0, j = 0, a = 11, b = 7;
	char operacao;
	double m[12][12], resultado;
	
	scanf("%c", &operacao);
	
	//printf("caracter: %c \n",operacao);
	
	for(i = 0; i<12 ; i++){
		for(j = 0; j<12; j++){
			scanf("%lf", &m[i][j]);
		//	printf("elemento em %d %d: %lf \n", i, j, m[i][j]);
		}
	}
	
	i=0;
	j=0;
	
	for(i=1; i<=10;i++)
    {
        if(i<=5)
        {
            for(j=a; j<=11; j++)
                resultado+=m[i][j];
            a--;
        }
        
        else if(i>=6)
        {
        for(j=b; j<=11; j++)
            resultado += m[i][j];
        b++;
        }
    }
    
    if(operacao == 'S')
    
        printf("%.1lf\n", resultado);
        
    else if(operacao == 'M'){
    	
        resultado = resultado/30.0;
        printf("%.1lf\n", resultado);
        
    }
	
	return 0;
}
