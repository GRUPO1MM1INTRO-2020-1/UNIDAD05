//f.c
//Jesus Alejandro Martinez Rios

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define paridad(x)	((x%2))

int b,x,y;

int f(int x, int y){
  if ((x<=6)&&(x>=1)&&(paridad(x)!=0)){
		b=31;}
	else if ((x<=6)&&(x>=1)&&(paridad(x)==0)&&(x!=2)){
		b=30;}
	else if ((x>=7)&&(x<=8)){
		b=31;}
	else if ((x>=9)&&(x<=12)&&(paridad(x)!=0)){
		b=30;}
	else if ((x>=9)&&(x<=12)&&(paridad(x)==0)){
		b=31;}
	else if ((x==2)&&(y==0)){
		b=28;}
	else if ((x==2)&&(y==1)){
		b=29;}
	else{
		printf("SYNTAX ERROR :");}
	return b;
}//End f
