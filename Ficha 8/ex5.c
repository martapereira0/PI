int mdc(int a,int b){
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
  }
  return a; // a e b são iguais
}


void reduzir(int *pnum,int*pdenom){
  int a=*pnum,b=*pdenom;
  int maxdivcomum=mdc(a,b);
  *pnum=*pnum/maxdivxomum;
  *pdenom=*pdenom/maxdivcomum;
}
