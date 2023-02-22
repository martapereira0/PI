void max_min(int vec[],int size,int *pmax,int *pmin){
  int i=0;
  imax=i; //indice do maior valor da variavel até ao momento *pmax=vec[0]
  imin=i; //indice do menor valor da variavel até ao momento *pmin=vec[0]
  for(i=1;i<size;i++){
    if(vec[i]>vec[imax]){ //vec[i]>*pmax
      vec[imax]=vec[i]; //*pmax=vec[i];
    }
    else if(vec[i]<vec[imin]){ //vec[i]<*pmin
      vec[imin]=vec[i];//*pmin=vec[i];
    }
  }
  pmax=&vec[imax];
  pmin=&vec[imin];
}
