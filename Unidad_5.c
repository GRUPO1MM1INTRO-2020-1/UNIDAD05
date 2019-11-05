#include <stdio.h>
#include "Racional.h"

int mcd(int,int);

int
main(int argc,char *argv[])
{
  struct Racional R1={112,8,mcd};
  int MCD=R1.f_Pt(R1.num,R1.den);
  printf("%d/%d=%d/%d",R1.num,R1.den,R1.num/MCD,R1.den);
  return 0;
}/*end main()*/

