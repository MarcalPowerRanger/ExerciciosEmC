#include <stdio.h>
#include <math.h>
int main(void){
	float distancia;
	float combustivel;
	scanf("%f %f", &distancia, &combustivel);
	distancia=distancia/combustivel;
	printf("%0.3f km/l\n",distancia);
	return 0;
}