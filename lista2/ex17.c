#include <stdio.h>

int main(){
  int f;
  puts("Conversor Celsius para Farenheit:");
  for (int c = 10; c<=100; c+=10){
    f = 1.8*c+32;
    printf("%dºC %dºF\n", c, f);
  }
  return 0;
}