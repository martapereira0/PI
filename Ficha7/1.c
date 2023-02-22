#include <stdio.h>
int main(){
  int n,a[100],i=0;
  scanf("%d",&n);
  while ((n!=-1) && (n>=0)){
    a[i]=n;
    i++; //indice da variavel indexada
    scanf("%d",&n);
  }
  for (int j=0;j<=i;j++){
    int valor=a[j]; //valor a comparar
    for (int k=j+1;k<=i;k++){
      if (valor==a[k]){//há valores repetidos
        a[k]=-1; //sinalizar que leu um valor repetido
      }
    }
  }
  for (int m=0;m<i;m++){
    if(a[m]!=-1){
      printf("%d\n",a[m]);
    }
  }
  return 0;
}
