#include <stdio.h>

void fatores(int x){
  for(int i=2;i<=x;i++){
    while(x%i==0){
      printf("%d ",i);
      x=x/i;
    }
  }
}

int main(){
  int n;
  printf("Numero inteiro: ");
  scanf("%d",&n);
  printf("%d: ",n);
  fatores(n);
  return 0;
}
