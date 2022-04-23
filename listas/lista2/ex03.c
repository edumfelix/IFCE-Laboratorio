#include <stdio.h>

int main() {
  int fat, entrada;
  printf("Insira o número à ser fatorado: ");
  scanf("%d", &entrada);

  for (fat = 1; entrada > 1; entrada--)
    fat = fat * entrada;
  puts("===============");
  printf("\nFatorial: %d\n", fat);
  return 0;
}