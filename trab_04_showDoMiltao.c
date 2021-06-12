#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Trabalho show do milt�o. Enunciado:
/*
O Bar do Milt�o � um conhecido estabelecimento de uma cidade do interior de S�o Paulo. Al�m da por��o de moela, do gorduroso espeto de calabresa e das intermin�veis m�sicas de Amado Batista, o Bar do Milt�o oferece uma atra��o peculiar: o Show do Milt�o, uma brincadeira de perguntas e respostas com quest�es matem�ticas valendo pr�mios para os vencedores. O funcionamento do Show do Milt�o � relativamente simples: enquanto o jogador estiver acertando as perguntas, a por��o de chopp fica 30% mais barata e, para cada pergunta certa, o jogador pode escolher a pr�xima m�sica do karaok�, um al�vio para os ouvidos cansados do brega nacional. Como previsto, o Show do Milt�o se tornou um sucesso entre os ass�duos frequentadores do nobre estabelecimento, o que obrigou Milt�o a realizar algumas mudan�as. Antigamente, o Show do Milt�o era feito com papel e caneta, mas, devido � alta demanda, ele percebeu que precisaria atualizar a sua brincadeira se quisesse continuar atendendo sua clientela de modo eficiente.

Milt�o, com sua extensa rede de contatos, ficou sabendo dos seus talentos e habilidades com programa��o e decidiu contrat�-lo para t�o nobre tarefa. Para auxiliar Milt�o a se manter relevante no cen�rio do entretenimento nacional, voc� dever� construir um programa que ler� uma sequ�ncia de dados referentes a cada pergunta: o tipo da pergunta, que ser� INT para respostas com n�meros inteiros e FLOAT para respostas com n�meros em ponto flutuante, a pergunta, uma string de no m�ximo 100 caracteres, tr�s alternativas, que podem ser tanto n�meros inteiros ou pontos flutuantes, e a resposta correta, um n�mero inteiro indicando qual das alternativas � a correta (0, 1 ou 2) para aquela pergunta. Essas perguntas devem ser cadastradas no sistema at� que a palavra "FIM" seja digitada.

Depois de cadastradas as perguntas, seu programa est� pronto para ser usado pela clientela de Milt�o. Seu programa deve permitir que o usu�rio digite o tipo de pergunta desejada, INT para perguntas com respostas de n�meros inteiros e FLOAT para perguntas que envolvem n�meros de ponto flutuante, e o n�mero da pergunta que o usu�rio deseja responder, de acordo com a a ordem em que foram cadastradas . Isso quer dizer que se o usu�rio digitar INT e 3, seu programa deve apresentar a terceira quest�o cadastrada do tipo inteiro. Seu programa deve continuar executando at� que o usu�rio erre alguma quest�o ou que digite "FIM" novamente para sair do programa.

A sa�da do seu programa dever� apresentar uma �nica vez a frase "Prepare-se para o Show do Miltao!". Depois, deve apresentar a pergunta, as alternativas e se o usu�rio acertou ou errou a resposta. Para respostas com ponto flutuante, apresent�-las com duas casas decimais, conforme exemplos abaixo:

Pergunta: Quanto e 2.45 x 2?
Alternativa 0: 4.90
Alternativa 1: 5.31
Alternativa 2: 6.20
Parabens, voce acertou! (caso o usu�rio tenha acertado a resposta)
Resposta errada, voce perdeu! (caso o usuario tenha errado a resposta)

*/

//Criando a fun��o
int main()
{
  char fim[] = "FIM";
  char tipo[6], pergunta_int[3][101], pergunta_float[3][101];
  int i = 0,j=0, alternativas_int[3][3], correta_int[3], correta_float[3];
  float alternativas_float[3][3];

  //REGISTRA AS PERGUNTAS, ALTERNATIVAS E A RESPOSTA CERTA AT� O USU�RIO DIGITAR "FIM"
 while(strcmp(fim, tipo) != 0)
  {
    fgets(tipo, 6, stdin);
    tipo[strcspn(tipo, "\n")] = 0;
    if (strncmp(tipo, "INT", 3) == 0)
    {
      fgets(pergunta_int[i], 101, stdin);
      scanf("%d %d %d", &alternativas_int[i][0], &alternativas_int[i][1], &alternativas_int[i][2]);
      scanf("%d", &correta_int[i]);
      i++;
    }

    if (strncmp(tipo, "FLOAT", 5) == 0){
      fgets(pergunta_float[j], 101, stdin);
      scanf("%f %f %f", &alternativas_float[j][0], &alternativas_float[j][1], &alternativas_float[j][2]);
      scanf("%d", &correta_float[j]);
      j++;
    }


  }
    printf("Prepare-se para o Show do Miltao!\n");

  //printf("%.2f %.2f %.2f\n", alternativas_float[0][0], alternativas_float[0][1], alternativas_float[0][2]);
  //printf("%d", correta_float[0]);
   //printf("%s", pergunta_float[0]);



  // _________________________________________________________________________________________________________________________________

  //2 parte do programa
  //Selecionar o tipo e o indice da pergunta a ser respondida e verificar se a resposta confere.

  int tentativa=0;
  //indice para retornar a pergunta e resposta correta
  int indice=0;
  // novos fim e tipo para nao encerrar o programa antes
  char fim2[] = "FIM", tipo2[6];


  while(strcmp(fim2, tipo2) != 0)
  {
    scanf("%5s", tipo2);
    //CASO TIPO POR FINTxwws
    if (strncmp(tipo2, "INT", 3) == 0)
    {
      scanf("%d", &indice);
      switch(indice) {
        case 0:
            printf("Pergunta: %s", pergunta_int[0]);
            printf("Alternativa 0: %d\n", alternativas_int[0][0]);
            printf("Alternativa 1: %d\n", alternativas_int[0][1]);
            printf("Alternativa 2: %d\n", alternativas_int[0][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_int[0]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }

            break;
        case 1:
            printf("Pergunta: %s\n", pergunta_int[1]);
            printf("Alternativa 0: %d\n", alternativas_int[1][0]);
            printf("Alternativa 1: %d\n", alternativas_int[1][1]);
            printf("Alternativa 2: %d\n", alternativas_int[1][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_int[1]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }
            break;
        case 2:
            printf("Pergunta: %s\n", pergunta_int[2]);
            printf("Alternativa 0: %d\n", alternativas_int[2][0]);
            printf("Alternativa 1: %d\n", alternativas_int[2][1]);
            printf("Alternativa 2: %d\n", alternativas_int[2][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_int[2]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }
            break;
        default:
            return 0;

      }


    }//CASO TIPO FOR FLOAT
    else if (strncmp(tipo2, "FLOAT", 5) == 0)
    {
      scanf("%d", &indice);
      switch(indice) {
        case 0:
            printf("Pergunta: %s\n", pergunta_float[0]);
            printf("Alternativa 0: %.2f\n", alternativas_float[0][0]);
            printf("Alternativa 1: %.2f\n", alternativas_float[0][1]);
            printf("Alternativa 2: %.2f\n", alternativas_float[0][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_float[0]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }
            break;
        case 1:
            printf("Pergunta: %s\n", pergunta_float[1]);
            printf("Alternativa 0: %.2f\n", alternativas_float[1][0]);
            printf("Alternativa 1: %.2f\n", alternativas_float[1][1]);
            printf("Alternativa 2: %.2f\n", alternativas_float[1][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_float[1]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }
            break;
        case 2:
            printf("Pergunta: %s\n", pergunta_float[2]);
            printf("Alternativa 0: %.2f\n", alternativas_float[2][0]);
            printf("Alternativa 1: %.2f\n", alternativas_float[2][1]);
            printf("Alternativa 2: %.2f\n", alternativas_float[2][2]);
            //l� e verifica se a reposta � certa
            scanf("%d", &tentativa);
            if(tentativa == correta_float[2]) {
                printf("Parabens, voce acertou!\n");
            } else {
                printf("Resposta errada, voce perdeu!");
                return 0;
            }
            break;
        default:
            return 0;

    }


  }

}
}



