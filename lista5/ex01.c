#include <stdio.h>

int somar(int *n1, int *n2){
  int soma;
  soma = *n1 + *n2;
  return soma;
}

int multiplicar(int *n1, int *n2){
  int mult;
  mult = *n1 * *n2;
  return mult;
}

int main(){
  int n1, n2;
  int *p1 = NULL, *p2 = NULL;

  printf("Digite o primeiro valor: ");
  scanf("%d", &n1);
  printf("Digite o primeiro valor: ");
  scanf("%d", &n2);

  p1 = &n1;
  p2 = &n2;
  
  puts("\n\nSOMA:");
  printf("%d + %d = %d\n", *p1, *p2, somar(p1, p2));
  puts("\nMULTIPLICAÇÃO:");
  printf("%d * %d = %d\n", *p1, *p2, multiplicar(p1, p2));

  return 0;
}
