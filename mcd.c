#include <stdio.h>
#include <stdlib.h>

int mcd(int n,int d)
{
  int N,D,R;
  N=abs(n);D=abs(d);
  while((R=D%N)!=0){
#ifdef PRELIMINAR
  printf("%d = %d(%d)+%d\n",D,D/N,N,R);
#endif
    D=N;
    N=R;
  }
#ifdef PRELIMINAR
  printf("%d = %d(%d)+%d\n",D,D/N,N,R);
#endif
  return N;
}

void mult_x_escalar(struct Fila *F_Pt,Racional *R_Pt)
{
  //WRITE YOUR CODE HERE
}

void print_Fila(struct Fila *F_Pt)
{
  //WRITE YOUR CODE HERE
}



/**Se trata de simplificar las fracciones
 */
void simplificar(int frac[2])
{
  int intMCD=mcd(frac[0],frac[1]);
  frac[0]=frac[0]/intMCD;
  frac[1]=frac[1]/intMCD;
}

