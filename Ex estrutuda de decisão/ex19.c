//Faça um Programa que leia um número inteiro menor que 1000 e imprima a quantidade de centenas, dezenas e unidades do mesmo.
//Observando os termos no plural a colocação do "e", da vírgula entre outros. Exemplo:
//326 = 3 centenas, 2 dezenas e 6 unidades
//12 = 1 dezena e 2 unidades
#include <stdio.h>
int main(){
int N=1001, c, d, u;
  while(N>1000){
  printf("Insira um número de 0 a 1000 = ");
  scanf("%i", &N);
  }
  c=N/100;
  d=(N-c*100)/10;
  u=(N-c*100)-d*10;
  printf("%i = %i centenas, %i dezenas, %i unidades", N, c, d, u);





  
  return 0;
}
