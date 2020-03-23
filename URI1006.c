#include <stdio.h>
#include <math.h>
int main (void){
	float nota[3];
	int i;
	for(i=0;i<3;i++){
		scanf("%f",&nota[i]);
	}
	nota[0]=(nota[0]*2+nota[1]*3+nota[2]*5)/10;
	printf("MEDIA = %0.1f\n",nota[0]);
	
	return 0;	
}