#include <stdio.h>

int main(){
  int primeiro_valor, segundo_valor, auxiliar;
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiro_valor);
  printf("Digite o segundo valor: ");
  scanf("%d", &segundo_valor);
  printf("\nPrimeiro valor: %d\nSegundo Valor: %d\n", primeiro_valor, segundo_valor);
  puts("\nInvertendo...");
  auxiliar = primeiro_valor;
  primeiro_valor = segundo_valor;
  segundo_valor = auxiliar;

  printf("\nPrimeiro valor: %d\nSegundo Valor: %d\n", primeiro_valor, segundo_valor);
  
  return 0;
}