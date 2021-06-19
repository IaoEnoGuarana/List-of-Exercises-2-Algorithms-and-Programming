/* Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma
figura geométrica onde cada lado é menor do que a soma dos outros dois lados).
*/

#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//iniciando função
	
	setlocale(LC_ALL,"");//definindo localidade do c
	
	int lado1, lado2, lado3;//declarando variaveis
	
	printf ("Digite três valores: ");//pedindo tres valores
	scanf("%d%d%d", &lado1, &lado2, &lado3);//definição e leitura dos valores	
	
	if (lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)//condições para valores formarem lados de triangulo
	printf("\n\nEsses valores podem constituir os lados de um triângulo.");
	else//condição se valores nao formarem lados de triangulo
	printf ("\n\nEsses valores não podem constituir os lados de um triângulo.");
	
	return 0;//verificando se deu tudo certo
}
