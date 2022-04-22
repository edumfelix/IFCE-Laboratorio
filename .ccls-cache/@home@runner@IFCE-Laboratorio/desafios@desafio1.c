#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define QD_ARMARIOS 8

int bit_alto_nivel(int valor, int num_bit) {
  int mascara_num_bit = (1 << num_bit);
  return (valor & mascara_num_bit);
}

int main() {
  unsigned char controle = 0;
  int posicao, entrada;

  srand(time(NULL));
  
  while (1) {
    printf("\n1. Ocupar armário.\n2. Liberar armário.\n3. Sair.\nEscolha uma opção: ");
    scanf("%d", &entrada);
    
    if (entrada == 1) {
      // Ocupar armário
      controle |= (1 << rand() % QD_ARMARIOS);
      puts("Posições Ocupadas:");
      for (int i = QD_ARMARIOS - 1; 0 <= i; i--) {
        if (bit_alto_nivel(controle, i))
          printf("%d | ", i);
      }

      puts("\nPosições Desocupadas:");
      for (int i = QD_ARMARIOS - 1; 0 <= i; i--) {
        if (!bit_alto_nivel(controle, i))
          printf("%d | ", i);
      }
      
      printf("\n===============\n");
      // Desocupar armário
    } else if (entrada == 2) {
      printf("Qual armário deseja desocupar? ");
      scanf("%d", &posicao);
      controle &= ~(1 << posicao);

      printf("\n===============\n");
      puts("As posições ocupadas são:");
      for (int i = QD_ARMARIOS - 1; 0 <= i; i--) {
        if (bit_alto_nivel(controle, i))
          printf("%d | ", i);
      }

      puts("\nAs posições desocupadas são:");
      for (int i = QD_ARMARIOS - 1; 0 <= i; i--) {
        if (!bit_alto_nivel(controle, i))
          printf("%d | ", i);
      }
      }else if (entrada == 3) {
        puts("Programa encerrado. Até logo!");
        break;
      }
      else {
        puts("Opção incorreta. Tente novamente.\n");
      }
    }
    return 0;
  }