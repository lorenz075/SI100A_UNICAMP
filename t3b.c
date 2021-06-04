#include <stdio.h>

int main(){
    int dia, mes, ano;
  
    
    scanf("%d/%d/%d", &dia,&mes,&ano);
    if (mes == 01){
    printf("%d de janeiro de %04d", dia,ano);
    }
    if (mes == 02){
    printf("%d de fevereiro de %04d", dia,ano);
    }
    if (mes == 03){
    printf("%d de março de %04d", dia,ano);
    }
    if (mes == 04){
    printf("%d de abril de %04d", dia,ano);
    }
    if (mes == 05){
    printf("%d de maio de %04d", dia,ano);
    }
    if (mes == 06){
    printf("%d de junho de %04d", dia,ano);
    }
    if (mes == 07){
    printf("%d de julho de %04d", dia,ano);
    }
    if (mes == 8){
    printf("%d de agosto de %04d", dia,ano);
    }
    if (mes == 9){
    printf("%d de setembro de %04d", dia,ano);
    }
    if (mes == 10){
    printf("%d de outubro de %04d", dia,ano);
    }
    if (mes == 11){
    printf("%d de novembro de %04d", dia,ano);
    }
    if (mes == 12){
    printf("%d de dezembro de %04d", dia,ano);
    }
    if (mes == 15){
    printf("Mes invalido");}
}