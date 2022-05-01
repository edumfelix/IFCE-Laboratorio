// Elementos da diagonal principal
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {
  int matriz[TAM][TAM], diagonal[TAM], altura, largura;
  float soma;
  srand(time(NULL));

  // Gerar Matriz
  for (altura = 0; altura < TAM; altura++)
    for (largura = 0; largura < TAM; largura++) {
      matriz[altura][largura] = rand() % 50;
    }

  // Printar Matriz
  puts("A matriz original é:");
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

// Média da Diagonal
  for (altura = 0; altura < TAM; altura++) {
    for (largura = 0; largura < TAM; largura++) {
      soma+=diagonal[altura]/3;
    }
  }
  
printf("\n\nMédia da Diagonal Principal da Matriz: %.2f\n", soma/3);
  
  return 0;
}
