#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main(void){
	int en[3];

	bool vali;
	int i,c,d;
	for(i=0;i<=2;i++){
		scanf("%i", &en[i]);
	}
	for(i=0;i<=2 && vali;i++){
		for(c=0;c<=2 && vali;c++){
			   if(en[i]>en[c]){
				   vali =false;
				   d=i;
			   }
		}
	}
	printf("%i maior",en[d]);
	return 0;
}