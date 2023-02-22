#include <stdio.h>

int repetidos(int vec[],int size){
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      if(vec[i]==vec[j]){
        return 1;
      }
    }
  }
  return 0;
}

int main(){
  int a[]={2,4,0,3,-1},size=5;
  printf("%d\n",repetidos(a,size));
  return 0;
}
