#include <stdio.h>

int main(){
  int voto, voto_paulo, voto_renata, voto_branco, voto_nulo;
  float voto_total;
  while(1){
    
    printf("Insira seu voto: ");
    scanf("%d", &voto);
    
    if(voto == 0){
      voto_nulo++;
    }else if(voto == 5){
      voto_paulo++;
    }else if(voto == 7){
      voto_renata++;
    }else if(voto < 0){
      puts("Programa encerrado");
      break;
      }else{
      voto_branco++;
    }
    
  }
    voto_total = (voto_paulo + voto_branco + voto_nulo + voto_renata);

    puts("==============");
    puts("CONTAÇÃO DOS VOTOS:");
    printf("Paulo: %.2f%%\nRenata: %.2f%%\nBranco: %.2f%%\nNulo: %.2f%%\n", (voto_paulo*100/voto_total), (voto_renata*100/voto_total), (voto_branco*100/voto_total), (voto_nulo*100/voto_total));
    if (voto_renata>voto_paulo){
      puts("\nRENATA É A CANDIDATA ELEITA!");
    } else if(voto_paulo>voto_renata){
      puts("\nPAULO É O CANDIDATO ELEITO!");
    }

  return 0;
}