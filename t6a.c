#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main()
{
	int N = 0;
    int m[MAX][MAX];
    int i=0, j=0;

    // Le numero de linhas e colunas
    scanf("%d", &N);
   
    // le elementos da matriz
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    //Printando a matriz com ncol e nlin invertidos para transpor
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                printf("%d ", m[j][i]);
            }
                printf("\n");
        }
}
