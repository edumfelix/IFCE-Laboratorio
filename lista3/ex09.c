#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {
  int matriz[TAM][TAM], diagonal[TAM], altura, largura;
  float soma;
  srand(time(NULL));

  // Gerar Matriz
  puts("Digite uma matriz 3x3:");
  for (altura = 0; altura < TAM; altura++)
    for (largura = 0; largura < TAM; largura++) {
      scanf("%d", &matriz[altura][largura]);
    }

  // Printar Matriz
  puts("Matriz:");
  for (altura = 0; altura < TAM; altura++) {
    printf("\n");
    for (largura = 0; largura < TAM; largura++) {
      printf("%3d | ", matriz[altura][largura]);
    }
  }

  // Gerar Diagonal
  puts("\n\nDiagonal principal da matriz:");
  for (altura = 0; altura < TAM; altura++) {
    for (largura = 0; largura < TAM; largura++) {
      if (altura == largura) {
        diagonal[altura] = matriz[altura][largura];

        printf("%d | ", diagonal[altura]);
      }
    }
  }
  printf("\n");
  return 0;
}
