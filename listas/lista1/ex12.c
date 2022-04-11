#include <stdio.h>

int main() {
  int primeiro_valor, segundo_valor;
  
  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiro_valor);
  printf("Digite o segundo valor: ");
  scanf("%d", &segundo_valor);
  puts("Calculando...");

  float quociente = ((float)primeiro_valor / segundo_valor);
  
  printf("Soma: %d\nProduto: %d\nDiferença: %d\nQuociente: %g\nResto da divisão: %d\n", (primeiro_valor+segundo_valor), (primeiro_valor*segundo_valor), (primeiro_valor - segundo_valor), quociente, (primeiro_valor % segundo_valor));
  return 0;
}
