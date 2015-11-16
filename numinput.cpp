#include <iostream>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define INT_MAX 32767
#define INT_MIN -32768
#define U_INT_MAX 65535
#define L_INT_MAX 2147483647
#define L_INT_MIN (-2147483648)
#define UL_INT_MAX 4294967295
#define FLOAT_MAX (3.4 * pow(10,38))-1
#define FLOAT_MIN (3.4 * pow(10,-38))
#define DOUBLE_MAX (1.7 * pow(10,308))-1
#define DOUBLE_MIN (1.7 * pow(10,-308))
#define L_DOUBLE_MAX (1.1 * pow(10,4932))-1
#define L_DOUBLE_MIN (3.4 * pow(10,-4932))

using namespace std;

int intnum(int &num)	//For 'int' data type
{
	char input[11];
    unsigned int len = 0, a = 0;
    long int chknum = 0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(isalpha(input[a]))
			return 1;
		else
			continue;
	}
	len = strlen(input);

	if(input[0]=='-')
	{
		for(a = 1 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));
		chknum = 0 - chknum;
	}
	else
		for(a = 0 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));

	if(chknum>INT_MAX || chknum<INT_MIN)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int u_intnum(unsigned int &num)		//For 'unsigned int' data type
{
	char input[11];
    unsigned int len = 0, a = 0;
    long int chknum = 0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(isalpha(input[a]))
			return 1;
		else
			continue;
	}
	len = strlen(input);

	for(a = 0 ; a<len ; ++a)
		chknum += (input[a]-48) * pow(10,(int)(len-a-1));

	if(chknum>U_INT_MAX || chknum<0)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int l_intnum(long int &num)		//For 'long int' data type
{
	char input[21];
    unsigned long int len = 0, a = 0;
    long int chknum = 0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(isalpha(input[a]))
			return 1;
		else
			continue;
	}
	len = strlen(input);

	if(input[0]=='-')
	{
		for(a = 1 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));
		chknum = 0 - chknum;
	}
	else
		for(a = 0 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));

	cout<<"\n\n"<<chknum<<"\n\n";

	if(chknum>L_INT_MAX)
		return 2;
	else if(chknum<L_INT_MIN)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int ul_intnum(long int &num)	//For 'unsigned long int' data type 
{
	char input[11];
    unsigned long int len = 0, a = 0;
    unsigned long int chknum = 0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(isalpha(input[a]))
			return 1;
		else
			continue;
	}
	len = strlen(input);

	if(input[0]=='-')
		for(a = 1 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));
	else
		for(a = 0 ; a<len ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-a-1));

	if(chknum>UL_INT_MAX || chknum<0)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int floatnum(float &num)	//For 'float' data type
{
	char input[46];
    unsigned long int len = 0, a = 0, pointpos=0;
    double chknum = 0;
    short point=0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(input[a]=='.')
		{
			if(point==1)
				return 1;
		    point=1;
			pointpos=a;
			continue;
		}
		else if(isalpha(input[a]))
			return 1;
		else
			continue;
	}

	len = strlen(input);

	if(point==1)
	{
		for(a = pointpos+1 ; input[a] != '\0' ; ++a);
		if(a>pointpos+7)
			return 2;
		else if(a==pointpos+1)
			return 1;

		for(a = 0 ; input[a] != '.' ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-pointpos-a));

		for(a = len-1 ; input[a] != '.' ; --a)
		{
			chknum += (input[a]-48) * pow(10,(int)(pointpos-a));
		}
	}
	else
	{
		for(a = 0 ; a < len ; ++a)
		chknum += (input[a] - 48) * pow(10,(int)(len-a-1));
	}
	if(chknum>FLOAT_MAX || chknum<FLOAT_MIN)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int doublenum(double &num)		//For 'double' data type
{
	char input[316];
    unsigned long int len = 0, a = 0, pointpos=0;
    long double chknum = 0;
    short point=0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(input[a]=='.')
		{
			if(point==1)
				return 1;
		    point=1;
			pointpos=a;
			continue;
		}
		else if(isalpha(input[a]))
			return 1;
		else
			continue;
	}

	len = strlen(input);

	if(point==1)
	{
		for(a = pointpos+1 ; input[a] != '\0' ; ++a);
		if(a>pointpos+15)
			return 2;
		else if(a==pointpos+1)
			return 1;

		for(a = 0 ; input[a] != '.' ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-pointpos-a));

		for(a = len-1 ; input[a] != '.' ; --a)
		{
			chknum += (input[a]-48) * pow(10,(int)(pointpos-a));
		}
	}
	else
	{
		for(a = 0 ; a < len ; ++a)
		chknum += (input[a] - 48) * pow(10,(int)(len-a-1));
	}
	if(chknum>DOUBLE_MAX || chknum<DOUBLE_MIN)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int l_doublenum(long double &num)	//For 'long double' data type
{
	char input[4941];
    unsigned long int len = 0, a = 0, pointpos=0;
    long double chknum = 0;
    short point=0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(input[a]=='.')
		{
			if(point==1)
				return 1;
		    point=1;
			pointpos=a;
			continue;
		}
		else if(isalpha(input[a]))
			return 1;
		else
			continue;
	}

	len = strlen(input);

	if(point==1)
	{
		for(a = pointpos+1 ; input[a] != '\0' ; ++a);
		if(a>pointpos+19)
			return 2;
		else if(a==pointpos+1)
			return 1;

		for(a = 0 ; input[a] != '.' ; ++a)
			chknum += (input[a]-48) * pow(10,(int)(len-pointpos-a));

		for(a = len-1 ; input[a] != '.' ; --a)
		{
			chknum += (input[a]-48) * pow(10,(int)(pointpos-a));
		}
	}
	else
	{
		for(a = 0 ; a < len ; ++a)
		chknum += (input[a] - 48) * pow(10,(int)(len-a-1));
	}
	if(chknum>L_DOUBLE_MAX || chknum<L_DOUBLE_MIN)
		return 2;
	else
	{
		num=chknum;
		return 0;
	}
}

int charnum(char &num)		//For taking numeric input in 'char' data type
{
	char input[6];
    unsigned int len = 0, a = 0;
    long double chknum = 0, pointpos=0;

	gets(input);
	for(a = 0 ; input[a] != '\0' ; ++a)
	{
		if(isalpha(input[a]))
			return 1;
		else
			continue;
	}
	len = strlen(input);
	if(len>1)
		return 2;
	else
	{
		num=input[0];
		return 0;
	}
}

