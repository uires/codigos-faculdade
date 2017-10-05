#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
@uthor uíres
data 05/10/2017
*/

int main(){
	setlocale(LC_ALL, "portuguese");
	// leitura de arquivos
	
	int n1, n2, n3, total = 0;
	FILE *DBt;	

	if(!((DBt = fopen("DBlixo.txt", "rw")) == NULL)){
		fscanf(DBt, "%i %i %i", &n1, &n2 ,&n3);
		printf("%d %d %d", n1, n2, n3);
		printf("\nA soma dos valores lidos é: %d", total+= n1+ n2+n3);
		
	}else{
		printf("Arquivo indisponível\n ");
		exit(1);
		
	}
	fclose(DBt);
	
	return 0 ;
}
