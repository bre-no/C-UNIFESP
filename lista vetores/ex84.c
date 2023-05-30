// Após, ler dois vetores A e B (de tamanho 10) e depois armazenar em um terceiro vetor Soma a soma dos elementos do vetor A com os do vetor B (respeitando as mesmas posições) e escrever o vetor Soma.
#include <stdio.h>
#define MAX 10
int main(){
  int A[MAX], B[MAX], SOMA[MAX];
  for (int i=0; i<MAX; i++){
    printf("A [%i]= ", i+1);
    scanf("%i", &A[i]);
  }
  printf("\n\n");
  for (int i=0; i<MAX; i++){
    printf("B [%i]= ", i+1);
    scanf("%i", &B[i]);
  }
  for (int i=0; i<MAX; i++){
    SOMA[i]=A[i]+B[i];
  }
  for (int i=0; i<MAX; i++){
    printf("SOMA[%i] = %i\n", i+1, SOMA[i]);
  }
  

  return 0;
}