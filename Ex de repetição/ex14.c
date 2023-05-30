#include <stdio.h>
int main(){
  int m,n,o;
  printf("Insira um numero: ");
  scanf("%i", &m);
  n=0;
  o=0;

  for(int i=1;i<=m;i++){
    printf("%i", i);
    if(i%2==0){
      n++;
    } else{
      o++;
    }
  }

  printf("Existem %i números pares e %i ímpares.", n, o);

  

  return 0;
}