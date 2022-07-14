#include <stdio.h>

int main(){
  float hora_aula, percentual_inss, salario_bruto, desconto, salario_liquido; 
  int horas_trabalhadas;
  
  printf("Digite o valor da hora-aula: R$");
  scanf("%g", &hora_aula);
  printf("Digite o número de horas trabalhadas no mês: ");
  scanf("%d", &horas_trabalhadas);
  printf("Qual percentual de desconto do INSS(em %%)? ");
  scanf("%g", &percentual_inss);

  salario_bruto = hora_aula * horas_trabalhadas;
  percentual_inss = percentual_inss / 100;
  desconto = salario_bruto * percentual_inss;
  salario_liquido = salario_bruto - desconto;
  
  printf("\nSalário Bruto R$%.2f\nSalário Liquido R$%.2f\n", salario_bruto, salario_liquido);
  return 0;
}