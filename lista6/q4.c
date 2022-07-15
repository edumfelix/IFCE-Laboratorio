#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 3

// PROTOTIPOS
void mediaVetor(int *, float *);
void preencherVetor(int *);

struct Aluno {
  float *m;
};

int main(){
  struct Aluno a1;

  int *p;
  p = malloc(TAM * 2 * sizeof(int));
  a1.m = malloc(TAM * sizeof(int));

  preencherVetor(p);

  int c = -1;
  for (int i = 0; i<TAM; i++) {
    c++;
    puts("=== Aluno %d ===");
    printf("\nN1 = %d\n", *(p + c));
    c++;
    printf("\nN2 = %d\n", *(p + c));
  }

  mediaVetor(p, a1.m);

  for (int d = 0; d < TAM; d++){
  printf("\nMedia do aluno %d = %2.2f", d+1, *(a1.m+d));

  }

  return 0;
}

void preencherVetor(int *p){
  int c = -1;
  for(int i = 0; i<TAM;i++){
  printf("=== Aluno %d ===\n", 1+i);
  c++;
  printf("Digite a primeira nota: ");
  scanf("%d", (p+c));
  c++;
  printf("Digite a segunda nota: ");
  scanf("%d", (p+c));
  }
}

void mediaVetor(int *p, float *media){
  float *soma;
  soma = malloc(TAM * sizeof(float));

  int i;

  for(i =0; i<2; i++){
    *soma += *(p+i);
  }  
  for(i = 2; i<4; i++){
    *(soma+1) += *(p+i);
  }
  for(i = 4; i<6; i++){
    *(soma+2) += *(p+i);
  }
  
  for(i =0; i<3; i++){
  *(media+i) = (float) *(soma+i)/2;
  } 
}