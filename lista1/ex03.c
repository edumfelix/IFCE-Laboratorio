#include <stdio.h>

int main(){
  float valor_digitado;

  printf("Digite um número: ");
  scanf("%f", &valor_digitado);
  
  printf("A primeira casa decimal do valor digitado é: %.1f\n", valor_digitado);
  return 0;
}