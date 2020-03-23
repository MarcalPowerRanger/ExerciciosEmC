#include <stdio.h>
#include <math.h>
int main(void){
	int a,i;
	scanf("%i",&a);
	if(a%2==0){
		a++;
		for(i=1;i<=6;i++){
			
			printf("%i\n",a);
			a=a+2;
		}
	}
	else if(a%2==1){
		for(i=1;i<=6;i++){
			a=a+2;
			printf("%i\n",a);
		}
	}
	return 0;
}