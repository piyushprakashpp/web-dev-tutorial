 #include<conio.h>
 #include<stdio.h>
 #include<stdlib.h>
 void main()
 {
 int n, c;
 FILE *f1;
 f1=fopen("random.txt", "rb");
 printf("Enter a no. to search");
 scanf("%d", &n);
 while (fread((int*) &c,sizeof(c),1,f1)==1)
 {
 if(c==n)
 {
 printf("Found");
 }
 else
 { printf("Not found");
 }
 }
 getch();
 }



