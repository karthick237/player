#include<stdio.h>

int main() 
{
   int n,a[100],i,j=0;
   printf("Enter the value");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       j=j+a[i];
   printf("%d ",j);}
   return 0;
}
