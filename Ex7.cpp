/*7. Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.*/

#include <stdio.h>//declarando bibliotecas
#include <locale.h>

int main (){//iniciando principal
	
	setlocale(LC_ALL,"");//definindo localidade da linguagem do c
	
	int num1, num2, diferenca;//declarando vari�veis
	
	printf ("Digite dois valores para saber a diferen�a entre eles: \n");//printando mensagem pedindo num1 e num 2
	scanf ("%d%d", &num1, &num2); //lendo num1 e num 2
	
	diferenca = num1 -num2;//definindo variavel diferenca
	if (diferenca <0){//definindo condi��o
	diferenca = diferenca *(-1);//definindo diferen�a dentro da condi��o
}
	printf ("A diferen�a do maior pelo menor � de: %d", diferenca);//printando diferenca
	
	return 0;//retornando 0 para saber se o codigo fluiu corretamente
}
