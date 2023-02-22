#include <stdio.h>
#include <ctype.h>
int main(){
  char letra;
  int ca=0,cb=0,cc=0,cd=0,ce=0,cf=0,cg=0,ch=0,ci=0,cj=0,ck=0,cl=0,cm=0,cn=0,co=0,cp=0,cq=0,cr=0,cs=0,ct=0,cu=0,cv=0,cx=0,cz=0;
  letra=getchar();
  while(letra!=EOF){
    switch(letra){
      case ('A'): ca++; break;
      case ('B'): cb++; break;
      case ('C'): cc++; break;
      case ('D'): cd++; break;
      case ('E'): ce++; break;
      case ('F'): cf++; break;
      case ('G'): cg++; break;
      case ('H'): ch++; break;
      case ('I'): ci++; break;
      case ('J'): cj++; break;
      case ('K'): ck++; break;
      case ('L'): cl++; break;
      case ('M'): cm++; break;
      case ('N'): cn++; break;
      case ('O'): co++; break;
      case ('P'): cp++; break;
      case ('Q'): cq++; break;
      case ('R'): cr++; break;
      case ('S'): cs++; break;
      case ('T'): ct++; break;
      case ('U'): cu++; break;
      case ('V'): cv++; break;
      case ('X'): cx++; break;
      case ('Z'): cz++; break;
    }
    letra=getchar();
  }
  printf("A: %d\n",ca);
  printf("B: %d\n",cb);
  printf("C: %d\n",cc);
  printf("D: %d\n",cd);
  printf("E: %d\n",ce);
  printf("F: %d\n",cf);
  printf("G: %d\n",cg);
  printf("H: %d\n",ch);
  printf("I: %d\n",ci);
  printf("J: %d\n",cj);
  printf("K: %d\n",ck);
  printf("L: %d\n",cl);
  printf("M: %d\n",cm);
  printf("N: %d\n",cn);
  printf("O: %d\n",co);
  printf("P: %d\n",cp);
  printf("Q: %d\n",cq);
  printf("R: %d\n",cr);
  printf("S: %d\n",cs);
  printf("T: %d\n",ct);
  printf("U: %d\n",cu);
  printf("V: %d\n",cv);
  printf("X: %d\n",cx);
  printf("Z: %d\n",cz);
  return 0;
}
