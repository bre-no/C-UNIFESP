//Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20 números, o algoritmo deve escrever esses 20 números lidos na ordem inversa.
#include <stdio.h>
#define MAX 10
int main(){
  int V[MAX];
  for (int i=0; i<MAX; i++){
    printf("V [%i]= ", i+1);
    scanf("%i", &V[i]);
  }
  for (int i=MAX; i>0; i=i-1){
    printf("V [%i]= %i\n", i, V[i-1]);

  }

return 0;
}