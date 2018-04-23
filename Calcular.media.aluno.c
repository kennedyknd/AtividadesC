#include <stdio.h>

float n1, n2, n3, media;

void main (){
	// Leitura com restrição de dados
	
	do {
	printf("\nEntre a nota 1: ");
	scanf( "%f", &n1);
	if (n1 < 0 || n1 > 10) {printf("Nota invalida!!!");} }
	while ( n1 < 0 || n1 > 10);
	
	printf ( "OK! Digitado: %0.2f", n1);

	do {
	printf("\n\nEntre a nota 2: ");
	scanf( "%f", &n2);
	if (n1 < 0 || n1 > 10) {printf("Nota invalida!!!");} }
	while ( n2 < 0 || n2 > 10);
	
	printf ( "OK! Digitado: %0.2f", n2);
	
	do {
	printf("\n\nEntre a nota 3: ");
	scanf( "%f", &n3);
	if (n1 < 0 || n1 > 10) {printf("Nota invalida!!!");} }
	while ( n3 < 0 || n3 > 10);
	
	printf ( "OK! Digitado: %0.2f", n3);
	
	media = (n1+n2+n3)/3;
	
	printf("\n\nSua media foi: %0.2f", media);
	
	if ( media>= 7) {printf( "\nAluno aprovado");}
	else { printf("\nAluno reprovado");}
	
	
}

