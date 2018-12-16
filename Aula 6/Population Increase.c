#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct cidades{
		int populacaoA;
		int populacaoB;
		float taxaA;
		float taxaB;
	};

int main() {
	
	int casos,i,auxInt,count;
	float auxFloat;
	scanf("%d",&casos);
	
	struct cidades cid[casos];
	
	for(i = 0; i<casos; i++){
		scanf("%d %d %f %f", &cid[i].populacaoA, &cid[i].populacaoB, &cid[i].taxaA, &cid[i].taxaB);
	}
	
	for(i = 0; i<casos; i++){
		if(cid[i].populacaoA > cid[i].populacaoB){
			auxInt = cid[i].populacaoA;
			cid[i].populacaoA = cid[i].populacaoB;
			cid[i].populacaoB = auxInt;
		}
		if(cid[i].taxaB > cid[i].taxaA){
			auxFloat = cid[i].taxaB;
			cid[i].taxaB = cid[i].taxaA;
			cid[i].taxaA = auxFloat;
		}
	}
	
	for(i = 0; i<casos; i++){
		count = 0;
		while(cid[i].populacaoA <= cid[i].populacaoB){
			cid[i].populacaoA *= (cid[i].taxaA/100) + 1;
			cid[i].populacaoB *= (cid[i].taxaB/100) + 1;
			count++;
			
			if(count > 100){
				printf("Mais de 1 seculo.\n");
				break;
			}
		}
		if(count <= 100)
			printf("%d anos.\n", count);	
	}
	
	return 0;
}
