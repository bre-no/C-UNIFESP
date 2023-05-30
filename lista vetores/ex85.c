//Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano (prof pediu p usar vetor de 10 dias so).
//Calcular e escrever:
//a) Menor temperatura do ano
//b) Maior temperatura do ano
//c) Temperatura média anual
//d) O número de dias no ano em que a temperatura foi inferior a média anual
#include <stdio.h>
#define MAX 10
int main(){
  double temp[MAX], Tzao=-375, Tzinho=100, soma=0, cont=0;
  for (int i=0; i<MAX; i++){
    printf("temperatura do %io dia = ", i+1);
    scanf("%lf", &temp[i]);
    if(temp[i]>Tzao){
        Tzao=temp[i];
      }
    if(temp[i]<Tzinho){
        Tzinho=temp[i];
      }
    soma = soma + temp[i];
  }
  printf("Temperatura média anual = %.1lf\n", soma/MAX);
  for (int i=0; i<MAX; i++)
  if(temp[i] < soma/MAX) cont++;
  printf("%.0lf dias tiveram a temperatura abaixo da média anual", cont);

  

return 0;
}