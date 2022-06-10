#include <stdio.h>

int main(){
  int v[5];
  int soma = 0;
  float media;
  
  // Entrada
  for (int i = 0; i<5; i++){
    printf("Insira o %dº vetor: ", i+1);
    scanf("%d", &v[i]);
  }
  
  // Processamento
  for(int i = 0; i<5; i++){
    soma = soma + v[i];
  }

  media = ((float) soma) / 5;

  // Saida
  printf("Média do vetor é %.2f\n", media);
  
  return 0;
}