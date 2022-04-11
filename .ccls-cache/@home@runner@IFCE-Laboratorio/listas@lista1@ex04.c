#include <stdio.h>

int main() {
  int valor_digitado, n1;

  printf("Digite um número: ");
  scanf("%d", &valor_digitado);

  printf("\nquadrado: %d\ntriplo: %d\nmetade: %d\n", valor_digitado*valor_digitado ,(valor_digitado * 3), (valor_digitado / 2));

  return 0;
}