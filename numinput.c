#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <limits.h>
#include <float.h>

/*For 'int' data type*/
int intnum(int *num)
{
	char input[13];
    unsigned short int len = 0, a = 0;
    long int chknum = 0;

	fgets(input, 13, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
		    return 1;
		}
	}
	
	len = strlen(input);

	if (input[0] == '-')
	{
		for(a = 1; a < (len - 1); ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
		chknum = 0 - chknum;
	}
	else
	{
		for(a = 0 ; a < (len - 1) ; ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}

	if (chknum > INT_MAX || chknum < INT_MIN)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'unsigned int' data type*/
int u_intnum(unsigned int *num)
{
	char input[13];
    unsigned short int len = 0, a = 0;
    long int chknum = 0;

	fgets(input, 13, stdin);
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
			return 1;
		}
		else
		{
			continue;
		}
	}
	len = strlen(input);

	for(a = 0; a < (len - 1); ++a)
	{
		chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
	}

	if (chknum > UINT_MAX || chknum <= 0)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'short int' data type*/
int shortnum(short int *num)
{
    char input[8];
    unsigned short int len = 0, a = 0;
    int chknum = 0;

	fgets(input, 8, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
		    return 1;
		}
	}
	
	len = strlen(input);

	if (input[0] == '-')
	{
		for(a = 1; a < (len - 1); ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
		chknum = 0 - chknum;
	}
	else
	{
		for(a = 0 ; a < (len - 1) ; ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}

	if (chknum > SHRT_MAX || chknum < SHRT_MIN)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'long int' data type*/
int longnum(long int *num)
{
	char input[22];
    unsigned short int len = 0, a = 0;
    long long int chknum = 0;

	fgets(input, 22, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
			return 1;
		}
	}
	
	len = strlen(input);

	if (input[0] == '-')
	{
		for(a = 1; a < (len - 1); ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
		chknum = 0 - chknum;
	}
	else
	{
		for(a = 0; a < (len - 1); ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}

	if ((chknum > LONG_MAX) || (chknum < LONG_MIN))
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'unsigned long int' data type*/
int u_longnum(unsigned long int *num)
{
	char input[22];
    unsigned short int len = 0, a = 0;
    unsigned long long int chknum = 0;

	fgets(input, 22, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
			return 1;
		}
	}
	
	len = strlen(input);

	if (input[0] == '-')
	{
		return 2;
	}
	else
	{
		for(a = 0; a < (len - 1); ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}

	if ((chknum > ULONG_MAX) || (chknum <= 0))
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'float' data type*/
int floatnum(float *num)
{
	char input[42];
    unsigned short int len = 0, a = 0, pointpos = 0, point = 0;
    double chknum = 0;

	fgets(input, 42, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (input[a] == '.')
		{
			if (point == 1)
			{
				return 1;
			}
		    point = 1;
			pointpos = a;
		}
		else if (isalpha(input[a]))
		{
			return 1;
		}
	}

	len = strlen(input);

	if (point == 1)
	{
	    int b = 0;
	    
		for(b = 1; input[pointpos + b] != '\0'; ++b);
		
		if (b > 8)
		{
			return 2;
		}
		else if (b == 2)
		{
			return 1;
		}

		for(a = 0; a < pointpos; ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - b - 1));
		}

		for(a = len - 2; a > pointpos; --a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(pointpos - a));
		}
	}
	else
	{
		for(a = 0; a < (len - 1); ++a)
		{
		    chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}
	
	if (chknum > FLT_MAX || chknum < FLT_MIN)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'double' data type*/
int doublenum(double *num)
{
	char input[312];
    unsigned short int len = 0, a = 0, pointpos = 0, point = 0;
    long double chknum = 0;

	fgets(input, 312, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (input[a] == '.')
		{
			if (point == 1)
			{
				return 1;
			}
		    point = 1;
			pointpos = a;
		}
		else if (isalpha(input[a]))
		{
			return 1;
		}
	}

	len = strlen(input);

	if (point == 1)
	{
	    int b = 0;
	    
		for(b = 1; input[pointpos + b] != '\0'; ++b);
		
		if (b > 17)
		{
			return 2;
		}
		else if (b == 2)
		{
			return 1;
		}

		for(a = 0; a < pointpos; ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - b - 1));
		}

		for(a = len - 2; a > pointpos; --a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(pointpos - a));
		}
	}
	else
	{
		for(a = 0; a < (len - 1); ++a)
		{
		    chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}
	
	if (chknum > DBL_MAX || chknum < DBL_MIN)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For 'long double' data type*/
int l_doublenum(long double *num)
{
	char input[323];
    unsigned short int len = 0, a = 0, pointpos = 0, point = 0;
    long double chknum = 0;

	fgets(input, 323, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (input[a] == '.')
		{
			if (point == 1)
			{
				return 1;
			}
		    point = 1;
			pointpos = a;
		}
		else if (isalpha(input[a]))
		{
			return 1;
		}
	}

	len = strlen(input);

	if (point == 1)
	{
	    int b = 0;
	    
		for(b = 1; input[pointpos + b] != '\0'; ++b);
		
		if (b > 21)
		{
			return 2;
		}
		else if (b == 2)
		{
			return 1;
		}

		for(a = 0; a < pointpos; ++a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(len - a - b - 1));
		}

		for(a = len - 2; a > pointpos; --a)
		{
			chknum += (input[a] - 48) * pow(10, (int)(pointpos - a));
		}
	}
	else
	{
		for(a = 0; a < (len - 1); ++a)
		{
		    chknum += (input[a] - 48) * pow(10, (int)(len - a - 2));
		}
	}
	
	if (chknum > LDBL_MAX || chknum < LDBL_MIN)
	{
		return 2;
	}
	else
	{
		*num = chknum;
		return 0;
	}
}

/*For taking numeric input in 'char' data type*/
int charnum(char *num)
{
	char input[4];
    unsigned short int len = 0, a = 0;

	fgets(input, 4, stdin);
	
	for(a = 0; input[a] != '\0'; ++a)
	{
		if (isalpha(input[a]))
		{
			return 1;
		}
	}
	
	len = strlen(input);
	
	if (len > 2)
	{
		return 2;
	}
	else
	{
		*num = input[0];
		return 0;
	}
}
