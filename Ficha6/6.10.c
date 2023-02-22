#include <stdio.h>

int magico (int a[20][20],int n){
    int j=0,i=0;
    int diag_princ=0,diag_sec=0,linhas=0,colunas=0;
    if(n==1){
        return 1;
    }
    for(i = 0 ; i < n ; i++){
        diag_princ+=a[i][i];
    }
    for(j = 0 ; j < n ; j++){
        for(i = 0 ; i < n ; i++){
            linhas += a[j][i];
        }
        if(diag_princ != linhas){
            return 0;
        }
        else{
            linhas=0;
        }
    }
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j < n ; j++){
            colunas += a[j][i];
        }
        if(diag_princ != colunas){
            return 0;
        }
        else{
            colunas=0;
        }
    }
    for(i=0,j = n-1; j < n ; j--,i++){
      diag_sec += a[j][i];
    }
    if (diag_princ != diag_sec){
        return 0;
    }
    return 1;
}

int main(){
  int v[20][20] = {{2,7,6},{9,5,1},{4,3,8}};
  int res=0;
  res = magico (v,3);
  if (res == 1) {
    printf("é um cubo mágico");
  }
  else{
    printf("Nao é");
  }
  return 0;
}
