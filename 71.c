#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100],temp=0,c;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
if(a[i]>a[i+1])
{
printf("%d\t",a[i]);
}
else
{
printf("%d\t",a[i+1]);
} 
}
getch();
}
