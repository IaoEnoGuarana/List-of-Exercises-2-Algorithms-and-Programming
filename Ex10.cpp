/*Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual
o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo. */



/*Querida Prof. Joyce. Troquei de computador e n�o consegui baixar o calango do Moodle e nem achei para baixar em lugar algum.
Por isso n�o irei fazer essa quest�o em portugol*/

#include <stdio.h>//chamando biblioteca
#include <locale.h>

int main (){//iniciando o algoritmo
	
	setlocale(LC_ALL,"");//alterando localidade
	
	int num1, num2, num3;//declarando vari�veis
	
	printf ("Digite tr�s valores num�ricos: \n");//printando mensagem pedindo tr�s valores num�ricos
	scanf ("%d%d%d", &num1, &num2, &num3);//lendo tr�s valores num�ricos
	
	if (num1 < num2 && num1 < num3)//condi��o para n�mero 1 ser o menor
	printf ("Este � o menor valor dentre os tr�s: %d", num1);//printando num1
	
	else if (num2 < num1 && num2 < num3)//condi��o para n�mero 2 ser o menor
	printf ("Este � o menor valor dentre os tr�s: %d", num2);//printando num2
	
	else if (num3 < num1 && num3 < num2)//condi��o para n�mero 3 ser o menor
	printf ("Este � o menor valor dentre os tr�s: %d", num3);//printando num3
	
	return 0;//verificando se o algoritmo fluiu bem
}
