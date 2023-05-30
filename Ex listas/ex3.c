//Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
#include <stdio.h>

#define MAX 4

int main(){
  float v[MAX], soma=0;
  for(int i=0;i<MAX;i++){
    printf("nota %i = ", i+1);
    scanf("%f", &v[i]);
    soma=soma+v[i];
  }
   for(int i=0;i<MAX;i++){
    printf("nota %i = %.2f\n", i+1, v[i]);

  }
      printf("média = %.2f", soma/MAX);

  return 0;
}
