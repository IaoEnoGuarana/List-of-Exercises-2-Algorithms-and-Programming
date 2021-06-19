/*Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor
absoluto) elaborando os cálculos matemáticos para isso.*/

#include <stdio.h> //declarando biblioteca
#include <locale.h> //incluindo biblioteca

int main (){//iniciando função
	
	setlocale(LC_ALL,"");//mudando localidade do c
	
	float num, modulo;//declarando variaveis
	
	
	printf ("Digite um número para obter o módulo: ");//pedindo numero
	scanf ("%f", &num );//lendo numero
	
	if (num < 0){//condição se num for menor que zero
		modulo = num * (-1);//definição de modulo
		printf("\n\nO módulo do número que você digitou é: %.2f", modulo);//printando modulo
	}	
	else {//condição senao ou seja se num maior que zero
		printf ("\n\nO módulo do número que você digitou é: %.2f", num);//printando modulo
	}
		return 0;//verificando se respondeu corretamente
}
