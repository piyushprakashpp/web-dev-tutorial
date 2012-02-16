#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int fact=1,c,n;

	printf("Enter a number");
	scanf("%d", &n);

	for(c=1;c<=n;c++)
	{
		fact=fact*c;
	}
	printf("Factorial of %d= :%d", n, fact);
	getch();
}