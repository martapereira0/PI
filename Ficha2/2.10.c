#include <stdio.h>

int main(){
  int d,m,a,pd,pm,pa;
  scanf("%d %d %d",&d,&m,&a);
  if(m==2){
    pa=a;
    if (((a%4==0) && (a%100!=0)) || (a%400==0)){ // ano bissexto
      if (d==29){
        pd=1;
        pm=3;
      }
      else if (d==28){
        pd=29;
        pm=m;
      }
      else{
        pd=d+1;
        pm=m+1;
      }
    }
    else{
      if(d==28){
        pd=1;
        pm=3;
      }
      else{
        pd=d+1;
        pm=m;
      }
    }
  }
  else if ((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10)) {
    pa=a;
    if (d==31){
      pd=1;
      pm=m+1;
    }
    else{
      pd=d+1;
      pm=m;
    }
  }
  else if ((m==4) || (m==6) || (m==9) || (m==11)){
    pa=a;
    if (d==30){
      pd=1;
      pm=m+1;
    }
    else{
      pd=d+1;
      pm=m;
    }
  }
  else { //mes de dezembro
    if(d==31){
      pd=1;
      pm=1;
      pa=a+1;
    }
    else{
      pd=d+1;
      pm=m;
      pa=a;
    }
  }
  printf("%d %d %d",pd,pm,pa);
  return 0;
}
