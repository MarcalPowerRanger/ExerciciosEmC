#include <stdio.h>
#include <math.h>
int main(void){
	float A,B,C;
	float Tri, Ci, Tra, Qua, Ret;
	scanf("%f %f %f", &A,&B,&C);
	
	Tri=A*C/2;
	Ci=3.14159*C*C;
	Tra=(A+B)*C/2;
	Qua=B*B;
	Ret=A*B;
	printf("TRIANGULO: %0.3f\nCIRCULO: %0.3f\nTRAPEZIO: %0.3f\nQUADRADO: %0.3f\nRETANGULO: %0.3f\n",Tri, Ci, Tra, Qua, Ret);
	return 0;
}