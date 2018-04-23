#include <stdio.h>
int v1, //Valor 1
	v2; //Valor 2
void main(){
	v1=11; //Atribuicao a variavel 'v1'
	v2=80; //Atribuiçao a variavel 'v2'
	//Exibicao de dados antes da troca
	printf("ANTES DA TROCA\n");
	printf("v1: %d\n", v1);
	printf("v2: %d\n", v2);
	//Bloco para troca de valores
	{
	int aux=v1;
	v1=v2;
	v2=aux;
	}
	//Exibicao de dados apos a troca de valores
	printf("DEPOIS DA TROCA\n");
	printf("v1: %d\n", v1);
	printf("v2: %d\n", v2);
	
	
	
	
}
