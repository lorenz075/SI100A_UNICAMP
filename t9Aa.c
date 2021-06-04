#include <stdio.h>
#include <math.h>
//Programa que recebe o raio de uma esfera e retorna seu volume.
float volume_esfera(float r);
float volume_esfera(float r) {
    float pi = 3.14159;
    float vol =  (4*pi*(pow(r,3)))/3;

    return vol;
}

int main() {
    float raio;
    scanf("%f", &raio);
    printf("%.2f", volume_esfera(raio));
}
