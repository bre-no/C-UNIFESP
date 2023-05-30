#include <stdio.h>
int main(){
int i;
  printf("qual numero voce deseja ver a tabuada° ");
  scanf("%i",&i);
  for(int o=1; o<=10;o++){
    printf("%i*%i = %i\n", i, o, i*o);
  }

  return 0;
}