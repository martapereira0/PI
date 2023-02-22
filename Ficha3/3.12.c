#include <stdio.h>

int soma_digitos(int n){
  int soma=0;
  while(n!=0){
    soma+=n%10;
    n=n/10;
  }
  return soma;
}

int main(){
  int valor,sum;
  scanf("%d",&valor);
  sum=soma_digitos(valor);
  printf("%d",sum);
  return 0;
}
