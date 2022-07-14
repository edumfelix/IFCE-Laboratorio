#include <stdio.h>

int main(){
  float pi = 3.14159;
  float raio;
  printf("Digite o raio do circulo em cm: ");
  scanf("%f", &raio);

  // Diâmetro
  printf("\nDiâmetro: %.2fcm", raio * 2);
  // Circunferência
  printf("\nCircunferência: %.2fcm", 2 * pi * raio);
  // Área
  printf("\nÁrea: %.2fcm²\n", pi * raio * raio);
  
  return 0;
}