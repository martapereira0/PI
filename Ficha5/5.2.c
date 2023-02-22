#include <stdio.h>
#include <ctype.h>

void capitalizar (char str[]){
  for (int i = 0; str[i] != '\0'; i++){ //'\0' indica o fim da string
    str[i]=toupper(str[i]);
  }
  printf("string alterada: %s\n",str);
}

int main(){
  char str1[]="hugo3";
  printf("string original: %s\n",str1);

  capitalizar(str1);
  return 0;
}
