/* Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avisa ao motorista somente se ele
será multado, quando estiver trafegando no Eixo Rodiviário (limite de 80km/h).*/

#include <stdio.h> //declarando biblioteca
#include <locale.h>//declarando biblioteca

int main (){//iniciando

	setlocale (LC_ALL,"");//trocando localidade do c
		
	int velocidade;//declarando variavel
	char placa [8];//declarando variavel e limitando
	
	
	printf ("Digite a placa do seu carro a seguir: \n");//pedindo placa do carro
	scanf ("%s", &placa);//lendo placa
	printf ("Digite a velocidade atingida pelo seu carro no Eixo Rodoviário: ");//pedindo velocidade
	scanf ("%d", &velocidade);//lendo velocidade
	
	if (velocidade >= 80){//condição pra velocidade maior que 80
		printf ("\n\nPlaca do Carro: %s\nVelocidade do carro na avenida: %d\nLimite de velocidade excedido na avenida.\n\n\t\t Você será Multado em 130,16 R$. ", placa, velocidade);//printando mensagem da condição
	}
	else printf ("Tudo certo!");//mensagem pra velocidade menor que 80
}
