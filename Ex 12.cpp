/*Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual
cidade pertence, considerando s� os seguintes valores:
61 - Bras�lia
71 - Salvador
11 - S�o Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vit�ria
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identifica��o*/

#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//inicioando o principal
	
	setlocale(LC_ALL,"");//trocando localidade
	
	int ddd;//declara��o de vari�veis
	
	printf ("Digite o DDD: \n");//printando mensagem pedindo o ddd
	scanf("%d", &ddd);//lendo ddd
	
	if (ddd == 61)//condi��o para bras�lia
	printf ("Esse n�mero � de Bras�lia");//printando mensagem de bras�lia
	
	else if (ddd == 71)//condi��o para salvador
	printf ("Esse n�mero � de Salvador");//printando mensagem de salvador
	
	else if (ddd == 11)////condi��o para s�o paulo
	printf ("Esse n�mero � de S�o Paulo");//printando mensagem de s�o paulo
	
	else if (ddd == 21)////condi��o para rio de janeiro
	printf ("Esse n�mero � do Rio de Janeiro");//printando mensagem do rio de janeiro
	
	else if (ddd == 32)//condi��o para juiz de fora
	printf ("Esse n�mero � de Juiz de Fora");//printando mensagem de juiz de fora
	
	else if(ddd == 19)//condi��o para campinas
	printf ("Esse n�mero � de Campinas");//printando mensagem de campinas
	
	else if (ddd == 27)//condi��o para vit�ria
	printf ("Esse n�mero � de Vit�ria");//printando mensagem de vit�ria
	
	else if (ddd == 31)//condi��o para belo horizonte
	printf ("Esse n�mero � de Belo Horizonte");//printando mensagem de belo horizonte
	
	else printf ("Esse n�mero � de uma cidade no Brasil sem identifica��o");//condi��o para cidade sem identifica��o e printando mensagem
	
	
	
	
	return 0;// retornando 0 e encerrando algoritmo
}
