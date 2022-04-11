#include <stdio.h>

int main(){

  long int a, b, c;

  a = 2;
  b = 5;

  c = a + b;

//  printf("Resultado: %i\n", c);
  printf("%li + %li = %li\n", a, b, c);

  printf("Espaço ocupado pela variável a: %lu bytes",
    sizeof(a));
  return 0;
}