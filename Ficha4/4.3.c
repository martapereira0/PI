#include <stdio.h>
#include <ctype.h>
/*se o primeiro caracter for uma letra,incrementa-se o contador e inicializa-se a flag a 0, pq se o proximo caracter
for uma letra, esta faz parte da palavra e ppr isso não vamos aumentar o contador. Sabemos que a palavra termina quando o caracter
seguinte é um espaco ou mudanca de linha,por isso inicializamos a flag a 1.
*/
int main(){
  int ch, contador=0,flag=1;
  while((ch=getchar())!=EOF){
    if(ch==' ' || ch =='\t' || ch=='\n'){
      flag=1; //ler outra palavra
    }
    else{
      if(flag=1){
        contador++;
        flag=0;
      }
    }
  printf("A frase contem %d palavras",contador);
  return 0;
  }
}
