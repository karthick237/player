#include<stdio.h>
int main()
{
   int n,a[100],i,s=0;
   printf("Enter the value");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
           s=s+a[i]+a[i+1];
      
   }
   printf("%d",s);
   return 0;
}
