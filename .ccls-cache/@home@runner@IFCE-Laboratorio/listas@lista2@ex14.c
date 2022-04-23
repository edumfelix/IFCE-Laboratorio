#include <stdio.h>

int main() {
  int n1, n2;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o primeiro valor: ");
  scanf("%d", &n2);

  if (n1 < n2) {

    puts("\nOrdem Crescente:");

    for (int i = n1; i <= n2; i++) {
      if (i % 3 == 0) {
        printf("%d ", i * i);
        }
      }
      } else if (n1 > n2) {
        
        puts("\nOrdem Decrescente:");

        for (int i = n1; i >= n2; i--) {
          if (i % 3 == 0) {
            printf("%d ", i * i);
          }
        }
      }
  return 0;  
    }
