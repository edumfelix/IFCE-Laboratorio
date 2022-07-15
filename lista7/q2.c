#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct Nodes{
  int x;
  int y;
  float z;
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

void media ( Node *a){
  for(int i=0;i<TAM;i++){
  a[i].z = ((float) a[i].x + a[i].y) / 2;
  }
}