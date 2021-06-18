#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
   float* v;
   float x;
   int n, i;
   float resultado;


   //lê grau do polinomio
   scanf("%d", &n);

   v = (float*) malloc(n*sizeof(float));
   //le os coeficientes do menor grau pro maior
   for(i=0; i<=n; i++) {
    scanf("%f",  &v[i]);
   }
   //Lê o valor de x
   scanf("%f", &x);

   //faz X elevado ao grau e multiplica pelo coeficiente correto
   for(i = n; i >= 0; i--) {
    v[i] = pow(x, i) * v[i];
    resultado += v[i];
   }

   //printa resultado
   printf("%.2f", resultado);
}
