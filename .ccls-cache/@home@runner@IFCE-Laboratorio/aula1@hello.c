#include <stdio.h>

int main(){

  long int a, b, c;

  a = 2;
  b = 5;

  c = a + b;

  printf("%li + %li = %li\n", a, b, c);

  printf("Espaço ocupado pela variável a: %lu bytes\n",
    sizeof(a));
  return 0;
}