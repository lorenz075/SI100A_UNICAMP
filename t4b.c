#include <stdio.h>
#include <stdlib.h>

int main() {
    int com, n, s, n_s, fatn, fats, fatsn;
    scanf("%d\n%d", &n, &s);
    n_s = n - s;
    //fatorial de n
    for(fatn = 1; n > 1; n--) {
        fatn = fatn * n;
    }
    //fatorial de s
    for(fats = 1; s > 1; s--) {
        fats = fats * s;
    }
    //fatorial da diferença 
    for(fatsn = 1; n_s > 1; n_s--) {
        fatsn = fatsn * n_s;
    }
    //Conta da combinação
    com = fatn / (fats * fatsn);  
    printf("\n%d ", com);
}