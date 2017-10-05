#include <stdio.h>

int main(){
	
	int menu;
	int praiaNome;
	
	FILE *fileDB;
		
	fileDB = fopen("teste123.txt", "w");
	fprintf(fileDB, "Listagem -----------\n");
	
	
	printf("Digite [1] para adicionar dados ou [2] para listagem de dados: ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1: 					
			fclose(fileDB);				
		break;
						
		case 2:
			if()
		
		default: printf("Dado incorreto! tente novamente"); break;			
	}
	
	printf("\nfim");
	
	
	
	return 0;
}
