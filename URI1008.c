#include <stdio.h>
int main (void){
	int reg,horas;
	float valorHora;
	scanf("%i %i %f",&reg,&horas,&valorHora);
	
	printf("NUMBER = %i\n",reg);
	valorHora=horas*valorHora;
	printf("SALARY = U$ %0.2f\n",valorHora);
	return 0;
}