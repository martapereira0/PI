#include <stdio.h>
#include <ctype.h>

int main(){
  int contador=0,ch;
  while(ch=getchar()!=EOF){
    if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z')){
      contador++;
    }
  }
  printf("A frase contem %d letras",contador);
  return 0;
}
