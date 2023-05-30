//Ler um vetor A de 10 números. Após, ler mais um número e guardar em uma variável X. Armazenar em um vetor M o resultado de cada elemento de A multiplicado pelo valor X. Logo após, imprimir o vetor M.
#include <stdio.h>
#define MAX 10
int main(){
  int A[MAX], x, M[MAX];
  for (int i=0; i<MAX; i++){
    printf("A [%i]= ", i+1);
    scanf("%i", &A[i]);
  }
  printf("X = ");
  scanf("%i", &x);

  for (int i=0; i<MAX; i++){
    M[i]=A[i]*x;
  }
  for (int i=0; i<MAX; i++){
    printf("M[%i] = %i\n", i+1, M[i]);
  }

  return 0;
}