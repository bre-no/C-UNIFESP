//Faça um programa que calcule o número médio de alunos por turma. Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma. As turmas não podem ter mais de 40 alunos.

#include <stdio.h>
int main(){
  int t;
  double alunos, soma=0;
  printf("qual a quantidade de turmas? ");
  scanf("%i", &t);
    for(int i=1; i<=t; i++){
    printf("Quantos alunos tem na %ia turma? ", i);
      scanf("%lf", &alunos);
      if(alunos>40){
        printf("Quantidade acima do esperado, tente novamente\n");
        i=i-1;
      }
      else{
        soma = soma + alunos;
      }
      
    }
  printf("O numero medio de alunos por turma e de %.2lf alunos", soma/t);

  return 0;
}