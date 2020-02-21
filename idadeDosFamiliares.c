#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(void){
	int idadePai = 44;
	int idadeMae = 40;
	int idadeFilho = 17;
	int anoPresente = 2019;
	
	int nascPai = anoPresente - idadePai;
	int nascMae = anoPresente - idadeMae;
	int nascFilho = anoPresente - idadeFilho;
	
	printf("O pai nasceu em %i\n A mae nasceu em %i\n O filho nasceu em %i", nascPai, nascMae, nascFilho);
}