//Altere o programa de cálculo dos números primos, informando, caso o número não seja primo, por quais número ele é divisível.//

#include <stdio.h>
int main(){
   int n, m=0;
  printf("insira um número ");
  scanf("%i", &n);
  for(int i=2; i<n; i++){
  if(n%i==0){
      printf("%i*%i=%i\n", n/i, i, n);
    m=1;
  }
  }
  if(m=0){
  printf("O número é primo");
  } else
    printf("O número não é primo");

  return 0;
}