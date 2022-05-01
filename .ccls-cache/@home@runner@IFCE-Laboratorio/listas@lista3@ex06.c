#include <stdio.h>
#include <string.h>

#define TAM 200

char *reverse(char *s) {
  int length = strlen(s);
  int c, i, j;

  for (i = 0, j = length - 1; i < j; i++, j--) {
    c = s[i];
    s[i] = s[j];
    s[j] = c;
  }
  
  return s;
}

int main() {
  char str[TAM];

  printf("Digite um texto: ");
  scanf("%[^\n]", str);
  getchar();
  
  printf("Texto digitado:\n%s", str);
  printf("\n\nTexto invertido:\n%s\n", reverse(str));

  return 0;
}
