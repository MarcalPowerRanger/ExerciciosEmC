#include <stdio.h>
#include <math.h>

int main(void){
	float R;
	float vol;
	scanf("%f",&R);
	
	R = (4.0 / 3) * 3.14159 * R*R*R; 
	printf("VOLUME = %0.3lf\n", R);
	return 0;
}