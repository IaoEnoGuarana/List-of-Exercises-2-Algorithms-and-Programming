/* Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída
uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo
feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
Ilma Sra. Ana Rita */

#include <stdio.h> //inclundo biblioteca
#include <locale.h>//incluindo biblioteca

int main (){ //iniciando função
	
	setlocale(LC_ALL,""); // trocando localidade do C

	char sexo, nome[31], sobrenome[31]; //declarando variaveis
	
	printf ("Digite seu primeiro nome: \n"); //imprimindo pedindo nome
	scanf ("%s", &nome); //lendo nome
	
	printf ("Digite seu sobrenome: \n"); // imprimindo pedindo sobrenome
	scanf ("%s", &sobrenome); // lendo sobrenome
	
	printf ("Digite seu sexo. M ou m para Masculino e F ou f para Femino: \n");// imprimindo pedindo sexo
	scanf ("%s", &sexo); //lendo sexo
	
	if (sexo == 'M' or sexo == 'm')// condição para masculino
		printf ("Ilmo. Sr %s %s", nome, sobrenome);//printando variaveis
	
	else if (sexo == 'F' or sexo == 'f')// condição para feminino
		printf("Ilma Sra. %s %s", nome, sobrenome);//printando variaveis
		
		return 0;//retornando 0 pra saber se funcionou corretamente
}
