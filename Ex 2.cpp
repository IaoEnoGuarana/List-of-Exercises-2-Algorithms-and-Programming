/*Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor
absoluto) elaborando os c�lculos matem�ticos para isso.*/

#include <stdio.h> //declarando biblioteca
#include <locale.h> //incluindo biblioteca

int main (){//iniciando fun��o
	
	setlocale(LC_ALL,"");//mudando localidade do c
	
	float num, modulo;//declarando variaveis
	
	
	printf ("Digite um n�mero para obter o m�dulo: ");//pedindo numero
	scanf ("%f", &num );//lendo numero
	
	if (num < 0){//condi��o se num for menor que zero
		modulo = num * (-1);//defini��o de modulo
		printf("\n\nO m�dulo do n�mero que voc� digitou �: %.2f", modulo);//printando modulo
	}	
	else {//condi��o senao ou seja se num maior que zero
		printf ("\n\nO m�dulo do n�mero que voc� digitou �: %.2f", num);//printando modulo
	}
		return 0;//verificando se respondeu corretamente
}
