#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,n,c=0;
scanf("%s",a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]>=48 && a[i]<=57)
{
c++;
}
}
if(n==c)
{
printf("yes");
}
else
{
printf("no");
}
getch();
}
