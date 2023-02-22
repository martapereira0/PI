#include <stdio.h>
#include <string.h> //funcao do len
void ordenar(int vec[],int size){ //este size corresponde ao indice do ultimo elemento, ou seja é o tamanho da variavel -1
  int troca;
  for(int i=0;i<size;i++){
    int imin=i; //indice inicial do mínimo
    for(int j=i+1;j<size;j++){
      if(vec[j]<vec[imin]){
        troca=vec[j];
        vec[j]=vec[imin];
        vec[imin]=troca;
      }
    }
    printf("%d ",vec[i]);
  }
}

int main(){
  int a[1000],i=0,n;
  scanf("%d",&n);
  while(n!= 0){
    a[i]=n;
    i=i+1;
    scanf("%d",&n);
  }
  ordenar(a,i);
  return 0;
}
