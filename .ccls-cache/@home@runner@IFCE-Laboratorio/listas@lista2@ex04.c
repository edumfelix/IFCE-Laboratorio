#include <stdio.h>

int main() {
  int p = 110, j = 150, anos;
  while (p < j) {
    
    for (anos = 0; p<=j; anos++){
      p+=3;
      j+=2;
    }
    printf("Em %d Anos\nPedro terá %dcm\nJosé terá %dcm\n", anos, p, j);
  }

  return 0;
}