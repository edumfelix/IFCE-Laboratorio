#include <stdio.h>
#include <stdlib.h>
#define TAM 3

typedef struct Nodes{
  int x;
  int y;
  float z;
  struct Nodes *pNode;
} Node;

void media ( Node *a);

int main(void) {
  Node *p;
  p=(Node*)malloc(TAM*sizeof(Node));

  for(int i=0;i<TAM;i++){
    p=(p+i);
    printf("Digite os dois numeros do %d° nó.\n", i+1);
    scanf("%d%d", &p->x, &p->y);
  if (i==TAM-1){
      p->pNode= (p-(TAM-1));
  }else{
    p->pNode= (p+i+1);
  }
  }
  
  p=(p-(TAM-1));
  media(p);
  for(int i=0;i<TAM;i++){
    p=(p+i);
    printf("%dº node.\n", i+1);
    printf("x = %d ; y = %d\n", p->x, p->y);
    printf("A media é = %.2f.\n", p->z);
  }
}

void media ( Node *p){
  for(int i=0;i<TAM;i++){
  p[i].z = ((float) p[i].x + p[i].y) / 2;
  }
}

void inserir (Node *p){
  
}

void remover (Node *p){
  
}