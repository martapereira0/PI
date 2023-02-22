#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  int secr,player,tries=0;
  srand(time(NULL));
  secr=rand()%1000+1;
  printf("Your turn:");
  scanf("%d",&player);
  if (player!=secr){
    tries++;
  }
  while(player!=secr){
    if(player>secr){
      printf("Demasiado alto!");
      tries++;
    }
    else if (player<secr){
      printf("Demasiado baixo!");
      tries++;
    }
    printf("Your turn:");
    scanf("%d",&player);
  }
  printf("Acertou em %d tentativas!",tries);

  return 0;
}
