#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define TRIES 1000
double distr_unif(double x,double a,double b){
  double aleatorios,prob;
  srand(time(NULL));
  int contador=0;
  for(int i=0;i<=1000;i++){
    aleatorios=((double)rand()/(double)(RAND_MAX/b))+a;
    if(aleatorios<=x){
      contador++;
    }
  }
  prob=(float)(contador/TRIES);
  return prob;
}

int main(){
  double x,a,b;
  double prob1;
  scanf("%lf %lf %lf",&x,&a,&b);
  prob1=distr_unif(x,a,b);
  printf("Probabilidade de Xu ser inferior ou igual a x: %lf\n",prob1);
  return 0;
}
