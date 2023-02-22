#include <stdio.h>
#include <stdlib.h>

void main(){
  int flag=0,c=0; //flag vai sinalizar se leu caracteres e o contador vai contar as palavras
  while((ch=getchar())!=EOF){
    if((ch==' ') || (ch=='\t') || (ch=='\n')){
      if (flag==1){
        c++;//leu uma palvra
        flag=0;
      }
      else{
        flag=0;
      }
    }
    else{
      flag=1;
    }
  }
  printf("A frase contem %d palavras",c);
}
