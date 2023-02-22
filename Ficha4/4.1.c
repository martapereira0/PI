#include <stdio.h>

int main(){
  float xn,xn1,dif;
  int a;
  scanf("%d", &a);
  xn=(float)a/2;
  xn1=(float)1/2*(xn + (float) a/xn);
  printf("xn:%f ; xn1:%f\n",xn,xn1);
  dif = xn1 - xn;
  printf("%f\n",dif);
  if (dif < 0) {
    dif = (-1)*dif;
  }
  while (dif>=0.01){
    xn=xn1;
    xn1=(float)1/2*(xn + (float) a/xn);
    dif = xn1 - xn;
    if (dif < 0) {
      dif = (-1)*dif;
    }
    printf("xn:%f ; xn1:%f\n",xn,xn1);
    printf("%f\n",dif);
  }
  return 0;
}
