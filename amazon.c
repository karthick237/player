#include<stdio.h>
#include<conio.h>
void main()
{

int i=0,j=2,b=1,n=1,sum=0,a;
scanf("%d",&a);
while(a)
{
i++;
sum=b*12;
if(sum>=a)
{
printf("%d",i);
break;
}
b=b+j*j;
j++;
}
getch();
}
