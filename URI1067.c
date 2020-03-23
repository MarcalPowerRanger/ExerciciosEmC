#include <stdio.h>
#include <math.h>
int main(void){
	int a,i,b;
	scanf("%i",&a);

	for(i=1;i<=a;i++){
		if(i%2==1){
			printf("%i\n",i);
		}
	}
	return 0;
}