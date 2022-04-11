#include <stdio.h>

int main(){
  int valor_digitado;
  
  printf("Digite um valor: ");
  scanf("%d", &valor_digitado);
  
  printf("Decimal: %d\nHexadecimal: %X\nOctal: %o\n", valor_digitado, valor_digitado, valor_digitado);
  
  return 0;
}