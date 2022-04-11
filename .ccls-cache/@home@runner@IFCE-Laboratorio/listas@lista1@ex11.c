#include <stdio.h>

int main() {
  float dolar, reais, conversao;
  
  puts("----Seja bem-vindo----");
  printf("Digite o valor da cotação do dólar hoje: $");
  scanf("%g", &dolar);
  printf("Agora digite o quanto voce deseja converter em reais: R$");
  scanf("%g", &reais);

  conversao = reais / dolar;

  printf("\nValor convertido com sucesso!\nVocê agora tem $%.2f\n", conversao);
  return 0;
  }