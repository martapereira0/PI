#include <stdio.h>

int quadrado(int n){
  int soma=0;
  for(int i=1;i<n;i++){
    if(i%2!=0){
      soma+=i;
      if(soma==n){
        return 1;
      }
      else{
        continue;
      }
    }
  }
  return 0;
}

int main(){
  int valor;
  scanf("%d",&valor);
  if(quadrado(valor)==1){
    printf("É um quadrado perfeito!\n");
  }
  else{
    printf("Não é um quadrado perfeito!\n");
  }
  return 0;
}
