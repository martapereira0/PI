#include <stdio.h>

int potencia(int base,int exp){
  int pot=1;
  if(exp==0)
    pot=1;
  else{
    if(exp<0)
      exp=exp*(-1);
    while (exp!=0){
      pot=pot*base;
      exp--;
    }
  }
  return pot;
}

void expressao(float x){
  float exp=0;
  exp=3*potencia(x,5)+2*potencia(x,4)-5*potencia(x,3)-potencia(x,2)+7*x-6;
  printf("%f\n",exp);
}
int main(){
  float x;
  scanf("%f",&x);
  expressao(x);
  return 0;
}
