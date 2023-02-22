#include <stdio.h>

int main(){
  int n,resultado=15;
  scanf("%d",&n);
  if (((n%4==0) && (n%100!=0)) ||(n%400==0)){
    resultado=1; // é bissexto
  }
  else if ((n%4==0) && (n%100==0) && (n%400!=0)){
    resultado=0; // não é bissexto
  }
  else{
    resultado=0;
  }
  printf("%d\n",resultado);
  return 0;
}
