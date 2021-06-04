#include <stdio.h>
#include <math.h>

int main () {
	struct Corpo 
	{
		float altura;
		float peso;
		char nome[20];	
	};
	
	//Lendo os dados de uma pessoa 
	struct Corpo pessoa;
	//Lendo altura
	scanf("%f", &pessoa.altura);
	//Lendo peso
	scanf("%f", &pessoa.peso);
	//Lendo nome
	scanf("%s", pessoa.nome);
	
	// calculando IMC
	float imc = pessoa.peso / pow(pessoa.altura, 2);
	
	printf("%.3f\n", imc);
	
}
