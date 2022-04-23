#include <stdio.h>

int main(){
  int n1, n2, aux, termo = 20;
  n1 = 0;
  n2 = 1;
  puts("Série Fibonacci até o 20º Termo:");
  printf("%d\n", n2);

  for (int i = 2; i <= termo; i++){
    aux = n1 + n2;
    n1 = n2;
    n2 = aux;
    printf("%d\n", aux);
  }
  return 0;
}