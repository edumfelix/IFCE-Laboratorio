#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define INI 0
#define RG 100

struct Dados {
  int *pDados[2];
  int tamanho[2];
  float media[2];
};

//PROTOTIPOS
void gerarVetor(int *, int, int, int);
void imprimirVetor(int *, int);

int main() {
  struct Dados dados;

  for(int i = 0; i < 2; i++) {
    printf("Digite o %dº tamanho: ", 1+i);
    scanf("%d", &dados.tamanho[i]);
  }
  
  dados.pDados[0] = (int *) malloc(dados.tamanho[0] * sizeof(int));
  dados.pDados[1] = (int *) malloc(dados.tamanho[1] * sizeof(int));

  gerarVetor(dados.pDados[0], dados.tamanho[0], INI, RG);
  sleep(1);
  gerarVetor(dados.pDados[1], dados.tamanho[1], INI, RG);
  
  puts("\n1º Vetor");
  imprimirVetor(dados.pDados[0], dados.tamanho[0]);
  puts("\n\n2º Vetor");
  imprimirVetor(dados.pDados[1], dados.tamanho[1]);
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
