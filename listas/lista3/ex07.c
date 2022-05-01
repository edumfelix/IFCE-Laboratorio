#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

int main() {
  int vetor[TAM], i, MedGeo;
  float soma = 0, mult = 1;

  srand(time(NULL));

  // Vetor
  puts("Os números gerados foram:");
  for (i = 0; i < TAM; i++) {
    vetor[i] = rand() % 19;
    printf("%d ", vetor[i]);

    // Multiplicação dos  elementos do vetor
    mult *= vetor[i];
    // Soma dos elementos do vetor
    soma += vetor[i];
  }

  // Média Geométrica

  printf("\n\nA soma do vetor é: %.2f\nA média aritmética é: %.2f\nE a média "
         "geométrica é: %.2f\n",
         soma, soma / 3, pow(mult, 1.0 / 3.0));

  return 0;
}
