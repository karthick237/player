#include<stdio.h>

void main()
{
   int a[100],i,n,s=0,m;
   scanf("%d",&n);
  for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(i<=n-2)
{
if(a[i]>=a[i+1])
{
m=a[i];
}
else if(a[i]<a[i+1])
{
m=a[i+1];
}
s=s+m;
}
}
printf("%d",s);
}
