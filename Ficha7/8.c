#include <stdio.h>
#include <string.h>
#include <ctype.h>
void normalizar(char str[]){ //eliminar todos os caracteres não letra e converter todas as letras em minusculas
  int j=0,i=0;
  while(str[i]!='\0'){
    if(!isalpha(str[i])){//se nao for letra
      i++;
    }
    str[j]=tolower(str[i]); //converter a letra em minuscula mesmo que já seja
    i++;j++;
  }
  str[j]='\0';
}
int anagramas(char str1[],char str2[]){
  int len1,len2,c=0;
  normalizar(str1);
  normalizar(str2);
  len1=strlen(str1);
  len2=strlen(str2);
  if(len1 == len2){
    for(int i=0;i<len1;i++){
      for(int j=0;j<len2;j++){
        if(str1[i]==str2[j]){
          c++;
          break;
        }
      }
    }
    if(c==len1){ // é indiferente ter len1 ou len2 visto que sáo iguais
      return 1;
    }
  }
  return 0;
}
int main(){
  char a[20]="Quid est veritas?";
  char b[20]="Est vir qui adest";
  int res;
  res=anagramas(a,b);
  printf("%d\n",res);
}
