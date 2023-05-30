#include <stdio.h>

#define MAX 10

int main(){
 int v[MAX];

  for(int i=0;i<MAX;i++){
    printf("n[%i]", i);
    scanf("%i", &v[i]);
  }
  for(int i=MAX-1;i>=0;i--){
    printf("%i\n", v[i]);
  }
  return 0;
}
