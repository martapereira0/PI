#include <stdio.h>
#include <string.h>
#include <ctype.h>

int forte(char str[]){
  int tamanho=strlen(str), maiusc=0,minus=0,algarismo=0;
  for (int i=0;i<tamanho;i++){
    if(isupper(str[i]))
      maiusc=1;
    else if(islower(str[i]))
      minusc=1;
    else if(isdigit(str[i]))
      algarismo=1;
  }
  if(tamanho>=6 && maiusc==1 && minusc==1 && algarismo==1)
    return 1;
  else
    return 0;
}
