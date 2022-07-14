#include <stdio.h>
#include <math.h>

int main(){
  float n1, n2, n3, media_aritmetica, media_geometrica;
  printf("Digite o primeiro valor: ");
  scanf("%g", &n1);
  printf("Digite o segundo valor: ");
  scanf("%g", &n2);
  printf("Digite o terceiro valor: ");
  scanf("%g", &n3);
  
  media_aritmetica = (n1 + n2 + n3) / 3;
  printf("Média Aritmética: %.2f\n", media_aritmetica);

  float expoente = 1.0/3.0;
  float base = n1*n2*n3;
  media_geometrica = powf(base, expoente);
  printf("Média Geométrica: %.2f\n", media_geometrica);

  return 0;
}