#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	int n;
	printf("Digite o valor a ser fatorado: ");
	scanf("%i", &n);
	
	if(n==0){
		printf("\n1");
	} else{
		int i;
		int Numeros[n];
		int Resultado = 1;
		for (i=n; i!=0; i--){
			Numeros [i] = i;
			
		}
		for (i=n; i!=0; i--){
			Resultado = Numeros[i] * Resultado;
		}
		printf("\n%i! = %i", n, Resultado);
	}
	return 0;
}