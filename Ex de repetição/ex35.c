//Encontrar números primos é uma tarefa difícil. Faça um programa que gera uma lista dos números primos existentes entre 1 e um número inteiro informado pelo usuário.

#include <stdio.h>
int main(){
  int N, primo=0;
  printf("Digite um numero: ");
  scanf("%i", &N);
    for (int g=2;g<=N;g++){

      
      for(int i=2;i<g;i++){
        if(g%i==0)
          primo=1;
        
      }
      if(primo==0)
        printf("%i eh primo\n", g);
      
      primo=0;
    }



  return 0;
}