//Dada uma matriz mat de inteiros com 4 x 5 elementos,
//faça um algoritmo para somar os elementos de cada linha
//gerando o vetor somalinha. Em seguida, some os valores
//dos elementos do vetor em uma vari ́avel total, que deve
//ser impressa ao final.
#include <stdio.h>

int main(){
  int mat[4][5], vet[5]={0,0,0,0,0}, total=0;
  for(int i=0; i<4; i++){
    for(int j=0; j<5; j++){
  printf("Mat[%i,%i] = ", i, j);
      scanf("%i", &mat[i][j]);
      }
  }
  for(int i=0; i<4; i++){
    for(int j=0; j<5; j++){
      vet[i]=vet[i]+mat[i][j];
    }    
    printf("Vet[%i]=%i\n", i, vet[i]);
  }

        for(int j=0; j<5; j++){  
          total=total+vet[j];
        }
        printf("Total = %i", total);


  return 0;
}

