//Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a
//quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.
#include <stdio.h>
#define MAX 15
int main(){
  int V1[MAX], V2[MAX], cont=0;
  for (int i=0; i<MAX; i++){
    printf("V1[%i] = ", i+1);
    scanf("%i", &V1[i]);
  }
 for (int i=0; i<MAX; i++){
    printf("V2[%i] = ", i+1);
    scanf("%i", &V2[i]);
      if(V1[i]==V2[i]) cont++;
  }
printf("V1 e V2 possuem os mesmos números nas mesmas posicões %i vezes", cont);
return 0;
}

