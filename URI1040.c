int main(void){
	float n1,n2,n3,n4,notaExame;
	scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
	n1=n1*2;
	n2=n2*3;
	n3=n3*4;
	n4=n4*1;
	n1=(n1+n2+n3+n4)/10;
	printf("Media: %0.1f\n", n1);
	if(n1>7){
		printf("Aluno aprovado.\n");
	}else if(n1<5){
		printf("Aluno reprovado.\n");
	}else {
		printf("Aluno em exame.\n");
		scanf("%f",&notaExame);
		printf("Nota do exame: %0.1f\n",notaExame);
		n1=(n1+notaExame)/2;
		if(n1>5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %0.1f\n", n1); 
		
	}
	return 0;
}