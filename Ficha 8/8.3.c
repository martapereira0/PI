

void decompor (int total_seg, int *horas, int *mins, int *segs){
  int h=0,m=0,s=0,resto=0;
  h = total_seg / 3600;
  resto = total_seg % 3600;
  m = resto / 60;
  s = resto % 60;
  horas = &h; //atribuir ao ponteiro horas a variavel h
  mins = &m;
  segs = &s;
}

ou

*horas=total_seg/3600;
