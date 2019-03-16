#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,max=0,j,n;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
max=max+1;  break;
}
else
max=1;}}
if(max==1)
{
printf("yes");
}
else
printf("no");
getch();
}
