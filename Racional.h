/** Racional.h La estructura Racional representa 
 * n\'umeros racionales.
 */
#ifndef RACIONAL_H
#define RACIONAL_H
struct Racional{
  int num;
  int den;
  int (*f_Pt)(int,int);
};/*end struct Racional*/
#endif /*RACIONAL_H*/

