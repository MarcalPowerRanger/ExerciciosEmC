#include <stdio.h>
#include <math.h>

int main (){
	int c;
	int l;
	int t;
	for (c=1; c!=11; c++){
		printf("Tabuada do %i \n", c);
		for(l=1; l!=11; l++){
			t= c*l;
			printf("%i x %i = %i \n", c, l, t);
		}
	}
	
	return 0;
}