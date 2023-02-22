#include <stdio.h>

int main(){
  int quantia,vinte,dez,cinco,um;
  printf("Quantia em EUR? ");
  scanf("%d",&quantia);
  vinte=quantia/20;
  quantia=quantia%20;
  dez=quantia/10;
  quantia=quantia%10;
  cinco=quantia/5;
  quantia=quantia%5;
  um=quantia/1;
  printf("notas EUR 20: %d\nnotas EUR 10: %d\nnotas EUR 5: %d\nmoedas EUR 1: %d\n",vinte,dez,cinco,um);
  return 0;
}
