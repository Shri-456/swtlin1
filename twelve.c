#include<stdio.h>
#include<conio.h>
void main()
{
int t,n,r,d=0;
printf("enter a num");
scanf("%d",&n);
t=n;
while(n>=1)
{
r=n%10;
d=(d*10)+r;
n=t/10;
}
if(n==d)
{
printf("\n yes");
}
else
{
printf("\n no");
}
}
