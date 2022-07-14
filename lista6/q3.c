#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

// PROTOTIPOS
int preencherVetor(int *);

struct Estrutura {
  int *p;
  int qtd_elementos, media;
};

int main(){
  struct Estrutura e1;
  int *p;
  p = malloc(TAM*sizeof(int));

  preencherVetor(p);

  for (int i = 0; i<TAM; i++) {
    printf("%d ", *(p + i));
  }
  return 0;
}

int preencherVetor(int v[TAM]){
  srand(time(NULL));
  for (int i = 0; i<TAM; i++) {
    v[i] = rand() % 100;
  }
}
