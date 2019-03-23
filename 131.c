#include<stdio.h>
 void main()
{
 int a,l=0,p=1,z,b[100],i=0,c,r,j,s=0;
printf("Enter the value");
scanf("%d",&a);
c=a;
while(a)
{
a=a/10;
l++;
}
z=l-1;
while(z)
{
p=p*10;
z--;
}
while(c)
{
r=c/p;
c=c%p;
p=p/10;
b[i]=r;
i++;
}
for(j=0;j<i;j++)
{
if(i%2==0)
{
s=s+b[i];
}
}
if(s%2==0)
{
printf("E");
}
else if(s%2!=0)
{
printf("O");
}
}
