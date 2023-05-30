//Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.//
#include <stdio.h>
  int main(){
  int n, N, maior, menor, soma;

    printf("Quantidade de numeros a serem digitados: ");
    scanf("%i", &N);
      printf("n:");
      scanf("%i", &n);
      menor = n;
      maior = n;
      soma = n;
    
    
    for (int i=1;i<N;i++){
      printf("n:");
      scanf("%i", &n);
      if(n<1000){
      if(n<menor)
        menor = n;
      if(n>maior)
        maior = n;
      soma = soma + n;
      } else{
        printf("Número acima do limite");
          return 0;}
    }

    printf("Maior = %i\nMenor = %i\nSoma = %i", maior, menor, soma);



  return 0;
}
