#include<stdio.h>
int main()
{
int n,s=0,a[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("%d",s);
return 0;
}
