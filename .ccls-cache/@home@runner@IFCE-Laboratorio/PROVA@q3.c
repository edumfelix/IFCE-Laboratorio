// Eduardo Macedo Felix Tavares

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[100];
  char c;
  printf("Digite uma string: ");
  fgets(str, sizeof(str), stdin);
  printf("Digite até que caracter percorrer: ");
  scanf("%c", &c);
  
    str[strlen(str) - c] = '\0';
    printf("%s", str);

}

// n deu tempo :c