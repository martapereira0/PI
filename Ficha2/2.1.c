#include <stdio.h>
#define PI 3.1416
int potencia(int exp,int base){
  int pot=1;
  if (exp==0){
    pot=1;
  }
  else{
    if (exp<0){
      exp=exp*(-1);
    }
    while(exp!=0){
      pot=pot*base;
      exp--;
    }
  }
  return pot;
}

int main(){
  float raio,vol;
  scanf("%f",&raio);
  vol=4.0/3*PI*potencia(3,raio);
  printf("%f",vol);
  return 0;
}
