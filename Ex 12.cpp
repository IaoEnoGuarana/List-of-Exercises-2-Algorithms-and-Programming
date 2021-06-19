/*Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual
cidade pertence, considerando só os seguintes valores:
61 - Brasília
71 - Salvador
11 - São Paulo
21 - Rio de Janeiro
32 - Juiz de Fora
19 - Campinas
27 - Vitória
31 - Belo Horizonte
qualquer outro - uma cidade no Brasil sem identificação*/

#include <stdio.h>//incluindo biblioteca
#include <locale.h>

int main (){//inicioando o principal
	
	setlocale(LC_ALL,"");//trocando localidade
	
	int ddd;//declaração de variáveis
	
	printf ("Digite o DDD: \n");//printando mensagem pedindo o ddd
	scanf("%d", &ddd);//lendo ddd
	
	if (ddd == 61)//condição para brasília
	printf ("Esse número é de Brasília");//printando mensagem de brasília
	
	else if (ddd == 71)//condição para salvador
	printf ("Esse número é de Salvador");//printando mensagem de salvador
	
	else if (ddd == 11)////condição para são paulo
	printf ("Esse número é de São Paulo");//printando mensagem de são paulo
	
	else if (ddd == 21)////condição para rio de janeiro
	printf ("Esse número é do Rio de Janeiro");//printando mensagem do rio de janeiro
	
	else if (ddd == 32)//condição para juiz de fora
	printf ("Esse número é de Juiz de Fora");//printando mensagem de juiz de fora
	
	else if(ddd == 19)//condição para campinas
	printf ("Esse número é de Campinas");//printando mensagem de campinas
	
	else if (ddd == 27)//condição para vitória
	printf ("Esse número é de Vitória");//printando mensagem de vitória
	
	else if (ddd == 31)//condição para belo horizonte
	printf ("Esse número é de Belo Horizonte");//printando mensagem de belo horizonte
	
	else printf ("Esse número é de uma cidade no Brasil sem identificação");//condição para cidade sem identificação e printando mensagem
	
	
	
	
	return 0;// retornando 0 e encerrando algoritmo
}
