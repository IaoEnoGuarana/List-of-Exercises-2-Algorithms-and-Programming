/*Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso �
Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc�
pagar� R$ 30,00 por at� 20 horas de uso (va1or b�sico), caso voc� tenha usado mais de 20
horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada.*/


#include <stdio.h>
#include <locale.h>
int main (){
	
	int horas, preco;

	setlocale(LC_ALL, "");
	
	printf ("Digite quantas horas voc� utilizou de internet: ");
	scanf ("%d", &horas);
	
	if (horas < 20){
	preco = 30;
	printf ("Voc� ter� que pagar %d R$", preco);
	}
	else if(horas > 20){
	preco = ((horas - 20) * 3) + 30;
	printf ("Voc� ter� que pagar %d R$", preco);
}
	return 0;
}
