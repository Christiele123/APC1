/* 
  Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.
*/
#include <stdio.h>
int main(){
  float pi = 3.1416;
  int raio = 4;

  float perimetro_de_uma_pizza = 2 * pi * raio;
  printf("\n o perimetro da pizza é %f\n", perimetro_de_uma_pizza);

  return 0;
}