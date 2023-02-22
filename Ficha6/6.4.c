#include <stdio.h>

int segundo_menor(int vec[],int size){
  int i,j,min2,troca;
  for (i=0;i<size;i++){
    int imin=i;
    for(j=0;j<size;j++){
      if(vec[j]<vec[imin]){
        imin=j;
      }
    }
    if (vec[imin]!=i){ //trocar o minimo com o vec[i],logo o minimo da sequencia encontra se na posicao 0
      troca=vec[i];
      vec[i]=vec[imin];
      vec[imin]=troca;
    }
  }
  min2=vec[1];
  return min2;
}

int main(){
  int a[1000],i=0,n;
  scanf("%d",&n);
  while(n!= 0){
    a[i]=n;
    i=i+1;
    scanf("%d",&n);
  }
  printf("o segundo menor valor é:%d\n",segundo_menor(a,i));
  return 0;
}
