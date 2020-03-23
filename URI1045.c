#include <stdio.h>
#include <math.h>
int main(void){
	float a,b,c;
	scanf("%f %f %f",&a,&b,&c);
	if(a>=b+c){
		printf("FORMA TRIANGULO\n"); 
	}else if(a*a==b*b+c*c){
		printf("TRIANGULO RETANGULO\n");
	}else if(a*a>b*b+c*c){
		printf("TRIANGULO OBTUSANGULO\n");
	}else if(a*a<b*b+c*c){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(a==b && a==c && c==b){
		printf("TRIANGULO EQUILATERO\n");
	}else if(a==b || a==c || c==b){
		printf("TRIANGULO ISOSCELES\n");
	}
	return 0;
}