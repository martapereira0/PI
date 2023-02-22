#include <stdio.h>
#include <string.h>
int decimal(char str[]){
  int num=0;
  for(int i=0;i!='\0';i++){
    int j=str[i];
    printf("%d",j);
    j-=48;
    num*=10;
    num+=j;
  }
  return num;
}
int main(){
  char a="1234";
  int num;
  num=decimal(a);
  printf("%d",num);
  return 0;
}
