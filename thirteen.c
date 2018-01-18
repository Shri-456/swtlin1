#include<stdio.h>
#include<conio.h>
void main()
{
int n,flag=0,j;
printf("enter the num");
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("it is a prime num");
}
else
{
printf("it is not a prime num");
}
}
}


