#include<stdio.h>
#include<conio.h>
void fib();
void main()
{
int n,i;

printf("Enter the times you want the series\t");
scanf("%d",&n);
for(i=0;i<n;i++)
{
fib();
}
getch();
}

void fib()
{
static int a=0,b=1,c;
if(a==0)
 printf("%d\t%d",a,b);
c=a+b;
a=b;
b=c;
printf("\t%d",c);
}
