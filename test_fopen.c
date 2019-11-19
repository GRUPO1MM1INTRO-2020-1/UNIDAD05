/** test_fopen.c */
#include <stdio.h>
#include <stdlib.h>    /*atoi()...*/
//#define NDEBUG
#include <assert.h>
#define FILE_NAME_LENGHT	128
#define VARNAME(a,b)	a##b
#define ARR_SIZE(arr_name,arr_type)	\
((sizeof(arr_name))/((sizeof(arr_type))))


int main(int argc,char *argv[])
{
  char file_buf[FILE_NAME_LENGHT];
//  int intA=atoi(argv[2]);
#ifndef NDEBUG
  int intX;
  char str[]="20191119_A";
  intX=atoi(str);
  int intY;
  printf("Integer=%d\n",VARNAME(int,X));
#ifdef TEST_1
  if(argc>=2){
    intY=atoi(argv[1]);
    printf("Integer=%d\n",VARNAME(int,Y));
  }
#endif /*TEST_1*/
/**
size_t fwrite(const void *restrict buf, size_t size, size_t count,
                     FILE *restrict fp);
  DESCRIPTION
    fwrite attempts to copy, starting from the memory location buf,
    count elements (each of size size) into the file or stream
    identified by fp.  fwrite may copy fewer elements than count if an
    error intervenes.
 */ 
#endif /*NDEBUG*/
  
//  sprintf(file_buf,"archivo_%d.txt",intA);
    char filename[]="archivo1.txt";

  FILE *file=fopen(filename,"w");
  char buf[]="                 CDMX, martes 19 de noviembre de 2019\n";
  char blank_line[]="                                                ";
  char buf0[]="Querida madre\n";
  char buf1[]="Con gran emoci\\'on te comunico que ya se est\\'a \n";
  char buf2[]="terminando el semestre, ...\n";

  fwrite(buf,1,ARR_SIZE(buf,char),file);

  fclose(file);
  return 0;
}/*main()*/


