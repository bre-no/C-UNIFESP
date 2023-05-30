//Faça um programa que peça um número inteiro e determine se ele é ou não um número primo. Um número primo é aquele que é divisível somente por ele mesmo e por 1.//

#include <stdio.h>
int main(){
   int n;
  printf("insira um número ");
  scanf("%i", &n);
  for(int i=2; i<n; i++){
  if(n%i==0){
    printf("O número não é primo");
      return 0;
  }
  }
  printf("O número é primo");

  return 0;
}