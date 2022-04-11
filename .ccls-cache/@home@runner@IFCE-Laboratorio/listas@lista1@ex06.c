#include <stdio.h>

int main(){
  float altura;
  char sexo;
  
  printf("Digite sua altura em metros: ");
  scanf("%g", &altura);
  
  printf("Digite seu sexo (H/M): ");
  scanf("%s", &sexo);

  if (sexo == 'H'){
    float peso_ideal;
    printf("Peso ideal: %.1f\n", 72.7 * altura - 58);
  }
  if (sexo == 'M'){
    float peso_ideal;
    printf("Peso ideal: %.1f\n", 62.1 * altura - 44.7);
  }
return 0;
}
