#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int i, number, compare=0;
printf("Enter a number");
scanf("%d", &number);
for(i=1;i<=number/2;i++)
{
	if(number%i==0)
	    {
		compare=compare+1;
	     }
}
	if(compare==2)
	{
	printf("Number is Prime number");
	}
	else
	{
	printf("Number is not prime" );
	}
	getch();
}

