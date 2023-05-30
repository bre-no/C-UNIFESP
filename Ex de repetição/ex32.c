//Faça um programa que calcule o fatorial de um número inteiro fornecido pelo usuário. Ex.: 5!=5.4.3.2.1=120. A saída deve ser conforme o exemplo abaixo: Fatorial de: 5 5! =  5 . 4 . 3 . 2 . 1 = 120
#include <stdio.h>
int main(){
 int x, y;
  printf("Insira um número ");
  scanf("%i", &x);
  y=x;
  printf("Fatorial de: %i %i! = %i ", x, x, x);
  for( int i=1; i<x; i++){
    printf(". %i ", x-i);
    y=y*(x-i);
  }
    printf(" = %i", y);
  return 0;
}
