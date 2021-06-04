#include <stdio.h>
#include <math.h>
//Calcula a m�dia aritm�tica ou geom�trica de 2 n�meros dependendo da condi��o.

float media(float a, float b, char c);


int main () {
    char opcao;
    float nota1, nota2;
    scanf("%c", &opcao);
    scanf("%f %f", &nota1, &nota2);
    printf("%.3f", media(nota1, nota2, opcao));
}

float media(float a, float b, char c) {
    if(c == 'A') {
        return ( a +  b)/2;
    } else if (c == 'B') {
        return sqrt(a * b);
    } else {
        return 0;
    }
}
