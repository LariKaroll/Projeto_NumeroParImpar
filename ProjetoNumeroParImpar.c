#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main(){
	int n1;
	
	printf("Informe um numero: ");
	scanf("%d", &n1);
	
	if(n1 % 2 == 0){
		printf("O numero %d e par", n1);
	} else{
		printf("O numero %d e impar", n1);
	}
}
