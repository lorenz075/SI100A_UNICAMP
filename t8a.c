#include <stdio.h>
#include <math.h>
#include <tgmath.h>

int main () {
    struct Ponto
    {
        float x1, y1;
        float x2, y2;
    };
    //Obtendo ponto 1
    struct Ponto pontos;
    scanf("%f %f", &pontos.x1, &pontos.y1);
    //Obtendo ponto 2
    scanf("%f %f", &pontos.x2, &pontos.y2);
    
    //distancia entre x e y dos pontos
    float dx = pontos.x2 - pontos.x1;
    float dy = pontos.y2 - pontos.y1;
    float soma = ((dx*dx) + (dy*dy));
    float distancia = sqrt(soma);
	
	// checando a distancia
	if (distancia < 0.0000001) {
		printf("os pontos sao iguais\n");
	} else {
		printf("Os pontos nao sao iguais\n");
	}
    
   

}
