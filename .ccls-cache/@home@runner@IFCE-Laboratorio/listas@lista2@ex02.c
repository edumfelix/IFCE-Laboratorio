#include <stdio.h>

int main() {
  int dia_semana = 1;
  char v[8][7] = {"Domingo", "Segunda", "Terça", "Quarta",
                  "Quinta",  "Sexta",   "Sábado"};

  do {
    printf("Digite um número entre 1 e 7 para um dia da semana [0 para "
           "encerrar]: ");
    scanf("%d", &dia_semana);

    if (7 >= dia_semana >= 1) {
      printf("%s\n", v[dia_semana - 1]);
    } else {
      puts("Opção incorreta. Tente novamente.\n");
    }
  } while (dia_semana != 0);

  puts("Programa encerrado.");
  return 0;
}
