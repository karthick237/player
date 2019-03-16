#include<stdio.h>
#include<conio.h>

void main()
{
int n,k,c=0,i;
clrscr();
scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
if(n==k*i)
c=1;
}
if(c==1)
printf("yes");
else
printf("no");
getch();
}
