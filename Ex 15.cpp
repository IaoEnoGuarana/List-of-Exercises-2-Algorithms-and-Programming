/*Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à
Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você
pagará R$ 30,00 por até 20 horas de uso (va1or básico), caso você tenha usado mais de 20
horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada.*/


#include <stdio.h>
#include <locale.h>
int main (){
	
	int horas, preco;

	setlocale(LC_ALL, "");
	
	printf ("Digite quantas horas você utilizou de internet: ");
	scanf ("%d", &horas);
	
	if (horas < 20){
	preco = 30;
	printf ("Você terá que pagar %d R$", preco);
	}
	else if(horas > 20){
	preco = ((horas - 20) * 3) + 30;
	printf ("Você terá que pagar %d R$", preco);
}
	return 0;
}
