#include <stdio.h>

int main(){
  float valor_conta, valor_gorjeta;
  printf("Bem-vindo ao Restaurante\n");
  
  printf("Valor da conta: R$");
  scanf("%g", &valor_conta);
  
  printf("Digite a gorjeta do garçom: R$");
  scanf("%g", &valor_gorjeta);

  valor_conta += valor_gorjeta;

  printf("\nO valor total a ser pago é de R$ %g", valor_conta);

  return 0;
}
