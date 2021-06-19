/*5. Complete os exercícios 1 (multa no eixão) e 3 (triângulo) com uma mensagem para quando a
condição não for satisfeita (falsa).*/

#include <stdio.h> //declarando biblioteca
#include <locale.h>//declarando biblioteca


//Exercício 1//


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


//Exercício 3//

int main2 (){//iniciando função
	
	setlocale(LC_ALL,"");//definindo localidade do c
	
	int lado1, lado2, lado3;//declarando variaveis
	
	printf ("Digite três valores: ");//pedindo tres valores
	scanf("%d%d%d", &lado1, &lado2, &lado3);//definição e leitura dos valores	
	
	if (lado1< lado2 + lado3 && lado2< lado1 + lado3 && lado3< lado1 + lado2)//condições para valores formarem lados de triangulo
	printf("\n\nEsses valores podem constituir os lados de um triângulo.");
	else//condição se valores nao formarem lados de triangulo
	printf ("\n\nEsses valores não podem constituir os lados de um triângulo.");
	
	return 0;//verificando se deu tudo certo
}
