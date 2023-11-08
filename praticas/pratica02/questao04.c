/* Faça um programa em C que leia uma frase até 30 caracteres preenchendo uma
 * matriz 6x5 e depois imprima a matriz percorrendo coluna por coluna.*/

#include <stdio.h>
#include <string.h>

int main() {
  char frase[31];
  char matriz[6][5];

  memset(frase, 'a', sizeof(frase)); // chhhhhhhhhhhhhh
  printf("%s\n", frase);

  strcpy(frase, "uma frase qualquer"); // frase = uma frase qualquer
  printf("%s\n", frase);

  strcat(frase, "com ponto final "); // frase = frase + "com ponto final"
  printf("%s\n", frase);

  printf("São iguais? %d\n", strcmp(frase,"com outra frase"));
  
  printf("%li\n", strlen(frase));
  
  printf("Digite uma frase: ");
  int ok = scanf("%[^\n]s", frase);

  int k = 0;
  for(int i = 0; i<6; i++){
    for (int j = 0; j < 5; j++) {
      matriz[i][j] = frase[k];
      k++;
    }
  }
  printf("A frase transporta da matriz:");
  for(int j = 0; j<5; j++){
    for (int i = 0; i < 6; i++) {
      printf("%c", matriz[i][j]);
    }
  }
  printf("\n");
  
  return 0;
}