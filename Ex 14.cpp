/*Fazer um algoritmo que leia três valores, determine e imprima o maior deles.*/

#include <stdio.h> //incluindo biblioteca//

int main (){ //definindo função principal//
	
	int valor1, valor2, valor3; //declaração de variáveis
	
	printf ("Digite três valores: "); //printf pra pedir os valores
	scanf ("%d%d%d", &valor1, &valor2, &valor3);// lendo os valores
	
	if (valor1 > valor2 && valor1 > valor3){ // condição se o valor1 for maior
		printf ("%d", valor1);
	}
	else if (valor2 > valor1 && valor2 > valor3){//condição se o valor2 for maior
		printf ("%d", valor2);
	}
	else if (valor3 > valor1 && valor3 > valor2){//condição se o valor3 for maior
		printf ("%d", valor3);
	}
	
	return 0;//retornar pra saber se correu corretamente
}
