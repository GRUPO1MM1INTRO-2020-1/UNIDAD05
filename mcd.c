/*mcd.c*/
//Programa que calcula el maximo común divisor
#include <stdlib.h>
#include <stdio.h>

int mcd(int n,int d)
 {
  int N,D,R;
  /*VALOR ABSOLUTO*/
  N=abs(n);
  D=abs(d);
  while((R=D%N)!=0){
    D=N;
    N=R;
  }
  return N;
}
