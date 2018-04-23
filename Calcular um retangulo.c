#include <stdio.h>
int base, altura, area;

void main (){
	printf("CALCULO DA AREA DE UM RETANGULO.");
	printf("\npor Kennedy Alves\n\n");

	printf("Insira o valor da BASE: ");
	scanf("%d", &base);	
	printf("Insira o valor da ALTURA: ");
	scanf("%d", &altura);
	
	if( base < 0){
	printf("\nArea na ESQUERDA do eixo.");
	base = base*-1;}
	
	if( altura < 0){
	printf("\nAltura abaixo do eixo.");	
	altura = altura*-1;}

	//TODO: Calcular area "To Do = À FAZER EM INGLÊS. SEMPRE USAR QUANDO TIVER ALGO PRA FAZER"
	area = base * altura;
	
	printf("\n\nBase : %d metros", base);
	printf("\nAltura: %d metros", altura);
	printf("\nArea : %dm x %dm = %d m2", base, altura, area);
	
}
	
	
