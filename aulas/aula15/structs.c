#include <stdio.h>

struct ALUNO {
  float primeira_nota, segunda_nota, media;
};

// PROTOTIPOS
float mediaAluno(float, float);
void aprovacaoAluno(float);

int main() {
  struct ALUNO notas;

  printf("Digite a 1ª nota: ");
  scanf("%f", &notas.primeira_nota);
  printf("Digite a 2ª nota: ");
  scanf("%f", &notas.segunda_nota);

  notas.media = mediaAluno(notas.primeira_nota, notas.segunda_nota);

  printf("A Média do aluno foi %2.2f\n", notas.media);

  aprovacaoAluno(notas.media);

  return 0;
}

float mediaAluno(float n1, float n2) {
  float media;
  media = (n1 + n2) / 2;
  return media;
}

void aprovacaoAluno(float media) {
  if ((5 <= media) && (media < 7)) {
    puts("RECUPERAÇÃO");
  } else if (media > 7) {
    puts("APROVADO");
  } else {
    puts("REPROVADO");
  }
}