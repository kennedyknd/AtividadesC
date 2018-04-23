#include <stdio.h>

int cont, numero, res;

void main (){
	printf("Tabuada by Olimpio e Kennedy");
	printf("\n\nDigite um numero: ");
	scanf("%d", &numero);
	
	cont = 0;
	
	do {
		cont = cont + 1;
		res = numero * cont;
		printf("%d x %d = %d\n", numero, cont, res);
	}while ( cont <= 10);

	
	
	
	
	
	
	
}
