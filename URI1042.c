#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(void){
	int a,b,c;
	int menor, medio, maior;
	scanf("%i %i %i",&a,&b,&c);
	if(a<b && a<c){
		menor = a;
		if(b<c){
			medio=b;
			maior=c;
		}else{
			medio=c;
			maior=b;
		}
	}
	if(b<a && b<c){
		menor = b;
		if(a<c){
			medio=a;
			maior=c;
		}else{
			medio=c;
			maior=a;
		}
	}
	if(c<b && c<a){
		menor = c;
		if(a<b){
			medio=a;
			maior=b;
		}else{
			medio=b;
			maior=a;
		}
	}
	printf("%i\n%i\n%i\n\n",menor,medio,maior);
	printf("%i\n%i\n%i\n",a,b,c);
	return 0;
}