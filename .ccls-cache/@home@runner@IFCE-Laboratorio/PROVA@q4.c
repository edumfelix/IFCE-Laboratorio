// Eduardo Macedo Felix Tavares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define RG 100

// PROTÓTIPOS
void gerarVetor(int *, int, int, int);
void imprimirVetor(int *, int);
void VetorComparado(int *, int *, int, int);

int main() {
  int *v = NULL, *k = NULL;
  int t;

  v = malloc(TAM * sizeof(int));
  k = malloc(TAM * sizeof(int));

  printf("Digite um valor a ser comparado: ");
  scanf("%d", &t);

  puts("Vetor Gerado:");
  // IMPRIMIR VETOR
  gerarVetor(v, TAM, TAM, RG);
  imprimirVetor(v, TAM);
  
  // COMPARAR VETOR
  puts("\n\nCOMPARAÇÃO DO VETOR:");
  VetorComparado(v, k, TAM, t);
  imprimirVetor(k, TAM);
  
  // LIBERAR VETOR
  free(v);
  free(k);

  return 0;
}

void VetorComparado(int *v, int *k, int tam, int t) {
  for (int i = 0; i < t; i++) {
    if (*(v + i) < t) {
      *(k+i) = 1;
    } else {
      *(k+i) = 0;
    }
  }
}

void gerarVetor(int *p, int tam, int ini, int q) {
  srand(time(NULL));
  for (int k = 0; k < tam; k++) {
    *(p + k) = ini + rand() % q;
  }
}

void imprimirVetor(int *p, int tam) {
  for (int i = 0; i < tam; i++) {
    printf(" %2d |", *(p + i));
  }
}