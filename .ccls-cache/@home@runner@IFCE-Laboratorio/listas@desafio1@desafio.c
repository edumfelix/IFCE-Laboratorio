#include <stdio.h>

int main(){
  int seletor;
  unsigned char c;

  printf("1. Ocupar armário.\n2. Liberar armário.\n3. Sair.");
  scanf("%d", &seletor);
  while(1){
    if(seletor == 1){
      puts("1");
    }if(seletor == 2){
      puts("2");
    }if(seletor == 3){
      puts("3");
    }else{
      puts("Opção inválida, tente novamente!\n");
    }
  }
}