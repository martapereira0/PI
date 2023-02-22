#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int conta_letras(char ch){
  int c=0;
  ch=toupper(ch);//converter os caracteres para maiusculos
  if(ch>='A' && ch<='Z'){
    c++;
  }
  return c;
}
void main(){
  char ch; int contar=0;
  while((ch=getchar())!='\n'){
    contar+=conta_letras(ch);
  }
  printf("A frase contém %d letras",contar);
}
