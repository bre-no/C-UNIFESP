//Faça um programa que peça para n pessoas a sua idade, ao final o programa devera verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a média calculada.
#include <stdio.h>
int main(){
  int N, n, soma=0, media;
  printf("Quantas pessoas serao inseridas?");
  scanf("%i", &N);
  for(int i=1; i<=N; i++){
  printf("Idade da %ia pessoa = ", i);
    scanf("%i", &n);
    soma = soma + n;   
  }
 if(soma/N<=25){
   printf("A turma e jovem");
 } else
   if(soma/N<=60){
     printf("A turma e adulta");
   }
   else{
     printf("a turma e idosa");
   }

  return 0;
}