#include <stdio.h>
#define TAM 5
int main() {
  int v[TAM];
  int *p = NULL;
  
  //Receber vetor
  printf("Preencha o vetor com 5 inteiros:\n");
  for (int i = 0; i < TAM; i++) {
    scanf("%d", &v[i]);
    
  }
  //Printar valores vetor
  puts("\nVETOR DIGITADO:");
  for (int i = 0; i < TAM; i++) {
    printf("%2d |\n", *p);
  }
  
  //Printar endereços vetor
  puts("\nENDEREÇO VETOR DIGITADO:");
  for (int i = 0; i < TAM; i++) {
    printf("%d |\n", *p);
  }
  return 0;
}