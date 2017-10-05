#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
@auhtor uíres

*/
int main(){
	char fraseado [30] = "Shal'na Ilindori";

	FILE *putsFrase, *puts2;
	int cont, cont2;
	
															// puts2 = segundo ponteiro de arquivo 
	if ((((putsFrase = fopen("manip.txt", "w"))== NULL)) || ((puts2 = fopen("txtTester.txt", "w"))== NULL)) {	
		printf("Arquivo indisponível! ");
		exit(1);
	
	}else{ // listando com toupper utilizando um for
		for(cont =0;cont< strlen(fraseado);cont++ ){
			fputc(toupper(fraseado[cont]), putsFrase);
			fputc(fraseado[cont], puts2);
			printf("%c", (fraseado[cont]));
		}
		fclose(putsFrase);
	
		fclose(puts2);
	}	 
	
	
	
	
	
	
	return 0;
}
