#include <stdio.h>

#define TAM 100

struct Estoque {
  char peca[TAM];
  int numPeca;
  float preco;
  int numPedido;
};

int main() {
  
  struct Estoque stock;
  puts("===== Sejam Bem-Vindo ======\n\n");
  
  printf("Digite o nome da peça: ");
  scanf("%s", &stock.peca[TAM]);
  
  printf("Digite o total de peças: ");
  scanf("%d", &stock.numPeca);
  
  printf("Digite o preço da peça: R$");
  scanf("%f", &stock.preco);
  
  printf("Digite o numero do pedido: ");
  scanf("%d", &stock.numPedido);

  puts("\n\n===== Estoque atual ======\n\n");

  
  printf("Nome da peça: %s\n", );
  printf("Quantidade total de peças: %d\n", stock.numPeca);
  printf("Preço unitário da peça: R$%.2f\n", stock.preco);
  printf("Nº do pedido: %d\n", stock.numPedido);

  return 0;
  
  }
  