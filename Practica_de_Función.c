//Le Anexo toda la practica, esto es, la funcion main junto con la funcion int f(int x, inty);

#include <stdio.h>
int f(int x,int y);
int main()
{
int a, b;
printf("Dado un conjunto A={1,2,3,4,5,6,7,8,9,10,11,12}\nSea B=N donde N es el conjunto de los numeros naturales\nTenemos una funcion f:Ax{0,1}--->B\nDefinida como sigue:\nf(x,y)={     31 si 1≤x≤6  & x es de la forma 2k+1, con k en N unión {0}\n             30 si 1≤x≤6  & x es de la forma 2k,  con k en N excepto para k=1\n             31 si 7≤x≤8  & x pertenece a N\n             30 si 9≤x≤12 & x pertenece a N y x es de la forma 2k+1, para k en N\n             31 si 9≤x≤12 & x pertenece a N y x es de la forma 2k, para k en N\n             28 si x=2 & y=0\n             29 si x=2 & y=1\nIntroduzca a Continuacion las dos entradas (a,b) para aplicar la funcion\n");
printf("Introduzca la entrada a: ");
scanf("%d", &a);
printf("Introduzca la entrada b: ");
scanf("%d", &b);
if (f(a,b)!=-1){printf("Ahora bien: f(%d,%d)=%d", a, b, f(a,b));}
else {printf("ERROR: Estimado Usuario a introducido usted un valor fuera del rango o dominio sobre la definicion de la funcion");}
return 0;
}
int f(int x,int y)
{ int p;
        switch (x)
        {       case 1 : /*res = 1;*/
                         if (y==0 || y==1){p = 31;
                                           return p;}
                         else {p = -1;
                                printf("*La funcion no esta definida para este valor de b\n");
                         return p;}
                break;
                case 2 : /*res = 2;*/
                         if (y == 0){p = 28;
                                     return p;}
                         else {if (y == 1){p = 29;
                                            return p;}
                                            else { p = -1;
                                                    printf("*La funcion no esta definida para este valor de b\n");
                                            return p;}}

                break;
                case 3 : /*res = 3;*/
                         if (y==0 || y==1){p = 31;
                                           return p;}
                         else {p = -1;
                                 printf("*La funcion no esta definida para este valor de b\n");
                         return p;}
                break;
                case 4 : /*res = 4;*/
                         if (y==0 || y==1){p = 30;
                                             return p;}
                         else {p = -1;
                                 printf("*La funcion no esta definida para este valor de b\n");
                         return p;}
                break;
	case 5 : /*res = 5;*/
                         if (y==0 || y==1){p = 31;
                                            return p;}
                         else {p = -1;
                                 printf("*La funcion no esta definida para este valor de b\n");
                         return p;}
                break;
                case 6 : /*res = 6;*/
                         if (y==0 || y==1){p = 30;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
                case 7 : /*res = 7;*/
                         if (y==0 || y==1){p = 31;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
                case 8 : /*res = 8;*/
                         if (y==0 || y==1){p = 31;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
                case 9 : /*res = 9;*/
                         if (y==0 || y==1){p = 30;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
                case 10 : /*res = 10;*/
                          if (y==0 || y==1){p = 31;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
	case 11 : /*res = 11;*/
                          if (y==0 || y==1){p = 30;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
                case 12 : /*res = 12;*/
                          if (y==0 || y==1){p = 31;
                                            return p;}
                          else {p = -1;
                                  printf("*La funcion no esta definida para este valor de b\n");
                          return p;}
                break;
        default : p = -1;
                  return p;
        }

}
	 


