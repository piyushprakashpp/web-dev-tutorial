#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i, j , b=2, c;

printf("Enter a no.");
scanf("%d", &c);
printf("factors");
for(i=1;i<=c/2;i++)
{
	if(c%i==0)
	{
	printf("Factor of c:%d", i);
	for(j=0;j<i;j++)
	{
	if(i%j>0)
	{
	b=i;
	}
	if(b%3==0)
	b=3;
	else if(b%2==0)
	b=2;
	else if(b%5==0)
	b=5;
	}
	}
	}
	printf("Prime factor is :%d %d", c, b);
	getch();
	}
