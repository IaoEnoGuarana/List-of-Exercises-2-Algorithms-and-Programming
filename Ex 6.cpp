//Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.//

#include <stdio.h>//declarando bibliotecas
#include <locale.h>

int main (){//iniciando
	
	setlocale(LC_ALL,"");//definindo localidade
	
	int num;//declarando vari�vel
	
	printf ("Digite um n�mero para saber se ele � par ou �mpar: \n");//pedindo numero com mensagem
	scanf("%d", &num);//lendo num
	
	if (num % 2 == 0)//condi��o para o numero ser par
	printf ("Este � um n�mero par");
	else// condi��o para ser �mpar
	printf ("Este � um numero �mpar");
	
	return 0;//retorno para saber se respondeu corretamente
}
