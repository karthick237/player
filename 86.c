#include<stdio.h>
#include<conio.h>

void main()
{
int n,i,res=0;
int a[100];
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
 scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 res=res^a[i];
}
printf("%d",res);
getch();
}
