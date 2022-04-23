#include <stdio.h>

int main(){
  int n1;
  
  printf("Voce deseja a tabuada de qual número? ");
  scanf("%d", &n1);
  
  for (int i = 1; i<=10; i++){
    printf("%d + %d = %d\n", n1, i, (n1 + i));
    printf("%d - %d = %d\n", n1, i, (n1 - i));
    printf("%d * %d = %d\n", n1, i, (n1 * i));
    printf("%d / %d = %d\n\n", n1, i, (n1 / i));
  }
  return 0;
}