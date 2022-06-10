// Eduardo Macedo Felix Tavares

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100

// PROTÓTIPOS
void gerarVetor(int *, int, int);
void verificarVetor(int *, int *, int);
int paresA(int *, int);

int main(int argc, char *argv[]) {
  int *a = NULL;
  int *b;
  int k = 0;

  k = atoi(argv[1]);

  a = malloc(k * sizeof(int));

  // GERAR VETOR A
  gerarVetor(a, k, RG);
  puts("Vetor gerado:");
  for (int c = 0; c < k; c++) {
    printf("%2d |", *(a + c));
  }
  // PAR
  int a_par;
  a_par = paresA(a, k);

  // B RECEBE PARES DE A
  b = malloc(a_par * sizeof(int));
  verificarVetor(a, b, k);
  puts("Vetor dos pares:");
  for (int c = 0; c < a_par; c++) {
    printf("%2d |", *(b + c));
  }

  //LIBERAR VETORES
  free(a);
  free(b);
}

void gerarVetor(int *p, int t, int q) {
  srand(time(NULL));
  for (int k = 0; k < t; k++) {
    *(p + k) = rand() % q;
  }
}

int paresA(int *p, int t) {
  int count;
  for (int c = 0; c < t; c++) {
    if (*(p + c) % 2 == 0) {
      count++;
    }
  }
  return count;
}

void verificarVetor(int *p, int *q, int t) {
  // verificar se a é par
  for (int c = 0; c < t; c++) {
    if (*(p + c) % 2 == 0) {
      *q = *(p + c);
    }
  }
}