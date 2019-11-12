/**mcd.c*/
#include <stdio.h>
#include "Fila.h"
int mcd(int n,int d)
{
int R;
  while((R=d%n)!=0){
    d=n;
    n=R;
  }
  printf("El maximo comun divisor es: %d\n",n);
 return n;
}


#ifdef PRELIMINAR
  printf("%d = %d(%d)+%d\n",D,D/N,N,R);
#endif

void mult_x_escalar(struct Fila *F_Pt,struct Racional *R_Pt)
{
    
  //WRITE YOUR CODE HERE
}

void print_Fila(struct Fila *F_Pt)
{
    
  //WRITE YOUR CODE HERE
}
