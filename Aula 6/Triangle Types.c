#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangulo{
		double A;
		double B;
		double C;
	};

int main() {
	struct triangulo a;
	double aux;
	scanf("%lf %lf %lf",&a.A, &a.B, &a.C);
	
	if(a.C > a.B){
		aux = a.B;
		a.B = a.C;
		a.C = aux;
	}
	if(a.B > a.A){
		aux = a.A;
		a.A = a.B;
		a.B = aux;
	}
	if(a.C > a.B){
		aux = a.B;
		a.B = a.C;
		a.C = aux;
	}

	if(a.A >= (a.B + a.C))
		printf("NAO FORMA TRIANGULO\n");
		else{
		
	if(pow(a.A,2) == pow(a.B,2) + pow(a.C,2))	
		printf("TRIANGULO RETANGULO\n");
	if(pow(a.A,2) > pow(a.B,2) + pow(a.C,2))	
		printf("TRIANGULO OBTUSANGULO\n");
	if(pow(a.A,2) < pow(a.B,2) + pow(a.C,2))	
		printf("TRIANGULO ACUTANGULO\n");
	if(a.A == a.B && a.B == a.C)	
		printf("TRIANGULO EQUILATERO\n");
	if ((a.A == a.B && a.B != a.C) ||
		(a.A == a.C && a.C != a.B) ||
		(a.B == a.C && a.C != a.A))	
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}
