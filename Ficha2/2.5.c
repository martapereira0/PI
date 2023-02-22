#include <stdio.h>

int potencia(int x,int n){ //x-base n expoente
  int pot=1;
  if (n==0)
    pot=1;
  else{
    if(n<0)
      n=n*(-1);
    while(n!=0){
      pot=pot*x;
      n--;
    }
  }
  return pot;
}
