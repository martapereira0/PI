#include <stdio.h>



int decimal (char str[]){
  int num=0,i=0;
  while(str[i]!='\0'){
    int j=str[i];
    j-=48; //passar o numero de caracter para numero inteiro
    num*=10; //na 1ª iteração é 0,
    num+=j;
    i++;
  }
  return num;
}


int main(){
  char a[]="1234";
  printf("%d\n",decimal(a));
  return 0;
}
