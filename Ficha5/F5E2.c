#include <stdio.h>
#include <ctype.h> //funcoes pre definidas para os caracteres

void capitalizar(char str[]){
  for(int i=0;i!='\0';i++){
    if(str[i]>='a' && str[i]<='z'){
      str[i]=toupper(str[i]);
    }
  }
  printf("string alterada: %c",str);
}

int main(){
  char str1[]="hugo3";
  printf("string original: %s\n",str1);

  capitalizar(str1);
  return 0;
}
