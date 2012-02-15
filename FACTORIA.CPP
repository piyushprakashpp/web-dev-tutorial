#INCLUDE<STDIO.H>
int main()
{
	f=1,num,i=1;
	printf("Enter a number");
	scanf("%d", &num);
	while(i<num)
	f=f*i;
	i++;
	printf("Factorial of %d: %d", num);
	return(0);
}