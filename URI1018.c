#include <stdio.h>
#include <math.h>
int main(void){
	int valor, i, j;
	int contCelula[7];
	int cedulas[7]={100,50,20,10,5,2,1/*0.5,0.25,0.10,0.05,0.01*/};
	
	scanf("%i", &valor);
	for(i=0;i<7;i++){
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
	for(i=0;i<7;i++){
		printf("%i nota(s) de R$ %i.00\n",contCelula[i], cedulas[i]);	
	}
	return 0;
}