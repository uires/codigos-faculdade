#include <stdio.h>
#include <conio.h>
/*
author: uíres dêivide
date: 09/29/2017
matéria lógica de programção e algoritmo
docente: Marcio 
*/

int main (){
	// statements
	int operation;
	int cont, n1, n2, result;
	
	printf("hi\n ");
	printf("which operation do you want?\n");
	printf("[1] sum, [2] multiplication, [3]subtraction, [4]division and [5] multiplication table/// [0]to stop : \n ");
	
	scanf("%d", &operation);
	int true = 1;
	while(true){	
		switch (operation){
			case 0 :
				true = 0;
				break;				
			
			case 1: 
				printf("number 1 and number 2 to sum: ");				
				scanf("%d %d", &n1, &n2 );
				if((n1 >= 0) && (n2 >= 0)){
					result = n1 + n2;
					printf("\nthe sum is : %d + %d = %d\n", n1, n2, result);
					printf("What's the new task?\n");
					scanf("%d", &operation);
				}else{
					printf("bellow 0! try again\n");									
				}								
			
			case 2: 
				printf("number 1 and number 2 to multiply: ");				
				scanf("%d %d", &n1, &n2 );
				result = n1 * n2;
				printf("%d x %d =%d\n", n1, n2, result);
				printf("What's the new task?\n");
				scanf("%d", &operation);
				break;
			
			case 3: 				
				printf("number 1 and 2 to subtraction: ");
				scanf("%d %d", &n1, &n2 );
				result = n1 - n2;
				printf("%d - %d = %d", n1, n2, result);
				printf("What's the new task?\n");
				scanf("%d", &operation);				
				break;
			
			case 4:
				printf("number 1 and 2 to division: ");
				scanf("%d %d", &n1, &n2);
				if((n1 <= 0) || (n2 <= 0)){
					printf("try again!!! this operation is impossible to execute, you can not divide 0!!!!!! \n");					
				}else if((n1 > 0)&&(n2 > 0)){
					result = n1 / n2;
					printf("%d / %d = %d\n", n1, n2, result);
					printf("What's the new task?\n");
					scanf("%d", &operation);					
				}
				break;		
							
			case 5: 
				printf("number to table: \n");
				scanf("%d", &n1);
				if(n1 > 0){
					int i;
					for(i = 1;i <= 10;i++){
						result = n1 * i;
						printf("%d x %d = %d\n", n1, i, result );									
					}	
					printf("What's the new task?\n");
					scanf("%d", &operation);
					break;
				}else{
					printf("bellow 0! try again\n");						
				}				
				break;
				
		default:			
			printf("incorrect number");
			printf("\n try again== ");
			true = 0;			
			break;			
		}		
		
		printf("\nThank you for using this.");		
	}
    return 0;
}
