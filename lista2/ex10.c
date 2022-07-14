#include <stdio.h>

int main(){
  puts("Números inteiros dívisiveis por 4 em um intervalo de 15 até 90:\n");
  
  for (int i = 15; i <= 90; i++){
    if (i % 4 == 0){
      printf("%d ", i*i);
    }
  }
  
  return 0;
}