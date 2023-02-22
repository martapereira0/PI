#include <stdio.h>


int repetidos(int vec[],int size){
  for (int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      if(vec[j]==vec[i]){
        return 1;
      }
    }
  }
  return 0;
}
