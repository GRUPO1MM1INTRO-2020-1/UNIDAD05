/**Fila.h*/
#ifndef FILA_H
#define FILA_H
#include "Racional.h"
struct Fila{
  int n;              /*longitud de la fila*/
  struct Racional *R_Pt;/*apunta a n Racionales*/
  void (*mult)(struct Fila *,struct Racional *);/*multiplcar la fila por unn Racional*/
  void (*print)(struct Fila *);      /*imprime la fila*/
};/*end struct Fila*/
#endif /*FILA_H*/

