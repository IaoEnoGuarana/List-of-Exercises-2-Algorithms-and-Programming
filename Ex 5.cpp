/*5. Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a
condi��o n�o for satisfeita (falsa).*/

#include <stdio.h> //declarando biblioteca
#include <locale.h>//declarando biblioteca


//Exerc�cio 1//


int main (){//iniciando

	setlocale (LC_ALL,"");//trocando localidade do c
		
	int velocidade;//declarando variavel
	char placa [8];//declarando variavel e limitando
	
	
	printf ("Digite a placa do seu carro a seguir: \n");//pedindo placa do carro
	scanf ("%s", &placa);//lendo placa
	printf ("Digite a velocidade atingida pelo seu carro no Eixo Rodovi�rio: ");//pedindo velocidade
	scanf ("%d", &velocidade);//lendo velocidade
	
	if (velocidade >= 80){//condi��o pra velocidade maior que 80
		printf ("\n\nPlaca do Carro: %s\nVelocidade do carro na avenida: %d\nLimite de velocidade excedido na avenida.\n\n\t\t Voc� ser� Multado em 130,16 R$. ", placa, velocidade);//printando mensagem da condi��o
	}
	else printf ("Tudo certo!");//mensagem pra velocidade menor que 80
}


//Exerc�cio 3//

int main2 (){//iniciando fun��o
	
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
