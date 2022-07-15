#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// PROTOTIPOS
int preencherVetor(int *);
int mediaVetor(int *);

struct Estrutura {
  int *p;
  int qtd_elementos, media;
};

int main(){
  struct Estrutura e1;
  int *p;
  p = malloc(TAM*sizeof(int));

  preencherVetor(p);
  puts("Vetor gerado:");
  for (int i = 0; i<TAM; i++) {
    printf("%d ", *(p + i));
  }
  printf("\nMédia dos elementos do vetor: %d", preencherVetor(p));
  return 0;
}

int preencherVetor(int v[TAM]){
  srand(time(NULL));
  for (int i = 0; i<TAM; i++) {
    v[i] = rand() % 100;
  }
}
int mediaVetor(int v[TAM]){
  float media, soma = 0;
  int i;

  for(i =0; i<TAM; i++){
    soma += v[TAM];
  }

  media = (float) soma/TAM;

  return media;
}