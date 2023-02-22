#include <stdio.h>


int mdc (int num,int denom){
  while(num!=denom){
    if (num>denom)
      num=num-denom;
    else
      denom=denom-num;
  }
  return num; //máximo divisor comum entre os dois valores
}

int main(){
  int num,denom,divisor,nums,denoms;
  printf("Numerador: "); scanf("%d",&num);
  printf("Denominador: "); scanf("%d",&denom);
  divisor=mdc(num,denom);
  nums=num/divisor;
  denoms=denom/divisor;
  printf("A fração %d/%d é equivalente a %d/%d",num,denom,nums,denoms);
  return 0;
}
