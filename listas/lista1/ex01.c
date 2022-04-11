#include <stdio.h>

int main(){
int primeira_equacao = 7 + 3 * 6/ 2 - 1;
int segunda_equacao = 2 % 2 + 2 * 2 - 2 / 2;
int terceira_equacao = (3 * 9 * (3 + (9 * 3 / (3))));

  /*
  primeira equação:
   x = 7 + 3 * 6 / 2 - l;
   x = 7 + 18 / 2  - 1
   x = 7 + 9 - 1
   x = 16 - 1
   x = 15

  segunda equação:
   x = 2 % 2 + 2 * 2 - 2 / 2;
   x = 0 + 2 * 2 - 2 / 2
   x = 4 - 2 / 2
   x = 4 - 1
   x = 3

terceira equação:
   x = (3 * 9 * (3 + (9 * 3 / (3))));
   x = (3 * 9 * (3 + 9))
   x = (3 * 9 * 12)
   x = 324
*/
  
printf("Resultado das equações da lista:\nPrimeira equação: %d\nSegunda equação: %d\nTerceira equação: %d\n", primeira_equacao, segunda_equacao, terceira_equacao);
  
  return 0;
}



