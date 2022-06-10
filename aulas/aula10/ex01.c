// ler 2 var inteiras associar ponteiros e usando ponteiros ver se sao divisiveis e imprimir resposta

#include <stdio.h>

int main(){
  int v1, v2;
  int *p = NULL;
  int *p2 = NULL;
  
  printf("Digite um número: ");
  scanf("%d", &v1);

  printf("Digite outro número: ");
  scanf("%d", &v2);
  
  p = &v1;
  p2 = &v2;

  if (p==p2){
    printf("%d é divisível por %d", *p, *p2);
  }else{
    puts("Não são divisíveis!");
  }
  
  return 0;
}