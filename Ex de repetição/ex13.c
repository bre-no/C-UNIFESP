#include <stdio.h>
int main(){
  int m, n, o;
  printf("Insira a base: ");
  scanf("%i", &m);
  printf("Insira o expoente: ");
  scanf("%i", &n);
  o=m;
  printf("%i", m);
    for(int g=1;g<n;g++){
      printf("*%i", m);
        o=o*m;
    }
  printf("=%i", o);
  
  

  return 0;
}