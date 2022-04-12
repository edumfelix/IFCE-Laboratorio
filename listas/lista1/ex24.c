#include <stdio.h>
#include <math.h>
int main(){
  double base, expoente, resultado;

  printf("Digite a base: ");
  scanf("%lf", &base);
  
  printf("Agora, digite o expoente: ");
  scanf("%lf", &expoente);
  
  base *= 2;

  resultado = pow(base,expoente);
  
  printf("O resultado foi %.2lf\n", resultado);
  return 0;
}
