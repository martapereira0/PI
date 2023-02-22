#include <stdio.h>
#define FALSE 0
#define TRUE 1
// um numero é primo se apenas for divisivel por ele mesmo e por 1
int primo(int x){ //vamos avaliar se x é primo ou nao

  if(x<=1){
    return FALSE;
  }
  else{
    for(int i=2;i<x;i++){//se x tiver algum divisor sem ser o 1 e ele mesmo, entao nao é primo
      if (x%i==0){
        return FALSE;
      }
    }
  }
  return TRUE;
}

int main(){
  int valor;
  printf("Limite superior? ");
  scanf("%d",&valor);
  for(int i=0;i<valor;i++){
    if(primo(i)==1){
      printf("%d ",i);
    }
  }
  return 0;
}
