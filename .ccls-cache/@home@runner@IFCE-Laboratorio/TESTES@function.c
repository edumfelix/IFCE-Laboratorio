#include <stdio.h>

float calcularAreaQuadrado(float);
int main(){
  int lado;
  printf("Digite o lado do quadrado em m: ");
  scanf("%d", &lado);
  float area = calcularAreaQuadrado(lado);
  printf("%.2f", area);
}

float calcularAreaQuadrado(float lado){
  float area= lado * lado;
  return area;
}