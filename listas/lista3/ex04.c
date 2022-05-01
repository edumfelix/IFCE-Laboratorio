#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  
  char  str1[200], str2[200];
  int str_conferir;

  
  printf("Digite um texto: \n");
  scanf("%[^\n]", str1);
  getchar();
  
  printf("Digite outro texto: \n");
  scanf("%[^\n]", str2);
  
  str_conferir = strcmp(str1, str2);
  
  if (str_conferir == 0){
    printf("\nAmbas as strings são iguais!\n");
  }else{
    printf("\nAs strings NÃO são iguais!\n");
  }
  
  return 0;
}
