#include <stdio.h>
#include <string.h>

int palindromo (char str[]){
  int flag=0;
  for (int i = 0;i < (strlen (str) -1)/2; i++){
    if (str[i]==str[strlen (str)-1-i]){
      flag++;
    }
  }
  if (flag==(strlen (str) -1)/2){
    return 3;
  }
  else{
    return 4;
  }
}

int main(){
  int v;
  char str[]="hugo";
  v=palindromo(str);
  if (v==3){
    printf("É um palindromo!\n");
  }
  else{
    printf("Não é um palindromo!\n");
  }
  return 0;
}
