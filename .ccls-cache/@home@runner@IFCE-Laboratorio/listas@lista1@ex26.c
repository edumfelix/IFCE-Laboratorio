#include <math.h>
#include <stdio.h>

int main() {
  float x1, y1, x2, y2, equação;

  puts("Primeiras coordenadas:\n");
  printf("Digite o x1: ");
  scanf("%g", &x1);
  printf("Digite o y1: ");
  scanf("%g", &y1);
  
  puts("Segundas coordenadas:\n");
  printf("Insira o x2: ");
  scanf("%g", &x2);
  printf("Insira o y2: ");
  scanf("%g", &y2);

  equação = powf(x2 - x1, 2) + powf(y2 - y1, 2);
  equação = sqrt(equação);

  printf("A distância é de: %.2f\n", equação);
  return 0;
}