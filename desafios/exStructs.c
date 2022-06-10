#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RG 100

struct pontVet {
  float media, *v;
  int tamanho;
};

// PROTÓTIPOS
void gerarVetor(float *, int , int);
float calculoMedia(float *, int);
void imprimirVetor(float *, int);

int main() {
  struct pontVet p;
  printf("Digite o tamanho do vetor: ");
  scanf("%d", &p.tamanho);
  
  p.v = (float *)malloc(p.tamanho * sizeof(float));

  gerarVetor(p.v, p.tamanho, RG);
  imprimirVetor(p.v, p.tamanho);
  
  p.media = calculoMedia(p.v, p.tamanho);

  printf("\n\nMédia = %2.2f\n", p.media);

  free(p.v);
  
  return 0;
}

void gerarVetor(float *p, int t, int q) {
  srand(time(NULL));
  for (int k = 0; k < t; k++) {
    *(p + k) = rand() % q;
  }
}
float calculoMedia(float *p, int t) {
  float soma;
  
  // SOMA DO VETOR
  for (int c = 0; c < t; c++){
    soma += *(p + c);
  }
  
  return (soma/t);
}
void imprimirVetor(float *p, int t) {
  for (int i = 0; i < t; i++) {
    printf("\n[%p] : %2.0f |", (p + i) ,*(p + i));
  }
}