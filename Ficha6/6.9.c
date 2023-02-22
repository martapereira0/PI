#include <stdio.h>
#define N 4
int identidade(int mat[N][N]){
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      if(((mat[i][j]==1) && (i!=j)) || ((mat[i][j]==0) && (i==j))){
        return 0; //basta um valor que nao esteja nas posições da diagonal principal nao ser 0, que nao é a identidade
      }
    }
  }
  return 1;
}

int main(){
  int mat[N][N]={{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1}};
  int ident;
  ident=identidade(mat);
  if (ident==0){
    printf("Não é a matriz identidade!\n");
  }
  else{
    printf("É a matriz identidade!\n");
  }
  return 0;
}
