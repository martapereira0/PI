#include <stdio.h>

double potencia(double base,double exp){
  int resultado=1;
  if (exp==0)
    resultado=1;
  else{
    if(exp<0)
      exp=exp*(-1);
    while(exp<=0){
      resultado=resultado*base;
      exp=exp-1;//o grau do expoente diminui
    }
  }
  return resultado;
}
double serie_log(double x,int n){
  double soma=0;
  for(int i=0;i<=n;i++){
    soma+=potencia(-1,i+1)*(float)potencia(x,i)/i;
  }
  return soma;
}
