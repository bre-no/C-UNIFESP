//Faça um programa que mostre os n termos da Série a seguir: S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m. Imprima no final a soma da série.
#include <stdio.h>
int main(){
int N;
  double s=0;
  printf("n = ");
  scanf("%i", &N);
    for(double i=0; i<N;i++){
    s=s+(i+1)/(2*i+1);
    }
  printf("S = %.2lf", s);




  return 0;
}
