#include <stdio.h>
int main() {
  int numero = 0;
  printf("entre com um numero inteiro entre 1 e 10:");
  int leu_certo = scanf("%i", &numero);
  while (numero < 1 || numero > 10)
  {
    printf("numero invalido. tente novamente:");
    leu_certo = scanf("%i", &numero);
  }
  printf("A tabuada do %i\n", numero);
  int i = 1;
  while (i < 10) {
    printf("%i x %i = %i\n", numero, i + 1, numero * (i + 1));
    i++;
  }
  return 0;
}
