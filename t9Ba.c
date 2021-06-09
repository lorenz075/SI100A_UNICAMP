#include <stdio.h>
#include <math.h>
//Recebe 2 vetores como parâmetros de um procedimento. Será armazenado em B todos os elemento de A ao cubo.


void aoCubo(int v[10], int vb[10]) {
    int i;

    for (i=0;i<10;i++)
        vb[i] = v[i] * v[i] * v[i];


    for(i=0; i<10; i++)
        printf("%d\n",vb[i]);

}

int main() {
    int vetor[10], vetorb[10];
    int i;
    for(i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    aoCubo(vetor, vetorb);
}
