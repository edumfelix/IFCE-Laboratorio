#include <stdio.h>

int main(){
  float volume, comprimento, largura, altura;
  printf("Digite as medidas da caixa em centimetros\nComprimento: ");
  scanf("%g", &comprimento);
  printf("Largura: ");
  scanf("%g", &largura);
  printf("Altura: ");
  scanf("%g", &altura);

  volume = comprimento * altura * largura;

  printf("%.2fcm", volume);
  return 0;
}