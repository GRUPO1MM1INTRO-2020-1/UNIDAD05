1 /*mcd.c*/
  2 #include <stdlib.h>/*abs()*/
  3 #include <stdio.h>
  4
  5 int mcd(int n,int d)
  6 {
  7   int N,D,R;
  8   N=abs(n);
  9   D=abs(d);
 10
 11   while((R=D%N)!=0){
 12     D=N;
 13     N=R;
 14   }
 15   return N;
 16 }
 17
 18 //Simplifica fraccion
 19 void simplificar(int frac[2])
 20 {
 21   int intMCD=mcd(frac[0],frac[1]);
 22   frac[0]=frac[0]/intMCD;
 23   frac[1]=frac[1]/intMCD;
 24 }
