#include <stdio.h>
#include <string.h>
#include <ctype.h>

int todos_letras(char str[]) {
  int contador=0;

  for (int i=0;str[i]!='\0'; i++){
    if((str[i]>= 'a' && str[i]>= 'z') || (str[i]>= 'A' && str[i]>= 'Z') {
      contador++;
    }
  if (contador == strlen(str)){
    return 1;
  }
  else{
    return 0;
  }
}

int main(){
  char a[20];
  scanf("%s",a);
  printf("%d", todos_letras(a));
}
