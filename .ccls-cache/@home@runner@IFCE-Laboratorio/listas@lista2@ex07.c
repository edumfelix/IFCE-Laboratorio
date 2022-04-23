#include<stdio.h>

int main(){
  int n1, n2;
  while(1){
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    if(n2 == 0){
      puts("Divisão inválida. Tente novamente.\n");
    } else{
      printf("A Divisão %d / %d = %d\n", n1, n2, n1/n2);
      break;
    }
  }
  return 0;
}