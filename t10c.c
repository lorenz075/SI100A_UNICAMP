#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string.h>
#include "stdio.h"
void flush_in() {
    int ch;
    do {
        ch = fgetc(stdin);
    } while (ch != EOF && ch != '\n');
}
int main(void) {

struct alunos
{
  int ra;
  float nota1, nota2;
  char nome[101];
};

int qnt = 0;
int posicao = 0;


scanf(" %d", &qnt);
  flush_in();// Limpa o teclado

  struct alunos aluno[qnt];
for(posicao; posicao < qnt; posicao++) {

  gets(aluno[posicao].nome);

  scanf("%d", &aluno[posicao].ra);

  scanf("%f %f", &aluno[posicao].nota1, &aluno[posicao].nota2);
  flush_in();// Limpa o teclado

}

// Armazena o tamanho total do vetor
int total = sizeof(aluno)/sizeof(aluno[0]);
for(int i = 0; i < total; i++) {
  printf("%d\t%s\t%.2f\n", aluno[i].ra, aluno[i].nome, (aluno[i].nota1 + aluno[i].nota2) / 2);
}


  return 0;
}








