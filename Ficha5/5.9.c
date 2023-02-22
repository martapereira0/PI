#include <stdio.h>
#include <string.h>

int filtrar_positivos(int vec[], int size){
  int vec2[size],tamanho; //vetor com os numeros positivos
  for(int i=0;i<size;i++){
    if (vec[i]>0){
      vec2[i]=vec[i];
    }
  }
  tamanho=strlen(vec2);
  return tamanho;
}

int main(){
  int tamanho;
  scanf("%d",tamanho);
  int a[tamanho];
  fgets(a,tamanho,stdin);
  puts(a); //imprimir o vetor original
  puts(filtrar_positivos(a,tamanho));
  return 0;
}
