#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define TAM 8
#define QTD 20

void imprimirVetor(int v[], int t);

int main(){
 
  // Entrada de dados
  int v[TAM], aux;

  srand(time(NULL));

  for(int k = 0; k<TAM; k++ ){
    v[k] = rand() % QTD;
    printf("%d ", v[k]);
    
  }
  for(int i=1;i<TAM;i++){
    for (int k = 0; k<TAM-1; k++){
      if(v[k]>v[k+1]){
        aux = v[k];
        v[k] = v[k+1];
        v[k+1] = aux;
    }
  }
}
  // Saída
  puts("\n===========");
  puts("Em ordem:");
  imprimirVetor(v, TAM);
  printf("%d ", );
  return 0;
  }


    

