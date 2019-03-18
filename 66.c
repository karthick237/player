#include<stdio.h>

void main()
{
int n,a[100],c=0,k,j,i;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]==a[j])
{
c++;
}
if(c==k)
{
printf("%d",a[i]);
break;
}
}
}
}
