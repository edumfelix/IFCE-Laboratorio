#include <stdio.h>

int main(){
  int num = 5;
  int *p = NULL;
  int *p2 = NULL;

  p = &num;
  p2 = p;
    
  printf("numero = [%p]\t numero = %d\n", p, *p);
  printf("numero = [%p]\t numero = %d\n", p2, *p2);

  return 0;
}

