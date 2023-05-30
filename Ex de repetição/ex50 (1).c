//Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, Faça um programa que calcule o valor de H com N termos.

#include <stdio.h>
int main(){
 double H=0, N;
  printf("N = ");
  scanf("%lf", &N);

  for(double i=1; i<=N; i++){
    H=H+1/i;
  }
  printf("H = %.2lf", H);




  return 0;
}




