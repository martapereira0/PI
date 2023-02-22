#include <stdio.h>

void range(int vec[],unsigned size,int inicio,int incr){
    for (int i=0; i<size; i++){
      if (i==0){
        vec[i]=inicio;
        printf("%d",vec[i]);
      }
      else{
        vec[i] = vec[i-1] + incr;
        printf("%d",vec[i]);
      }
    }
}

int main() {

  int size;
  int inicio,incr,a;

  scanf("%d %d %d",&size,&inicio,&incr);
  range(a,size,inicio,incr);

  return 0;
}
