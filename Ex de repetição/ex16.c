//A série de Fibonacci é formada pela seqüência 0,1,1,2,3,5,8,13,21,34,55,... Faça um programa que gere a série até que o valor seja maior que 500.//
#include <stdio.h>

int main(){
int n, fat1=1, fat2=0, fat=0;

  while(fat<500){
printf("%i,", fat);
    fat=fat1+fat2;
    fat1=fat2;
    fat2=fat;
  
  }
  return 0;
}


