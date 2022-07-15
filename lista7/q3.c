#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct Nodes{
  int x;
  int y;
  float z;
  struct Nodes *p;
} Node;

void media ( Node *a);

int main(void) {
  Node *p;
  p=(Node*)malloc(TAM*sizeof(Node));

  printf("Digite os valores para x e y: ");
  scanf("%d%d", &p->x, &p->y); 
  media(p);
  printf("( %d + %d ) / 2 = %.2f", p->x, p->y, p->z);
}

void media ( Node *p){
  for(int i=0;i<TAM;i++){
  p[i].z = ((float) p[i].x + p[i].y) / 2;
  }
}