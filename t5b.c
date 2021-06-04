#include <stdio.h>

int main() {
    float preco[10], prod[10], lucro;
    int i=1, qtd=0;
    // recebe valores
    for (i =0; i < 10; i++) {
        scanf("\n%f", &prod[i]);
        
    }
    for (i =0; i < 10; i++) {
        scanf("\n%f", &preco[i]);
        
    }
    
    for(i=0; i < 10;i++) {
        qtd += prod[i];
        lucro += prod[i] * preco[i];
    }
    
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro,qtd);
    
    
}