#include <stdio.h>

int a, b; //a = numero de usuarios e b=numero de motoristas

void main (){
	do{
	printf("\nQuantos motoristas bateram o ponto?: ");
	scanf( "%d", &b);
	if ( b < 0 ) { printf ( "Numero invalido!!!!");}}
	while ( b < 0 );
	
	do {
	printf("\nQuantos passageiros passaram pela catraca: ");
	scanf( "%d", &a);
	if ( b < 0 ) { printf ( "Numero invalido!!!!");}}
	while ( a < 0 );
	
	
	if ( b > 0 ) {
		if ( b < 2 || a < 15 ) printf("Sai o minibus!!!");	
		if ( b >= 2 && a >= 15 ) printf("Sai o onibus!!");}
	else { printf("Nao sai nenhum onibus!!");	}
	

	
	
}
