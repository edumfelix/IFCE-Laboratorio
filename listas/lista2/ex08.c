#include <stdio.h>

int main(){
  float valor, sla = 0;
  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  
  if ((int) valor % 3 == 0){
    printf("Fica R$%.2f de entrada R$%.2f em duas parcelas\n", valor/3, valor/3);
  } else{
  
  }
  return 0;
}