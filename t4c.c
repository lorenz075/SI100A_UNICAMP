#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    int i;
    int n = 10;
    int par = 0;
    int impar = 0;
    for (i = 0; i < n; i++){
        scanf("%d", &x );
        if(x % 2 == 0) 
            par++;
         else 
            impar++;
        
    } 
    printf("\n%d pares, %d impares", par, impar);
}