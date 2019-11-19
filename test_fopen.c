/** test_fopen.c */
#include <stdio.h>
#include <stdlib.h>    /*atoi()...*/
#define NDEBUG
#include <assert.h>
#define FILE_NAME_LENGHT	128

int main(int argc,char *argv[])
{
  char file_buf[FILE_NAME_LENGHT];
  int intA=atoi(argv[2]);
#ifndef NDEBUG
  printf("intA=%d\n",intA);
#endif /*NDEBUG*/
  
//  sprintf(file_buf,"archivo_%d.txt",intA);

//  FILE *file=fopen(argv);

  return 0;
}/*main()*/


