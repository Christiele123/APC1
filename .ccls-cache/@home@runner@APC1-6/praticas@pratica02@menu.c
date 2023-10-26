#include <stdio.h>
#include <stdlib.h>
int main() {
  char opcao = 0;
  float saldo = 0.0f;

  while (opcao != '0') {
    int deu_certo = system("clear");
    printf("MENU PRINCIPAL\n");
    printf("1 - Consultar saldo\n");
    printf("2 - Fazer recarga\n");
    printf("3 - Listar recados\n");
    printf("0 - Sair\n");
    printf("Escolha a opção => ");
    deu_certo = scanf("%c", &opcao);
    while (getchar() != '\n') {
    }
    switch (opcao) {
    case '1':
      deu_certo = system("clear");
      printf("CONSULTAR SALDO\n");
      printf("O saldo é R$%5.2f\n", saldo);
      printf("Pressione ENTER para continuar...");
      getchar();
      break;
    case '2': {
      char valor = 0;
      while (valor != '0') {
        deu_certo = system("clear");
        printf("FAZER RECARGA\n");
        printf("1 - R$ 10,00\n");
        printf("2 - R$ 20,00\n");
        printf("3 - R$ 50,00\n");
        printf("0 - Retornar\n");
        printf("Escolha o valor da recarga ou 0 para retornar:");
        deu_certo = scanf("%c", &valor);
        while (getchar() != '\n')
          ;
        switch (valor) {
        case '1':
          saldo = saldo + 10.0f;
          break;
        case '2':
          saldo = saldo + 20.0f;
          break;
        case '3':
          saldo = saldo + 50.0f;
          break;
        case '0':
          break;
        default:
          printf("\e[0;31mValor inválido\e[0m\n");
          getchar();
          break;
        }
        if (valor == '1' || valor == '2' || valor == '3') {
          printf("Recarga realizada com sucesso\n");
          printf("Pressione ENTER   para continuar...");
          getchar();
        }
      }
      break;
    }
    case '3':
      deu_certo = system("clear");
      printf("LISTAR RECADOS\n");
      printf("Não há recados!\n");
      printf("Pressione ENTER para continuar...\n");
      getchar();
      break;
    case '0':
      break;
    default:
      printf("\e[0;31mOpção inválida!\e[0m\n");
      getchar();
      break;
    }
  }
  return 0;
}