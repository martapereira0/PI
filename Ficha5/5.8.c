#include <stdio.h>

int contar_maiores(int vec[],int size,int val){
  int contador=0;
  for (int i=0;i<size;i++){
    if (vec[i] > val){
      contador++;
    }
  }
  return contador;
}

int main(){
  int tamanho,valor;
  scanf("%d %d",&tamanho,&valor);
  int a[tamanho];
  for (int i=0;i<tamanho;i++){
    scanf("%d",&a[i]);
  }
  printf("%d\n",contar_maiores(a,tamanho,valor));
}
