#ifndef NUMINPUT_H
#define NUMINPUT_H

/*header files*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <float.h>
/*end of header files*/

/*function declarations*/
int intnum(int *num);                   //for 'int' data type
int u_intnum(unsigned int *num);        //For 'unsigned int' data type
int shortnum(short int *num);           //For 'short int' data type
int longnum(long int *num);             //For 'long int' data type
int u_longnum(unsigned long int *num);  //For 'unsigned long int' data type
int floatnum(float *num);               //For 'float' data type
int doublenum(double *num);             //For 'double' data type
int l_doublenum(long double *num);      //For 'long double' data type
int charnum(char *num);                 //For 'char' data type
/*end of function declarations*/

#endif
