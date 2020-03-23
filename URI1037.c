#include <stdio.h>
#include <math.h>
int main(void){
	float ent;
	scanf("%f", &ent);
	if(ent>=0 && ent<=25){
		printf("Intervalo (0,25]\n");
	}else if(ent>25 && ent<=50){
		printf("Intervalo (25,50]\n");
	}else if(ent>50 && ent<=70){
		printf("Intervalo (50,75]\n");
	}else if(ent>70 && ent<=100){
		printf("Intervalo (75,100]");
	}else{
		printf("Fora de intervalo\n");
	}
	return 0;
}