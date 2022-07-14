#include <stdio.h>

int main(){
  int valor_digitado;

  printf("Digite um valor: ");
  scanf("%d", &valor_digitado);

  printf("Os antecessores e sucessores do valor %d são:\nAntecessor: %d\nSucessor: %d\n", valor_digitado, valor_digitado-1, valor_digitado+1);

  return 0;
}