#include <stdio.h>
#include <math.h>
int main(void){
	int a,b, cont;
	scanf("%i %i",&a,&b);

	if(a<b){
		for(cont=a;cont<b;cont++){
			if(cont%5==2 || cont%5==3){
				printf("%i\n",cont);
			}
		  }	
	}else{
		for(cont=b;cont>a;cont--){
			if(cont%5==2 || cont%5==3){
				printf("%i\n",cont);
			}
		}
	}
	

	
	
	
	
	
	
	
	return 0;
}