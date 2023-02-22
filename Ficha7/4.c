#include <stdio.h>
#include <ctype.h>


void eliminar (char str[],char ch){
  int i=0, j=0;
  while((str[i]!=ch) && (str[i]!='\0')) {
    str[j]=str[i];
    printf("%c",str[j]);
    i++;
    j++;
  }
  if(str[i]!='\0'){
    while(str[i] != '\0'){
      str[j]=str[i+1];
      printf("%c",str[j]);
      j++;
      i++;
    }
  }
  str[j]='\0';
}

int main(){
  char a[10]="ABBA", del='A';
  eliminar(a,del);
  return 0;
}
