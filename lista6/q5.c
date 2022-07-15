#include <stdio.h>
#define TAM 100
struct Professor {
  char nomeProfessor[TAM];
  char titulacao[TAM];
};
struct Disciplina {
  struct Professor professor;
  char materia[TAM];
};
int main(){

}