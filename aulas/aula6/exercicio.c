// Faça um programa que leia 10 valores, armazenando em um vetor. Em seguida, inverta os valores contidos nesse vetor. Imprima o vetor antes e depois de inverter.

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(){
  
  int v[TAM], z[TAM];
  int c, i;
  
  for (c=0; c<TAM; c++){
    v[c] = rand() % 11;
  }
    // Processamento
  
  for(int i=1; i<TAM; i++){
    z[TAM-1-i] = v[i];
  }
  
    // Saída
  puts("=====");
  puts("Dados de entrada:");
  for (int i=0; i<TAM; i++){
    printf("%d ", v[i]);
    }
  puts("\nVetor invertido:");
  for (int i=0; i<TAM; i++){   
    printf("%d ", z[i]);
  
    }
  return 0;
}