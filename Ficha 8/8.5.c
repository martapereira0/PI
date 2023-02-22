int mdc (int a,int b){
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
  }
  return a; //o maximo divor comum
}

void reduzir(int *pnum,int *pdenom){
  int a = *pnum, b = *pdenom;
  *pnum = *pnum / mdc (a,b);
  *pdenom = *pdenom / mdc (a,b);

}
