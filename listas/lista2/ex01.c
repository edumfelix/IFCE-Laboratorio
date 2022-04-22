#include <stdio.h>

int main(){
  int dia_semana;
  while(1){
    printf("Digite um dia da semana: ");
    scanf("%d", &dia_semana);
    
    if(7>dia_semana>=1){
      printf("%d\n", dia_semana);
      break;

    }else{
      printf("Tente novamente\n");
      }
    }
  return 0;
}