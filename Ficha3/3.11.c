#include <stdio.h>

int fibonacci(int n){
  int soma=0
  if(n<=1){
    return n;
  }
  else{
    return fibonacci(n-1)+fibonacci(n-2);
  }
}
