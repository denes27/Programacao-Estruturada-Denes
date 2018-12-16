#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct rgb{
		int r;
		int g;
		int b;
		
	};
	
struct rgb ordena(struct rgb a){
	int aux = 0;
	if(a.g > a.r){
		aux = a.r;
		a.r = a.g;
		a.g = aux;
	}
	if(a.b > a.g){
		aux = a.g;
		a.g = a.b;
		a.b = aux;
	}
	if(a.g > a.r){
		aux = a.r;
		a.r = a.g;
		a.g = aux;
	}
	
	return a;
}


int main() {
	
	int casos,i,p;
	
	scanf("%d",&casos);

	char metodo[casos][5];
	struct rgb cor[casos];
	struct rgb cor2[casos];
	
	for(i = 0; i<casos; i++){
		scanf("%s",metodo[i]);
		scanf("%d %d %d", &cor[i].r, &cor[i].g, &cor[i].b);
	}
	
	for(i = 0; i<casos; i++){
		if(strcmp(metodo[i], "min") == 0){
			cor2[i] = ordena(cor[i]);
			p = cor2[i].b;
		}
		else if(strcmp(metodo[i], "max") == 0){
			 cor2[i] = ordena(cor[i]);
			 p = cor2[i].r;
		}
		else if(strcmp(metodo[i], "mean") == 0){
		 	 p = ((cor[i].r + cor[i].g + cor[i].b));
			 p /= 3;
		}
		else if(strcmp(metodo[i], "eye") == 0){
			 p = (int)(0.3* cor[i].r + 0.59*cor[i].g + 0.11*cor[i].b);
		}
		printf("Caso #%d: %d\n",i, p);
	}
	
	return 0;
}
