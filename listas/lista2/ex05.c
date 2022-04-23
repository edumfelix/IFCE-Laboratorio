#include <stdio.h>

int main(){
  int menor = 0, maior = 1;
  
  while(maior!=0){
    printf("Digite um número: ");
    scanf("%d", &maior);
    
    if (maior<menor){
      printf("O maior termo agora é: %d\n", menor);
      printf("O menor termo agora é: %d\n", maior);   
  }
    if (maior>menor){
      printf("O maior número é: %d\n", maior);
      printf("O menor termo é: %d\n", menor);
      menor = maior;
    } 
  }
  puts("Programa encerrado.\n");
  return 0;
}