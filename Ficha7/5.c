#include <assert.h>


void inserir(int vec[], int n, int x) {
  int j = n-1;
  for(int i=0;i<=(n-1);i++){
    assert(vec[i]<=vec[i+1]); //assegurar que o vetor está organizado por ordem ascendente
  }
  while(j>=0 && vec[j]>x) {
    vec[j+1] = vec[j];
    j--;
  }
  vec[j+1] = x;
  for(int i=0;i<=(n-1);i++){
    assert(vec[i]<=vec[i+1]); //assegurar que o vetor está organizado por ordem ascendente
  }
}
