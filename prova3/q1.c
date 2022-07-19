#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 4

typedef struct Coordenadas {
  int x, y;
} Node;

void preencherVetor(Node *);
void retornaEndereco(Node *);

int main() {
  Node *p;
  FILE *arq;

  p = malloc(TAM * sizeof(Node));

  preencherVetor(p);  
  retornaEndereco(p);

  arq = fopen("Dados.dat", "wb");

  if (arq == NULL){
    printf("Problemas na abertura do arquivo\n");
    exit(1);
} else {
    fwrite(p, sizeof(Node), TAM, arq);
  }
  fclose(arq);

  return 0;
}

void preencherVetor(Node *p) {
  srand(time(NULL));
  int count = 1;
  for(int i = 0; i<TAM;i++){
    printf("=== %dº Coordenada ===\n", count);
    (p+i)->x = rand() % 100;
    (p+i)->y = rand() % 100;
    printf("%2d + %2d = %3d\n", (p+i)->x, (p+i)->y,((p+i)->x + (p+i)->y));
    count++;
  }
}

void retornaEndereco(Node *p) {
  for(int i = 0; i<TAM;i++){
    if(((p+i)->x + (p+i)->y) % 2 == 0 ){
      printf("[ %d ], [ %p ]", ((p+i)->x + (p+i)->y), p);
      break;
    }
  }
}