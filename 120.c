#include<stdio.h>
#include<conio.h>
int main()
{
int a,r,d=0,i=1,l=0;
printf("Enter the value");
scanf("%d",&a);
while(a)
{
r=a%2;
a=a/2;
d=d+(i*r);
i=i*10;
}
while(d)
{
	d=d%10;
	l++;
}
printf("%d",l);
}
