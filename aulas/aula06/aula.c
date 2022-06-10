#include <stdio.h>
#include <stdlib.h>

#define TAM 3

int main(){

  
  // Entrada de dados
  double v[TAM];
  
  for(int c = 0; c<TAM; c++ ){
    puts("Digite um número: ");
    scanf("%lf", &v[c]);
  }

  
  // Processamento
  double maior = v[0];
  
  for(int i=1; i<TAM; i++){
    maior = (maior<v[i])?v[i]:maior;
  }

  
  // Saída
  puts("=====");
  puts("Dados de entrada");
  for (int i=0; i<TAM; i++){
    printf("[%d] : %.2lf\n", i, v[i]);
  }
  printf("\tO maior elemento do vetor: %.2lf\n", maior);
  return 0;
}
