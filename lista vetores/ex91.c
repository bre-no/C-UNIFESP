//Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se
//existem números repetidos no vetor VET e em que posições se encontram.
#include <stdio.h>
#define MAX 50
int main(){
  int VET[MAX], verificador=0;
  for (int i=0; i<MAX; i++){
    printf("VET[%i]= ", i+1);
    scanf("%i", &VET[i]);
  }
    for (int i = 0; i < MAX - 1; i++) {
        for (int j = i + 1; j < MAX; j++) {
      if(i!=j){
       if(VET[i]==VET[j]){
        printf("Posição %i é igual ao %i.\n", i+1, j+1);
        verificador++;
       }
      }
    }
  }
  if(verificador==0) printf("Nenhum número repetido.");
  

return 0;
}