#include <stdio.h>
#include <math.h>
#include <tgmath.h>

int main () {
    struct Par_ponto
    {
        int x1, y1;
        int x2, y2;
    };
    // Obtendo primeiro par
    //Obtendo ponto inferior esquerdo
    struct Par_ponto par_1;
    scanf("%d %d", &par_1.x1, &par_1.y1);
    //Obtendo ponto superior direito
    scanf("%d %d", &par_1.x2, &par_1.y2);
    // Obtendo segundo par
    //Obtendo ponto inferior esquerdo
    struct Par_ponto par_2;
    scanf("%d %d", &par_2.x1, &par_2.y1);
    //Obtendo ponto superior direito
    scanf("%d %d", &par_2.x2, &par_2.y2);
    
    //Calculando distancias euclidianas para determinar se o retangulo 2 esta contido no retangulo 1
    float d1= 0, d2 = 0;
    d1 = sqrt((pow(par_1.x2 - par_1.x1, 2)) +  (pow(par_1.y2 - par_1.y1, 2)));
    d2 = sqrt((pow(par_2.x2 - par_2.x1, 2)) +  (pow(par_2.y2 - par_2.y1, 2)));
    
    //Lógica 
    if (d1 == d2 || d2 < d1) {
    	printf("o segundo retangulo esta contido no primeiro\n");
	} else {
		printf("o segundo retangulo nao esta contido no primeiro\n");
	}
    
    


}
