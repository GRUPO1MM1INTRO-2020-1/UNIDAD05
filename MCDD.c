/**mcd.c*/
int mcd(int N,int D)
{
{
        int R;
  while((R=D%N)!=0)
  {
#ifdef PRELIMINAR
  printf("%d = %d(%d)+%d\n",D,D/N,N,R);
#endif /*PRELIMINAR*/
    D=N;
    N=R;
  }

#ifdef PRELIMINAR
  printf("%d = %d(%d)+%d\n",D,D/N,N,R);
#endif /*PRELIMINAR*/

  return N;
}

/**Simplifica la fracci\'on con numerador
 * frac[0] y denominador frac[1]
 */
void simplificar(int frac[2])
{
  int intMCD=mcd(frac[0],frac[1]);
  frac[0]=frac[0]/intMCD;
  frac[1]=frac[1]/intMCD;
}
return 0;
}
