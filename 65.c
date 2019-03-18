#include<stdio.h>
#include<conio.h>
void main()
{
int n,k,i,j,m,a[100],b[100],temp=0;
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
temp=a[i];
a[i]=a[j];
a[j]=temp;
} }}
for(i=0;i<n;i++)
{
 if(a[i]<n)
 {
 printf("%d\n",a[i]);
} 
}
