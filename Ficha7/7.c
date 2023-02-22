#include <stdio.h>
#include <string.h>
int anagramas(char str1[],char str2[]){
  int len1,len2,c=0;
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
  char a[10]="deposit";
  char b[10]="topside";
  int res;
  res=anagramas(a,b);
  printf("%d\n",res);
}
