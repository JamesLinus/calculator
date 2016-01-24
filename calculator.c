#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include "numinput.h"

#define square(x) x*x;

/*Function declarations*/
void disp_ops (void);                   //display the operations
void add (float *total, float M);       //add a number
void subtract (float *total, float M);  //subtract a number
void multiply (float *total, float M);  //multiply a number
void divide (float *total, float M);    //divide by a number
void power (float *total, float M);     //raise by a number
void square_rt (float *total);          //find the square root
void percent (float *total);            //find the percent
void factorial (float *total);          //find the factorial
void log_10 (float *total);             //find the log of base 10
/*End of function declarations*/

int main(void)
{
    float total = 0, M = 0;
    short input = 0, input_err = 0;
	
	do {
	    system("clear");
	    
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
		
		do {
		    printf("Operation: ");
		    input_err = shortnum(&input);
		}while(input_err == 1 || input_err == 2);
		
		printf("\n");
		
		switch (input) {
		    case 1: add(&total, M);
			        break;
		    case 2:	subtract(&total, M);
			        break;
		    case 3: multiply(&total, M);
			        break;
		    case 4:	divide(&total, M);
			        break;
		    case 5: power(&total, M);
			        break;
		    case 6:	total = square(total);
			        break;
		    case 7: square_rt(&total);
			        break;
		    case 8: total = pow((float)total, 0.333333);
			        break;
		    case 9: percent(&total);
			        break;
		    case 10: factorial(&total);
		             break;
		    case 11: total = sin(total);
		             break;
		    case 12: total = cos(total);
			         break;
		    case 13: total = tan(total);
			         break;
		    case 14: log_10(&total);
			         break;
		    case 15: total = exp(total);
			         break;
    		case 16: M += total;
    		         break;
		    case 17: M -= total;
			         break;
    		case 18: M = 0;
    		         break;
		    case 19: total = 0;
			         break;
		    case 20: break;
		}
	}while(input != 20);
	
	return 0;
}

void disp_ops(void)
{
    for (int i = 0; i < 80; ++i) {
        printf("*");
    }
    printf("\n");
    
   	printf("* 1. Add             ");
	printf(" 6. Square          ");
	printf("11. sin            ");
	printf("16. M+             *\n");
	printf("* 2. Subtract        ");
	printf(" 7. Square root     ");
	printf("12. cos            ");
	printf("17. M-             *\n");
	printf("* 3. Multiply        ");
	printf(" 8. Cube root       ");
	printf("13. tan            ");
	printf("18. MC             *\n");
	printf("* 4. Divide          ");
	printf(" 9. Percent         ");
	printf("14. log            ");
	printf("19. Clear          *\n");
	printf("* 5. Power           ");
	printf("10. Factorial       ");
	printf("15. exp            ");
	printf("20. Exit           *\n");
	
	for (int i = 0; i < 80; ++i) {
        printf("*");
    }
    printf("\n");
}

void add (float *total, float M)
{
	short input_err = 0;
	float input = 0;
	
	do {
	    system("clear");
	    
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", *total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("Number = ");
	    input_err = floatnum(&input);
    }while(input_err == 1 || input_err == 2);
    
	*total += input;
}

void subtract (float *total, float M)
{
	short input_err = 0;
	float input = 0;
	
	do {
		system("clear");
		
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", *total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("Number = ");
	    
	    input_err = floatnum(&input);
    }while(input_err == 1 || input_err == 2);
    
	*total -= input;
}

void multiply (float *total, float M)
{
	short input_err = 0;
	float input = 0;
	
	do {
	    system("clear");
	    
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", *total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("Number = ");
	    
	    input_err = floatnum(&input);
    }while(input_err == 1 || input_err == 2);
    
    *total *= input;
}

void divide (float *total, float M)
{
	short input_err = 0;
	float input = 0;
	
	do {
	    system("clear");
	    
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", *total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("Number = ");
	    
	    input_err = floatnum(&input);
    }while(input_err == 1 || input_err == 2);
    
	*total /= input;
}

void power (float *total, float M)
{
	short input_err = 0;
	float input = 0;
	
	do {
	    system("clear");
	    
	    disp_ops();
	    
	    printf("* M = %-73f*\n", M);	    
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("* %-76f *\n", *total);
	    for (int i = 0; i < 80; ++i) {
	        printf("*");
	    }
	    printf("\n");
	    
	    printf("Number = ");
	    
	    input_err = floatnum(&input);
    }while(input_err == 1 || input_err == 2);
    
	*total = pow(*total, input);
}

void square_rt (float *total)
{
    if (*total <= 0.0) {
        return;
    }
    
    *total = sqrt(*total);
}

void percent (float *total)
{
    if (*total < 0) {
        return;
    }
    
    *total *= 100;  
}

void factorial (float *total)
{
    if (*total - ((long long)(*total)) < 1) {
        return;
    }
    
	for (long long fact = 1; fact < *total; ++fact) {
	    *total *= fact;
	}
}

void log_10 (float *total)
{
    if (*total <= 0) {
        return;
    }
    
    *total = log(*total);
}
