#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct Nodes{
  int x;
  int y;
} Node;

// void media ( Node *a);

int main(void) {
  Node *p;
  p=(Node*)malloc(TAM*sizeof(Node));

  printf("Digite os valores para x e y: ");
  scanf("%d%d", &p->x, &p->y); 

  printf("x = %d ; y = %d", p->x, p->y);
}