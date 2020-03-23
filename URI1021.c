#include <stdio.h>
#include <math.h>
int main(void){
	float valor;
	int i, j;
	int contCelula[12];
	float cedulas[12]={100,50,20,10,5,2,1,0.5,0.25,0.10,0.05,0.01};
	/*for(i=0;i<12;i++){
		printf("%f\n",cedulas[i]);
	}
	*/
	scanf("%f", &valor);
	for(i=0;i<12;i++){
		contCelula[i]=0;
	}
	for(i=0;valor!=0;j=0){
		if(valor-cedulas[i]>=0){
			contCelula[i]++;
			//printf("%i cedula de %i\n",contCelula[i], cedulas[i]);
			valor=valor-cedulas[i];
		}else{
			i++;
			//printf("%i cedula de %i\n",contCelula[i], cedulas[i]);
		}
	}
	printf("NOTAS:\n");
	for(i=0;i<6;i++){
		printf("%i nota(s) de R$ %0.0f\n",contCelula[i], cedulas[i]);	
	}
	printf("MOEDAS:\n");
	for(i=6;i<12;i++){
		printf("%i moeda(s) de R$ %0.2f\n",contCelula[i], cedulas[i]);	
	}
	
	return 0;

}