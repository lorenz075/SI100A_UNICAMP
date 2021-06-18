#include <stdio.h>
#include <stdlib.h>


/*int** transposta(double ***matrix, int i, int j )
{

    int i, j;
    int** trp;

    trp = (int**) malloc(n*sizeof(int*));

    for(i= 0; i<n; i++) {
        trp[i] = (float*) malloc(m*sizeof(float));
    }

    for(i = 0; i<m; i++) {
        for(j = 0; j < n; j++) {
            trp[j][i] = mat[i][j];
        }
    }

    return trp;

}
*/
void allocMatrix(double ***matrix, int row, int col){
    int i = 0;
    *matrix = (double **)malloc(sizeof(double *) * row);
    for(i = 0; i < col; i++){
        *(*matrix + i) = (double *)malloc(sizeof(double) * col);
    }
}


int main(){
    int i = 0, j = 0, row , col ;
    double **myMatrix = NULL;
    double **transMatrix = NULL;
    scanf("%d %d", &row, &col);
    //Matrix original
    allocMatrix(&myMatrix, row, col);
    allocMatrix(&transMatrix, row, col);
    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            scanf("%lf", &myMatrix[i][j]);
        }
    }


    //Matriz transposta
    int flag = 1;
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
        transMatrix[j][i] = myMatrix[i][j];
        }
    }


    //Checando se a matriz é simétrica(matriz = transponsta)


        for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    if (myMatrix[i][j] != transMatrix[i][j])
                    {
                        flag = 0;
                        break;
                    }
                 }
            }


        if (flag == 1)
            printf("Eh simetrica\n");
        else
            printf("Nao eh simetrica\n");



    return 0;
}
