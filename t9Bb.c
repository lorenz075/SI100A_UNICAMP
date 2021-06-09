
#include <stdio.h>
#include <math.h>
// Programa que implemente a soma e a multiplicacao de dois numeros complexos z e w.

void soma(int rZ, int iZ, int rW, int iW) {
    int real = 0, imaginaria = 0;
    real = rZ + rW;
    imaginaria = iZ + iW;
    printf("%d + %di \n", real, imaginaria);
}

void multiplicacao(int rZ, int iZ, int rW, int iW) {
    int real = 0, imaginaria = 0;
    real = (rZ * rW) - (iZ * iW);
    imaginaria = (rZ * iW) + (iZ * rW);
    printf("%d + %di", real, imaginaria);
}


int main() {
    int rz= 0, iz=0, rw=0, iw=0;
    char operador;
    scanf("%d %d %c %d %d", &rz, &iz, &operador, &rw, &iw);

switch(operador) {
    case '+':
        soma(rz, iz, rw, iw);
    break;
    case '*':
        multiplicacao(rz,iz,rw,iw);
    break;
    default:
        return 0;
    }
}
