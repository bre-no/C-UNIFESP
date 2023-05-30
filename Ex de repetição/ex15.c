//A série de Fibonacci é formada pela seqüência 1,1,2,3,5,8,13,21,34,55,... Faça um programa capaz de gerar a série até o n−ésimo termo.//
#include <stdio.h>

int main(){
  int n, fat1=1, fat2=0, fat;
  printf("quantas series de fibonacci?");
  scanf("%i", &n);
  
  for(int i=0;i<n;i++){
    fat=fat1+fat2;
    fat1=fat2;
    fat2=fat;
  printf("%i, ", fat);
  }



  return 0;
}


