#include <stdio.h>
#include <math.h>
int main(){
  int valor_quadrado, valor_digitado;

  printf("Digite um valor: ");
  scanf("%d", &valor_digitado);

    valor_quadrado = (int)(pow(valor_digitado, 2));
    printf("Valor digitado ao quadrado: %d\n", valor_quadrado);
  return 0;
}