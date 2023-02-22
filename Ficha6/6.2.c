#include <stdio.h>
int desordem(int vec[],int size){
  int c=0;
  for(int i=0;i<=size-2;i++){
    if(vec[i]>vec[i+1]){
      c++;
    }
  }
  return c;
}
int main(){
  int a[]={3,1,2,2,4,0,2,1},len=8,quant;
  quant=desordem(a,len);
  printf("%d\n",quant);
  return 0;
}
