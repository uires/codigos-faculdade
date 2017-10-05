#include <stdio.h>
/*
author: uires
date: 04/10/2017

*/
int main(void){
	
	// ponteiro de arquivo chamado de txtManipuler	
	FILE *txtManipuler;
	// abre o arquivo nomepara "write" ou seja leitura, dando o nome de teste.txt
	txtManipuler = fopen("teste.txt", "w");	
	
	// fprintf escreve os parametros entre strings no arquivo txt
		
	fprintf(txtManipuler, "\noper!");
	fprintf(txtManipuler, "\njjep ` ");
	fprintf(txtManipuler, "\n.!");
	// fecha o arquivo 
	fclose(txtManipuler);	
	
	
	
	
	return 0;
}
