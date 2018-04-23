#include <stdio.h>
int v1, v2, v3; //Valor  1, valor  2 e valor auxiliar 3

void main(){
	
	v1=80; //atribuição variavel 'v1'
	v2=11; //atribuição variavel 'v2'
	v3=0; //atribuição auxiliar 
	
	//atribuia o valor de v2 a v1 e v1 a v2!!!!!!!!!!!
	
	v3=v1;
	v1=v2;
	v2=v3;
	
	
	printf("Os valores sao %d, %d.", v1, v2);
	
	
	
}
