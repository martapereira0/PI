#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
  srand(time(NULL));
  //int b;
  //int a;

  for (int i=0;i<=15;i++){
    //printf("%d ",rand() %10);//pq 10 se o limite é de 0 a 9? quando o limite infefior é 0 tenh0 de aumentar uma "casa"
    //printf("%d\n",rand() %10 + 1);//há 10 numeros entre 1 e 10
    //printf("%d\n",rand() %100+ 1);//há 100 numeros entre 1 e 100
    //printf("%d\n",rand() %21 - 10); //o intervalo de -10 a 10 contem 21 numeros
  }
  /*for (double i=0;i<=10;i++){
    printf("%lf\n",((double)rand())/((double)RAND_MAX));
    printf("%lf\n",((double)rand())/((double)RAND_MAX) * 2 - 1);

  }
  for (int i=0;i<=30;i++){
      a=rand() %90+10;//há 90 numeros entre o intervalo de 10 e 100 e 10 é o limite inferior
      if (a%2==0){
        printf("%d ",a);
      }
      b=rand() %99+1;
      if(b%2!=0){
        printf("%d ",b);
      }
    }*/
  return 0;
}
