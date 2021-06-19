/*Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual
o menor deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo. */



/*Querida Prof. Joyce. Troquei de computador e não consegui baixar o calango do Moodle e nem achei para baixar em lugar algum.
Por isso não irei fazer essa questão em portugol*/

#include <stdio.h>//chamando biblioteca
#include <locale.h>

int main (){//iniciando o algoritmo
	
	setlocale(LC_ALL,"");//alterando localidade
	
	int num1, num2, num3;//declarando variáveis
	
	printf ("Digite três valores numéricos: \n");//printando mensagem pedindo três valores numéricos
	scanf ("%d%d%d", &num1, &num2, &num3);//lendo três valores numéricos
	
	if (num1 < num2 && num1 < num3)//condição para número 1 ser o menor
	printf ("Este é o menor valor dentre os três: %d", num1);//printando num1
	
	else if (num2 < num1 && num2 < num3)//condição para número 2 ser o menor
	printf ("Este é o menor valor dentre os três: %d", num2);//printando num2
	
	else if (num3 < num1 && num3 < num2)//condição para número 3 ser o menor
	printf ("Este é o menor valor dentre os três: %d", num3);//printando num3
	
	return 0;//verificando se o algoritmo fluiu bem
}
