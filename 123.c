#include<stdio.h>

void main()
{
  int a,b,c[100],h[100],k=0,m=0,d=0,i,j;
  scanf("%d",&a);
  while(a)
{
for(i=2;i<a;i++)
{
if(a%i==0)
{
b=i;
c[k]=i;
k++;
}
}
a=a/b;
}
for(i=0;i<k;i++)
{
d=0;
for(j=2;j<i;j++)
{
if(c[i]%j==0)
{
d++;
break;
}
}
if(d==0)
{
h[m]=c[i];
m++;
}
}
for(i=0;i<m;i++)
{
for(j=i+1;j<m;j++)
{
if(h[i]==h[j])
{
h[j]='\0';
}
}
}
for(i=0;i<m;i++)
{
if(h[i]!='\0')
{
printf("%d ",h[i]);
}
}
}
