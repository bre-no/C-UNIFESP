#include <stdio.h>

#define MAX 5

int main(){
 int v[MAX];

  for(int i=0;i<MAX;i++){
    printf("n[%i]", i);
    scanf("%i", &v[i]);
  }
  for(int i=0;i<MAX;i++){
    printf("%i, ", v[i]);
  }
  return 0;
}

