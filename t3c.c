#include <stdio.h>
 int main(void) {
     char oper;
     float num1, num2;

    scanf("%f", &num1);
    scanf(" %c",&oper);
    scanf("%f", &num2);

     if (oper == '+') {
         printf("%.3f+%.3f=%.3f",  num1,num2,num1 + num2);
     }
     else if (oper == '-') {
         printf("%.3f-%.3f=%.3f",  num1,num2,num1 - num2);
     }
     else if (oper == '/') {
         printf("%.3f/%.3f=%.3f",  num1,num2,num1 / num2);
     }
     else if (oper == '*') {
         printf("%.3f*%.3f=%.3f",  num1,num2,num1 * num2);
     }

     else  {
     printf("Operador invalido");}

     
 }