#include <stdio.h>
#include <math.h>
int main(void){
	float horas, velocita;
	scanf("%f %f",&horas,&velocita);
	horas=horas*velocita/12;
	printf("%0.3f\n",horas);
	return 0;
}