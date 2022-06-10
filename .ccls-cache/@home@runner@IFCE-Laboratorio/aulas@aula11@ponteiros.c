#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 2

int main() {
  int v[TAM];
  int *pv = NULL, sum = 0;
  pv = v;

  srand(time(NULL));

  // gerar num aleatorios
  puts("Números gerados:");
  for (int k = 0; k < TAM; k++) {
    *(pv + k) = 10 + rand() % 100;
    printf("%d| ", *(pv + k));
  }

  // somatorio
  for (int i = 0; i < TAM; i++) {
    sum += *(pv + i);
  }

  // Ordenação
  puts("\nVetor ordenado: ");
  int aux = 0;
  for (int i = 0; i < TAM - 1; i++) {
    for (int j = i + 1; j < TAM; j++) {
      if (pv[i] > pv[j]) {
        aux = *(pv + i);
        *(pv + i) = *(pv + j);
        *(pv + j) = aux;
      }
    }
  }
  // saída
  printf("\n\nO somátorio do vetor gerado é = %d\n", sum);
  return 0;
}