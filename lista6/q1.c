#include <stdio.h>

struct Aluno {
  float n1, n2;
};

int main (){
  struct Aluno aluno;
  printf("Digite a primeira nota: ");
  scanf("%f", &aluno.n1);
  printf("Digite a segunda nota: ");
  scanf("%f", &aluno.n2);

  printf("A média do aluno foi: %.2f\n", (aluno.n1 + aluno.n2)/2 );
  return 0;
}