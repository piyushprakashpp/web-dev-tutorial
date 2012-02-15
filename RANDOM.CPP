#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
FILE *f1;
int min=0,num, max=2000, c;
printf("%d The Random no.:=d", min, max);
randomize();
f1=fopen("c:\\random.txt", "wr");
for(c=1;c<=1000;c++)
{
 num=rand()%2000;
 printf("%d \n", num) ;
 fprintf(f1, "%d\n", num);
 }

fclose(f1);
getch();
}