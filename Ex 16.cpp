/*16. Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome
e a altura da menor delas.*/

#include <stdio.h>
#include <locale.h>

int main (){

	setlocale (LC_ALL, "");
	
	float altura1, altura2, altura3;
	char nome1[30], nome2[30], nome3[30];
	
	printf ("Digite o nome e a altura de três pessoas (primeiro nomes depois alturas): ");
	scanf ("%s%s%s%f%f%f", &nome1, &nome2, &nome3, &altura1, &altura2, &altura3 );
	
	if (altura1 < altura2 && altura1 < altura3){
		printf ("Nome: %s\t Altura: %2.f", nome1, altura1);
	}
		else if (altura2 < altura1 && altura2 < altura3 ){
			printf ("Nome: %s\t Altura: %2.f", nome2, altura2);
		}
			else if (altura3 < altura1 && altura3 < altura2 ){
				printf ("Nome: %s\t Altura: %2.f", nome3, altura3);
			}
			
	return 0;
}
