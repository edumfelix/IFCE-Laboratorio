#include <stdio.h>

int main() {
  int fat, entrada, aux;
  do{
    entrada = 1;
    aux = entrada;
    
    for (fat = 1; aux > 1; aux--)
      fat *= aux;
    
    puts("===============");
    printf("\nFatorial: %d\n", fat);
    entrada+=2;
  }while (entrada <= 10);
    

  return 0;
}