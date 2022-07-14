#include <stdio.h>

int main(){
  float dias_trabalhados, salario_bruto, acrescimo, imposto_renda;
  printf("Digite a quantidade de dias trabalhados: ");
  scanf("%f", &dias_trabalhados);
  salario_bruto = dias_trabalhados * 50.25;
  
  if((10 < dias_trabalhados) && (dias_trabalhados < 20)){
    acrescimo = salario_bruto * 0.2;
    salario_bruto += acrescimo;
  }
  if(dias_trabalhados > 20){
    acrescimo = salario_bruto * 0.3;
    salario_bruto += acrescimo;
  }

  imposto_renda = salario_bruto * 0.1;
  salario_bruto -= imposto_renda;
  
  printf("O salário liquido vai ser de R$%.2f\n", salario_bruto);
  return 0;
}