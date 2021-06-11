#include <stdio.h>
#include <math.h>
//Enunciado:	faça	 um	 procedimento que	 receba	 como	 parâmetros	 um	 vetor	 de	 inteiros	 de
//tamanho	N	e	retorne	o	menor e	o	maior elemento	do	vetor.	O	procedimento	não	deve	ler
//nada	do	teclado nem	mostrar	nada	na	tela.	Também	não	deve	receber	nenhum	parâmetro
//adicional.

#include<stdio.h>
#include <stdlib.h>

int maiorMenor (int n, int *v);
int main (void)
{
  //Leitura do tamanho do vetor
  int tam;
  scanf("%d", &tam);


  int v[tam];

  int i;


  for (i = 0; i < tam; i++)
  {
    scanf("%d", &v[i]);
  }


  maiorMenor(tam,v);



  return 0;
}


int maiorMenor (int n, int *v)
{
  int i;
  int maior = 0 ;
  int menor = 10000;



  for(i = 0; i < n; i++) {
        if(v[i] > maior) {
            maior= v[i];
        }
        if(v[i] < menor || v[i] == menor) {
            menor= v[i];
        }
    }


  return printf("\nmaior valor:%d\nmenor valor:%d\n", maior, menor);
}
