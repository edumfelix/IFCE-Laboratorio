#include <stdio.h>

int main(){
  float temp_celsius;
  printf("Digite a temperatura em °C: ");
  scanf("%g", &temp_celsius);
  float temp_fahrenheit = (9 * temp_celsius + 160) / 5;

  printf("A temperatura em Fahrenheit é %.2f°F\n", temp_fahrenheit);
  return 0;
}