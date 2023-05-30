//Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.

#include <stdio.h>
#define MAX 20
int main(){
  int Q[MAX], Qzao, izao=0;
  for (int i=0; i<MAX; i++){
    printf("Q [%i]= ", i+1);
    scanf("%i", &Q[i]);
    if (Q[i]<0){
      printf("Insira apenas números positivos\n");
      i=i-1;
    } else {
      if(Q[i]>Qzao){
        Qzao=Q[i];
        izao=i;
      }
    }
  }

  printf("O maior elemento de Q é, %i e está na %ia posição", Qzao, izao+1);







  return 0;
}