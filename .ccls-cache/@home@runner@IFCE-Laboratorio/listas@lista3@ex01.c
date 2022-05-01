#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int main() {
  int vetor[TAM], maior = 0, menor = 1, i;

  srand(time(NULL));

  // Vetor
  puts("Os números gerados foram:");
  for (i = 0; i < TAM; i++) {
    vetor[i] = rand() % 50;
    printf("%d ", vetor[i]);
  }

  // Maior número
  for (i = 0; i < 15; i++) {
    if (i == 0) {
      maior = vetor[i];
      menor = vetor[i];
    }
    if (vetor[i] > maior) {
      maior = vetor[i];

      // Menor número
    } else {
      if (vetor[i] < menor) {
        menor = vetor[i];
      }
    }
  }

  printf("\n\nO maior número gerado foi: %d\nO menor número gerado foi: %d\nE a soma entre eles é igual a %d\n", maior, menor,(maior+menor));

  
  return 0;
}
