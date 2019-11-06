#include <stdio.h>
#include "Racional.h"

int mcd(int,int);

int
main(int argc,char *argv[])
{
  struct Racional R1={1,20,mcd};
  int MCD=R1.f_Pt(R1.num,R1.den);
  printf("%d/%d=%d/%d\n",R1.num,R1.den,R1.num/MCD,R1.den/MCD);
 int i,j;
 for(i=1;i<=20;i++){
         for(j=20;j<=40;j++){
                 R1.num=i;R1.den=j;
        MCD=R1.f_Pt(R1.num,R1.den);
        printf("%d/%d=%d/%d\n",R1.num,R1.den,R1.num/MCD,R1.den/MCD);
         }
 }
  return 0;
}/*end main()*/
