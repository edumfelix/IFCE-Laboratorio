#include <stdio.h>

int main(){
  int valor;
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);
  
  valor = abs(valor);
  
  printf("O seu valor absoluto é %d\n", valor);
  return 0;
}