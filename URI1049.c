#include <stdio.h>
int main(void){
	char grupoUm,grupoDois,grupoTres;
	scanf("%s %s %s",&grupoUm,&grupoDois,&grupoTres);
	switch(grupoUm){
		case "vertebrado":
			switch(grupoDois){
				case "ave":
					switch(grupoTres){
						case "carnivoro":	
							printf("aguia\n");
							break;
                        case "onivoro":
                        	printf("pomba\n");
                        	break;
					}
                case "mamifero":
                	switch(grupoTres){
						case "herbivoro":	
							printf("vaca\n");
							break;
                        case "onivoro":
                        	printf("homem\n");
                        	break;
					}
			}
        case "invertebrado":
        	switch(grupoDois){
				case "inseto":
					switch(grupoTres){
						case "hematofago":	
							printf("pulga\n");
							break;
                        case "herbivoro":
                        	printf("lagarta\n");
                        	break;
					}
                case "anelideo":
                	switch(grupoTres){
						case "hematofago":	
							printf("sanguessuga\n");
							break;
                        case "onivoro":
                        	printf("minhoca\n");
                        	break;
					}
			}        
	}
	return 0;
}