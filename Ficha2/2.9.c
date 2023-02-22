#include <stdio.h>

int prox_bissesto(int n){
  if (((n%4==0) && (n%100!=0)) || (n%400==0)){
    return n;
  }
  else{
    for(int i=n+1; ;i++){
      if (((n%4==0) && (n%100!=0)) || (n%400==0)){
        return i;//pŕoximo ano bissexto
      }
    }
  }
}
int main(){
  int ano,prox_ano;
  scanf("%d",&ano);
  prox_ano=prox_bissesto(ano);
  printf("%d\n",prox_ano);
  return 0;
}
