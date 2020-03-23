#include <stdio.h>
#include <math.h>
int main(void){
	int a,b,c,d;
	scanf("%i %i %i %i",&a,&b,&c,&d);
	a=a*b;
	c=c*d;
	a=a-c;
	printf("DIFERENCA = %i\n", a);
	
	return 0;
}