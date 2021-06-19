//Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.//

#include <stdio.h>//declarando bibliotecas
#include <locale.h>

int main (){//iniciando
	
	setlocale(LC_ALL,"");//definindo localidade
	
	int num;//declarando variável
	
	printf ("Digite um número para saber se ele é par ou ímpar: \n");//pedindo numero com mensagem
	scanf("%d", &num);//lendo num
	
	if (num % 2 == 0)//condição para o numero ser par
	printf ("Este é um número par");
	else// condição para ser ímpar
	printf ("Este é um numero ímpar");
	
	return 0;//retorno para saber se respondeu corretamente
}
