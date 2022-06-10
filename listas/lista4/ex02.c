#include <stdio.h>

void troca (int *a, int *b) {
     int aux; //variavel estatica para auxiliar na troca de valores
     aux = *a;
     *a  = *b;
     *b  = aux;
}

int main(){
  int n1, n2;
  printf("Digite dois valores inteiros: ");
  scanf("\n%d\n%d", &n1, &n2);

  printf("| %2d | %2d|\n", n1, n2);

  troca(&n1, &n2);
  puts("\nTrocando...\n");
  printf("| %2d | %2d|\n", n1, n2);

  
  return 0;
}