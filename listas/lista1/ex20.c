#include <stdio.h>

int main(){
  int  valor;
  printf("Digite um valor inteiro: ");
  scanf("%d", &valor);
  
  while(valor%2==0){
    printf("O valor digitado é par!\n");
    break;
  }
  while(valor%2==1){
    printf("O valor digitado é impar!\n");
    break;
}
    return 0;
}
