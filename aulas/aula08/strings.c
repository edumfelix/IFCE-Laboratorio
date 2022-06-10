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

    str[strlen(str) - c] = '\0';
    printf("%s", str);

  
  return 0;
}

// Limitar caracteres com scanf() sem usar "getfs()"