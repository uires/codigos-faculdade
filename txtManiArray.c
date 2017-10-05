#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
	char fraseado [30] = "Shal'na Ilindori";

	FILE *putsFrase;
	int cont;
	
	putsFrase = fopen("documentManipu.txt","w");
	if(putsFrase == NULL){
		printf("Arquivo indisponível");
	}else{
		for(cont =0;cont< strlen(fraseado);cont++ ){
			fputc(toupper(fraseado[cont]), putsFrase);
		 }
		fclose(putsFrase);
	}	 
	
	return 0;
}
