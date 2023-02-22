#include <ctype.h>
char *procurar(char *str,char ch){ //a string é um apontador
  for(int i=0;i<strlen(*str);i++){
    if(*str[i]==ch){
      return *str[i];
    }
  }
  return NULL;
}
