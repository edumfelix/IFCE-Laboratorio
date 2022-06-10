#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define INI 0
#define LIN 5
#define COL 5
#define MX 100

// PROTOTIPOS
void preencherVetor(int *, int, int, int);
int obterValor(int *, int, int, int, int);
int *obterEndereco(int *, int, int, int, int);
void obterValorReferencia(int *, int, int, int, int *);

int main() {
  int m[LIN][COL];
  int *p = NULL;
  int x, y;

  srand(time(NULL));

  p = m[0];

  preencherVetor(p, LIN * COL, INI, MX);

  puts("Entre com as coordenadas do ponto que deseja visualizar: ");
  scanf("%d%d", &x, &y);

  printf("\t\t(%d, %d)\n\n", x, y);

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf(" %2d |", m[i][j]);
    }
    printf("\n");
  }

  

  int *endvalor = obterEndereco(p, LIN, COL, x, y);
  if (!endvalor) {
    puts("As coordenadas nao pertencem a matriz");
    exit(1);
  }

  printf("\nO valor é (usando o endereço): %d\n", *endvalor);
  puts("=====");
  printf("O valor é: %2d\n", obterValor(p, LIN, COL, x, y));
  puts("=====");
  int r;
  obterValorReferencia(p, COL, x, y, &r);
  printf("O valor é (usando referencia): %2d\n", r);

  
  return 0;
}

void preencherVetor(int *p, int t, int ini, int q) {
  srand(time(NULL));
  for (int k = 0; k < t; k++) {
    *(p + k) = ini + rand() % q;
  }
}

int obterValor(int *p, int nl, int nc, int a, int b) {
  return *(p + a * nc + b);
}

void obterValorReferencia(int *p, int nc, int a, int b, int *q) {
  *q = *(p + a * nc + b);
}

int *obterEndereco(int *p, int nl, int nc, int a, int b) {
  if ((a < 0 || a >= nl) || (b < 0 || b >= nc))
    return 0;
  return (p + a * nc + b);
}
