#include <stdio.h>
#include <ctype.h>

int calc(char str[]){
  int i=0,num1=0,num2=0,res=0; //num1 é o primeiro operando e num2 o segundo
  while(str[i]!='+' && str[i]!='*' && str[i]!='-'){
    //conversão de um numero em char para int
    int ch = str[i] - '0';
    num1*=10;
    num1+=ch;
    i++;
  }
  int operando = str[i];
  i++;
  while(str[i]!='\0'){
    //conversão de um numero em char para int
    int ch = str[i] - '0';
    num2*=10;
    num2+=ch;
    i++;
  }
  if (operando == '+') res=num1+num2;
  else if (operando == '*') res=num1*num2;
  else res=num1-num2;
  return res;
}

int main(){
  char str1[100] = "12+6";
  int oper=0;
  oper=calc(str1);
  printf("12+2=%d\n",oper);
  return 0;
}
