#include <stdio.h>
#include <assert.h>
int max(int a,int b,int c){
  int maior;
  maior=a;
  if((b>=maior && c<=maior)||(b>=maior && c>=maior && b>=c)){
    maior=b;
  }
  else if((c>=maior && b<=maior)||(c>=maior && b>=maior && b<=c)){
    maior=c;
  }
  else{
    maior=a;
  }
  return maior;
}
int min(int a,int b,int c){
  int menor;
  menor=a;
  if((b<=menor && c>=menor)||(b<=menor && c<=menor && b<=c)){
    menor=b;
  }
  else if((c<=menor && b>=menor)||(c<=menor && b<=menor && b>=c)){
    menor=c;
  }
  else{
    menor=a;
  }
  return menor;
}

int main(){
  int a,b,c,medio=0,maior,menor;
  printf("Primeiro valor: "); scanf("%d",&a);
  printf("Segundo valor: "); scanf("%d",&b);
  printf("Terceiro valor: "); scanf("%d",&c);
  if (((a>b) && (a>c) && (b>c)) || ((c>a) && (c>b) && (b>a))){
    medio = b;
  }
  else if (((a>b) && (a>c) && (c>b)) || ((b>a) && (b>c) && (c>a))){
    medio = c;
  }
  else
    medio = a;
  maior=max(a,b,c);
  menor=min(a,b,c);
  printf("Maior: %d; Menor: %d\n",maior,menor);
  assert(menor<=medio&& medio<=maior);
  printf("Mediana: %d\n",medio);
  return 0;
}
