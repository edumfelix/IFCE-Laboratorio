#include <stdio.h>

void conferirNumero(int n1, int *aux) {
  
  if (n1 < *aux) {
    printf("O maior número é: %d", *aux);
  }
  if (n1 > *aux) {
    *aux = n1;
    printf("O maior número agora é: %d", n1);
  }
}

int main() {
  int n1 = 0;
  int aux = 0;
  
  while (n1 >= 0) {

    printf("\nDigite um número [Número negativo para sair]: ");
    
    scanf("%d", &n1);

    conferirNumero(n1, &aux);
  }

  puts("\nPrograma encerrado.");

  return 0;
}