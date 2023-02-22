#include <stdio.h>
#include <ctype.h>
#include <string.h> //strlen
int forte(char str[]){
  int tamanho,maius=0,minus=0,num=0;
  tamanho=strlen(str);
  for(int i=0;str[i]!='\0';i++){
      if(str[i]>='a' && str[i]<='z')
        minus++;
      if(str[i]>='A' && str[i]<='Z')
        maius++;
      if (str[i]>='0' && str[i]<='9')
        num++;
    }
  if (minus!=0 && maius!=0 && num!=0 && tamanho>=6) return 1;
    return 0;
}

int main(){
  char a[]="Abr4acadabra"
  printf("%d",forte(a));
  return 0;
}
