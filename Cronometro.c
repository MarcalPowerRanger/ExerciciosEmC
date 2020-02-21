#include <stdio.h>
#include <math.h>
#include <windows.h>
int main(void){	
	int segundo=0;
	int minuto=0;
	int hora=0; 
	do{
	system("cls");
	printf("%i %i %i",hora, minuto, segundo);
	if(segundo==60){
		segundo=0;
		minuto++;
	}
	if(minuto==60){
		minuto=0;
		hora++;
	}
	if(hora==24){
		hora=0;
	}
	Sleep(1000);
	segundo++;
	
	}while(TRUE);
	system("pause");
	return 0;
}