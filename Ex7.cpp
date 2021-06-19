/*7. Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.*/

#include <stdio.h>//declarando bibliotecas
#include <locale.h>

int main (){//iniciando principal
	
	setlocale(LC_ALL,"");//definindo localidade da linguagem do c
	
	int num1, num2, diferenca;//declarando variáveis
	
	printf ("Digite dois valores para saber a diferença entre eles: \n");//printando mensagem pedindo num1 e num 2
	scanf ("%d%d", &num1, &num2); //lendo num1 e num 2
	
	diferenca = num1 -num2;//definindo variavel diferenca
	if (diferenca <0){//definindo condição
	diferenca = diferenca *(-1);//definindo diferença dentro da condição
}
	printf ("A diferença do maior pelo menor é de: %d", diferenca);//printando diferenca
	
	return 0;//retornando 0 para saber se o codigo fluiu corretamente
}
