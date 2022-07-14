#include <stdio.h>
int main(){
  int primeiro_valor, segundo_valor;
  printf("Digite o primeiro valor: ");
  scanf("%d", &primeiro_valor);
  printf("Digite o segundo valor: ");
  scanf("%d", &segundo_valor);

  while(primeiro_valor%segundo_valor==0){
    printf("\nO %d é multiplo de %d\n", primeiro_valor, segundo_valor);
    break;
  }
  return 0;
}