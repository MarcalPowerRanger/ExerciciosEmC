#include <stdio.h>
#include <math.h>
int main(void){
	float salario,venda;
	char nome;
	scanf("%s %f %f", &nome,&salario,&venda);
	salario=salario+(venda*0.15f);
	printf("TOTAL = R$ %0.2f\n", salario);
	return 0;
}