/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define TAM 3

int main() {
  int matriz[TAM][TAM], altura, largura, str_conferir, n1;
  srand(time(NULL));

  printf("Digite um número inteiro: ");
  scanf("%d", &n1);
  
  // Gerar Matriz
  for (altura = 0; altura < TAM; altura++) {
    printf("\n");
    for (largura = 0; largura < TAM; largura++) {
      matriz[altura][largura] = rand() % 50;
      str_conferir = strcmp(n1, matriz);
      printf("%3d | ", matriz[altura][largura]);
    }
  }

  printf("\n\n%d", str_conferir );

  
  printf("\n");
  return 0;
}*/