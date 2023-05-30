//Faça um algoritmo para ler um vetor de 30 números. Após isto, ler mais um número qualquer,
//calcular e escrever quantas vezes esse número aparece no vetor.
#include <stdio.h>
#define MAX 30
int main(){
  int V[MAX], x, cont=0;
  for (int i=0; i<MAX; i++){
    printf("V[%i] = ", i+1);
    scanf("%i", &V[i]);
  }
printf("x = ");
scanf("%i", &x);
  for (int i=0; i<MAX; i++){
    if(V[i]==x) cont++;
  }
  printf("%i aparece %i vezes no vetor.", x, cont);



return 0;
  }


