#include <stdio.h>
#include <stdlib.h>

int main(){
  int v1, v2;
  int *p1 = NULL;
  int *p2 = NULL;
  int *p3 = NULL;
  
  printf("Digite um número: ");
  scanf("%d", &v1);
  printf("Digite um número: ");
  scanf("%d", &v2);

  p1 = &v1;
  p2 = &v2;
  
  printf("Os números digitados foram : [ %d ] [ %d ]\nE seu endereçamento na memória : [ %p ] [ %p ]\n", *p1, *p2, p1, p2);
  return 0;
}