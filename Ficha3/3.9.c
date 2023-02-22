#include <stdio.h>

 int main(){
   int a,b,c=1;
   scanf("%d %d",&a,&b);
   printf("mdc(%d,%d) = ",a,b);
   while(a!=b){
     if(a>b){
       a=a-b;
       c++;
       printf("mdc(%d,%d) = ",a,b);
     }
     else if(b>=a){
       b=b-a;
       c++;
       printf("mdc(%d,%d) = ",a,b);
     }
   }
  printf("%d\n",a);
  printf("%d iterações\n",c);
  return 0;
 }
