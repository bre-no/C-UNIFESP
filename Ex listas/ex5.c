// Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
// Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
// Imprima os três vetores.

#include <stdio.h>

#define MAX 20

int main() {
  int vet[MAX], par[MAX];
  int impar[MAX];
  for (int i = 0; i < MAX; i++) {
    printf("n%i = ", i + 1);
    scanf("%i", &vet[i]);
    if (vet[i] % 2 == 0) {
      par[i] = vet[i];
      impar[i] = 0;
    } else {
      impar[i] = vet[i];
      par[i] = 0;
    }
  }

  printf("\nvetor:\n");
  for (int i = 0; i < MAX; i++) {
    printf("%i, ", vet[i]);
  }

  printf("\npares:\n");
  for (int i = 0; i < MAX; i++) {
    if (par[i] != 0)
      printf("%i, ", par[i]);
  }
  printf("\nímpares:\n");
  for (int i = 0; i < MAX; i++) {
    if (impar[i] != 0)
      printf("%i, ", impar[i]);
  }

  return 0;
}
