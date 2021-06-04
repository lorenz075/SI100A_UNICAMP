#include <stdio.h>
#define LIM 10
int main() {
    int i;
    int vetor1[LIM], vetor2[LIM];
    // lendo valores
    for(i=0; i<LIM; i++) {
        scanf("%d", &vetor1[i]);
    }
    for(i=0; i<LIM; i++) {
        scanf("\n%d", &vetor2[i]);
    }

    // intercalando
    for(i=0; i < LIM; i++) {
        printf("%d|%d|", vetor1[i], vetor2[i]);
    }
}