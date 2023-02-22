#include <stdio.h>

int mediana(int a,int b,int c){
  int mediana;
  if((a>b && b>c) || (c>b && b>a))
    mediana=b;
  else if((c>a && a>b) || (b>a && a>c))
    mediana=a;
  else if((b>c && c>a) || (a>c && c>b))
    mediana=c;
  return mediana;
}

int main(){
  int a,b,c,medio;
  printf("Primeiro valor: "); scanf("%d",&a);
  printf("Segundo valor: "); scanf("%d",&b);
  printf("Terceiro valor: "); scanf("%d",&c);
  medio=mediana(a,b,c);
  printf("Mediana: %d\n",medio);
  return 0;
}
