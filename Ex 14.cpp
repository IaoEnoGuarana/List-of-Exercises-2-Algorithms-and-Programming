/*Fazer um algoritmo que leia tr�s valores, determine e imprima o maior deles.*/

#include <stdio.h> //incluindo biblioteca//

int main (){ //definindo fun��o principal//
	
	int valor1, valor2, valor3; //declara��o de vari�veis
	
	printf ("Digite tr�s valores: "); //printf pra pedir os valores
	scanf ("%d%d%d", &valor1, &valor2, &valor3);// lendo os valores
	
	if (valor1 > valor2 && valor1 > valor3){ // condi��o se o valor1 for maior
		printf ("%d", valor1);
	}
	else if (valor2 > valor1 && valor2 > valor3){//condi��o se o valor2 for maior
		printf ("%d", valor2);
	}
	else if (valor3 > valor1 && valor3 > valor2){//condi��o se o valor3 for maior
		printf ("%d", valor3);
	}
	
	return 0;//retornar pra saber se correu corretamente
}
