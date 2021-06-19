/*Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o
peso ideal da pessoa, utilizando as seguintes fórmulas
para homem: peso = (72.5 * altura) - 58
para mulher: peso = (62.1 * altura) - 44.7*/

#include <stdio.h>
#include <locale.h>

int main (){ //iniciando função
	
	setlocale(LC_ALL,""); // trocando localidade do C

	char sexo, nome[31], sobrenome[31]; //declarando variaveis
	float peso, altura;
	
	printf ("Digite seu primeiro nome: \n"); //imprimindo pedindo nome
	scanf ("%s", &nome); //lendo nome
	
	printf ("Digite seu sobrenome: \n"); // imprimindo pedindo sobrenome
	scanf ("%s", &sobrenome); // lendo sobrenome
	
	printf ("Digite sua altura: \n");//printando pedindo altura
	scanf ("%f", &altura);//lendo altura
	
	
	printf ("Digite seu sexo. M ou m para Masculino e F ou f para Femino: \n");// imprimindo pedindo sexo
	scanf ("%s", &sexo); //lendo sexo
	
	if (sexo == 'M' or sexo == 'm'){// condição para masculino
		peso = (72.5 * altura) - 58;//definindo peso masculino
		printf ("Ilmo. Sr %s %s\nPeso ideal: %.3f", nome, sobrenome, peso);//printando variaveis
}
	else if (sexo == 'F' or sexo == 'f'){// condição para feminino
		peso = (62.1 * altura) - 44.7;//definindo peso feminino
		printf("Ilma Sra. %s %s\nPeso ideal: %.3f", nome, sobrenome, peso);//printando variaveis
	}
		return 0;//retornando 0 pra saber se funcionou corretamente
}

