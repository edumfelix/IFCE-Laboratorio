#include <stdio.h>

int main() {
  int dia_semana = 1;
  char v[8][7] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};

  while(1){
    printf("Digite um número entre 1 e 7 para um dia da semana [0 para encerrar]: ");
    scanf("%d", &dia_semana);

    // Sair
    if (dia_semana==0){
      puts("Programa encerrado.");
      break;
    // Dia da Semana
    }else if(7>=dia_semana>=1){
      printf("%s\n", v[dia_semana-1]);

    // Incorreto
    }else{
      puts("Opção incorreta. Tente novamente.\n");
    }
  }
  return 0;
  }
