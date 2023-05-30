//Numa eleição existem três candidatos. Faça um programa que peça o número total de eleitores. Peça para cada eleitor votar e ao final mostrar o número de votos de cada candidato.

#include <stdio.h>
int main(){
  int N, voto, c1=0, c2=0, c3=0;
  printf("Insira o numero de eleitores: ");
  scanf("%i", &N);
    for(int i=0; i<N; i++){
      printf("Insira seu voto (1, 2 ou 3)");
      scanf("%i", &voto);
        if(voto<0 || voto>3){
          printf("voto invalido\n");
          i=i-1;
        } else{
          if(voto==1){
            c1++;
          }
          if(voto==2){
            c2++;
          }
          if(voto==3){
            c3++;
          }
        }
    }

  printf("O candidato 1 teve %i votos\nO candidato 2 teve %i votos\nO candidato 3 teve %i votos", c1, c2, c3);


  return 0;
}