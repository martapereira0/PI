#include <stdio.h>
#include <string.h>

int palindromo(char str[]){
  int tamanho,c=0;
  tamanho=strlen(str);
  for(int i=0;i<tamanho/2;i++){
    if(str[i]==str[tamanho-i-1]){
      c++;
    }
  }
  if(c==tamanho/2){
    printf("é um palindromo");
  }
  else{
    printf("nao é um palindromo");
  }
  return 0;
}
int main(){
  int v;
  char str[]="hugo";
  v=palindromo(str);
  return 0;
}
