#include <stdio.h>
#define TRIES 10000
#include <time.h> //alterar semente
#include <stdlib.h> //pseu aleatorios

double distr_unif(double x,double a,double b){
  double random;
  int contador=0,prob;
  srand(time(NULL));
  for(double i=0;i<=TRIES;i++){
    random=((double)rand()/(double)(RAND_MAX/b))+a;
    if (valor<=x){
      c++;
    }
  }
  prob=(float)c/TRIES;
  return prob;
}
