#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char  str1[200];
  char str2[100];

  printf("Digite um texto: \n");
  scanf("%[^\n]", str1);
  getchar();
  
  printf("Digite outro texto: \n");
  scanf("%[^\n]", str2);
  
  strcat(str1, str2);

  printf("%s\n", str1);
  
  return 0;
}

// Limitar caracteres com scanf() sem usar "getfs()"