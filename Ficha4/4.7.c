#include <stdio.h>
#include <time.h> //alterar valor da semente de rand()
#include <stdlib.h>
int main(){
  srand(time(NULL));
  int pc,ut,num1,num2,certos=0,errados=0;
  for (int i=0;i<=10;i++){
    num1=rand()%9+1;//gerar  valores aleatorios
    num2=rand()%9+1;//gerar valores aleatorios
    printf("Quanto é %d x %d?\n",num1,num2);
    scanf("%d",&ut); //resposta do utilizador
    pc=num1*num2;
    if (ut==pc){
      printf("Certo! ");
      certos++;
    }
    else{
      printf("Errado! O resultado é %d. ",pc);
      errados++;
    }
  }
  printf("Número de respostas corretas e erradas, respetivamente: %d %d\n",certos,errados);
  return 0;
}
