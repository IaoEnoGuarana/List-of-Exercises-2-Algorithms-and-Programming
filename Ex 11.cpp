/*Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de
tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um
outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
(chinesinho) ao lado.*/


#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//iniciando fun��o
	
	setlocale(LC_ALL,"");//definindo localidade do c
	
	int lado1, lado2, lado3;//declarando variaveis
	
	printf ("Digite tr�s valores: ");//pedindo tres valores
	scanf("%d%d%d", &lado1, &lado2, &lado3);//defini��o e leitura dos valores	
	
	if (lado1 == lado2 && lado1 == lado3 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condi��es para valores formarem lados de tri�ngulo equil�tero*/

	printf("\n\nEsses valores podem constituir os lados de um tri�ngulo equil�tero.");
	
	else if (lado1 == lado2 or lado2 == lado3 or lado3 == lado1 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condi��es para valores formarem lados de tri�ngulo is�celes*/
	printf ("\n\nEsses valores podem constituir os lados de um tri�ngulo is�celes");
	
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condi��es para valores formarem lados de tri�ngulo escaleno*/
	printf ("\n\nEsses valores podem constituir os lados de um tri�nculo escaleno");
	
	else ("\n\nEsses valores n�o podem constituir os lados de um tri�ngulo");// condi��es para valores n�o poderem constituir um tri�ngulo// 
	
	return 0;//verificando se deu tudo certo
}
