#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100];
 int i,j,n,k,c,d;
 clrscr();
 scanf("%d%d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
c=1;
}
else
d=1;
}
if(c==1)
{
printf("yes");
}
else
{
printf("no");
}
getch();
 }
