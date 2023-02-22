#include <stdio.h>


int filtrar_positivos(int vec[],int size){
  int conta=0;
  printf("vetor inicial: {")
  for(int i=0;i<size;i++){
    if(i==size-1)
      printf("%d}\n",vec[i]);
    else
      printf("%d,",vec[i]);
    if(vec[i]>0){
      vec[conta]=vec[i];
      conta++;
    }
  }

  size=conta;
  printf("vetor modificado: {")
  for(int j=0;j<size;j++){
    if(j==size-1)
      printf("%d}\n",vec[j]);
    else
      printf("%d,",vec[j]);
  }
  return conta;
}
