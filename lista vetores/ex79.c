//Escreva um algoritmo que permita a leitura das notas de uma turma de 20 alunos. Calcular a média da turma e contar quantos alunos obtiveram nota acima desta média calculada. Escrever a média da turma e o resultado da contagem.
#include <stdio.h>
#define MAX 20
int main(){
double nota[MAX], cont, soma=0;
  for (int i=0; i<MAX; i++){
    printf("Nota %i= ", i+1);
    scanf("%lf", &nota[i]);
    soma=soma+nota[i];
  }

  printf("Média = %.2lf\n", soma/MAX);
  for(int i=0; i<MAX; i++){
    if(nota[i]>soma/MAX)
      cont++;
  }
  printf("%.0lf alunos acima da média.", cont);

  


return 0;
}

  