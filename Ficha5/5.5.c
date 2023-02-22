#include <stdio.h>
#include <string.h>

int algum_digito(char str[]){
  int contador=0;
  for (int i=0;str[i] != '\0';i++){
    if (str[i]>='0' && str[i]<='9'){
      contador=1;
    }
  }
  if (contador==1){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  char a[]="hay4";
  printf("%d",algum_digito(a));
}
