/* Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma
figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).
*/

#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//iniciando fun��o
	
	setlocale(LC_ALL,"");//definindo localidade do c
	
	int lado1, lado2, lado3;//declarando variaveis
	
	printf ("Digite tr�s valores: ");//pedindo tres valores
	scanf("%d%d%d", &lado1, &lado2, &lado3);//defini��o e leitura dos valores	
	
	if (lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)//condi��es para valores formarem lados de triangulo
	printf("\n\nEsses valores podem constituir os lados de um tri�ngulo.");
	else//condi��o se valores nao formarem lados de triangulo
	printf ("\n\nEsses valores n�o podem constituir os lados de um tri�ngulo.");
	
	return 0;//verificando se deu tudo certo
}
