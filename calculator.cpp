#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <process.h>
#include <stdlib.h>
#include <conio.h>
#include "numinput.cpp"

#define square(x) x*x;
#define percent(x) x*100;
#define pi 3.1215926536;

struct login
{
	char username[20];
	char password[20];
}user[2];

long number , total=0 , M=0;
short sign , flag=1 , inerr1=0;

void home()
{
	char username[20];
	char password[20];
	int usercheck,passcheck;
                error:
	cout<<"Username: ";
	gets(username);
	cout<<"Password: ";
	gets(password);
	for(int a=0;a<2;a++)
	{
		usercheck=strcmp(username,user[a].username);
	    passcheck=strcmp(password,user[a].password);
	    if(usercheck==0 && passcheck==0)
		{
			flag=0;
			break;
		}
		else
			continue;
	}
	if(flag==1)
	{
		system("cls");
		cout<<"\t\t\t\t Kingston Ltd.\n\n";
		cout<<"Please enter a valid usename and password.\n\n";
		goto error;
	}
	else
		return;
}

void add()
{
	adderr:
	cout<<"Number to add= ";
	inerr1=longnum(number);
	if(inerr1==1 || inerr==2)
		goto adderr;
	total+=number;
}

void subtract()
{
	subtracterr:
	cout<<"Number to subtract= ";
	inerr1=longnum(number);
	if(inerr1==1 || inerr==2)
		goto subtracterr;
	total-=number;
}

void multiply()
{
	multiplyerr:
	cout<<"Number to multiply= ";
	inerr1=longnum(number);
	if(inerr1==1 || inerr==2)
		goto multiplyerr;
	total*=number;
}

void divide()
{
	divideerr:
	cout<<"Number to divide= ";
	inerr1=longnum(number);
	if(inerr1==1 || inerr==2)
		goto divideerr;
	total/=number;
}

void power()
{
	powererr:
	cout<<"Power to raise= ";
	inerr1=longnum(number);
	if(inerr1==1 || inerr==2)
		goto powererr;
	total=pow(total,number);
}

void cbrt()
{
	total=pow((double)total,0.333333);
}

void factorial()
{
	int a=total;
	total=1;
	for(;a>0;a--)
		total*=a;
}

void close()
{
	clrscr();
	cout<<"\t\t\t\t Kingston Ltd.\n\n";
	cout<<"Thank you for using my calculator.\n\n";
	cout<<"Made by: Sudhanshu Gupta\n\n";
	cout<<"Press any key to continue...";
	getch();
	exit(0);
}

int main()
{
	strcpy(user[0].username,"sudhanshu");
                strcpy(user[0].password,"ferrari");
                strcpy(user[1].username,"guest");
                strcpy(user[1].password,"guest");
	clrscr();
	cout<<"\t\t\t\t Kingston Ltd.\n\n";
	home();
	clear:
	clrscr();
	cout<<"\t\t\t\t Kingston Ltd.\n\n";
	cout<<"1. Add           ";
	cout<<"6. Square        ";
	cout<<"11. sin          ";
	cout<<"16. M+           \n";
	cout<<"2. Subtract      ";
	cout<<"7. Square root   ";
	cout<<"12. cos          ";
	cout<<"17. M-           \n";
	cout<<"3. Multiply      ";
	cout<<"8. Cube root     ";
	cout<<"13. tan          ";
	cout<<"18. MC           \n";
	cout<<"4. Divide        ";
	cout<<"9. Percent       ";
	cout<<"14. log          ";
	cout<<"19. Clear        \n";
	cout<<"5. Power         ";
	cout<<"10. Factorial    ";
	cout<<"15. exp          ";
	cout<<"20. Exit         \n\n";
	cout<<total<<"\t\t\t\tM="<<M<<"\n\n";
	cout<<"Number= ";
	inerr1=longnum(total);
	if(inerr1==1 || inerr1==2)
		goto clear;
	do
	{
		clrscr();
	    cout<<"\t\t\t\t Kingston Ltd.\n\n";
		cout<<"1. Add           ";
	    cout<<"6. Square        ";
	    cout<<"11. sin          ";
	    cout<<"16. M+           \n";
	    cout<<"2. Subtract      ";
	    cout<<"7. Square root   ";
	    cout<<"12. cos          ";
	    cout<<"17. M-           \n";
	    cout<<"3. Multiply      ";
	    cout<<"8. Cube root     ";
	    cout<<"13. tan          ";
	    cout<<"18. MC           \n";
	    cout<<"4. Divide        ";
	    cout<<"9. Percent       ";
	    cout<<"14. log          ";
	    cout<<"19. Clear        \n";
	    cout<<"5. Power         ";
	    cout<<"10. Factorial    ";
	    cout<<"15. exp          ";
	    cout<<"20. Exit         \n\n";
	    cout<<total<<"\t\t\t\tM="<<M<<"\n\n";
		cout<<"Operation: ";
		inerr1=intnum(sign);
		if(inerr1==1 || inerr1==2)
			continue;
		cout<<"\n";
		switch(sign)
			{
		case 1: add();
			break;
		case 2:	subtract();
			break;
		case 3: multiply();
			break;
		case 4:	divide();
			break;
		case 5: power();
			break;
		case 6:	total=square(total);
			break;
		case 7: total=sqrt(total);
			break;
		case 8: cbrt();
			break;
		case 9: total=percent(total);
			break;
		case 10: factorial();
			break;
		case 11: total=sin(total);
			break;
		case 12: total=cos(total);
			break;
		case 13: total=tan(total);
			break;
		case 14: total=log(total);
			break;
		case 15: total=exp(total);
			break;
		case 16: M+=total;
			break;
		case 17: M-=total;
			break;
		case 18: M=0;
			break;
		case 19: total=0;
			goto clear;
			break;
		case 20: close();
			break;
		}
	}
	while(sign!=15);
	
	return 0;
}