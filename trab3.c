#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 10

	int main() 
	{
		int N, X;
		int m_inicial[MAX][MAX];
		int m_posicao[MAX][MAX];
		int m_multiplicada[MAX][MAX];
		int m_corrigida[MAX][MAX];
		int m_final[MAX][MAX];
		float soma = 0, media =0,  differ=0, varSum=0;
		int i =0, j=0, k=0;
		
		
		//Ler tamanho da matriz e multiplicador
		scanf("%d", &N);
		scanf("%d", &X);
		
		//Ler matriz original 
		for(i = 0; i < N; i++) {
			for(j=0; j < N; j++) {
				scanf("%d", &m_inicial[i][j]);
			}
		}
		//Ler matriz posição
		for(i = 0; i < N; i++) {
			for(j=0; j < N; j++) {
				scanf("%d", &m_posicao[i][j]);
			}
		}
		
		//Multiplicar a matriz inicial pelo multiplicador X
		for(i=0; i < N; i++) {
			for(j=0; j<N; j++) {
				m_multiplicada[i][j] = m_inicial[i][j] * X;
			}
		}
		
		// 2º passo, matriz corrigida[matrizposição[coluna]][valor matriz posição]
		for(i=0; i < N; i++) {
			for(j=0; j < N; j++) {
				m_corrigida[i][j] =  m_multiplicada[j][m_posicao[i][j]];
			}
		}
		
		//3º passo matriz corrigida transposta 
		for(i=0; i < N; i++) {
			for(j=0; j < N; j++){
				m_final[i][j] = m_corrigida[j][i];
			}
		}
		
		//Print matriz final
		printf("Matriz corrigida\n");
		for(i=0; i < N; i++) {
			for(j=0; j<N; j++) {
				printf("%d\t", m_final[i][j]);
			}
			printf("\n");
		}
		
		//Print soma
		printf("Somas::");
		for(i=0;i<N;i++)
      {
	  soma=0;
	  for(j=0;j<N;j++) {
	  
		soma=soma+m_final[j][i];
		
  		}
  		printf("%.2f\t", soma);
	  }
      printf("\n");
      
      
      
      //Print Medias
      printf("Medias::");
      for(i=0;i<N;i++)
      {
	  soma=0;
	  for(j=0;j<N;j++) {
	  
		soma=soma+m_final[j][i];
		media = soma/N;
		
  		}
  		printf("%.2f\t", media);
	  }
      printf("\n");
      
      
      //Print desvio padrao
      printf("Desvios::");
      for(i=0; i <N; i++) {
		soma =0.0;
		
		for(j=0; j < N; j++) {
			soma += m_final[j][i];
			
		}
		media = soma/N;
		varSum=0.0;
		for(k=0; k <N; k++) {
			differ = m_final[k][i] - media;
			varSum += pow(differ,2);
			
		}
		printf("%.2f\t", sqrt(varSum/N));
	}
	printf("\n");
}
      	
