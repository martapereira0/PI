#include <stdio.h>
void range(int vec[],unsigned size,int inicio,int incr){
  vec[0]=inicio;
  printf("%d ",vec[0]);
  for(int i=1;i<size;i++){
    vec[i]=vec[i-1]+incr;
    printf("%d ",vec[i]);
  }
}
