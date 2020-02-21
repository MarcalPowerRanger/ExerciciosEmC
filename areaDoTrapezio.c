#include <stdio.h>
#include <math.h>

int main(){
	int baseMenor=0;
	int baseMaior=0;
	int altura=0;
	//float area;
	
	printf("Digite o valor da base maior: \n");
	scanf("%i", &baseMaior);
	printf("Digite o valor da base menor: \n");
	scanf("%i", &baseMenor);
	printf("Digite o valor da altura: \n");
	scanf("%i", &altura);
	int area = (baseMenor + baseMenor)*altura/2;
	printf("Area do trapezio é: %i", area);
	
	return 0;
}