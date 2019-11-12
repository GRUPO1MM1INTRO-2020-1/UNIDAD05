#include <stdio.h>
#include <stdlib.h>
#define NDEBUG
#include <assert.h>
#include "Racional.h"
#include "Fila.h"

int mcd(int,int);
void mult_x_escalar(struct Fila *,struct Racional*);
void print_Fila(struct Fila *);

int
main(int argc,char *argv[])
{
  struct Racional R1={120,8,mcd},R2={1,20,mcd},R3={8,112,mcd};
  int MCD=R1.f_Pt(R1.num,R1.den),i,j;
  printf("%d/%d=%d/%d\n\n",R1.num,R1.den,R1.num/MCD,R1.den/MCD);
  MCD=R2.f_Pt(R2.num,R2.den);
  printf("%d/%d=%d/%d\n\n",R2.num,R2.den,R2.num/MCD,R2.den/MCD);
#ifndef NDEBUG
  for(i=1;i<=20;i++){
    for(j=1;j<)
  }
#endif
  struct Fila fila;
  fila.n=2;
  fila.R_Pt=(struct Racional*)malloc(
            fila.n*sizeof(struct Racional));
  *(fila.R_Pt+0)=R1;
  *(fila.R_Pt+1)=R2;
  fila.print(&fila);
  fila.mult=&mult_x_escalar;
  fila.print=print_Fila;
  (*fila.mult)(&fila,&R3);
  fila.print(&fila);

  return 0;
}/*end main()*/
