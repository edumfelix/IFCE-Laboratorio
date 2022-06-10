#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 100

// PROTÓTIPOS
void gerarVetor(int *, int, int, int);
void imprimirVetor(int *, int);
int menorValorVetor(int *, int);
int maiorValorVetor(int *, int);

int main() {
  int v[TAM];

  // VETOR GERADO
  gerarVetor(v, TAM, TAM, RG);
  imprimirVetor(v, TAM);

  // MENOR VALOR DO VETOR
  printf("\n\nMenor valor do vetor:\n%2d\n", menorValorVetor(v, TAM));
  // MAIOR VALOR DO VETOR
  printf("\n\nMenor valor do vetor:\n%2d\n", maiorValorVetor(v, TAM));
  return 0;
}

void gerarVetor(int *p, int t, int ini, int q) {
  srand(time(NULL));
  for (int k = 0; k < t; k++) {
    *(p + k) = ini + rand() % q;
  }
}

void imprimirVetor(int *p, int t) {
  for (int i = 0; i < t; i++) {
    printf(" %2d |", *(p + i));
  }
}

int menorValorVetor(int *p, int t) {
  for (int i = 0; i < t; i++) {
    if (*(p + i) < *p)
      *p = *(p + i);
  }
  return *p;
}

int maiorValorVetor(int *p, int t) {
  for (int i = 0; i < t; i++) {
    if (*(p + i) > *p)
      *p = *(p + i);
  }
  return *p;
}