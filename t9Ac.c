#include <stdio.h>
#include <math.h>
//Calculadora - protótipos
float soma(float a, float b);
float subtracao(float a, float b);
float mult(float a, float b);
float divisao(float a, float b);
float potencia(float a, float b);



int main() {
    float num1, num2, resultado;
    char operador;

    scanf("%f%c%f", &num1, &operador, &num2);
    switch(operador) {
    case '+':
        resultado = soma(num1, num2);
        printf("%.3f", resultado);
        break;
    case '-':
        resultado = subtracao(num1, num2);
        printf("%.3f", resultado);
        break;
    case '*':
        resultado = mult(num1, num2);
        printf("%.3f", resultado);
        break;
    case '/':
        resultado = divisao(num1, num2);
        printf("%.3f", resultado);
        break;
    case '^':
        resultado = potencia(num1, num2);
        printf("%.3f", resultado);
        break;
    default:
        return 0;
    }
}



//operacoes
float soma(float a, float b) {
    return a +b;
}
float subtracao(float a, float b) {
    return a - b;
}
float mult(float a, float b) {
    return a * b;
}
float divisao(float a, float b) {
    return a / b;
}
float potencia(float a, float b) {
    return pow(a, b);
}
