#include <stdio.h>

int main(){
  float media,soma;
  int x,c=0;
  scanf("%d",&x);
  while (x!=0){
    soma+=x;
    c++;
    scanf("%d",&x);
  }
  media=soma/c;
  printf("%f",media);
  return 0;
}
