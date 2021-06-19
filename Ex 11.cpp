/*Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de
triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um
outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo
(chinesinho) ao lado.*/


#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//iniciando função
	
	setlocale(LC_ALL,"");//definindo localidade do c
	
	int lado1, lado2, lado3;//declarando variaveis
	
	printf ("Digite três valores: ");//pedindo tres valores
	scanf("%d%d%d", &lado1, &lado2, &lado3);//definição e leitura dos valores	
	
	if (lado1 == lado2 && lado1 == lado3 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condições para valores formarem lados de triângulo equilátero*/

	printf("\n\nEsses valores podem constituir os lados de um triângulo equilátero.");
	
	else if (lado1 == lado2 or lado2 == lado3 or lado3 == lado1 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condições para valores formarem lados de triângulo isóceles*/
	printf ("\n\nEsses valores podem constituir os lados de um triângulo isóceles");
	
	else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3 && lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)/*condições para valores formarem lados de triângulo escaleno*/
	printf ("\n\nEsses valores podem constituir os lados de um triânculo escaleno");
	
	else ("\n\nEsses valores não podem constituir os lados de um triângulo");// condições para valores não poderem constituir um triângulo// 
	
	return 0;//verificando se deu tudo certo
}
