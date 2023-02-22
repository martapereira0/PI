#include <stdio.h>
#include <ctype.h>
#include <string.h>
void ordenar (char str[]){
  int tamanho = strlen(str);
  for(int i=0;i<=tamanho;i++){
    printf("%d\n",str[i]);
    for(int j=i+1;j<=tamanho;j++){
      if (str[j] <= str[i]){
        int aux = str[j];
        str[j]= str[i];
        str[i] = aux;
      }
    }
  }
  for(int k=0; k<=tamanho;k++){
    printf("%c",str[k]);
  }
}
int main(){
  char palavra[100]="ALGORITMO";
  ordenar(palavra);
  return 0;
}
