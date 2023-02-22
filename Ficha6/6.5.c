#include <stdio.h>

void sort_desc(int vec[],int n){
  int troca;
  for(int i=0;i<n;i++){
    int imax=i; //indice inicial do máximo
    for(int j=0;j<=n;j++){
      if(vec[j]>vec[imax]){
        imax=j;
      }
    }
    if (imax!=i){ // o 1º valor não é o maior valor da sequencia
      troca=vec[i];
      vec[i]=vec[imax];
      vec[imax]=troca;
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
  sort_desc(a,i);
  return 0;
}
