#include <stdio.h>

int main(){
  int horas, minutos, segundos, tempo_segundos, horas_segundos, minutos_segundos;
  
  printf("Digite as horas: ");
  scanf("%d", &horas);

  printf("Digite os minutos: ");
  scanf("%d", &minutos);

  printf("Digite os segundos: ");
  scanf("%d", &segundos);

  horas_segundos = horas * 3600;
  minutos_segundos = minutos * 60;
  
  tempo_segundos = segundos + horas_segundos + minutos_segundos;

  printf("O tempo digitado em segundos é %d\n", tempo_segundos);
  return 0;
  }