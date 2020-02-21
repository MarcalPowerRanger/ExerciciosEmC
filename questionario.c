#include <stdio.h>
#include <math.h>

int main (){
	char nome;
	float base;
	float altura;
	float area;
	printf("Digite o valor da base: \n");
	scanf("%f", &base);
	printf("Digite o valor da altura: \n");
	scanf("%f", &altura);
	area= base * altura;
	printf("O valor da area e: %f",area);
	return 0;
}
