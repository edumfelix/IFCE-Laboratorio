#include <stdio.h>

int main(){
  int a,b;
  
  printf("Entre com o valor de a\n");
  scanf("%d", &a);

  printf("Entre com o valor de b\n");
  scanf("%d", &b);
  
  a = b;
  
  printf("O valor de a e b é, respectivamente, %i e %i\n", a, b);
  
  return 0;
}