/*Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.*/

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale (LC_ALL, "");
	
	int ano_nasc, ano_atual;
	
	printf ("Digite o ano do seu nascimento e depois o ano atual:");
	scanf ("%d%d", &ano_nasc, &ano_atual);
	
	printf ("A quantidade de dias que esta pessoa j� viveu foi: %d", (ano_nasc - ano_atual) * -360);
	
	
	return 0;
}
