#include <stdio.h>
#include <ctype.h>
//como há muitos casos, devo usar o switch em vez de if's
int calcula(int ch){
  int pont;
  switch(ch){
    case 'A': case 'E': case 'I':case 'L':case 'N':case 'O':case 'R':case 'T':case'S':case 'U':
      pont=1;
      break;
    case 'D':case 'G':
      pont=2;
      break;
    case 'B':case 'C': case 'M':case 'P':
      pont=3;
      break;
    case 'F': case 'H':case 'V':case 'W':case 'Y':
      pont=4;
      break;
    case 'K':
      pont=5;
      break;
    case 'J': case 'X':
      pont=8;
      break;
    case 'Q': case 'Z':
      pont=10;
      break;
    default: //qualquer outro caracter
      pont=0;
    }
  return pont;
}

int main(){
  int ch,total=0;
  while((ch=getchar())!=EOF){
    total+=calcula(ch);
  }
  printf("Pontuação:%d ",total);
  return 0;
}
