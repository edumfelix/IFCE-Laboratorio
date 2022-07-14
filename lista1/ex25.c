#include <stdio.h>
int main(){
  int segundos;
  printf("Digite o tempo em segundos: ");
  scanf("%d", &segundos);

  // Horas
  printf("%d Hora\n", segundos/3600);
  // Minutos
  printf("%d Minutos\n", segundos/60);
  // Segundos
  printf("%d Segundos\n", segundos);
return 0;
}