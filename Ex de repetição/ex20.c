//Altere o programa de cálculo do fatorial, permitindo ao usuário calcular o fatorial várias vezes e limitando o fatorial a números inteiros positivos e menores que 16. //
#include <stdio.h>
int main(){
 int x, y;
x=0;
  while(x>=0 && x<16){
  
printf("Insira um número: ");
scanf("%i", &x);
y=x;
printf("%i! = %i.", x, x);
for( int i=1; i<x; i++){
printf("%i.", x-i);
y=y*(x-i);
}
printf("= %i\n", y);
  } 
printf("numero fora do limite");

  return 0;
}